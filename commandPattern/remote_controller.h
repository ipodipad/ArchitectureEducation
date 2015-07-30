
#ifndef REMOTE_CONTROLLER_H
#define REMOTE_CONTROLLER_H

#define MAX_BUTTON_NUM 4
#include "Command.h"
struct Command;
typedef struct _RemoteController{
	Command	*theCommand[MAX_BUTTON_NUM];
}RemoteController;

RemoteController *RemoteController_Create(Command* theCommand1,Command* theCommand2, Command* theCommand3, Command* theCommand4);

void button1Pressed(RemoteController *self);
void button2Pressed(RemoteController *self);
void button3Pressed(RemoteController *self);
void button4Pressed(RemoteController *self);

#endif
