#include "TM4C123GH6PM.h"

void Main_Thread_Two(int32_t GBR ) {
	GPIOF->DATA |= 0X0E & GBR;             // loading port F
}