#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    set<string> se;
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size() << endl;
}