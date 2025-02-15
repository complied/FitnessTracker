// Included all the necesary libraries
#include <iostream>
using namespace std;
#include <iomanip>
#include <string>



void workoutReccomendation() {
    string workoutChoice;
        
        // Display welcome message
        cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
        cout << setfill(' ') << setw(10) << "" << "Welcome to the Workout Recommender" << endl;
        cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
        cout << setfill(' ') << setw(10) << "" << "[Beginner] - [Moderate] - [Intermediate]" << endl;
        cout << setfill(' ') << setw(10) << "" << "Choose one of the following: ";
        cin >> workoutChoice;
        cout << endl; // Extra line for spacing

        // Input validation
        if (workoutChoice != "Beginner" && workoutChoice != "Moderate" && workoutChoice != "Intermediate") {
            cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            cout << setfill(' ') << setw(10) << "" << "Invalid choice! Please enter a valid difficulty level." << endl;
            return;
        }

        // Workout plan heading
        cout << endl; // Extra line for spacing
        cout << setfill(' ') << setw(10) << "" << "Your Workout Plan:" << endl;
        cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;

        if (workoutChoice == "Beginner") {
            string beginnerWorkouts[3][5] = {
                {"Push Day", "Push-ups", "Bench Press", "Tricep Dips", "Overhead Press"}, //day 1
                {"Pull Day", "Pull-ups", "Lat Pulldown", "Bicep Curls", "Face Pulls"},//day 2
                {"Cardio Day", "Running", "Jump Rope", "Cycling", "Burpees"}//day 3
            };
            // Used 2 Nested forloops to locate the data in the 2d arrays!
            for (int i = 0; i < 3; i++) {
                cout << setfill(' ') << setw(10) << "" << "Day " << (i + 1) << " - " << beginnerWorkouts[i][0] << ":" << endl; //added a fucntion where it matters on the day and it will cout it!
                for (int j = 1; j < 5; j++) {
                    cout << setfill(' ') << setw(15) << "" << "- " << beginnerWorkouts[i][j] << endl;
                }
                cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            }
        }
        else if (workoutChoice == "Moderate") { //if others arent true
            string moderateWorkouts[4][5] = {
                {"Push Day", "Incline Bench Press", "Dumbbell Shoulder Press", "Tricep Dips", "Lateral Raises"},//day 1
                {"Pull Day", "Deadlifts", "Chin-ups", "Bicep Curls", "Seated Row"},//day 2
                {"Leg Day", "Squats", "Lunges", "Leg Press", "Calf Raises"},//day 3
                {"Cardio Day", "Treadmill Sprints", "Jump Rope", "Rowing Machine", "HIIT Workouts"}//day 4
            };
            // Used 2 Nested forloops to locate the data in the 2d arrays!
            for (int i = 0; i < 4; i++) {
                cout << setfill(' ') << setw(10) << "" << "Day " << (i + 1) << " - " << moderateWorkouts[i][0] << ":" << endl;
                for (int j = 1; j < 5; j++) {
                    cout << setfill(' ') << setw(15) << "" << "- " << moderateWorkouts[i][j] << endl;
                }
                cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            }
        }
        else if (workoutChoice == "Intermediate") { //if others arent true
            string intermediateWorkouts[6][5] = {
                {"Push Day", "Barbell Bench Press", "Dips", "Overhead Press", "Incline Dumbbell Press"},//day 1
                {"Pull Day", "Weighted Pull-ups", "Bent-over Rows", "Barbell Curls", "Face Pulls"},//day 2
                {"Leg Day", "Front Squats", "Romanian Deadlifts", "Leg Curls", "Standing Calf Raises"},//day 3
                {"Cardio Day", "Sprint Intervals", "Cycling", "Box Jumps", "Battle Ropes"},//day 4
                {"Upper Body", "Dumbbell Shoulder Press", "Chest Flys", "Lat Pulldown", "Triceps Extensions"},//day 5
                {"Full Body", "Power Cleans", "Deadlifts", "Kettlebell Swings", "Farmer's Walk"}//day 6
            };
            // Used 2 Nested forloops to locate the data in the 2d arrays!
            for (int i = 0; i < 6; i++) {
                cout << setfill(' ') << setw(10) << "" << "Day " << (i + 1) << " - " << intermediateWorkouts[i][0] << ":" << endl;
                for (int j = 1; j < 5; j++) {
                    cout << setfill(' ') << setw(15) << "" << "- " << intermediateWorkouts[i][j] << endl;
                }
                cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            }
        }
    }
