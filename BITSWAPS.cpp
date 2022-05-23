#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        vector<int> a;

        for(int i = 0; i < n;i++)
        {
            int element;
            cin >> element;
            a.push_back(element);
        }

        vector<int> b;

        b = a;

        sort(b.begin(), b.end());

        for( int i = 0; i < n ; i++)
        {for( int j = 0; j < n; j++)
        {
            if((i != j) && (a[i] & a[j] != 0 )){
                if(a[i]<a[j]){
                    continue;
                }else if (a[i]>a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                


            }
        }}
        

        if(a == b)
        cout<<"YES";
        else
        cout<<"NO";
        }

   

    return 0;
}


// std::vector<int> k;

// for(int i = 0 ; i< n ; i++) {
//      int element;
//      cin >> element; 
//      k.push_back(element);
// }