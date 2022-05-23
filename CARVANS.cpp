#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){

        int n;

        cin>>n;

    vector<ll> speeds;

    ll count = 1;
    int min; 
    for(ll i = 0; i<n; i++)
    {
        
        ll elements;
        cin>>elements;
        speeds.push_back(elements);
        if(i == 0 )
        min = speeds[i];
        else if(speeds[i] <= min)
            {
                count++;
            }

            if(speeds[i]<min)
            min = speeds[i];

        

    }       
    

    // if(n == 1)
    // {
    //     cout<<1<<endl;
    // }else
    cout<<count<<endl;
    }
    return 0;
}