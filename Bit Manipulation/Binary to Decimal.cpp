#include <bits/stdc++.h>
using namespace std;
void binary_to_decimal(string s)
{
    int n = 0;
    int cnt = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            n = n + cnt;
        }
        cnt = cnt * 2;
    }
    cout << n;
}
int main()
{
    string s;
    cout << "Enter s\t";
    cin >> s;
    binary_to_decimal(s);
    return 0;
}