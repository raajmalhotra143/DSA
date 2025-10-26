#include<iostream>
#include<tuple>
using namespace std;

class H {
private:
    int a;
protected:
    int b;
public:
    int c;

    // 🧩 Constructor
    H(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
        cout << "Constructor called! Values are set automatically." << endl;
    }

    // 🧩 Function to return all values
    tuple<int,int,int> getdata() {
        return make_tuple(a, b, c);
    }

    // 🧩 Function to change value of b
    void change(int newB) {
        b = newB;
    }
};

int main() {
    // 🧩 Object created — constructor runs automatically
    H obj(10, 20, 30); // values are passed to constructor

    obj.change(50); // change b to 50

    int x, y, z;
    tie(x, y, z) = obj.getdata();

    cout << "The value of a is: " << x << endl;
    cout << "The value of b is: " << y << endl;
    cout << "The value of c is: " << z << endl;

    return 0;
}
