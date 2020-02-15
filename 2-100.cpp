#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
typedef double dd;
int main(){
    // int m,n;
    // ll x;
    // cin >> x >> m;
    // x = x%m;
    // if (x<0) x+=m;
    // cout << x;
    // dd x  = 0.3*3+ 0.1 ;
    // printf("%.17f",x); // to restrict to certain decimal points
    // ll a,b ;
    // cin >> a >> b ;
    // if (abs(a-b) < 1e-9){
    //     cout << " a and b a re eq";
    // }
    // vector<int> g1; 
  
    // for (int i = 1; i <= 5; i++) 
    //     g1.push_back(i); 
    
  
    // cout << "Output of begin and end: "; 
    // for (auto i = g1.begin(); i != g1.end(); ++i) 
    //     cout << *i << " "; 
  
    // cout << "\nOutput of cbegin and cend: "; 
    // for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
    //     cout << *i << " "; 
  
    // cout << "\nOutput of rbegin and rend: "; 
    // for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
    //     cout << *ir << " "; 
  
    // cout << "\nOutput of crbegin and crend : "; 
    // for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
    //     cout << *ir << " "; 
    
    // cout << "\nSize : " << g1.size(); 
    // cout << "\nCapacity : " << g1.capacity(); 
    // cout << "\nMax_Size : " << g1.max_size(); 
    // g1.resize(6);
    // cout << "\nthe size : " << g1.size();
    // if(g1.empty() == true){
    //     cout<< "the vector array is empty" ;
    // }
    // else {
    //     cout<< "the array is not empty" ;
    // }
    // g1.shrink_to_fit();
    // for(auto ij = g1.begin(); ij != g1.end();++ij){
    //     cout << *ij << " " ;
    // }

    // vector<int> g1 ;
    // for (auto i = 0; i<10; ++i){
    //     g1.push_back(i);
    // }
    // for (auto ij = g1.begin(); ij != g1.end(); ++ij){
    //     cout<< *ij  <<" " <<endl;
    // }
    // for (auto ik = g1.rbegin(); ik!=g1.rend();++ik){
    //     cout<< *ik << " ";
    // }
    // g1.resize(4);
    // g1.shrink_to_fit();
    //  for (auto ij = g1.begin(); ij != g1.end(); ++ij){
    //     cout<<"\n" <<*ij  <<" " <<endl;
    // }
    // cout<< "\n" << g1.front() << " " << g1.back() << g1[2] << g1.at(1) ;
    // cout<< "\n" << *g1.data();
    // Assign vector 
    vector<int> v; 
  
    // fill the array with 10 five times 
    v.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    cout <<"\nele : ";
    v.insert(v.begin(), 5); 

    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout <<"\nele : " ;
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << "\nThe first element is: " << v[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size(); 
  
    // two vector to perform swap 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
    return 0; 

}