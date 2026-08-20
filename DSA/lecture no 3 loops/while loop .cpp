/*
initilization ;
while (condition) {
    // Code block to be executed
    // Update statement (increment/decrement)
}
example:-

int i = 1;        // 1. Initialization
while (i <= 5) {  // 2. Condition
    cout << i;
    i++;          // 3. Update (Increment)
}

*/

// Code example for checking a number i prime or not 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0; 
    }

    int i = 2;              // 1. Initialization: Start checking from 2
    bool isPrime = true;    // Flag variable to track prime status

    // 2. Condition: Only check up to i * i <= n (equivalent to i <= sqrt(n))
    while (i * i <= n) {
        if (n % i == 0) {   // If n is perfectly divisible by i
            isPrime = false; // It is not prime
            break;          // Exit the loop immediately to save time
        }
        i++;                // 3. Update: Check the next number
    }

    // Output results based on the flag status
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is NOT a prime number." << endl;
    }

    return 0;
}
