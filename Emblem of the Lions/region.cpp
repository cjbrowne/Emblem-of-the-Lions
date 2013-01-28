#include "region.h"

#include <stdexcept>
#include <fstream>

Region::Region() {
	xCount = yCount = zCount = 0;
	data = NULL;
}

Region::~Region() {
	DeleteData();
}

void Region::LoadData(const char* fname) {
	if (data != NULL)
		DeleteData();

	std::ifstream is(fname);

	if (!is.is_open())
		throw(std::runtime_error("Failed to load region data"));

	//load the format data
	is >> xCount;
	is >> yCount;
	is >> zCount;

	//generate the array
	NewData(xCount, yCount, zCount);

	//load the raw data (y axis first)
	for (int j = 0; j < yCount; j++) {
		for (int i = 0; i < xCount; i++) {
			for (int k = 0; k < zCount; k++) {
				is >> data[i][j][k];
			}
		}
	}

	//cleanup
	is.close();
}

void Region::SaveData(const char* fname) {
	if (data == NULL)
		throw(std::logic_error("No region data to save"));

	std::ofstream os(fname);

	if (!os.is_open())
		throw(std::runtime_error("Failed to save region data"));

	//save the format data
	os << xCount << " " << yCount << " " << zCount << std::endl;

	//save the raw data (y axis first)
	for (int j = 0; j < yCount; j++) {
		for (int i = 0; i < xCount; i++) {
			for (int k = 0; k < zCount; k++) {
				os << data[i][j][k] << " ";
			}
			os << " ";
		}
		os << std::endl;
	}

	//cleanup
	os.close();
}

void Region::NewData(Uint16 x, Uint16 y, Uint16 z) {
	if (data != NULL)
		DeleteData();

	xCount = x;
	yCount = y;
	zCount = z;

	data = new Uint16**[xCount];

	for (int i = 0; i < xCount; i++) {
		data[i] = new Uint16*[yCount];

		for (int j = 0; j < yCount; j++) {
			data[i][j] = new Uint16[zCount];

			for (int k = 0; k < zCount; k++) {
				//zero the array
				data[i][j][k] = 0;
			}
		}
	}
}

void Region::DeleteData() {
	if (data == NULL) return;

	for (int i = 0; i < xCount; i++) {
		for (int j = 0; j < yCount; j++) {
			delete[] data[i][j];
		}
		delete[] data[i];
	}
	delete[] data;
	data = NULL;
	xCount = yCount = zCount = 0;
}

Uint16 Region::SetTile(Uint16 x, Uint16 y, Uint16 z, Uint16 v) {
	if (data == NULL)
		throw(std::logic_error("No region data to set"));

	if (x >= xCount || y >= yCount || z >= zCount)
		throw(std::out_of_range("Specified tile index is out of range"));

	data[x][y][z] = v;
}

Uint16 Region::GetTile(Uint16 x, Uint16 y, Uint16 z) const {
	if (data == NULL)
		throw(std::logic_error("No region data to retrieve"));

	if (x >= xCount || y >= yCount || z >= zCount)
		throw(std::out_of_range("Specified tile index is out of range"));

	return data[x][y][z];
}

Uint16 Region::GetX() const {
	return xCount;
}

Uint16 Region::GetY() const {
	return yCount;
}

Uint16 Region::GetZ() const {
	return zCount;
}
