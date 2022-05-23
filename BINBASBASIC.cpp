#include<iostream>
#include<string>
using namespace std;

int main(){


    int t;

    cin>>t;
    
    if(t<1 || t>1000)
    exit(0);
    
    
    while(t--){
    int n,k;

    cin>>n>>k;
    
    if(n<1 || n>1000 || k<0 || k>n)
    exit(0);
    
    string a;

    cin>>a;

    int count=0;

   for(int i = 0, j = n-1; i<=j && j>=i;i++,j--){
       if(a[i]!=a[j])
       {
           count += 1;
       }

   }
       
    // if(k==count){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    if(n%2){
        if(count<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(count<=k && (k-count)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
    return 0;
}