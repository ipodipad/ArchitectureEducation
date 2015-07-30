
typedef struct TV {
	bool powerOn;
	bool muteOn;
	int channel;
	void (*power)(struct TV *self);
	void (*mute)(struct TV *self);
	void (*channelUp)(struct TV *self);
	void (*channelDown)(struct TV *self);
} TV;

TV *TV_Create();

void power(struct TV *self);

void mute(struct TV *self);

void channelUp(struct TV *self);

void channelDown(struct TV *self);
