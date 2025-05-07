cmake_minimum_required(VERSION 3.31)
project(TestingHw)

set(CMAKE_CXX_STANDARD 20)

# Include Project Headers
include_directories(include)

#  Main App Executable
add_executable(TestingHw
        main.cpp
        src/calorieChecker.cpp
        src/DisplayMenu.cpp
        src/workoutLogger.cpp
        src/workoutReccomendation.cpp
)


enable_testing()

# GoogleTest from Submodule
add_subdirectory(extern/googletest)


add_executable(TestingV1Tests
        test/testingV1.cpp
        src/workoutLogger.cpp
        src/calorieChecker.cpp
)

target_link_libraries(TestingV1Tests
        gtest
        gtest_main
        pthread
)


include(GoogleTest)
gtest_discover_tests(TestingV1Tests)
