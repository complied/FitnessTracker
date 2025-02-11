//
//  main.cpp
//  Fitness Tracker
//
//  Created by Subigya Parajuli on 2/10/25.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include "Utils/fitness.hpp"


int main(int argc, const char * argv[]) {
    
    displayMenu(); //function calling in main - now works!
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1: calorieChecker();
            break;
    }
    
    
    
    
    
    return 0;
}

