#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int n100, n50, n20, n1;
    n100 = n50 = n20 = n1 = 0;

    switch(n >= 100){

        case 1: n100 = n/100;
                n = n - n100 * 100; 
        break;
    }

    switch(n >= 50){

        case 1: n50 = n/50;
                n = n - n50 * 50;
        break;
    }

    switch(n >= 20){

        case 1: n20 = n/20;
                n = n - n20 * 20;
        break;
    }
       
    switch(n >= 1){

        case 1: n1 = n/1;
                n = n - n1 * 1;
        break;
    }
        
    cout << " No of hundred notes " << n100<<endl;
    cout << " No of fifty notes " << n50<<endl;
    cout << " No of twenty notes " << n20<<endl; 
    cout << " No of one coin " << n1<<endl;  
    }
    
    
