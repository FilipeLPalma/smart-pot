#ifndef SENSOR_H
#define SENSOR_H

typedef enum{
    SOIL_DRY,
    SOIL_OK,
    SOIL_WET,
    SOIL_ERROR
} SoilStatus;

SoilStatus check_soil_moisture(float moisture);

float get_soil_moisture(void);

#endif 