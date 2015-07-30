#include "remote_controller.h"
#include <stdlib.h>

RemoteController *RemoteController_Create(Command* theCommand1,Command* theCommand2, Command* theCommand3, Command* theCommand4) {
	int i = 0;
	RemoteController *remoteController = (RemoteController *)malloc(sizeof(RemoteController));

	remoteController->theCommand[0] = theCommand1;
	remoteController->theCommand[1] = theCommand2;
	remoteController->theCommand[2] = theCommand3;
	remoteController->theCommand[3] = theCommand4;


	return remoteController;
}

void button1Pressed(RemoteController *self) {
	self->theCommand[0]->execute();
}

void button2Pressed(RemoteController *self) {
	self->theCommand[1]->execute();
}

void button3Pressed(RemoteController *self) {
	self->theCommand[2]->execute();
}

void button4Pressed(RemoteController *self) {
	self->theCommand[3]->execute();
}
