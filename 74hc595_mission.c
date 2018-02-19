#include <stdio.h>
#include <pigpiod_if2.h>
#include "74hc595_functions.h"

int main(void)
{
    int i;
    uint8_t arr[] = {   0b00011000,
                        0b00111100,
                        0b01111110,
                        0b11111111,
                        0b01111110,
                        0b00111100,
                        0b00011000};
                      //  0b00011000};

    int ret;
    
    ret = init();
    if(ret == 0)
        return 0;
for(int j = 0; j < 100 ; j++){
    for(int i = 0 ; i < sizeof(arr) ; i++){
        set8(arr[i]);
        time_sleep(0.1);
    }
}
    release();
    return 0;
}
