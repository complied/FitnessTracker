Fitness Tracker  

# Overview  
A simple C++ program that helps users log workouts, get workout recommendations, and calculate calories burned based on activity type.  

#Features  
- Log workout type and duration  
- Get basic workout recommendations  
- Calculate total calories burned  


V - 0.1 - 
+ Added a Display function with error handling.
+ Proper display with <iomanip> library implementation!

v - 0.2 - 
+ New Feature: Added a Calorie Calculator, which allows users to estimate calories burned based on their weight, workout type, and duration.
+ Supports three workout types: Running, Swimming, and Biking.
+ Implements error handling for invalid inputs, prompting users to enter the correct workout name.
+ Uses MET (Metabolic Equivalent of Task) values for accurate calorie estimation:
    + Running (~6 mph): MET = 9.8
    + Swimming (moderate effort): MET = 7.0
    + Biking (~12-14 mph): MET = 8.0
+ Outputs calculated calories burned in a formatted, user-friendly manner with two decimal precision.
+ Updated Menu function! - Better flexiblity

v - 0.3 - 

+ Implemented New Features for #CalorieChecker!
   + Used cin.fail(), cin.ignore(), and numeric_limits to improve input validation.  
   + Ensures only valid inputs are accepted, preventing bugs and crashes.  

+Removed Fitness.cpp/Fitness.hpp files
   + Organized all functions into their own .cpp and .hpp files for better structure and maintainability.  

+ New Function Added! #WorkoutRecommendation
   + Recommends workouts based on different fitness levels:  
      + Beginner- 3-day workout plan  
      + Moderate - 4-day workout plan  
      + Intermediate - 6-day workout plan  



    


