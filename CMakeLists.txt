CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(unit-test-exercise)

ADD_SUBDIRECTORY(googletest)

# ADD_EXECUTABLE(rectangle
#     src/rectangle.cpp
# )

# ADD_EXECUTABLE(test
#     tests/test.cpp

set(SOURCES
    src/rectangle.cpp
    tests/test.cpp 
)
add_executable(Tests ${SOURCES})

TARGET_LINK_LIBRARIES(Tests gtest)
TARGET_COMPILE_DEFINITIONS(Tests PRIVATE gtest_disable_pthreads=ON)

