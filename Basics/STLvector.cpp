#include<iostream>
#include<vector>
using namespace std; 

int main(){

    vector<int> v;

    /*already size lena, 5-->size of the vector,
    1--> sare number ko 1 se initialize karna */
    vector<int> a(5, 1);
     cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //to copy a ke element dusre vector mai
    vector<int> last(a);
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity " <<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity " <<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity " <<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity " <<v.capacity()<<endl;
    cout<<"size " <<v.size()<<endl;

    cout<<"element at second index " <<v.at(2) <<endl;

    cout<<"front " <<v.front()<<endl;
    cout<<"back " <<v.back()<<endl;

    //to remove the element pushed in a vector
    cout<<"before pop " <<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //to empty the vector
    cout<<"before clearing->size " <<v.size()<<endl;
    v.clear();
    cout<<"after clearing->size " <<v.size()<<endl;
}