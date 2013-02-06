/* File Name: overworld.cpp
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#include "overworld.h"

//-------------------------
//Public access members
//-------------------------

Overworld::Overworld() {
	region.LoadData("data.txt");
	tileset.LoadSurface("terrain.bmp");
	tileset.SetClipW(32);
	tileset.SetClipH(32);
}

Overworld::~Overworld() {
	region.DeleteData();
	tileset.UnloadSurface();
}

//-------------------------
//Frame loop
//-------------------------

void Overworld::FrameStart() {
	//
}

void Overworld::FrameEnd() {
	//
}

void Overworld::Update() {
	//
}

void Overworld::Render(SDL_Surface* const screen) {
	for (Uint16 i = 0; i < region.GetX(); i++) {
		for (Uint16 j = 0; j < region.GetY(); j++) {
			for (Uint16 k = 0; k < region.GetZ(); k++) {
				tileset.SetClipX(region.GetTile(i, j, k) % region.GetX() * tileset.GetClipW());
				tileset.SetClipY(region.GetTile(i, j, k) / region.GetX() * tileset.GetClipH());
				tileset.DrawTo(screen, i * tileset.GetClipW(), j * tileset.GetClipH());
			}
		}
	}
}

//-------------------------
//Event handlers
//-------------------------

void Overworld::MouseMotion(SDL_MouseMotionEvent const& motion) {
	//
}

void Overworld::MouseButtonDown(SDL_MouseButtonEvent const& button) {
	//
}

void Overworld::MouseButtonUp(SDL_MouseButtonEvent const& button) {
	//
}

void Overworld::KeyDown(SDL_KeyboardEvent const& key) {
	switch(key.keysym.sym) {
		case SDLK_ESCAPE:
			QuitEvent();
			break;
	}
}

void Overworld::KeyUp(SDL_KeyboardEvent const& key) {
	//
}
