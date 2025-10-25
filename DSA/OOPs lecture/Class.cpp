#include <iostream>
using namespace std;
class student {
    public :
    int roll;
    string name;
    char group;
    double percentage;
};
int main (){
    student s1;
    s1.name= "papa";
    s1.roll = 23;
    s1.group = 'A';
    s1.percentage = 90;
    cout<<s1.name<<"\n"<<s1.roll<<"\n"<<s1.group<<"\n"<<s1.percentage<<"\n"<<endl;
    return 0;    
}
//this is about the class how to create the class
// and how to use the class in the main function.