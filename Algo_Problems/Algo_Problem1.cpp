/*

1. Write a C++ program to compute the sum of the two given integer values. If the two values are the same,
then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x<<"+"<<y<<"="<<(x+y)*3;
    }
    else{
        cout<<x<<"+"<<y<<"="<<x+y;
    }

}
