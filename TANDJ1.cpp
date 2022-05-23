#include<bits/stdc++.h>

using namespace std;


int main(){


    int t;

    cin>>t;

    while(t--){

       int a,b,c,d,k;

       cin>>a>>b>>c>>d>>k;

       int dist;

        dist = abs(a-c)+abs(b-d);

        if(k>=dist && dist%2 == k%2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;




    }
    return 0;
}