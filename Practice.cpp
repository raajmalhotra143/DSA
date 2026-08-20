#include <iostream>
using namespace std;

int main() {
    int n,sum =0,sum2=0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1 ; i<=n;i++){
    if (i%2==0 ) sum+=i;
    else sum2+=i;
    }cout<<"sum of even no is :- "<<sum<<endl;
    cout<<"sum of odd numbers is "<<sum2;

}