#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){


        int n,b;
        cin>>n;

        int sum = 0;

        for(int i = 0; i < 2*n; i++)
        {
            cin>>b;
            sum = sum +b;
        }
        
        if(sum%2 == 0 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}