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
	//
}

Overworld::~Overworld() {
	//
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
	//
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
