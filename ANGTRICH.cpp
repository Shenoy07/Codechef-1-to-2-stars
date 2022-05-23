#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;

    cin>>a>>b>>c;

    if(a<0 || b<0 || c<0 || a>180 || b>180 || c>180)
    {
        exit(0);
    }
    
    if(a==0 || b==0 || c==0)
    {
        cout<<"NO";
        exit(0);
    }
    if(a==180 || b==180 || c==180)
    {
        cout<<"NO";
        exit(0);
    }
    if(a+b+c == 180)
    cout<<"YES";
    else 
    cout<<"NO";

    return 0;
}