/* File Name: overworld.h
 * Author: Kayne Ruse
 * Date (dd/mm/yyyy): 26/01/2013
 * Copyright: ...
 * Description: ...
*/
#ifndef KR_OVERWORLD_H_
#define KR_OVERWORLD_H_

#include "scene.h"

class Overworld : public Scene {
public:
	/* Public access members */
	Overworld();
	virtual ~Overworld();

protected:
	/* Frame loop */
	virtual void FrameStart();
	virtual void FrameEnd();
	virtual void Update();
	virtual void Render(SDL_Surface* const);

	/* Event handlers */
	virtual void MouseMotion		(SDL_MouseMotionEvent const&);
	virtual void MouseButtonDown	(SDL_MouseButtonEvent const&);
	virtual void MouseButtonUp		(SDL_MouseButtonEvent const&);
	virtual void KeyDown			(SDL_KeyboardEvent const&);
	virtual void KeyUp				(SDL_KeyboardEvent const&);
};

#endif
