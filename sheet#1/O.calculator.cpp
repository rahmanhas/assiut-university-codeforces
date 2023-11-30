#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    char c;
    int a, b;
    cin >> a >> c >> b;

    switch (c)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }

    return 0;
}