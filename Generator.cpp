#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds; 
 
template <typename num_t>
using ordered_set = tree<num_t, null_type, less_equal<num_t>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(x) : total no strictly less than x
// find_by_order(x) : xth element in set

#ifdef  pikachu
   #include  "welcome_to_python_is_slower_than_c++_club.h"
#else
    #include <bits/stdc++.h>
     using namespace std;
    #define debug(...) 69
#endif

#define int               long long
mt19937 rngi(chrono::steady_clock::now().time_since_epoch().count());
int rng(int a, int b) { return uniform_int_distribution<long long>(a, b)(rngi); }
// int rng() { return uniform_int_distribution<long long>(1, LLONG_MAX)(rngi); }
template<typename T1, typename T2>istream& operator>>(istream& in, pair<T1, T2>& a) { return in >> a.first >> a.second; }
template<typename T1, typename T2>ostream& operator<<(ostream& out, pair<T1, T2> a) { return out << a.first << " " << a.second;}
template<typename T> void print(T t) { cout << t <<' '; }
template<typename T, typename... Args> void print(T t, Args... args) { print(t);print(args...); }
string operator*=(string& s, int cnt) { string t = s;for (size_t i = 1; i < cnt; i++)s += t;return s; }
string operator*(string s, int cnt) { return s *= cnt; }
 
 

#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define allr(x)           (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define len(x)             (int)((x).size())
#define bk                back()
#define elif              else if
#define add               insert
#define append            push_back
// #define pop               pop_back 
// #define str               string
#define in                :
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define vi                vector<int>
#define vii               vector<pii>
#define mi                map<int,int>
#define mii               map<pii,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define rrep(i,a,b)       for(int i=a;i>b;i--)
#define el                 '\n'
#define printl(arg) cout << arg << endl
// #define print(arg) cout << arg
void google() { static int _gtest_ = 1; cout << "Case #" << _gtest_++ << ": "; }
#define inputa(arg) for (auto& e : arg) cin >> e
#define printa(arg) for (auto& e : arg) print(e);
#define printr(arg) { printl(arg);return; }
#define printd(arg) printf("%0.3lf\n", arg)
 
 
const int mod=998244353;
const int INF=1e9;
const int MAX_N= 1e9;
const double PI=3.14159265358979323846;


int n,m,k,x,y,z,t,q,counter;



void code(){
            
        t=5;
        cout<<t<<el;
        rep(i,0,t){
            n = rng(100,200);
            vector<int> a;
            int last = 1;
            rep(j,0,n) {
                y = rng(last,min(n,last+10));
                // if(rng(1,100)<50){
                    a.push_back(y);
                    last = y;
                // }else{
                //     a.push_back(rng(last,n));
                // }
            }
            cout<<n<<el;
            for(auto& j : a) cout<<j<<' ';
                cout<<el;
        }
}


 
signed main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    // freopen("disrupt.in", "r", stdin);
    // freopen("disrupt.out", "w", stdout);

    int t = 1;

    // cin>>t;
    while(t--) code();
    return 0;
}