#include<iostream>

using namespace std;

int main(){
    
    int t;

    cin>>t;

    if(t<1 || t> 1000)
    exit(0);


    while(t--)
    {
        int n,m;

        cin>>n>>m;
        if(n<0 || n>1000 || m<1 || m>1000)
        exit(0);
        
        cout<<m*n<<endl;

    }
    return 0;

}