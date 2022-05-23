#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        int n,s;

        cin>>n>>s;

        int diff=0;

        if(n>=s)
        cout<<s<<endl;

        if(n<s)
        cout<<2*n-s<<endl;
    }
    return 0;
}