#include "elevator_manager.h"
#include <stdlib.h>

ElevatorManager *ElevatorManager_Create(int controllerCount) {
	int i;
	ElevatorManager *elevatorManager = (ElevatorManager *)malloc(sizeof(ElevatorManager));
	elevatorManager->controllers = (ElevatorController **)malloc(sizeof(ElevatorController *) * controllerCount);
	elevatorManager->controllerCount = controllerCount;
	for (i = 0; i < controllerCount; i++) {
		elevatorManager->controllers[i] = ElevatorController_Create(i+1);
	}
	elevatorManager->processRequest = processRequest;
	return elevatorManager;
}

void processRequest(ElevatorManager *self, int destination, int direction) {
	int selectedElevator = 0;
	ElevatorController *controller;		

	// select an elevator to maximize throughput of the system

	controller = self->controllers[selectedElevator];
	controller->gotoFloor(controller, destination);
}
