//if a school has following rules for grading system:
//below 25=f
//25 to 44=E
//45 to 49=D
//50 to 59=c
//60 to 79=B
//80 to 100=A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"marks:";
    cin>>marks;
    cout<<"grade:";
    if(marks<=24){
        cout<<"F";
    }
    if(marks>=25&&marks<=44){
        cout<<"E";
    }
    if(marks>=45&&marks<=49){
        cout<<"D";
    }
    if(marks>=50&&marks<=59){
        cout<<"C";
    }
    if(marks>=60&&marks<=79){
        cout<<"B";
    }
    if(marks>=80&&marks<=100){
        cout<<"A";
    }
}