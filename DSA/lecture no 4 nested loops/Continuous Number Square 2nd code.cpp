/*
question is print this 
1 2 3 
4 5 6 
7 8 9 
*/

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    int num = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
/*

NOTE:- 
1.want to reset the value after iterations so use a 
variable inside the outer loop inilitise this variable 
2.want to remember the value of variable after 
iterations declear the variable outside the outer loop.

*/
