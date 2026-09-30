#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){

    string password ;

    cout<<"Enter the Password :"<<endl;
    cin>>password;

    if(password.length() < 8){
        cout<<"Weak Password"<<endl;
        return 0;
    }

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    for(char ch : password){

     if(isupper(static_cast<unsigned char> (ch))){     
               upper = true;
        } else if(islower(static_cast<unsigned char>(ch))){
            lower = true;

        } else if(isdigit(static_cast<unsigned char>(ch))){
            digit = true;
        } else{
            special = true;
        }
    }
    if(upper && lower && digit && special)
      
    {
        cout<<"Strong Password ";

    } else{
        cout<<"Weak Password";
    }

return 0;
}