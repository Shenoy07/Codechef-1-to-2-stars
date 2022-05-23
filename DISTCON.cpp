#include<bits/stdc++.h>

using namespace std;

int main(){

    ll d;

    cin>>d;

    if(d%2 == 1 && d != 1)
    {
        cout<<-1;
        exit(0);
    }

    if(d%2 ==0)
    {
        ll half = d/2;

        cout<<0<<" "<<half<<endl;
        cout<<0<<" "<<-1 * half<<endl;
        cout<<-1 * half<<" "<< 0<<endl;
        cout<<half<<" "<<0<<endl;
    }
    return 0;
}