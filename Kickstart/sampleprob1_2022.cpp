#include<iostream>
#include<algorithm>
#include<climits>
                   
using namespace std;
                   
int main()
{
    int k;cin>>k;
    int op[k];
    for (int i = 0; i <k; i++)
    {
        op[i]=0;
    }
    
   while (k>0)
    {
        
        int n,m;cin>>n>>m;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for (int i = 0; i <n; i++)
        {
            sum+=arr[i];

        }
        for (int i = 0; i <k; i++)
        {
            op[i]=sum%arr[i];
        }
        
        k--;
    }
    for(int i=0;i<k;i++){
        cout<<"Case #"<<i<<" :"<<op[i]<<endl;
    }                            
    return 0;
}
