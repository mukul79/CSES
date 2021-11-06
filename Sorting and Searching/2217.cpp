// Problem: Collecting Numbers II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2217
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
	ll n,k;
	cin>>n>>k;
	vi a(n+1);
	vi pos(n+1);
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]] = i;
	}
	ll res=1;
	for(ll i=2;i<=n;i++){
		if(pos[i]<pos[i-1]) res++;
	}
	fo(qq,k){
		ll x,y;
		cin>>x>>y;
		set<pair<ll,ll>> st;
		if(a[x]>1) st.insert({a[x]-1,a[x]});
		if(a[x]<n) st.insert({a[x],a[x]+1});
		if(a[y]>1) st.insert({a[y]-1,a[y]});
		if(a[y]<n) st.insert({a[y],a[y]+1});
		for(auto &pp:st){
			ll xx = pp.F;
			ll yy = pp.S;
			if(pos[xx]>pos[yy]) res--;
		}
		swap(a[x],a[y]);
		pos[a[x]]=x,pos[a[y]]=y;
		
		for(auto &pp:st){
			ll xx = pp.F;
			ll yy = pp.S;
			if(pos[xx]>pos[yy]) res++;
		}
		// fo(i,n+1) cout<<a[i]<<" ";
		// cout<<"\n";
		// fo(i,n+1) cout<<pos[i]<<" ";
		
		cout<<res<<"\n";
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