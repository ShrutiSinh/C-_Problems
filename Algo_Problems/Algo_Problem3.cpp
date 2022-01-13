/*
Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30. 
Sample Input:
30, 0
25, 5
20, 30
20, 25
Sample Output:
1
1
1
0
*/
#include <iostream>
using namespace std;
int main(){
  int x,y;
  bool op=true;
  cin>>x>>y;
  if (x+y==0){
    cout<<op;
   
  
  }
  else if(x==30 || y==30){
    cout<<op;
  
  }
  else{
    op=false;
    cout<<op;
  
  }

}
