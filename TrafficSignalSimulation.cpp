#include<iostream>
#include<string>
using namespace std;
int main(){

    string signals[] = {"RED","GREEN","YELLOW"};
    string current;

    int K;
    cout<<"Enter current Signal :"<<endl;
    cin>>current;

    cout<<"Enter Value of K :"<<endl;
    cin>>K;

    int index;

    if(current == "RED"){
        index = 0;
    } else if(current == "GREEN"){
        index =1;
    } else {
        index =2;
    }
 int new_Index = (index + K) % 3;

 cout<<"Signal After changes :"<<signals[new_Index]<<endl;
return 0;
}