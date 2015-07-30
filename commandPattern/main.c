#include "tv.h"
#include "remote_controller.h"

int main() {
	TV *tv = TV_Create();
	RemoteController *rc = RemoteController_Create(tv);	
	rc->button1Pressed(rc) ;
	rc->button2Pressed(rc) ;
	rc->button3Pressed(rc) ;
	rc->button4Pressed(rc) ;
	return 0;
}
