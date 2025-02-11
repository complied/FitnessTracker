#include <iostream>
using namespace std;
#include <iomanip>
#include <string>


//created a displayMenu function that now shows us the basic menu output!
void displayMenu() {
    cout << setw(10) << "" << "Welcome to the fitness tracker " << endl;
    cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(30) << "" << endl;
    cout << setfill (' ') << setw(10) << "" << "Out of the following choose one." << endl;
    cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(30) << "" << endl;
    cout << setfill(' ') << setw(10) << ""<< "1) Calorie Checker." << endl;
    cout << setfill(' ') << setw(10) << ""<< "2) Workout Reccomendation." << endl;
    cout << setfill(' ') << setw(10) << ""<< "3) Logging workout." << endl;
    cout << setfill(' ') << setw(10) << "" << setfill('-') << setw(5) << "" <<"> ";
}


void calorieChecker(){ // calorie Checker function - 
    double weight, time, burnedCalories = 0;
        string workOuts;
        cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
        cout << setfill(' ') << setw(10) << "" << "[Running] - [Swimming] - [Biking]" << endl;
        cout << setfill(' ') << setw(10) << "" << "Choose one of the following: ";
        cin >> workOuts;
    

        // checking if the input is true or not - error handling!
        if ((workOuts != "Running" || workOuts != "Running" || workOuts != "Running")) {
            cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            cout << setfill(' ') << setw(10) << "" << "Wrong input:  Enter whats written in the screen & restart it" << endl;
            } else {
                cout << setfill(' ') << setw(10) << "" << "Please Enter Your Weight In Kgs: " << endl;
                cout << setfill(' ') << setw(10) << "" << setfill('-') << setw(5) << "" << "> ";
                cin >> weight;
                cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
                cout << setfill(' ') << setw(10) << "" << "Please Enter Your Duration In Minutes: " << endl;
                cout << setfill(' ') << setw(10) << "" << setfill('-') << setw(5) << "" << "> ";
                cin >> time;
                cout << setfill(' ') << setw(10) << "" << setfill('=') << setw(40) << "" << endl;
            
                if (workOuts == "Running") {
                    burnedCalories =  weight * 0.0175 * 9.8 * time; // MET value for running (~6 mph) = 9.8
                }
                else if (workOuts == "Swimming") {
                    burnedCalories =  weight * 0.0175 * 7.0 * time; // MET value for swimming (moderate effort) = 7.0
                }
                else if (workOuts == "Biking") {
                    burnedCalories = weight * 0.0175 * 8.0 * time; // MET value for biking (~12-14 mph) = 8.0
                }
                else {
                    cout << setfill(' ') << setw(10) << "" << "Invalid workout choice!" << endl;
                }
                
                cout << fixed << setprecision(2); // for decimals to show!
                cout << setfill(' ') << setw(10) << "" << "Your estimated calories burned are : " << endl;
                cout << setfill(' ') << setw(10) << "" << setfill('-') << setw(5) << "" << "> " << burnedCalories << " KCal" << endl;
                
        
            }

    

    
}

