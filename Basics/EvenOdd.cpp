#include <iostream>
using namespace std;

// 0 -> odd
// 1 -> even
bool isEven(int a){

    if(a&1){
        return 0;
    }
    return 1;
}

int main(){

    int num;
    cin>>num;

    if (isEven(num)) {
        cout<<" The number is Even "<<endl;
    } else{
        cout<< " The number is odd "<<endl;
    }
} 