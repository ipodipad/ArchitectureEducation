/*
 * CElevatorSelectBySize.h
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#ifndef STRATEGYPATTERN_CELEVATORSELECTBYSIZE_H_
#define STRATEGYPATTERN_CELEVATORSELECTBYSIZE_H_

#include "IElevatorSelectStrategy.h"
typedef struct CElevatorSelectBySize {
	IElevatorSelectStrategy elevatorSelectStrategy;
}CElevatorSelectBySize;

CElevatorSelectBySize* CElevatorSelectBySize_Create();
int CElevatorSelectBySize_doSelect(void* self);
#endif /* STRATEGYPATTERN_CELEVATORSELECTBYSIZE_H_ */
