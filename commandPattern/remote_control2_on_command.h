
#ifndef remote_control2_on_command_h
#define remote_control2_on_command_h

#include "tv.h"
#include "Command.h"

typedef struct _RemoteController2OnCommand{
	TV *tv;
	Command command1;
	Command command2;
	Command command3;
	Command command4;
}RemoteController2OnCommand;

RemoteController2OnCommand *RemoteController2OnCommand_Create(TV *tv);

void RemoteController2OnCommand_button1Pressed(RemoteController2OnCommand *self);

void RemoteController2OnCommand_button2Pressed(RemoteController2OnCommand *self);

void RemoteController2OnCommand_button3Pressed(RemoteController2OnCommand *self);

void RemoteController2OnCommand_button4Pressed(RemoteController2OnCommand *self);

#endif
