
#include <iostream>
using namespace std;

// Function declarations
void convertSecondsToHours();
void convertSecondsToMinutes();
void convertMinutesToHours();
void convertHoursToSeconds();
void exitProgram();

int main() {
    int choice;

    do {
        // Display menu
        cout << "\nSimple Time Calculator\n";
        cout << "1. Convert seconds to hours\n";
        cout << "2. Convert seconds to minutes\n";
        cout << "3. Convert minutes to hours\n";
        cout << "4. Convert hours to seconds\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                convertSecondsToHours();
                break;
            case 2:
                convertSecondsToMinutes();
                break;
            case 3:
                convertMinutesToHours();
                break;
            case 4:
                convertHoursToSeconds();
                break;
            case 5:
                exitProgram();
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5); // Continue until the user chooses to exit

    return 0;
}

// Function to convert seconds to hours
void convertSecondsToHours() {
    double seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    // Check for negative input
    if (seconds < 0) {
        cout << "Time cannot be negative!\n";
        return;
    }
    double hours = seconds / 3600;
    cout << seconds << " seconds is equal to " << hours << " hours.\n";
}

// Function to convert seconds to minutes
void convertSecondsToMinutes() {
    double seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    // Check for negative input
    if (seconds < 0) {
        cout << "Time cannot be negative!\n";
        return;
    }
    double minutes = seconds / 60;
    cout << seconds << " seconds is equal to " << minutes << " minutes.\n";
}

// Function to convert minutes to hours
void convertMinutesToHours() {
    double minutes;
    cout << "Enter time in minutes: ";
    cin >> minutes;
    // Check for negative input
    if (minutes < 0) {
        cout << "Time cannot be negative!\n";
        return;
    }
    double hours = minutes / 60;
    cout << minutes << " minutes is equal to " << hours << " hours.\n";
}

// Function to convert hours to seconds
void convertHoursToSeconds() {
    double hours;
    cout << "Enter time in hours: ";
    cin >> hours;
    // Check for negative input
    if (hours < 0) {
        cout << "Time cannot be negative!\n";
        return;
    }
    double seconds = hours * 3600;
    cout << hours << " hours is equal to " << seconds << " seconds.\n";
}

// Function to exit the program
void exitProgram() {
    cout << "Exiting the program. Goodbye!\n";
}
