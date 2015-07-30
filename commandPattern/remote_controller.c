#include "remote_controller.h"
#include <stdlib.h>

RemoteController *RemoteController_Create(TV *tv) {
	RemoteController *remoteController = (RemoteController *)malloc(sizeof(RemoteController));
	remoteController->tv = tv;
	remoteController->button1Pressed = button1Pressed;
	remoteController->button2Pressed = button2Pressed;
	remoteController->button3Pressed = button3Pressed;
	remoteController->button4Pressed = button4Pressed;
	return remoteController;
}

void button1Pressed(RemoteController *self) {
	self->tv->power(self->tv);
}

void button2Pressed(RemoteController *self) {
	self->tv->mute(self->tv);
}

void button3Pressed(RemoteController *self) {
	self->tv->channelUp(self->tv);
}

void button4Pressed(RemoteController *self) {
	self->tv->channelDown(self->tv);
}
