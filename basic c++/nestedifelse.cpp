//Take the age from the useer and then decide accordingly
//1.if age <18,print-not eligible for job
//2.if age>=18,print-eligible for job
//3.if age>=55 and age<=57,print eligible for job but rtierment soon
//4.if age>57,print-retirment time
//nested loops means inside if else we can also write  if else problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"age:";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for jobs";
    }
    else if(age<=54){
        cout<<"eligible for jobs";
    }
    else if(age<=57){
        cout<<"eligible for jobs but retirement soon";
    }
    else{
        cout<<"retirement time";
    }
}
