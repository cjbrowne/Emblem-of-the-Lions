/* File Name: game_world.cpp
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#include "game_world.h"

//-------------------------
//Public access members
//-------------------------

GameWorld::GameWorld() {
	//
}

GameWorld::~GameWorld() {
	//
}

//-------------------------
//Frame loop
//-------------------------

void GameWorld::FrameStart() {
	//
}

void GameWorld::FrameEnd() {
	//
}

void GameWorld::Update() {
	//
}

void GameWorld::Render(SDL_Surface* const screen) {
	//
}

//-------------------------
//Event handlers
//-------------------------

void GameWorld::MouseMotion(SDL_MouseMotionEvent const& motion) {
	//
}

void GameWorld::MouseButtonDown(SDL_MouseButtonEvent const& button) {
	//
}

void GameWorld::MouseButtonUp(SDL_MouseButtonEvent const& button) {
	//
}

void GameWorld::KeyDown(SDL_KeyboardEvent const& key) {
	switch(key.keysym.sym) {
		case SDLK_ESCAPE:
			QuitEvent();
			break;
	}
}

void GameWorld::KeyUp(SDL_KeyboardEvent const& key) {
	//
}
