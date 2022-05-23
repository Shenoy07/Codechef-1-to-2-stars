#include<bits/stdc++.h>

#define ll long long int

using namespace std;



int main(){

    int t;
    cin>>t;
    while(t--){
        
        ll b, c;

        cin>>b>>c;
        
        ll x = lcm(b,c);

        cout<<x/b<<endl;
    }
    return 0;
}