#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

    int n;cin>>n;

    int a[n];
    int dist = 0;
    for(int i =0; i<n ; i++)
    cin>>a[i];
    int gasoline = a[0];
    int i = 1;
    while(gasoline != 0 && i < n)
    {
        dist = dist + 1;
        gasoline = gasoline - 1;
        gasoline = gasoline + a[i];
        i++;
    }

    cout<<gasoline + dist<<endl;       
    }
    return 0;
}