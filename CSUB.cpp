#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        char n[x];
        ll count = 0;
        for(ll i = 0; i < x; i++)
        {   
            cin>>n[i];
            if(n[i] == '1')
            {
                count = count + 1;
               
            }
            
        }
        cout<< (count*(count + 1))/2 <<endl;
        
    }
    return 0;
}