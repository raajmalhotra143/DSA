#include <iostream>
using namespace std;

int sumofdigits(int num){
    int digitsum = 0;
    for (int num;num>0;num/=10 ){
        int last = num % 10;
        digitsum+=last;
    }return digitsum;
}



int main() {
    char n;
    cout << "Enter the Letter: ";
    cin >> n;

    // Loop from n down to 1
    cout << sumofdigits(n);
      
    }
