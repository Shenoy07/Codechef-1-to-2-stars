#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    
    std::cin>>n>>k;
    
    int arr[n];
    int flag=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==k){
            flag=1;
        }
    }

    if(flag==1)
    cout<<1;
    else
    cout<<-1;

    return 0;
}