#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){

    string s;

    ll a, b, n;

    cin>>n>>a>>b;

    ll sarthak = 0 , anuradha  = 0;

    for(ll i = 0; i < n; i++)
    {
        cin>>s;

        if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X'){
            sarthak = sarthak + 1;
        }
        else{
            anuradha = anuradha + 1;
        }
    }

    sarthak = sarthak * a;
    anuradha = anuradha * b;

    if(sarthak > anuradha){
        cout<<"SARTHAK"<<endl;
    }else if (anuradha > sarthak )
    {
        cout<<"ANURADHA"<<endl;
    }
    else{
        cout<<"DRAW"<<endl;
    }


    }
    return 0;
}