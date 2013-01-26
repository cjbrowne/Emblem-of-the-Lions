/* File Name: test_scene.cpp
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#include "test_scene.h"

//-------------------------
//Public access members
//-------------------------

TestScene::TestScene() {
	//
}

TestScene::~TestScene() {
	//
}

//-------------------------
//Frame loop
//-------------------------

void TestScene::FrameStart() {
	//
}

void TestScene::FrameEnd() {
	//
}

void TestScene::Update() {
	//
}

void TestScene::Render(SDL_Surface* const screen) {
	//
}

//-------------------------
//Event handlers
//-------------------------

void TestScene::MouseMotion(SDL_MouseMotionEvent const& motion) {
	//
}

void TestScene::MouseButtonDown(SDL_MouseButtonEvent const& button) {
	//
}

void TestScene::MouseButtonUp(SDL_MouseButtonEvent const& button) {
	//
}

void TestScene::KeyDown(SDL_KeyboardEvent const& key) {
	switch(key.keysym.sym) {
		case SDLK_ESCAPE:
			QuitEvent();
			break;
	}
}

void TestScene::KeyUp(SDL_KeyboardEvent const& key) {
	//
}
