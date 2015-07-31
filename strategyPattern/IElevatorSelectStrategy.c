/*
 * IElevatorSelectStrategy.cpp
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#include "IElevatorSelectStrategy.h"


void IElevatorSelectStrategy_Init(IElevatorSelectStrategy* self, int (*doSelect)(void *self))
{
	self->doSelect = doSelect;
}
