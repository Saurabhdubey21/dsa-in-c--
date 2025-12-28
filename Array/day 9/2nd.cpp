//best time to sell and buy stock
//wecan buy and sell at once
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int price[n];
    cout<<"Enter the prices of stocks: ";
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int cost_price = price[0];
    int max_profit =0;
    int buy_day=0;
    int sell_day=0;
    int min_day=0;
    for(int i=1;i<n;i++){
        int profit=price[i]-cost_price;
        if(profit>max_profit){
            max_profit =profit;
            buy_day=min_day;
            sell_day=i;
        }
        if(price[i]<cost_price){
            cost_price = price[i];
            min_day=i;
        }
    }
    cout<<"best profit :"<<max_profit<<endl;
    cout<<"Enter the stock buying day: "<<buy_day<<endl;
    cout<<"Enter the selling day: "<<sell_day<<endl;
}