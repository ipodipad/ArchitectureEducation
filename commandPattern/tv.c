#include "tv.h"
#include <stdlib.h>
#include <stdio.h>
#include "common_type.h"
static const int CHANNEL_MIN = 10;
static const int CHANNEL_MAX = 35;

TV *TV_Create() {
	TV* tv = (TV *)malloc(sizeof(TV));
	tv->powerOn = false;
	tv->muteOn = false;
	tv->channel = 10;
	tv->power = power;
	tv->mute = mute;
	tv->channelUp = channelUp;
	tv->channelDown = channelDown;
	return tv;
}

void power(struct TV *self) {
	self->powerOn = !self->powerOn;
	if (self->powerOn) printf("Power On\n");
	else printf("Power Off\n");	
}

void mute(struct TV *self) {
	if (!self->powerOn) return;
	self->muteOn = !self->muteOn;
	if (self->muteOn) printf("Mute On\n");
	else printf("Mute Off\n");	
}

void channelUp(struct TV *self) {
	if (!self->powerOn) return;
	self->channel++;
	if (self->channel > CHANNEL_MAX) self->channel = CHANNEL_MIN;
	printf("Channel: %d\n", self->channel);
}

void channelDown(struct TV *self) {
	if (!self->powerOn) return;
	self->channel--;
	if (self->channel < CHANNEL_MIN) self->channel = CHANNEL_MAX;
	printf("Channel: %d\n", self->channel);
}
