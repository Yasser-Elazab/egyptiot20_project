#include <stdio.h>
#include <stdint.h>
#include "HBRIDGE.h"
#include "MOTION.h"





int main(void)
{
    /* code */
    /* 100 ms sec code section */
    HBRIDGE_vidMain100ms();

    unsigned long u32LocActiveDirection = HBRIDGE_u32ActiveDirection;
#ifdef DEBUG
    HBRIDGE_u32ActiveDirection = 1;
#endif
    
    uint16_t uint16a = 40000;   
    uint16_t uint16b = 30000;

    /*32-bit machine*/
    int result = 40000 + 30000;

    /*16-bit machine*/
    int reults = 40000 + 30000;
	uint32_t uint32c = uint16a + uint16b;


    /*correct in any machine*/
    uint32_t result = (uint32_t)((uint16_t)40000 + (uint16_t)30000);

    /*mixed signs*/
    if (uint32c > -1)
    {
        /* code */
    }
}