#ifndef KR_MAPUTILITY_H_
#define KR_MAPUTILITY_H_

#include "region.h"

#include "codebase/image.h"

#include "SDL.h"

class MapUtility {
public:
	MapUtility();
	~MapUtility();

	void LoadMap(const char* fname);
	void SaveMap(const char* fname);

	void NewMap(Uint16 x, Uint16 y, Uint16 width, Uint16 height, Uint16 depth);
	void DeleteMap();

	void DrawTo(SDL_Surface* const, Sint16 x, Sint16 y);

	//relative to the map
	Uint16 SetTile(Uint16 x, Uint16 y, Uint16 z, Uint16 v);
	Uint16 GetTile(Uint16 x, Uint16 y, Uint16 z) const;
	Region* GetRegion(Uint16 x, Uint16 y) const;

	//one tileset for the entire map
	void SetTileset(const char* fname);
	Image* GetTileset() const;
	const char* GetTilesetName() const;

private:
	void CheckValidData() const;

	char tname[512];
	Image tileset;
	Uint16 xCount, yCount;
	Uint16 rWidth, rHeight, rDepth;
	Region **data;
};

#endif
