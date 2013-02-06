#include "map_utility.h"

#include <string>
#include <vector>
#include <fstream>

#include <stdexcept>
#include <iostream>

MapUtility::MapUtility() {
	tname[0] = '\0';
	xCount = yCount = rWidth = rHeight = rDepth = 0;
	data = NULL;
}

MapUtility::~MapUtility() {
	DeleteMap();
}

void MapUtility::LoadMap(const char* fname) {
	//open the map file, check for errors
	if (data != NULL)
		DeleteMap();

	std::ifstream is(fname);

	if (!is.is_open())
		throw(std::runtime_error("Failed to load map data"));

	//load the tileset
	is.getline(tname, 512);
	Uint16 w, h;
	is >> w; is >> h;

	tileset.LoadSurface(tname);

	tileset.SetClipW(w);
	tileset.SetClipH(h);

	//load the region information
	is >> xCount;
	is >> yCount;
	is >> rWidth;
	is >> rHeight;
	is >> rDepth;

	Uint32 total = xCount * yCount; //optimisation
	std::string str;
	std::vector<std::string> nameList;
	nameList.reserve(total);

	//eat until the next line
	is.ignore(80, '\n');

	//load each region name into the name array
	for (Uint32 i = 0; i < total; i++) {
		std::getline(is, str);
		nameList.push_back(str);
		std::cout << "Name: " << str << std::endl;
	}

	//close the map file
	is.close();

	//generate the array, and load in each region
	NewMap(xCount, yCount, rWidth, rHeight, rDepth);

	std::vector<std::string>::iterator it = nameList.begin();

	for (Uint16 i = 0; i < xCount; i++) {
		for (Uint16 j = 0; j < yCount; j++) {
			data[i][j].LoadData(it->c_str());
			it++;
		}
	}

	CheckValidData();
}

void MapUtility::SaveMap(const char* fname) {
	//TODO
}

void MapUtility::NewMap(Uint16 x, Uint16 y, Uint16 width, Uint16 height, Uint16 depth) {
	if (data != NULL)
		DeleteMap();

	xCount = x;
	yCount = y;
	rWidth = width;
	rHeight = height;
	rDepth = depth;

	data = new Region*[xCount];
	for (Uint16 i = 0; i < xCount; i++) {
		data[i] = new Region[yCount];
		for (Uint16 j = 0; j < yCount; j++) {
			data[i][j].NewData(rWidth, rHeight, rDepth);
		}
	}
}

void MapUtility::DeleteMap() {
	if (data == NULL)
		return;

	//TODO
	for (Uint16 i = 0; i < xCount; i++) {
		for (Uint16 j = 0; j < yCount; j++) {
			data[i][j].DeleteData();
		}
		delete[] data[i];
	}
	delete[] data;
	data = NULL;
}

void MapUtility::DrawTo(SDL_Surface* const, Sint16 x, Sint16 y) {
	//TODO
}

Uint16 MapUtility::SetTile(Uint16 x, Uint16 y, Uint16 z, Uint16 v) {
	//TODO
}

Uint16 MapUtility::GetTile(Uint16 x, Uint16 y, Uint16 z) {
	//TODO
}

Region* MapUtility::GetRegion(Uint16 x, Uint16 y) {
	if (data == NULL)
		throw(std::logic_error("No map region to retrieve"));

	//TODO
}

void MapUtility::SetTileset(const char* fname) {
	//this function will be a pain in the ass at some point
	tileset.LoadSurface(fname);

	strncpy(tname, fname, strlen(fname));
}

Image* MapUtility::GetTileset() {
	return &tileset;
}

const char* MapUtility::GetTilesetName() {
	return tname;
}

void MapUtility::CheckValidData() {
	//TODO
}
