#ifndef KR_REGION_H_
#define KR_RAGION_H_

#include "SDL.h"

class Region {
public:
	Region();
	~Region();

	void LoadData(const char* fname);
	void SaveData(const char* fname);

	void NewData(Uint16 x, Uint16 y, Uint16 z);
	void DeleteData();

	Uint16 SetTile(Uint16 x, Uint16 y, Uint16 z, Uint16 v);
	Uint16 GetTile(Uint16 x, Uint16 y, Uint16 z);

	Uint16 GetX();
	Uint16 GetY();
	Uint16 GetZ();

private:
	Uint16 xCount, yCount, zCount;
	Uint16 ***data;
};

#endif
