//
// Created by Michael  Murphy on 4/23/23.
//

#include <iostream>
#include <string>

using namespace std;

class Athlete {
private:
    string name = "James";
    int strengthLevel = 1;
    int agilityLevel = 1;
    int mobilityLevel = 1;

public:
    Athlete(string n, int s, int a, int m) {

        strengthLevel = s;
        agilityLevel = a;
        name = n;
        mobilityLevel = m;
    }

    void stretch();
    void run();
    void weights();

    void setStrength(int s) {
        strengthLevel = s;
    }

    int getStrength() {
        return strengthLevel;
    }

    void set_agility(int a) {
        agilityLevel = a;
    }

    int get_agility() {
        return agilityLevel;
    }

};


void Athlete::run() {
    int runTime = 0;
    int runDistance = 0;
    cout << "How many miles would you like to run?" << endl;
    cin >> runDistance;
    switch (agilityLevel) {
        case 1:
            runTime = (runDistance * 30) / mobilityLevel;
        case 2:
            runTime = runDistance * 25 / mobilityLevel;
        case 3:
            runTime = runDistance * 20 / mobilityLevel;
        case 4:
            runTime = runDistance * 15 / mobilityLevel;
        case 5:
            runTime = runDistance * 10 / mobilityLevel;
    }
    cout << "Your run time is: " << runTime << "Minutes" << endl;
}
