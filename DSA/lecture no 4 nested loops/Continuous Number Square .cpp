/*
question is print this 
1 2 3 
4 5 6 
7 8 9 
this code runs to n*n time with row and colums are n and n 
*/

#include <iostream>
#include <iomanip> // FIX: Added for setw() to keep columns perfectly aligned
using namespace std;

int main (){
    int n, num = 1;
    cout << "enter the value of sequence :- ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // FIX: setw(3) ensures every number takes exactly 3 spaces, preventing misalignment
            cout << setw(3) << num << " ";
            num++;
        }
        cout << endl;
    }
}
/*

NOTE:- 
1.want to reset the value after iterations so use a 
variable inside the outer loop inilitise this variable 
2.want to remember the value of variable after 
iterations declear the variable outside the outer loop.

*/
