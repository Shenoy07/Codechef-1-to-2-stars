#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;
    if(t<1 || t>10000)
    exit(0);

    
    while(t--){
        int a, b, c;

        cin>>a>>b>>c;
        if(a<1 ||a>100000000 || b<1 || b>100000000 || c<1 ||c>100000000)
        exit(0);

        int s1,s2,s3;

        s1 = a+b;
        s2 = b+c;
        s3 = a+c;

        int arr[3]={s1,s2,s3};
        

        sort(arr,arr+3);
        cout<<arr[2]<<endl;
    }
    return 0;
}


// while(t--){

    //     int a, b, c;

    //     cin>>a>>b>>c;
    //     if(a<1 ||a>100000000 || b<1 || b>100000000 || c<1 ||c>100000000)
    //     exit(0);

    //     int s1,s2,s3;

    //     s1 = a+b;
    //     s2 = b+c;
    //     s3 = a+c;

    //     if(s1>s2 && s2>s3)
    //     cout<<s1<<endl;
    //     else if(s1<s2 && s2>s3)
    //     cout<<s2<<endl;
    //     else if (s1==s2 && s1>s3)
    //     cout<<s1<<endl;
    //     else if (s2==s3 && s2>s1)
    //     cout<<s2<<endl;
    //     else if (s3==s1 && s1>s2)
    //     cout<<s3<<endl;
    //     else
    //     cout<<s3<<endl;

    // }