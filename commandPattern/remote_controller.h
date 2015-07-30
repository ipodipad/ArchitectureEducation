#include "tv.h"

typedef struct RemoteController {
	TV *tv;
	void (*button1Pressed)(RemoteController *self);
	void (*button2Pressed(RemoteController *self);
	void (*button3Pressed)(RemoteController *self);
	void (*button4Pressed(RemoteController *self);
} RemoteController;

RemoteController *RemoteController_Create(TV *tv);

void button1Pressed(RemoteController *self);

void button2Pressed(RemoteController *self);

void button3Pressed(RemoteController *self);

void button4Pressed(RemoteController *self);
