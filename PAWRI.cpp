#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        string s;

        cin>>s;

        for(ll = 0 ; i + 4 < s.length(); i++)
        {
            if(s.substr(i,5) == "party"){
                s[i+1] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}


