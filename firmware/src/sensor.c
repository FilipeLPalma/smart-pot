#include "sensor.h"

float get_soil_moisture(void) {
    //placeholder for the actual sensor reading logic
    return 42.5f; 
}

SoilStatus check_soil_moisture(float moisture){

    if (moisture < 0 || moisture > 100){ return SOIL_ERROR;}
    if (moisture <= 30) {return SOIL_DRY;}
    if (moisture >= 80) {return SOIL_WET;}
    return SOIL_OK;
    
}