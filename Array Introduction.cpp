//Array Introduction.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int a[10000], n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i > 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}