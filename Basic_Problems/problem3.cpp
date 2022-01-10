#include <iostream>
using namespace std;
/*The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes*/
int main(){
    char ch;
    cout<<"Enter your choice\n'c' for char\n'i' for int\n'l' for long\n'll' for long long\n'f' for float\n'd' for double\n'ld' for long double\n'b' for bool---\n";
    cin>>ch;
    switch(ch){
        case 'c':
            cout<<"size of char is "<<sizeof(char)<<" Bytes\n";
        case 'i':
            cout<<"size of int is "<<sizeof(int)<<" Bytes\n";

        case 'l':
            cout<<"size of long is "<<sizeof(long)<<" Bytes\n";
        case 'll':
            cout<<"size of long long is "<<sizeof(long long)<<" Bytes";
        case 'f':
            cout<<"size of float is "<<sizeof(float)<<" Bytes";
        case 'd':
            cout<<"size of double is "<<sizeof(double)<<" Bytes";

        case 'ld':
            cout<<"size of long double is "<<sizeof(long double)<<" Bytes";

        case 'b':
            cout<<"size of bool is "<<sizeof(bool)<<" Bytes";

        return 0;


    }

}
