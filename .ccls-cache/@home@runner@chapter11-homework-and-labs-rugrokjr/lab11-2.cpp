//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

 // Function prototypes
 double getAverage(double times[], int numElements);
 double getLowest(double times[], int numElements);
 int main()
 {
     double finishTimes[5] = {0.0}; // Declare constant double array finishTimes
     // Declare constant double variables
     double avgTime = 0.0;
     double lowestTime = 0.0;
     // Enter finish times
     for (int i = 0; i < 5; i++) // Create for loop until 5
     {
         cout << "Time for race " << i + 1 << ": ";
         cin >> finishTimes[i]; // Read 5 times
     }
     avgTime = getAverage(finishTimes, 5); // Call getAverage() function and receive return value into avgTime
     lowestTime = getLowest(finishTimes, 5); // Call getLowest() function and receive return value into lowestTime
     cout << fixed << setprecision(1) << endl; // Set precision to 1 decimal place
     // Display average time and lowest time
     cout << "Average 5K finish time: " << avgTime << endl;
     cout << "Lowest 5K finish time: " << lowestTime << endl;
     return 0;
 }
 // Define getAverage() function
 double getAverage(double times[], int numElements)
 {
     double total = 0.0; // Declare constant double variable total
     for (int i = 0; i < numElements; i++) // Create for loop until numElements
         total += times[i]; // Calculate sum of elements
     return total / numElements; // Calculate average and return this value
 }
 // Define getLowest() function
 double getLowest(double times[], int numElements)
 {
     double lowest = times[0]; // Declare constant double variable lowest
     for (int i = 1; i < numElements; i++) // Create for loop starting from 1 to numElements
     {
         if (times[i] < lowest) // Check condition for lowest value
             lowest = times[i]; // If the condition is true then store lowest value until numElements
     }
     return lowest; // Return resultant value lowest
 }