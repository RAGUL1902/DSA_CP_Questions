#include <bits/stdc++.h>
using namespace std;

#define MOD (1000000000+7)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define nl '\n'
#define all(x) x.begin(), x.end()
#define print(vec,l,r) for(int i = l; i <= r; i++) cout << vec[i] <<" "; cout << endl;
#define forf(i,a,b) for(int i = (a); i < (b); i++)
#define forr(i,a,b) for(int i = (a); i > (b); i--)
#define debug(x) cerr << #x << " = " << (x) << endl;

// template starts
typedef long long int ll;
#define int ll

void solve(){
	int n,count;
	
	cin>>n;
	vector<int> v;
	forf(i,0,n){
		int a;
		cin>>a;
		v.pb(a);
	}
	v.erase(unique(v.begin(),v.end()),v.end());
	n = v.size();
	map<int,int> m;
	forf(i,0,n)
	{
		if(m.find(v[i])==m.end())
		{
			m.insert(mp(v[i],1));
		}
		else
		{
			m[v[i]]++;
		}
	}
	int best = INT_MAX;
	forf(i,0,n)
	{
		best = min({best,m[v[i]] + 1 - (v[0] == v[i])- (v[n-1] == v[i])});

	}
	cout<<best<<nl;
	}


clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

signed main(){
 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	//startTime = clock();
	
	int T;
	cin >> T;
	//T = 1;
	while(T--){
		solve();
	}
	
	//cout << getCurrentTime() << endl;
	return 0;
}