#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int len;
    int bre;
};

int area(struct Rect r1) { // Same pass by value like primitive data type passing.Just replace the data type by..
    return r1.len*r1.bre; // .. struct Rect variable_name
}

int main() {
    struct Rect r;
    r.len=5;
    r.bre=10;
    cout<<"Area is: "<<area(r);
}