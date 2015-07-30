
#ifndef REMOTE_CONTROL1_ON_COMMAND_H
#define REMOTE_CONTROL1_ON_COMMAND_H

#include "tv.h"
#include "Command.h"

typedef struct _RemoteController1OnCommand{
	TV *tv;
	Command command1;
	Command command2;
	Command command3;
	Command command4;
}RemoteController1OnCommand;

RemoteController1OnCommand *RemoteController1OnCommand_Create(TV *tv);

void RemoteController1OnCommand_button1Pressed(RemoteController1OnCommand *self);

void RemoteController1OnCommand_button2Pressed(RemoteController1OnCommand *self);

void RemoteController1OnCommand_button3Pressed(RemoteController1OnCommand *self);

void RemoteController1OnCommand_button4Pressed(RemoteController1OnCommand *self);

#endif
