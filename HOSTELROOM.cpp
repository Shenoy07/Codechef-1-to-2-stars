#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n, x;

        cin>>n>>x;

        int number;
        int maxPeople = x;

        for(int i = 0 ; i < n; i++){

        cin>>number;
        
        maxPeople = maxPeople + number;
        if(maxPeople > x)
        x = maxPeople;

        }

        cout<<x<<endl;
    }

    return 0;
}