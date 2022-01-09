#include <iostream>
using namespace std;
int main(){
    string name="shr";
    string &naam=name;
    cout<<"enter name---";
    getline(cin,name);
    cout<<"name=="<<name;
    cout<<"\n\nNaam=="<<naam;
    return 0;

}
