#include "map_utility.h"

MapUtility::MapUtility() {
	//
}

MapUtility::~MapUtility() {
	//
}

void MapUtility::LoadMap(const char* fname) {
	//
}

void MapUtility::SaveMap(const char* fname) {
	//
}

void MapUtility::NewMap(Uint16 x, Uint16 y, Uint16 width, Uint16 height, Uint16 depth) {
	//
}

void MapUtility::DeleteMap() {
	//
}

void MapUtility::DrawTo(SDL_Surface* const, Sint16 x, Sint16 y) {
	//
}

Uint16 MapUtility::SetTile(Uint16 x, Uint16 y, Uint16 z, Uint16 v) {
	//
}

Uint16 MapUtility::GetTile(Uint16 x, Uint16 y, Uint16 z) const {
	//
}

Region* MapUtility::GetRegion(Uint16 x, Uint16 y) const {
	//
}

void MapUtility::SetTileset(const char* fname) {
	//
}

Image* MapUtility::GetTileset() const {
	//
}

const char* MapUtility::GetTilesetName() const {
	//
}

void MapUtility::CheckValidData() const {
	//
}
