#include<iostream>
#include<string>
using namespace std;

int main () {

    float gpa;
    string name;

    cout << "What is your name?: " ;
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> gpa;

    if(gpa >= 3.50){
        cout << name+" InW Jrim Jrim!!!" ;
    }else{
        cout << "Try harder, "+name+"!!!";
    }

    return 0;
}
