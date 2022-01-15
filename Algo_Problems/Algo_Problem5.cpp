/* Write a C++ program to create a new string where 'if' is added to the front of a given string.
 If the string already begins with 'if', return the string unchanged.
Sample Input:
"if else"
"else"
Sample Output:
if else
if else
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
   string original_string;
   string if_string="if ";
   string new_string;
   getline(cin,original_string);
   if (original_string[0]=='i'){
    if (original_string[1]=='f'){
        cout<<original_string;
    }
    else{
            new_string=if_string.append(original_string);
    cout<<new_string;

    }
   }
   else{
    new_string=if_string.append(original_string);
    cout<<new_string;
   }

   return 0;

}
