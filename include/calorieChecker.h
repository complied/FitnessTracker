#ifndef Utils_calorieChecker
#define Utils_calorieChecker

// Included all the necesary libraries
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

namespace calorieChecker
{
    void calorieChecker();
    double computeCalories(double weight, double time, const std::string& workoutType); // defined function in the hpp file, now changed to actually do stuff.
}
# endif

