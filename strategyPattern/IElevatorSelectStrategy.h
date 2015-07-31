/*
 * IElevatorSelectStrategy.h
 *
 *  Created on: 2015. 7. 31.
 *      Author: minq.park
 */

#ifndef STRATEGYPATTERN_IELEVATORSELECTSTRATEGY_H_
#define STRATEGYPATTERN_IELEVATORSELECTSTRATEGY_H_

typedef struct IElevatorSelectStrategy {
	int nSelect;
	int (*doSelect)(void* self);
}IElevatorSelectStrategy;

void IElevatorSelectStrategy_Init(IElevatorSelectStrategy* self, int (*doSelect)(void* self));




#endif /* STRATEGYPATTERN_IELEVATORSELECTSTRATEGY_H_ */
