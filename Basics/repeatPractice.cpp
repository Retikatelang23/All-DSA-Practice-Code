#include<iostream>
#include<math.h>
#include<climits>
#include<vector>
using namespace std;

// int main(){
//     int n;
//     cin >> n;

    //star square
    // int i=0;
    // while(i<n){
    //     int j = 0;
    //         while(j<n){
    //             cout<< "*" ;
    //             j++;
    //         }
    //      cout<<endl;
    //      i++;   
    // }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << "*" ;
    //     }
    //     cout<< endl;
    // } 

    // number square 1111, 2222

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << i;
    //         j++;
    //     }
    //     cout<< endl;
    //     i++;
    // }

    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=n; j++){
    //         cout << i;
    //     }
    //     cout<< endl;
    // }

    //square number increasing

    // int count = 1;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    //triangle 
    // int count = 1;
    // for(int i = 1; i<=n; i++){
    //     for(int j = 1; j<=i; j++){
    //        cout << count << " ";
    //        count++;
    //     }
    //     cout << endl;
    // }

    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     int count = i;
    //     while(j<=i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     int count = i;
    //     while(j<=i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // character square AAA, BBB
//     int i = 1;
//    while(i<=n){
//     int j = 1;
//     while(j<=n){
//         char ch = 'A' + i - 1;
//         cout << ch;
//         j++;
//     }
//    cout << endl;
//    i++;
//    }

    // SQUARE CHAR ABC, ABC
    // int i = 1;
    // char ch = 'A';
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << ch;
    //         ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
//  }

// int main(){

//    int n;
//     cin>>n;

//     int ans = 0;
//     int i=0;

//     while(n!=0){
//         int bit = n&1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n>>1;
//         i++;
//     }
//     cout<< ans <<endl;
    
// }

// if given an array aur dekhna hai ki key element us arrya ami present hai ya nahi
// array = {4,6,7,-8, 5}

// bool linearSearch(int arr[], int size, int key){

//     for(int i = 0; i<size; i++){

//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){

//     int arr[5] = {4,6,7,-8, 5};

//     cout <<"enter the element to search for" << endl;
//     int key;
//     cin >> key;

//     bool found = linearSearch(arr, 5, key);

//     if(found){
//         cout <<"present" << endl;
//     }
//     else{
//         cout <<"not found" << endl;
//     }

// }

//given array ka max aur min nikalna hai

// int min(int arr[], int size){

//     int mini = INT_MAX;

//     for(int i = 0; i<size; i++){

//         mini = min(mini, arr[i]);
//     }
//     return mini;
// }

// int max(int arr[], int size){

//     int maxi = INT_MIN;

//     for(int i = 0; i<size; i++){

//         maxi = max(maxi, arr[i]);
//     }
//     return maxi;
// }
// int main(){

//     int size;
//     cin >> size;

//     int arr[100];

//     for(int i = 0; i<size; i++){
//         cin >> arr[i];
//     }

//     cout << "minimum is" << min(arr, size) << endl;
//     cout << "maximum is" << max(arr, size) << endl;
// }

// bool isPossible(int array[], int n, int m, int mid){

//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i = 0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount > m || arr[i] > mid){
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//     }
//     return true;
// }
// int main(){

//     //int array[4] = {10, 20, 30, 40};
//     vector<int> arr;
//     int n, m;
//     cin >> n >> m;

//     int s = 0; 
//     int sum = 0;

//     for(int i = 0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e - s)/2;

//     while(s<=e){

//         if(isPossible(arr, n, m, mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         int mid = s + (e - s)/2;
//     }
//     return ans;
// }


 

// char toLowercase(char ch){

//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }

// bool isPalindrome(char arr[], int n){

//     int s = 0;
//     int e = n-1;

//     while(s<=e){

//         if(arr[s] != arr[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1 ;
// }

// void reverse(char arr[], int n){
//     int s = 0;
//     int e = n - 1;

//     while(s<e){
//         swap(arr[s++], arr[e--]);
//     }
// }

// int getLength(char arr[]){

//     int count = 0 ;

//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }

//     return count;
// }

// int main(){

//     char arr[20];
//     cout <<"enter your array: " << endl;
//     cin >> arr;

//     cout << "your array is: " << endl;
//     cout << arr << endl;

//     int len = getLength(arr);

//     cout << "length: " << len <<endl;

//     reverse(arr, len);
//     cout << "your array is: " << endl;
//     cout << arr << endl;   

//     cout << "palindrome or not " << isPalindrome(arr, len) << endl;

//     cout << "already lowercase: " << toLowercase('z') << endl;
//     cout << "to lowercase: " << toLowercase('A') << endl;

//     return 0;
// }

// int main(){

//     // char ch[20];

//     // cout << "enter name " << endl;
//     // cin >> ch;
//     // ch[2] = '\0';

//     // cout << "your name is: " << endl;
//     // cout << ch << endl;

//     string str[20];

//     cout << "enter name " << endl;
//     cin >> str;
//     str[2] = '\0';

//     cout << "your name is: " << endl;
//     cout << str << endl;
// }



// char getMaxOccCharacter(string s){

//     int arr[26] = {0};

//     // array of count of characters
//     for(int i = 0; i<s.size(); i++){
//         char ch = s[i];
//         // for lowercase
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }

//     // to find the maximum count
//     int ans = -1;
//     int maxi = -1;
//     for(int i = 0; i<26; i++){
//         if(maxi < arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     char finalAns = 'a' + ans;
//     return finalAns;
    
// }

// int main(){

//     string s;
//     cin >> s;

//     cout << getMaxOccCharacter(s) << endl;

//     return 0;
// }



// to remove all the occurences
// while(s.length() != 0 && s.find(part) < s.length()){
//     s.erase(s.find(part), part.length());
// }
// return s;



// int main(){

//     int num = 7;

//     int *ptr = &num;

//     cout << *ptr << endl;
//     cout << ptr << endl;
// }

// int main(){

//     char s[] = "hello";
//     char *p = s;
//     cout << s[0] << " " << p[0];

// }

// int main(){

//     char x = 're';
//     char *t = x;

//     cout << *t << endl;
// }


