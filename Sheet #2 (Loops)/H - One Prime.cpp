#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int main() 
{
    int n, flag=1;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) { flag = 0; break; }
    }
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}