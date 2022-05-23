#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        int n,k;

        cin>>n>>k;

        if(k==0){
            cout<<n<<endl;
        }else{
            cout<<n%k<<endl;
        }
        
        // if(n<k)
        // cout<<n<<endl;

        // if(n==k)
        // cout<<0<<endl;
        // if(n>k)
        // {
        //     while (n>0 && n-k >= 0)
        //     {
        //         n = n-k;
        //     }
        //     cout<<n<<endl;
        // }

        
    }

    return 0;
}