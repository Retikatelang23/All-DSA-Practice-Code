#include <iostream>
using namespace std;

// int power(int a, int b){

//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     return ans;

// }

// int main(){

//     int a, b;

//     cin >> a >> b;

//     int answer = power(a, b);
//     cout<<" The answer is "<< answer <<endl;
//     return 0;
// }

// ******************we can also do like**********************


// practiced once


int power(int a, int b){

    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;

    }
     return ans;
    
}


int main(){

    int a, b;
    cin >> a >> b;

    int ans = power(a , b);
    cout << ans <<endl;
}




// int power()
// {

//     int a, b;
//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     return ans;
// }

// int main()
// {

//     int a, b;

//     cin >> a >> b;

//     int answer = power(a, b);
//     cout << " The answer is " << answer << endl;

//     int c, d;
//     answer = power(c, d);
//     cout << " The answer is " << answer << endl;

//     int e, f;
//     answer = power(e, f);
//     cout << " The answer is " << answer << endl;
//     return 0;
    
// }