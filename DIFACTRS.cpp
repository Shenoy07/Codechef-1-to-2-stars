#include<iostream>

using namespace std;

int main(){

    int N;
    int c=0;
    int d=0;
    
    std::cin>>N;
    int a[N];
    
    for(int i=1;i<=N;i++)
    {
        if(N%i == 0)
        c+=1;
    }
    cout<<c<<endl;
    for(int i=1;i<=N;i++)
    {
        if(N%i == 0)
        cout<<i<<" ";
    }
    return 0;
}