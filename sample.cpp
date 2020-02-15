#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v;
    v.assign(3,10);
    for (auto i= v.begin(); i!=v.end(); ++i){
        cout<<*i<<" ";
    
    }
    v.push_back(101);
    v.insert(v.begin(),200);
    cout << "\n";
    for (auto i= v.begin(); i!=v.end(); ++i){
     cout<<*i<<" ";
    }
    v.erase(v.begin());
    v.erase(v.end()-1);
    cout << "\n";

    for (auto i= v.begin(); i!=v.end(); ++i){
     cout<<*i<<" ";
    }
    cout << "\n";

    for (int i =0; i<= v.size();++i){
        cout<< v[i]<<" ";
    }
    v.pop_back();
    cout << "\n";

    for (int i =0; i<= v.size();++i){
        cout<< v[i]<<" ";
    }

}