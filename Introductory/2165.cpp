// Problem: Tower of Hanoi
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2165
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

void rec(ll n, vector<pair<ll,ll>>& v, ll start, ll end, ll aux){
	if(n==0) return;
	if(start==end) return;
	rec(n-1,v,start,aux,end);
	v.push_back({start,end});
	rec(n-1,v,aux,end,start);
}

void solve()
{
	ll n;
	cin>>n;
	vector<pair<ll,ll>> v;
	rec(n,v,1,3,2);
	cout<<v.size()<<"\n";
	for(auto &it:v){
		cout<<it.first<<" "<<it.second<<"\n";
	}
}
 
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    // #ifndef ONLINE_JUDGE 
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    // #endif
 
    ll t=1;
    // cin>>t;
    fo(i,t)
    solve();
    return 0;   
}