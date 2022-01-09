#include <iostream>
using namespace std;
int main(){
    //Numeric Data types
    int num1 = 24;
    /*float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point.
The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
Therefore it is safer to use double for most calculations.*/
    float deci1=23e3;           // 'e' or 'E' indicates scientific no. of power 10
    double deci2=32E2;
    cout<<num1<<endl;
    cout<<deci1<<endl;
    cout<<deci2<<endl;

    //Boolean data types
    bool bol1=true; // op 1
    bool bol2=false;    // op 0
    cout<<bol1<<endl;
    cout<<bol2<<endl;

    //Char Data type
    char ascii=65;  //used ASCII code to display value
    char ch='s';
    cout<<ascii<<endl;
    cout<<ch<<endl;

    //String Data type
    string greet_me="hello shruti";
    cout<<greet_me<<endl;


}
