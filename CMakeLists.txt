
cmake_minimum_required(VERSION 3.20)

project(SmartPot C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Find firmware source files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    "firmware/src/*.c"
)

# Main application
add_executable(smart-pot ${SOURCES})

target_include_directories(smart-pot PRIVATE
    firmware/include
)

# Enable automated testing
enable_testing()

# Test executable
add_executable(test_sensor
    test/test_sensor.c
    firmware/src/sensor.c
)

target_include_directories(test_sensor PRIVATE
    firmware/include
)

# Register the test with CTest
add_test(NAME SoilMoistureTests COMMAND test_sensor)
