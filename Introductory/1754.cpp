// Problem: Coin Piles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1754
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define fb(i,n) for(int i=n-1;i>=0;i--)
#define w(t) cin>>t; while(t--)
#define pb push_back
#define F first
#define S second
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define mkp make_pair
#define full(a) a.begin(),a.end()
#define tr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define MOD 1000000007

typedef long long ll;
typedef vector<ll>             vi;
 
 
void solve()
{
	ll a,b;
	bool flag = true;
	cin>>a>>b;
	if(a>b) swap(a,b);
	if(b>2*a) flag = false;
	a%=3;
	b%=3;
	if(a==0 && b==0){
		// do nothing
	}
	else if(a==1 && b==2){
		// do nothing
	}
	else if(a==2 && b==1){
		//do nothing
	}
	else flag = false;
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
 
    ll t=1;
    cin>>t;
    fo(i,t)
    solve();
    return 0;   
}