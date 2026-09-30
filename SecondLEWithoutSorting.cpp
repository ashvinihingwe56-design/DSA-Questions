#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter no of elements:  "<<endl;
 cin>>n;

 int arr[n];
 cout<<"Enter the Elements: "<<endl;

 for (int i=0; i<n; i++){
    cin>>arr[i];
 }
 int largest = arr[0];
 int secondlargest = -1;

 for(int i=1; i<n; i++){
    if(arr[i]>largest){
        secondlargest = largest;
        largest = arr[i];
    } else if(arr[i] > secondlargest && arr[i] != largest){

        secondlargest = arr[i];
    }
 }
 if(secondlargest == -1){
    cout<<"Secondlargest element is not exist."<<endl;

 } else {
    cout<<"Secondlargest Element is :"<<secondlargest;
 }

return 0;
}