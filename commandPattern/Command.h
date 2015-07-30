/*
 * Command.h
 *
 *  Created on: 2015. 7. 30.
 *      Author: minq.park
 */

#ifndef COMMAND_H_
#define COMMAND_H_

typedef struct Command{
	void (*execute)(void* self);
}Command;



#endif /* COMMAND_H_ */
