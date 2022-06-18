#include <bits/stdc++.h>

using namespace std;

bool checkbalancedparen(string exp)
{
    stack<char> s;
    int n = exp.size();
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '[' || exp[i] == '{' || exp[i] == '(')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == '}' || exp[i] == ')')
        {
            if (s.top() == '[' && exp[i] == ']')
                s.pop();
            else if (s.top() == '{' && exp[i] == '}')
                s.pop();
            else if (s.top() == '(' && exp[i] == ')')
                s.pop();
            else
                return false;
        }
        
    }
    return s.empty();
}

int main()
{
    string exp;
    cout << "enter a expression ";
    cin >> exp;
    if (checkbalancedparen(exp))
        cout << "balanced";
    else
        cout << "not balanced";

    return 0;
}