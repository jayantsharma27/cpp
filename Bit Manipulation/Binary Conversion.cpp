#include <bits/stdc++.h>
using namespace std;
void convert_to_binary(int n)
{
    if (n < 1)
    {
        cout << 0;
        return;
    }
    convert_to_binary(n / 2);
    cout << n % 2;
}
int main()
{
    int n;
    cout << "Enter n\t";
    cin >> n;
    convert_to_binary(n);
    return 0;
}