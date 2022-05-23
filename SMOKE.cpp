#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){
        double n, x, y;

        cin>>n>>x>>y;

        if(n<=100)
        {
            double car;
            double bus;

            car = (ceil(n/4))*y;
            bus = (ceil(n/100)*x);
            
            if(car<bus)
            {
                cout<<car<<endl;
            }else{
                cout<<bus<<endl;
            }
        }

        if(n>100){
            
            int c = n;
            double OnlyCar = (ceil(n/4))*y;
            double OnlyBus = (ceil(n/100))*x;
            double mod1 = c%100;
            double mod2 = c%4;
            double CarAndBus = floor(n/100)*x + ceil(mod1/4)*y;
            double BusAndCar = floor(n/4)*y   + ceil(mod2/100)*x;

            double v [4] = {OnlyCar, OnlyBus, CarAndBus, BusAndCar};
            cout<<*min_element(v, v+4)<<endl;
        }
    }

    return 0;
}