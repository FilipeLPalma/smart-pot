#include <stdio.h>
#include "sensor.h"

int main (void) {
    
    float moisture = get_soil_moisture();
    printf("soil moisture : %.1f%%\n", moisture);
    
    return 0;
}