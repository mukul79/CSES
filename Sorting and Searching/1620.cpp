// Problem: Factory Machines
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1620/
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
 
typedef long long int ll;
typedef vector<ll>             vi;
 
 
void solve(ll p)
{
    ll n,t;
    cin>>n>>t;
    vi a(n);
    fo(i,n) cin>>a[i];
    ll start = 0;
    ll end = 1e18, res = 1e10;
    while(start<=end){
    	ll mid = start+((end-start)>>1);
    	ll sum=0;
    	// res = mid;
    	fo(i,n) sum+=(min(mid/a[i],(ll)1e9));
    	if(sum<t){
	    	start = mid+1;
    	}
    	else{
    		res = mid;
    		end = mid-1;
    	}
    }
    cout<<res;
    
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
    solve(i);
    return 0;   
}