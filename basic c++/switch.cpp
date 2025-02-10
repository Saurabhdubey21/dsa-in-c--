#include<bits/stdc++.h>
using namespace std;
// take the day no and print the corresponding day
//for 1 print Monday
//for 2 print tuesday and so on for 7 days
int main(){
    int day;
    cout<<"check:";
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thrusday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"Saturday";
        break;
        case 7:
            cout<<"Sunday";
        default:
        cout<<"Invalid" ;  
    }
    return 0;
}