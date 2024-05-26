#include<iostream>
#include<deque>
using namespace std;

int main(){

    /* deque --> used to update, delete the first and the last element
    of the array at same instance of time */
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;

    //d.pop_front();
    cout<<endl;

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;


    //to find the first index
    cout<<"first element's index is "<<d.at(1)<<endl;
    //to find the first element
    cout<<"first element "<<d.front()<<endl;
    cout<<"last element "<<d.back()<<endl;


    //to erase the element or the complete vector
    cout<<"before erase " <<d.size()<<endl;

    //d.begin--> begin se chalu kar 
    //d.begin()+1 --> ek element delete karega(pehela element)
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    
}
