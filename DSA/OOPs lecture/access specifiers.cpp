#include<iostream>
using namespace std;
class H{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void setdata(int a1, int b1, int c1){ //setter function for setting private and protected data members
        a = a1;
        b = b1;
        c = c1;
    }
    void getdata(){ //getter function for getting all data members
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
    }
};
int main(){
    H obj;
    // obj.a = 10; // Error: 'a' is private
    // obj.b = 20; // Error: 'b' is protected
    obj.c = 30; // Allowed: 'c' is public
    obj.setdata(10, 20, 30); // Setting values using setter function
    obj.getdata(); // Getting values using getter function
    return 0;
}