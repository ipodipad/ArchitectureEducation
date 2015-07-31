/*
 * CElevatorSelectBySpeed.cpp
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#include "CElevatorSelectBySpeed.h"

CElevatorSelectBySpeed* CElevatorSelectBySpeed_Create()
{
	CElevatorSelectBySpeed* elevatorSelectBySize = (CElevatorSelectBySpeed*) malloc(sizeof(CElevatorSelectBySpeed));
	IElevatorSelectStrategy_Init(&elevatorSelectBySize->elevatorSelectStrategy,CElevatorSelectBySpeed_doSelect );
	return elevatorSelectBySize;
}


int CElevatorSelectBySpeed_doSelect(void* self)
{
	// some algorithm for speed
	return 3;
}
