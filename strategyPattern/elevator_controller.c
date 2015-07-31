#include "elevator_controller.h"
#include <stdlib.h>
#include <stdio.h>

ElevatorController *ElevatorController_Create(int id) {
	ElevatorController *elevatorController = (ElevatorController *)malloc(sizeof(ElevatorController));
	elevatorController->id = id;
	elevatorController->curFloor = 1;
	return elevatorController;
}

void gotoFloor(ElevatorController *self, int destination) {
	printf("Elevator [%d] Floor: %d", self->id, self->curFloor);
	self->curFloor = destination;
	printf(" ==> %d\n", self->curFloor);
}