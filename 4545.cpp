#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() 
{
    int t;
    cin >> t;
    while (t --) 
	{
		int a, b;
        cin >> a >> b;
        if(a & b ) cout << (a & b) << endl;
        else cout << "1" << endl;
    }
    return 0;
}
