/* File Name: debug_scene.cpp
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#include "debug_scene.h"

//-------------------------
//Public access members
//-------------------------

DebugScene::DebugScene() {
	//
}

DebugScene::~DebugScene() {
	//
}

//-------------------------
//Frame loop
//-------------------------

void DebugScene::FrameStart() {
	//
}

void DebugScene::FrameEnd() {
	//
}

void DebugScene::Update() {
	//
}

void DebugScene::Render(SDL_Surface* const screen) {
	//
}

//-------------------------
//Event handlers
//-------------------------

void DebugScene::MouseMotion(SDL_MouseMotionEvent const& motion) {
	//
}

void DebugScene::MouseButtonDown(SDL_MouseButtonEvent const& button) {
	//
}

void DebugScene::MouseButtonUp(SDL_MouseButtonEvent const& button) {
	//
}

void DebugScene::KeyDown(SDL_KeyboardEvent const& key) {
	switch(key.keysym.sym) {
		case SDLK_ESCAPE:
			QuitEvent();
			break;
	}
}

void DebugScene::KeyUp(SDL_KeyboardEvent const& key) {
	//
}
