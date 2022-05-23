#include<iostream>


using namespace std;

int main(){
    
    int n;

    cin>>n;

    int a[n];
    int greatest=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0 && a[i]>a[i-1]){
            greatest = a[i];
        }
    }


    cout<< greatest<<endl;
    return 0;

}