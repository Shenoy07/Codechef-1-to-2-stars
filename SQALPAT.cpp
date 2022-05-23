#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;
    if(n<1 || n>200){
        exit(0);
    }

    if(n==1)
    {
        for(int i=1;i<=5;i++)
        cout<<i;

        exit(0);
    }
    int b=1;
    int a = 1;
    while(b<n){
       
       if(b%2==1){
        for(int i=1;i<=5;i++){
        cout<<a<<" ";
        a++;
        if(i%5==0)
        cout<<endl;
   }
       }
        b++;
       if(n%2==0){
           a= a+5;
           for(int i=1;i<=5;i++)
           {
               cout<<a-i<<" ";
               if(i==5)
               cout<<endl;
           }
       }
       b++;
    
    }
   

    return 0;

}