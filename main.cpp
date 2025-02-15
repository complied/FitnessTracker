//
//  main.cpp
//  Fitness Tracker
//
//  Created by Subigya Parajuli on 2/10/25.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include "Utils/DisplayMenu.hpp"
#include "Utils/calorieChecker.hpp"
#include "Utils/workoutReccomendation.hpp"
#include "Utils/workoutLogger.hpp"

// ****** Updated All these, Included every hpp function in main ******


int main(int argc, const char * argv[]) {
    
    displayMenu(); //function calling in main - now works!
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1: calorieChecker();
            break;
        case 2: workoutReccomendation(); //workout Recommendator function here now!!
            break;
    }
    
    
    
    
    
    return 0;
}

