/*
Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return
 triple the absolute difference.
Sample Input:
53
30
51
Sample Output:
6
21
0
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n>51){
        cout<<(n-51)*3;
    }
    else{
        cout<<51-n;
    }
    return 0;


}
