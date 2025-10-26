// 5.   “Can I make it so that I print in main(), not in getdata()?”
// 🧱 Option 1 — Return each value individually like this this is present inside the access specifiers.
// 🧱 Option 2 — Return all values together (struct or tuple-style)
// If you wanted to return all values at once, you can use a structure or pair.
#include<iostream>
#include<tuple> // for tuple
using namespace std;

class H {
private:
    int a;
protected:
    int b;
public:
    int c;

    void setdata(int a1, int b1, int c1) {//it always return nothing it just set the values 
        a = a1;
        b = b1;
        c = c1;
    }

    tuple<int,int,int> getdata() {   // return multiple values as a tuple(any numbers of values returns )
        return make_tuple(a, b, c);
    }
/*
if i want to return multiple values so it can also done using this 
    Values getdata() {
        Values temp = {a,b,c,d,e,f,g,h,i,j};
        return temp; // it can give upto any number of return such as here it gives 10 return values
    }
*/
};

int main() {
    H obj;
    obj.setdata(10, 20, 30);

    int x, y, z;
    tie(x, y, z) = obj.getdata();   // unpack the returned tuple

    cout << "The value of a is: " << x << endl;
    cout << "The value of b is: " << y << endl;
    cout << "The value of c is: " << z << endl;

    return 0;
}/* 
in access specifiers.cpp we write direct void getdata() becase where cout can
 be done by inside the class directly but here i want to do it in main so i make 
 it like this*/