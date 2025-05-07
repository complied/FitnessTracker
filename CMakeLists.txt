cmake_minimum_required(VERSION 3.31)
project(TestingHw)

set(CMAKE_CXX_STANDARD 20)

# Include Project Headers
include_directories(include)

# Main App Executable
add_executable(TestingHw
        main.cpp
        src/calorieChecker.cpp
        src/DisplayMenu.cpp
        src/workoutLogger.cpp
        src/workoutReccomendation.cpp
)

enable_testing()

# GoogleTest configuration
option(BUILD_GMOCK "Build GMock" OFF)
option(INSTALL_GTEST "Install GTest" OFF)

# Windows-specific settings
if(WIN32)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    add_definitions(-DGTEST_HAS_PTHREAD=0)
endif()

# GoogleTest from Submodule
add_subdirectory(extern/googletest EXCLUDE_FROM_ALL)

add_executable(TestingV1Tests
        test/testingV1.cpp
        src/workoutLogger.cpp
        src/calorieChecker.cpp
)

target_link_libraries(TestingV1Tests
        gtest
        gtest_main
)

# Only link pthread on non-Windows platforms
if(NOT WIN32)
    find_package(Threads REQUIRED)
    target_link_libraries(TestingV1Tests Threads::Threads)
endif()

include(GoogleTest)
gtest_discover_tests(TestingV1Tests)