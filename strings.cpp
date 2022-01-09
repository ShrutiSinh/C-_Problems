#include <iostream>
#include <string>
using namespace std;
int main(){
    string txt="I am shruti",lstn="sisodiya";
    string name;
    string lname;
    //str1.append(str2)     o/p str1 = str1 str2
    string mystr= txt.append(lstn);
     //string concatanation
    cout<<txt + " " +lstn<<endl;
    cout<<mystr<<endl;
    //length of string
    cout<<mystr.length()<<endl;
    cout<<"size method  "<<mystr.size()<<endl;
    //accessing element of string
    cout<<mystr[10]<<endl;
    //Changing elements of string
    txt[0]='M';
    cout<<txt<<endl;
    //Taking input of string
    cout<<"please enter your name:\n";
    cin>>name;
    cout<<name<<endl;
    //getline()
    cout<<"enter last name and a sentance\n";
    getline(cin,lname);
    cout<<lname;
    return 0;




}
