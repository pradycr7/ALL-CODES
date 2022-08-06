#include <bits/stdc++.h>
using namespace std;

struct rectangle {
    int len;
    int bre;
};

int main() {
   struct rectangle ob1={5,10};
   struct rectangle* p=&ob1;
   cout<<ob1.len<<endl;
   cout<<(*p).len<<endl;
   cout<<p->len<<endl; // Easy represntation of (*p).len
}