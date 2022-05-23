#include<bits/stdc++.h>

using namespace std;

int main(){ 
    
    int t;
    cin>>t;

    if(t>1000 || t<1)
    exit(0);

    while(t--){

        
        int n;
        cin>>n;
        if(n>100000 || n<1)
        exit(0);

        char a[n];
        cin>>a;

        int noOfZeros = 0;
        int noOfOnes = 0;

        for(int i = 0 ;i<n;i++)
        {
            if( a[i] == '1' )
            noOfOnes = noOfOnes + 1;

            if( a[i] == '0' )
            noOfZeros = noOfZeros + 1;

        }
         

        // cout<<"1 : "<<noOfOnes<<endl;
        // cout<<"0 : "<<noOfZeros<<endl;
        if(n%2 == 0){
            if(noOfOnes == noOfZeros)
            cout<<"YES"<<endl;
            else if (noOfOnes % 2 == 0 && noOfZeros % 2 ==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }else
        cout<<"YES"<<endl;
        
    }
    
    return 0;
}







 // int i = 0;

        // while(i<n)
        // {
        //     if( a[i] == 1 ){
        //         noOfOnes = noOfOnes + 1;
        //         i++;
        //         break;
        //     }
            

        //     if( a[i] == 0 ){
        //         noOfZeros = noOfZeros + 1;
        //         i++;
        //         break;
        //     }
            
        // } 