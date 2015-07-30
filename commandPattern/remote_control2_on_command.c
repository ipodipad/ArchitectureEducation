#include "remote_control2_on_command.h"
#include <stdlib.h>

RemoteController2OnCommand *RemoteController2OnCommand_Create(TV *tv) {
	RemoteController2OnCommand *remoteController2OnCommand = (RemoteController2OnCommand *)malloc(sizeof(RemoteController2OnCommand));
	remoteController2OnCommand->tv = tv;
	remoteController2OnCommand.command1->execute = button1Pressed;
	remoteController2OnCommand.command2->execute =  button2Pressed;
	remoteController2OnCommand.command3->execute = button3Pressed;
	remoteController2OnCommand.command4->execute = button4Pressed;
	return remoteController2OnCommand;
}

void RemoteController2OnCommand_button1Pressed(RemoteController2OnCommand *self) {
	self->tv->power(self->tv);
}

void RemoteController2OnCommand_button2Pressed(RemoteController2OnCommand *self) {
	self->tv-> channelUp (self->tv);
}

void RemoteController2OnCommand_button3Pressed(RemoteController2OnCommand *self) {
	self->tv->mute(self->tv);
}

void RemoteController2OnCommand_button4Pressed(RemoteController2OnCommand *self) {
	self->tv->channelDown(self->tv);
}
