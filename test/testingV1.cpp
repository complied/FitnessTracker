#include <gtest/gtest.h>
#include "../include/calorieChecker.h"
#include "../include/workoutLogger.h"
#include <string>

using namespace std;

//calorie test
using calorieChecker::computeCalories;

// funtion test
TEST(CalorieFunctionTest, BikingCalculationWorks) {
    double result = computeCalories(60, 30, "Biking");
    EXPECT_NEAR(result, 252.0, 0.01);
}

// flow test
TEST(ControlFlowTest, LogWorkoutMaxLimitPreventsLogging) {
    string activities[logWorkout::MAX_WORKOUTS];
    double durations[logWorkout::MAX_WORKOUTS];
    int workoutCount = logWorkout::MAX_WORKOUTS;

    ::testing::internal::CaptureStdout();
    logWorkout::logWorkout(activities, durations, workoutCount);
    string output = ::testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Workout log is full"), std::string::npos);
}

// edge case
TEST(EdgeCaseTest, ZeroOrNegativeInputReturnsZero) {
    EXPECT_EQ(computeCalories(0, 30, "Running"), 0.0);
    EXPECT_EQ(computeCalories(60, 0, "Swimming"), 0.0);
    EXPECT_EQ(computeCalories(-10, 25, "Running"), 0.0);
}

TEST(CalorieFunctionTest, InvalidWorkoutTypeReturnsZero) {
    EXPECT_EQ(computeCalories(60, 30, "Yoga"), 0.0);
}

TEST(CalorieFunctionTest, RunningCalculationAccurate) {
    EXPECT_NEAR(computeCalories(70, 30, "Running"), 360.15, 0.01);
}
