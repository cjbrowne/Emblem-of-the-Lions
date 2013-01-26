/* File Name: main_menu.cpp
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#include "main_menu.h"

//-------------------------
//Public access members
//-------------------------

MainMenu::MainMenu() {
	//
}

MainMenu::~MainMenu() {
	//
}

//-------------------------
//Frame loop
//-------------------------

void MainMenu::FrameStart() {
	//
}

void MainMenu::FrameEnd() {
	//
}

void MainMenu::Update() {
	//
}

void MainMenu::Render(SDL_Surface* const screen) {
	//
}

//-------------------------
//Event handlers
//-------------------------

void MainMenu::MouseMotion(SDL_MouseMotionEvent const& motion) {
	//
}

void MainMenu::MouseButtonDown(SDL_MouseButtonEvent const& button) {
	//
}

void MainMenu::MouseButtonUp(SDL_MouseButtonEvent const& button) {
	//
}

void MainMenu::KeyDown(SDL_KeyboardEvent const& key) {
	switch(key.keysym.sym) {
		case SDLK_ESCAPE:
			QuitEvent();
			break;
	}
}

void MainMenu::KeyUp(SDL_KeyboardEvent const& key) {
	//
}
