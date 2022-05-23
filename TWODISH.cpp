#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;
    if(t<1 || t>100)
    exit(0);

    while(t--){
        
        int n,a,b,c;
        if(a<1 || a>100 || n<1 || n>100 || b<1 || b>100 || c<1 || c>100)
        exit(0);


        cin>>n>>a>>b>>c;

        if((a+c)>=n && b>=n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }

    return 0;
}