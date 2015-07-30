#include "remote_controller.h"
#include <stdlib.h>

RemoteController *RemoteController_Create(TV *tv) {
	RemoteController *remoteController = (RemoteController *)malloc(sizeof(RemoteController));
	remoteController->tv = tv;
	tv->button1Pressed = button1Pressed;
	tv->button2Pressed = button2Pressed;
	tv->button3Pressed = button3Pressed;
	tv->button4Pressed = button4Pressed;
	return remoteController;
}

void button1Pressed(RemoteController *self) {
	self->tv->power();
}

void button2Pressed(RemoteController *self) {
	self->tv->mute();
}

void button3Pressed(RemoteController *self) {
	self->tv->channelUp();
}

void button4Pressed(RemoteController *self) {
	self->tv->channelDown();
}
