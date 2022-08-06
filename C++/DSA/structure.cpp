#include <bits/stdc++.h>
using namespace std;

struct student { // Here we define a structure
    int roll;     // These are the elements of a structure
    string name;
};

int main() {
    struct student s; // Here we declare a structure
    s.roll=0;         // Here we access members of a structure using the dot operator and initialize it a value
    s.name="Test";
    cout<<s.roll;
}