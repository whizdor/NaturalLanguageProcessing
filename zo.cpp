#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <climits>
#include <cfloat>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <array>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <iterator>
#include <ctime>
#include <tuple>
#include <numeric>
using namespace std;
#define int long long

int power(int x, int n)
{
    if(n == 0) return 1;
    else
    {
        return x*power(x,n-1);
    }
}

int power2(int x, int n)
{
    if(n == 0) return 1;
    else
    {
        
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    for(int i =0; i <= n; i++)
    {   
        if(i == 0) cout << "0 ";
        else if(i == 1) cout << "1 ";
        else
        {
            int temp = b;
            b = a + b;
            a = temp;
            cout << b << " ";
        }
    }
}