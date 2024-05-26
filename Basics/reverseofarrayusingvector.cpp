#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){

    for(int i = 0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout<<endl;
    cout<<"retika is a cuttiiippiiieeee"<<endl;
    cout<<endl;
}

void reverse(vector<int> &v){

    int s = 0, e = v.size()-1;
    
    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    cout<<"reverse function wala print: ";
    print(v);
}

int main(){

    vector<int> v;
    
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    reverse(v);
    
    cout<<"int main wala print: ";
    print(v);

    return 0;
}