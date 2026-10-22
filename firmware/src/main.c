#include <stdio.h>
#include "sensor.h"

int main (void) {
    
    float moisture = get_soil_moisture();
    printf("soil moisture : %.1f%%\n", moisture);

    SoilStatus moisture_label = check_soil_moisture(moisture);

    switch (moisture_label){

        case SOIL_DRY : printf("Soil is dry"); break;
        case SOIL_OK : printf("Soil is ok"); break;
        case SOIL_WET : printf("Soil is wet"); break;
        case SOIL_ERROR : printf("Soil is error"); break;
        default: printf("error in check soil return value"); break;
    }
    


    return 0;
}