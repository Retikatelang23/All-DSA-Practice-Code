#include <iostream>
using namespace std;

//function signature (tells ki ye function return karta hai 
// ya nahi karta or karta hai to kiss cheez ko return kart hai)
// and also tells about the parameters
void printCounting(int n){
    //function body(tell ki ye function kar kya raha hai)
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout<<endl;
}
int main(){

    int n;
    cin>>n;

    // function call
    printCounting(n);

    return 0;
}