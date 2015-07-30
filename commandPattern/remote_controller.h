
#ifndef REMOTE_CONTROLLER_H
#define REMOTE_CONTROLLER_H

#include "tv.h"


typedef struct _RemoteController{
	TV *tv;
	void (*button1Pressed)(struct _RemoteController *self);
	void (*button2Pressed)(struct _RemoteController *self);
	void (*button3Pressed)(struct _RemoteController *self);
	void (*button4Pressed)(struct _RemoteController *self);
}RemoteController;

RemoteController *RemoteController_Create(TV *tv);

void button1Pressed(RemoteController *self);

void button2Pressed(RemoteController *self);

void button3Pressed(RemoteController *self);

void button4Pressed(RemoteController *self);

#endif
