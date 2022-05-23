#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;

    cin>>t;

    // if(t<1 || t>12)
    // exit(0);


    while(t--){
    int n;

    cin>>n;

    if(n<4 || n>15)
    exit(0);

    
    float value = pow(0.143 * n, n);
    // cout<<value<<endl;
    cout<<round(value)<<endl;
    }
    
    return 0;
}