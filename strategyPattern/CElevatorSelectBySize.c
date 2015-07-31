/*
 * CElevatorSelectBySize.cpp
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#include "CElevatorSelectBySize.h"

CElevatorSelectBySize* CElevatorSelectBySize_Create()
{
	CElevatorSelectBySize* elevatorSelectBySize = (CElevatorSelectBySize*) malloc(sizeof(CElevatorSelectBySize));

	IElevatorSelectStrategy_Init(&elevatorSelectBySize->elevatorSelectStrategy,CElevatorSelectBySize_doSelect );
	return elevatorSelectBySize;
}


int CElevatorSelectBySize_doSelect(void* self)
{
	return 4;
}
