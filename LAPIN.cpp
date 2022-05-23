#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

    string s;
    string a, b;

    cin>>s;

    int length = s.length();
    
    a = s.substr(0, length/2);
    sort(a.begin(), a.end());
    if(length%2 == 1)
    {
        b = s.substr(((length/2) + 1), length-1 );
        sort(b.begin(), b.end());
    }
    else{
        b = s.substr(length/2, length-1);
        sort(b.begin(), b.end());
    }
    // cout<<a<<endl;
    // cout<<b<<endl;
    if (a.compare(b) == 0)
    {
         cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
    // if(a == b)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
    }
    return 0;
}