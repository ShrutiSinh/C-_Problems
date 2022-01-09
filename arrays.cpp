#include <iostream>
#include <string>
using namespace std;
int main(){
    int x;
    string j;
    cout<<"enter length of array to be created";
    cin>>x;
    string name[x];
    for (int i=0;i<x;i++){
        cout<<"enter the element of "<<i;
        getline(cin,name[i]);
    }
    for (int k=0;k<x;k++){
        cout<<name[k]<<"  "<<k<<endl;
    }

    return 0;


}
