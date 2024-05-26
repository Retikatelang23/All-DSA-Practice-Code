#include<iostream>
using namespace std;

// walking example

void reachHome(int src, int dest){

    cout << " source " << src << " Destination " << dest << endl;
    // base case
    if(src == dest){
        cout << " Reached Home" << endl;
        return ;
    }

    // processing -> ek step aage badh jao
    src++;

    //reursive relation
    reachHome(src, dest);

}

int main(){

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}