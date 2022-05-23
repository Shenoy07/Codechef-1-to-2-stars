#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        float s,a,b,c;

        cin>>s>>a>>b>>c;

        s = s + ((s*c)/100);

        if(s>=a && s<=b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }

    return 0;
}