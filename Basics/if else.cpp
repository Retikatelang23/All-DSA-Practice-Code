#include<iostream>
using namespace std;

int main(){
//based on the ascii table
char ch;
   cin>>ch;


if (ch>=65 && ch<=90){
    cout<<"this is a Uppercase "<<endl;
}
else if(ch>=97 && ch<=122){
    cout<<"this is lowercase "<<endl;
}
else if(ch>=48 && ch<=57){
    cout<<"this is a digit "<<endl;
}
else{
    cout<<"you entered wrong character "<<endl;
}
  return 0;
  }