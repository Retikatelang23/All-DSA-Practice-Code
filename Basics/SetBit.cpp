#include <iostream>
#include<math.h>
using namespace std;

int SetBit(int n){

    int count = 0;
    while(n!=0){
        if(n&1 == 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
    
}

int main(){

    int n;
    cin>> n;

    SetBit(n);

    cout<<" the count is " << SetBit(n) <<endl;
    return 0;
}