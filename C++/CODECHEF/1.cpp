#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
vector<int> total;
 while(t--) {
int x,y;
cin>>x>>y;
int one=4*x+y;
total.push_back(one);
 }

 for(int i=0; i<total.size(); i++) {
    cout<<total[i]<<endl;
 }
}