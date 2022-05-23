#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int t;

    cin>>t;

    while (t--)
    {
        int x,y;

       cin>>x>>y;

       x = x/2;

       if(y>=x){

           cout<<x<<endl;
       }else{
           cout<<y<<endl;
       }
    }
    
    
    return 0;



}