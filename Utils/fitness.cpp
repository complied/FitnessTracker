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
    cout << setfill(' ') << setw(10) << ""<< "1) Logging workout." << endl;
    cout << setfill(' ') << setw(10) << ""<< "2) Workout Reccomendation." << endl;
    cout << setfill(' ') << setw(10) << ""<< "3) Calorie Checker." << endl << endl;
}


