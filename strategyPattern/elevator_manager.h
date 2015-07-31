#include "elevator_controller.h"

#ifndef ELEVATOR_MANAGER
#define ELEVATOR_MANAGER
typedef struct ElevatorManager {
	ElevatorController **controllers;
	int controllerCount;
	void (*processRequest)(struct ElevatorManager *self, int destination, int direction);
}	ElevatorManager;
#endif

ElevatorManager *ElevatorManager_Create(int controllerCount);

void processRequest(ElevatorManager *self, int destination, int direction);
