#include<iostream>

using namespace std;

int main(){

    int t;

    cin>>t;

    if(t<1 || t>21000)
    exit(0);


    while(t--){
        int a, b, x;

        cin>>a>>b>>x;

        if(a < 100 || b < 100 || b < a || a > 200 || b>200)
        exit(0);

        cout<<(b-a)/x<<endl;
    }

    return 0;
}