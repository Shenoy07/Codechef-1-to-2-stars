#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while (t--)
    {
        int U,V,A,S;

        cin>>U>>V>>A>>S;


        if(pow(V,2) >= pow(U,2)+ 2 * A*(-1) * S)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    
    return 0;
}