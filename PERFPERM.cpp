// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//     int n,k;
//     cin>>n>>k;


// //    std::vector<int> a(n);

// //    for (int i = 1; i <= n; i++)
// //    a.push_back(i);
// // //    std::iota(a.begin(), a.end(), 1);

//      int a[n];

//     for(int i = 1 ; i <= n; i++)
//     a[i] = i;



//    int count = 0;

//    for(int i = 1 ; i <= n ; i++)
//    {
       
       
//            if(a[i]%i == 0)
//            {
//                count = count + 1;
//            }
//            else if(count > k || count < k){
//                next_permutation(a, a + n);
//                i = 1;
//                count = 0;
//            }
       
//    }

//    for(int i = 1 ; i <= n; i++)
//     cout<<a[i]<<" ";
    
//     cout<<endl;

//     }
//     return 0;
// }





#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,k;

        cin>>n>>k;

        int a[n];

        for(int i = 0; i < n; i++)
        a[i] = i+1;

        int count = 0;
        do {
         for(int i = 0; i < n; i++)
            {
                if(a[i]/(i+1)==0)
                {
                    count = count + 1;
                }
            }

            cout<<endl;
    } while (next_permutation(a, a + n) && (count > k || count < k));
    
    for(int i = 0 ; i < n; i++)
    cout<<a[i]<<" ";

    cout<<endl;

    return 0;
}}