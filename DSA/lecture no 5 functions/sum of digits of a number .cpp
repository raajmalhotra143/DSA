// Calculating the sum of digits of a number using a function.

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digSum = 0;

    // No initialization is needed here because 'num' already
    // contains the value passed to the function by the user.
    // The loop continues while num is greater than 0.
    // After each iteration, num is divided by 10 to remove
    // its last digit.
    for (; num > 0; num /= 10) {

        int lastDig = num % 10;  // Get the last digit of num.
        digSum += lastDig;       // Add the last digit to digSum.
    }

    return digSum;
}

int main() {
    int userInput;

    cout << "Enter a number: ";
    cin >> userInput;

    cout << "Sum of digits = " << sumOfDigits(userInput) << endl;

    return 0;
}

/*
Step-by-Step Example: Tracing num = 45

Let's say the user enters the number 45.

Before the loop starts:
    num = 45
    digSum = 0

Round 1:
    Check Condition:
        Is num > 0?
        45 > 0 → Yes, the loop runs.

    Get Last Digit:
        int lastDig = num % 10;
        45 % 10 = 5
        Therefore, lastDig = 5.

    Add to Total:
        digSum += lastDig;
        digSum = 0 + 5
        Therefore, digSum = 5.

    Remove the Last Digit:
        num /= 10;
        45 / 10 = 4
        Therefore, num = 4.

Round 2:
    Check Condition:
        Is num > 0?
        4 > 0 → Yes, the loop runs.

    Get Last Digit:
        int lastDig = num % 10;
        4 % 10 = 4
        Therefore, lastDig = 4.

    Add to Total:
        digSum += lastDig;
        digSum = 5 + 4
        Therefore, digSum = 9.

    Remove the Last Digit:
        num /= 10;
        4 / 10 = 0
        Therefore, num = 0.

Loop Ends:
    Check Condition:
        Is num > 0?
        0 > 0 → No, the condition is false.

    The loop exits.

Finally:
    The function returns digSum.
    digSum = 9

Therefore:
    Sum of digits of 45 = 9.
*/