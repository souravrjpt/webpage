#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
    int size, f;
    cin>>size>>f;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int orsum = 0;

    for (int i = 0; i < size; i++)
        orsum |= arr[i];

    if ((orsum | f) != f)
        cout << -1 << endl;
    else
        cout << (orsum xor f) << endl;
   
    }
    // orcheck(size,f,arr);
}