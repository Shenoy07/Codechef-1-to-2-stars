#include <bits/stdc++.h>

using namespace std;

int main(){
    
        int n;
        cin>>n;

        long int a[n];
        int k;
        cin>>k;
        int m;
        cin>>m;

        while(m--){
        
            for(int i=0;i<n;i++){
            a[i] = a[i]*k;

        }
        }
        
        for(int i =0;i<n;i++){
            cout<<a[i];
        }
    
        return 0;

}