#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    if(t<1 || t>3000){
        exit(0);
    }


    while(t--){


        int n,x;

        cin>>n>>x;

        if(n<1 || n>50)
        exit(0);

        if(x<0 || x>50)
        exit(0);

        int num;
        if(n>=x)
        cout<<x<<endl;
        
        if(n<x)
        {
            while(n<x){
                
                num = x-n -1;
                x = num;
            }
            cout<<x<<endl;
        }
        



    }


    return 0;
}