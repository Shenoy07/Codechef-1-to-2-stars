#include<iostream>

using namespace std;


int main(){

    int t;

    cin>>t;

    if(t<1 || t>600)
    exit(0);

    while(t--){
        int n;

        cin>>n;
        if(n<2 || n>100000)
        exit(0);


        
        
        for(int i=1;i<n;i++)
        {
            cout<<i+1<<" ";    
        }
            cout<<1;
        
    }

    return 0;
}