#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
   
    int n;
    cin>>n;


    char alice[n];
    char bob[n];
    for(int i = 0;i < n; i++)
    cin>>alice[i];

    for(int i = 0;i < n; i++)
    cin>>bob[i];
    
    sort(alice,alice+n);
    sort(bob, bob+n, greater<char>());

    char a[2*n];
    int j = 0;
    for(int i = 0; i<n/2; i++)
    {
        if(alice[i]<bob[i])
        a[i] = alice[i];
        a[n-i-1] = bob[i];
        
    }

    cout<<a<<endl;

    }
    return 0;
}