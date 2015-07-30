#include "remote_control1_on_command.h"
#include <stdlib.h>
RemoteController1OnCommand *RemoteController1OnCommand_Create(TV *tv) {

	RemoteController1OnCommand *remoteController1OnCommand = (RemoteController1OnCommand *)malloc(sizeof(RemoteController1OnCommand));
	remoteController1OnCommand->tv = tv;
	remoteController1OnCommand.command1->execute = button1Pressed;
	remoteController1OnCommand.command2->execute =  button2Pressed;
	remoteController1OnCommand.command3->execute = button3Pressed;
	remoteController1OnCommand.command4->execute = button4Pressed;
	return remoteController1OnCommand;
}

void RemoteController1OnCommand_button1Pressed(RemoteController1OnCommand *self) {
	self->tv->power(self->tv);
}

void RemoteController1OnCommand_button2Pressed(RemoteController1OnCommand *self) {
	self->tv->mute(self->tv);
}

void RemoteController1OnCommand_button3Pressed(RemoteController1OnCommand *self) {
	self->tv->channelUp(self->tv);
}

void RemoteController1OnCommand_button4Pressed(RemoteController1OnCommand *self) {
	self->tv->channelDown(self->tv);
}
