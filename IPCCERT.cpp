//usecpptemp

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, k, q;

    cin>>n>>m>>k;

    int count = 0 ;
    int a[n];
    int t = n;
    while(t--){
    
    int sum = 0;   

    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        sum += a[i];
    } 
    cin>>q;

    if(sum >= m && q <= 10)
    count = count + 1;

    }

    cout<<count<<endl;
    return 0;
}