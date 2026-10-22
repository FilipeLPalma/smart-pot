#include <assert.h>
#include "sensor.h"

int main(void)
{
    assert(check_soil_moisture(15.0f) == SOIL_DRY);
    assert(check_soil_moisture(40.0f) == SOIL_OK);
    assert(check_soil_moisture(85.0f) == SOIL_WET);
    assert(check_soil_moisture(120.0f) == SOIL_ERROR);
    assert(check_soil_moisture(-5.0f) == SOIL_ERROR);

    return 0;
}