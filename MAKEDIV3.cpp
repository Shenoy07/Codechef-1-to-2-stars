#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,n;

    cin>>t;
    if(t<1 || t> 500){
        exit(0);
    }
    while(t--){

        cin>>n;
        
        for(int i=1;i<=n;i++){
            if(i==1 || i ==n){
                cout<<3;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
        
    }

    return 0;
}