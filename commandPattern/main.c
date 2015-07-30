#include "tv.h"
#include "remote_controller.h"
#include "remote_control1_on_command.h"
#include "remote_control2_on_command.h"
int main() {
	TV *tv = TV_Create();
	RemoteController1OnCommand* rc1 = RemoteController1OnCommand_Create(tv);

	RemoteController *rc = RemoteController_Create(rc1->command1, rc1->command2, rc1->command3, rc1->command4);
	rc->button1Pressed(rc) ;
	rc->button2Pressed(rc) ;
	rc->button3Pressed(rc) ;
	rc->button4Pressed(rc) ;
	return 0;
}
