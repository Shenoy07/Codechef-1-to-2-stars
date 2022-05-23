#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    
    int n,k;
    cin>>n>>k;

   int value[k];

   for(int i = 0; i<k; i++)
   cin>>value[i];

   std::vector<int> vec(n);

   
   std::iota(vec.begin(), vec.end(), 1);

    
    int flag = 0;

    while(k--){
        int i = 0;
        int x = value[i];
        
        if(flag == 1 )
        {
            i = 0;
        }

        if((vec[x]*(vec[x]+1)/2) == (value[i]*(value[i]+1)/2))
        {
            i++;
        }else{
            std::next_permutation(vec.begin(), vec.end());
            k++;
            flag = 1;
        } 
    }

    for(int i = 0; i < n; i++)
    cout<<vec[i]<<" ";

    cout<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[k];
//     for (int i = 0; i < k; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + k);
//     vector<int> vec;
//     int prev = 0;
//     for (int j = 0; j < k; j++)
//     {
//         for (int l = arr[j]; l > prev; l--)
//         {
//             vec.push_back(l);
//         }
//         prev = arr[j];
//     }
//     for (auto it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }