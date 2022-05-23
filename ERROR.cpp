#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

    string s;

    cin>>s;

    string sub1 = "010";
    string sub2 = "101";

    int found1 = s.find(sub1);
    int found2 = s.find(sub2);

    if(found1 >= 0 || found2 >= 0)
    {
        cout<<"Good"<<endl;
    }
    else{
        cout<<"Bad"<<endl;
    }
    // cout<<found1<<endl;
    // cout<<found2<<endl;

    }
    return 0;
}