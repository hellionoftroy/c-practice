// This program calculates billing expenses for clients of Handsome Jack's Programming Services

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void displayOpeningScreen();	// function to welcome client
int getClientID();				// function to ask for client ID number
int getMenuChoice();			// function to ask for client's menu choice
int getHours();                 // function to ask for hours of service needed
int calcCost(int, int);              // function to calculate the cost of services selected
void displayItemizedBill(int, int, int, float); // function to show client ID, level, hours, and total cost
void displayCopyrightScreen();  // function to display copyright information

// Main function
int main()
{
    int clientID = 0;	  // To hold the client ID number
    int level = 0;        // To hold the level of service chosen
    int hours = 0;        // To hold the number of hours requested
    float totalCost = 0; // To hold the total cost of services
    
    // Set display parameters
    cout << fixed << showpoint << setprecision(2);
    
    // Call function to display the opening screen/welcome for the user
    displayOpeningScreen();
    
    // Call function to ask for client ID number
    clientID = getClientID();
    
    // Call function to ask for client's menu choice
    level = getMenuChoice();
    
    // Call function to get hours requested
    hours = getHours();

    // Call function to calculate the cost of services selected
    totalCost = calcCost(level, hours);
    
    // Call function to display client ID, level of service, number of hours, and total cost
    displayItemizedBill(clientID, level, hours, totalCost);
    
    // Call function to display copyright information
    displayCopyrightScreen();
    
}

// ********************************************************
// Function to welcome client to the program              *
// ********************************************************

void displayOpeningScreen()
{
    cout << "Hey, kiddo. Jack here. Welcome to Handsome Jack's Programming Services! Portland's highest rated programming company.\n"
         << "We offer services for all budgets. Let's get to work!" << endl;
}

// ********************************************************
// The getClientID function asks the user for their       *
// client ID number                                       *
// ********************************************************

int getClientID()
{
    int number;	// To hold the client ID number
    
    // Get the number of employees in the company.
    cout << "What is your client ID number, buddy? " << endl;
    cin >> number;
    return number;
}

// ********************************************************
// The getMenuChoice function displays the levels of      *
// service available and prompts the client to select     *
// a level.                                               *
// ********************************************************
int getMenuChoice()
{
    int choice;	// To hold the menu choice
    
    // Display menu and prompt for choice
    cout << "Service Level Menu\n\n"
         << "Please select your level of need:\n"
         << "1. Basic program development\n"
         << "2. Intermediate program development\n"
         << "3. Expert program development" << endl;
    cin  >> choice;
    return choice;
    
}

// ********************************************************
// The getHours function takes the number of hours        *
// and passes it back to main                             *
// ********************************************************

int getHours()
{
    // Variables
    int hours;            // To hold the number of hours requested
    
    // Get the hours of service requested
    cout << "How many hours of service do you need? " << endl;
    cin >> hours;
    cout << "Thanks, pumpkin." << endl;
    return hours;
}

// ********************************************************
// The calcCost function takes the level of service       *
// selected and the number of hours requested to          *
// calculate the total cost of services performed.        *
// ********************************************************

int calcCost(int level, int hours)
{
    // Constants for level rates
    const int basic = 55;
    const int intermediate = 83;
    const int expert = 175;
    
    // Variables
    float totalCost = 0;      // To hold the total cost of services
    
    // Process client's choice
    
    switch (level) {
    
        case 1:
            totalCost = hours * basic;
            break;
        case 2:
            totalCost = hours * intermediate;
            break;
        case 3:
            totalCost = hours * expert;
            break;
    }
    return totalCost;
}


// ********************************************************
// The displayItemizedBill function will display the      *
// the client ID, service level, hours of work, and the   *
// total cost of services.                                *
// ********************************************************
void displayItemizedBill(int clientID, int level, int hours, float totalCost)
{
    // Display itemized bill to client
    cout << "\n\nHandsome Jack's Programming Services\n\n"
         << "Client ID:\t" << clientID << "\n"
         << "Service Selected:\t" << level << "\n"
         << "Number of Hours:\t" << hours << "\n"
         << "Total Cost:\t$" << totalCost << endl;

}

// ********************************************************
// Function to display final screen & copyright           *
// ********************************************************
void displayCopyrightScreen()
{
    cout << "\n\nI bet you're feeling pretty great about using Handsome Jack's Programming Services. Well done!" << endl;
    cout << "Don't copy our work. That would be rude. Also, illegal. Kay, bye. (c) 2016" << endl;
}
