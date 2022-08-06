#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int len;
    int bre;
};

int area(struct Rect* r1) { // Same pass by address like primitive data type passing.Just replace the data type by..
    r1->len=20;
    r1->bre=10;
    return (*r1).len*(*r1).bre; // .. struct Rect variable_name .. NOTE:- (*r1).len == r1->len
}

int main() {
    struct Rect r;
    r.len=5;
    r.bre=10;
    cout<<"Area is: "<<area(&r);
}