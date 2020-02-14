#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
//   //int a,b;
//   string x ;
// //   while (cin >> x) { // with 1.in
// // // code
// //     cout<< "hello\n" ;
// //   }
//
//   getline(cin,x);
//   cout << x ;
  // int64_t a = 123456789;
  // ll b = (ll)a*a;
  // cout << b << "\n";
  ll x ;
  ll m,n ;
  cin >>x>> m ;
  
  x = x%m;
  cout << x ;
  if (x < 0) x += m;
  cout << x ;
}
