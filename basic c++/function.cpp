// Functions are used set of code which performs something for you
// functions are used to modularise code
// function are used to increase readability
// function are used to same code multiple times
//void-which does not returns anything
//return
//parameterised
//non parameterised
#include<bits/stdc++.h>
using namespace std;
void printName(){
    cout<<"Hey Saurabh";
}
int main(){
    printName();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void printName(string name){
    cout<<"Hey "<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    printName(name);
    string name1;
    cin>>name1;
    printName(name1);

    return 0;
}