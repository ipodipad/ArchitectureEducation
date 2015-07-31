
#ifndef ELEVATOR_CONTROLLER
#define ELEVATOR_CONTROLLER
typedef struct ElevatorController {
	int id ;
	int curFloor ;	
	void (*gotoFloor)(struct ElevatorController *self, int destination);
} ElevatorController;
#endif

ElevatorController *ElevatorController_Create(int id);

void gotoFloor(ElevatorController *self, int destination);
