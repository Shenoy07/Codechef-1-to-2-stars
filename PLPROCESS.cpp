#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){

        ll n;
        cin>>n;

        ll a[n];
        ll p[n]; //prefix sum array
        ll sum = 0;
        for(ll i = 0 ; i < n; i++)
        {
            cin>>a[i];
            sum = sum + a[i];
            p[i] = sum;
        }

        ll x = sum;  //for comparison 

        for(ll i = 0; i < n; i++){
            x = min(max(p[i], sum - p[i]), x);
        }


        cout<<x<<endl;
    }
    return 0;
}