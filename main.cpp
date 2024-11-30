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

mt19937 rng(time(0));
 
ll t, n, L=0, R=1e6;
map<string, ll> mp;

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false), cin.tie(0);

    string test_type(argv[1]);

    if(test_type == "array") {    
        for(int i=2; i<argc; i+=2) {
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
        
        string command = "g++ array-generator.cpp -o array.exe";
        char const *init_command = command.c_str();
        system(init_command);

        for(int i=1; i<=mp["tn"]; i++) {
            command = "array.exe -n "; command += to_string(mp["n"]); command+=" ";
            command += "-tn "; command += to_string(i); command+=" ";
            command += "-l "; command += to_string(L); command+=" ";
            command += "-r "; command += to_string(R); command+=" ";
            command += "-t "; command += to_string(mp["t"]);

            char const *running_command = command.c_str();
            system(running_command);
        }
    } else if (test_type == "tree") {
        for(int i=2; i<argc; i+=2) {
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
            } else if(str == "-hasw") {
                mp["hasw"] = 1;
            }
        }
        
        string command = "g++ tree-generator.cpp -o tree.exe";
        char const *init_command = command.c_str();
        system(init_command);

        for(int i=1; i<=mp["tn"]; i++) {
            command = "tree.exe -n "; command += to_string(mp["n"]); command+=" ";
            command += "-tn "; command += to_string(i); command+=" ";
            command += "-l "; command += to_string(L); command+=" ";
            command += "-r "; command += to_string(R); command+=" ";
            command += "-t "; command += to_string(mp["t"]); command += " ";
            command += "-hasw "; command += to_string(mp["hasw"]);

            char const *running_command = command.c_str();
            system(running_command);
        }
    }
 
    
 
    return 0;
}
