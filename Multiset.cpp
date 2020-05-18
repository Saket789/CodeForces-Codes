
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define pf push_front
 
using namespace std;
 
typedef long long ll;
 
const int mod = 1000000007;
const double dancila = 3.14159265359; // PI 
const double eps = 1e-9;
 
int n, q, aib[2000002];
void add(int nod, int val)
{
	for(; nod <= n; nod += (nod & (-nod)))
		aib[nod] += val;
}
int compute(int nod)
{
	int ans = 0;
	for(; nod; nod -= (nod & (-nod)))
		ans += aib[nod];
	return ans;
}
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	cin >> n >> q;
	for(int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		add(x, 1);
	}
	for(; q; --q)
	{
		int x;
		cin >> x;
		if(x > 0)
			add(x, 1);
		else
		{
			x = -x;
			int ans = 0;
			for(int stp = (1<<19); stp > 0; stp >>= 1)
				if(ans + stp < n && aib[ans+stp] < x)
					x -= aib[ans+stp], ans += stp;
			++ans;
			add(ans, -1);
		}
	}
	for(int i = 1; i <= n; ++i)
		if(compute(i) > compute(i-1))
		{
			cout << i;
			return 0;
		}
	cout << 0;
    return 0;
}