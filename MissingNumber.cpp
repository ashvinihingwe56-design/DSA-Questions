#include<iostream>
using namespace std;
int main(){


    int n = 5;
    int arr[n] = {1,2,4,5};

    int result= 0;

    for(int i = 1; i <= n; i++){

        result ^= i;
    }
    for(int i = 0; i<n-1; i++){
        result ^= arr[i];
    }
    cout<<"Missing Number is :"<<result;
return 0;
}