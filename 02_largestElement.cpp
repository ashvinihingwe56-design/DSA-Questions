#include<iostream>
using namespace std;
int main(){
 int arr[] = {10,25,7,40,5};
 int n = 5;
 int largest = arr[0];

 for (int i = 0; i < n; i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
 }
 cout<<"The Largest Element is: "<<largest;
return 0;
} 