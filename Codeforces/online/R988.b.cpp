#include <bits/stdc++.h>
using namespace std;
     
#define ll long long
#define ld long double 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
             
void runcase(){
   int n; cin >> n;
   int target = n-2;
   ll a[n];
   for(auto &x : a){
     cin >> x;
   }
   unordered_set<int> sett;
   for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
       if(i!=j && sett.find(a[i])==sett.end() && a[i]*a[j]==target){
         cout << a[i] << " " << a[j] << '\n';
         return;
       }
     }
     sett.emplace(a[i]);
   } 
}
     
int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t(1); cin>>t;
   while(t--) runcase();
   return 0;
}

