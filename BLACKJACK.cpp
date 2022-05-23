#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

    int a, b;

    cin>>a>>b;

    int x = a+b;

    if((21-x) >= 1 && (21-x) <= 10)
    {
        cout<<(21-x)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    }
    return 0;
}