#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define F first
#define S second
#define endl '\n'
#define Mp make_pair
#define pb push_back
#define pf push_front
#define size(x) (ll)x.size()
#define all(x) x.begin(), x.end()
#define fuck(x) cout<<"("<<#x<<" : "<<x<<")\n"
 
const int N = 3e5 + 100, lg = 18;
const ll Mod = 1e9 + 7;
const ll inf = 1e18 + 10;
 
ll MOD(ll a, ll mod=Mod) {
    a%=mod; (a<0)&&(a+=mod); return a;
}
ll poww(ll a, ll b, ll mod=Mod) {
    ll res = 1;
    while(b > 0) {
        if(b%2 == 1) res = MOD(res * a, mod);
        b /= 2;
        a = MOD(a * a, mod);
    }
    return res;
}

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
 
ll t, n, L=0, R=1e6;
map<string, ll> mp;

void work() {
    n = MOD(rng(), mp["n"]) + 1;
    vector<ll> vec;
    for(int i=1; i<=n; i++) {
        vec.pb(MOD(rng(), R-L+1) + L);
    }

    cout<<n<<endl;
    for(auto it : vec) cout<<it<<' ';
    cout<<endl;
}

void reset_work() {
    return;
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false), cin.tie(0);
 
    for(int i=1; i<argc; i+=2) {
        string str(argv[i]);
        if(str == "-n") {
            mp["n"] = _atoi64(argv[i+1]);
        } else if(str == "-t") {
            mp["t"] = _atoi64(argv[i+1]);
        } else if (str == "-l") {
            L = _atoi64(argv[i+1]);
        } else if(str == "-r") {
            R = _atoi64(argv[i+1]);
        } else if(str == "-tn") {
            mp["tn"] = _atoi64(argv[i+1]);
        }
    }
    
    t = max(1ll, mp["t"]);
    cout<<t<<endl;
    
    string s = to_string(mp["tn"]) + ".in";
    char const *filename = s.c_str(); 
    freopen(filename, "w", stdout);

    while(t --) {
        work();
        reset_work();
    }
 
    return 0;
}
