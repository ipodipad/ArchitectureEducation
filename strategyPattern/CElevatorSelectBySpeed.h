/*
 * CElevatorSelectBySpeed.h
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#ifndef STRATEGYPATTERN_CELEVATORSELECTBYSPEED_H_
#define STRATEGYPATTERN_CELEVATORSELECTBYSPEED_H_

#include "IElevatorSelectStrategy.h"
typedef struct CElevatorSelectBySpeed {
	IElevatorSelectStrategy elevatorSelectStrategy;
}CElevatorSelectBySpeed;

CElevatorSelectBySpeed* CElevatorSelectBySpeed_Create();
int CElevatorSelectBySpeed_doSelect(void* self);
#endif /* STRATEGYPATTERN_CELEVATORSELECTBYSPEED_H_ */
