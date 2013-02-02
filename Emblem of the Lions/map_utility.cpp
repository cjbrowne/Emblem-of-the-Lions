#include "map_utility.h"

#include <string.h>
#include <fstream>

#include <stdexcept>

MapUtility::MapUtility() {
	tname[0] = '\0';
	xCount = yCount = rWidth = rHeight = rDepth = 0;
	data = NULL;
}

MapUtility::~MapUtility() {
	DeleteMap();
}

void MapUtility::LoadMap(const char* fname) {
	//open the map file
	if (data == NULL)
		DeleteMap();

	std::ifstream is(fname);

	if (!is.is_open())
		throw(std::runtime_error("Failed to load map data"));

	//load the tileset
	Uint16 w, h;

	is.getline(tname, 512);
	is >> w; is >> h;

	tileset.LoadSurface(tname);

	tileset.SetClipW(w);
	tileset.SetClipH(h);

	//load and generate the array
	is >> xCount;
	is >> yCount;
	is >> rWidth;
	is >> rHeight;
	is >> rDepth;

	NewMap(xCount, yCount, rWidth, rHeight, rDepth);

	//load the map into the array


	//cleanup
	is.close();
}

void MapUtility::SaveMap(const char* fname) {
	//TODO
}

void MapUtility::NewMap(Uint16 x, Uint16 y, Uint16 width, Uint16 height, Uint16 depth) {
	//TODO
}

void MapUtility::DeleteMap() {
	//TODO
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
