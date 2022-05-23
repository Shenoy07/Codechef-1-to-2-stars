#include<bits/stdc++.h>

using namespace std;

int main(){

    // int n;

    // cin>>n;

    vector<int> numbers;

    for(int i = 0; i < 4;i++)
    {
        int element;
        cin>>element;
        numbers.push_back(element);
    }

    

    int sizeOfArray = numbers.size();

    // cout<<sizeOfArray<<endl;
    while(sizeOfArray != 2){
        for(int i = 0; i < numbers.size()-1; i++){
        numbers[i] = numbers[i]%10 + numbers[i+1]%10;
        numbers[i] = numbers[i]%10;
    }
    sizeOfArray--;
    numbers.pop_back();
    }
    
    string s;
    ostringstream v;

    if(!numbers.empty()){

        copy(numbers.begin(), numbers.end()-1, ostream_iterator<int>(v,""));

        v<<numbers.back();
    }
    
    cout<<v.str()<<endl;
    return 0;
}