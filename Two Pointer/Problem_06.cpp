#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl "\n"
#define moonstone() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define noob_sourav return 0;
#define con continue
#define fs first
#define sc second
#define ln length
#define sz size
#define f(x) for(int i = 0; i < (x); i++)
#define tc ll t; cin >> t; while(t--)
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define pb push_back
#define mp make_pair
#define Yes cout<<"Yes"<<endl
#define YES cout<<"YES"<<endl
#define No cout<<"No"<<endl
#define NO cout<<"NO"<<endl
#define con continue
#define bk break
#define big(v) *max_element(all(v))
#define small(v) *min_element(all(v))
#define all(v) (v).begin(),(v).end()
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a, b) memset(a, b, sizeof(a))
#define print(obj) cout<<(obj)<<endl;
bool isprime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }
ll ceil(ll a, ll b){return (a+b-1)/b;}
long long sumOfDigits(const string& input, long long mod = 0) {long long sum = 0;for (char c : input) {if (isdigit(c)) { sum += (c - '0');if (mod > 0) sum %= mod; }}return sum;}
template < typename F, typename S >ostream& operator << ( ostream& os, const pair< F, S > & p ) {return os << "" << p.first << " " << p.second << "";}
template < typename T >ostream &operator << ( ostream & os, const vector< T > &v ) {os << "";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << " ";os << *it;}return os << "";}
template < typename T >ostream &operator << ( ostream & os, const set< T > &v ) {os << "";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << " ";os << *it;}return os << "";}
template < typename T >ostream &operator << ( ostream & os, const multiset< T > &v ) {os << "";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << " ";os << *it;}return os << "";}
template < typename F, typename S >ostream &operator << ( ostream & os, const map< F, S > &v ) {os << "";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << " ";os << it -> first << " = " << it -> second ;}return os << "";}
// int pos = lower_bound(all(vt) , src) - vt.begin() ; 
// auto pos_value = *lower_bound(all(vt) , src) ;

ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
ll LCM(ll x, ll y) { return (x * y / gcd(x, y)); }
template <typename T> T TriangleArea(T x1, T y1, T x2, T y2, T x3, T y3) { return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0; }

//ll POW(ll a, ll b) { return b ? POW(a, b / 2) * POW(a, b / 2) * (b % 2 ? a : 1) : 1; }
ll POW(ll a, ll b) { return b ? (POW(a, b / 2) * POW(a, b / 2) % 998244353 * (b % 2 ? a : 1)) % 998244353 : 1; }

int dx[] = {-1, 1, 0, 0}; 
int dy[] = {0, 0, -1, 1};


//. . . || . . . || . . . || . . . ------ MOON713STONE ------ . . . || . . . || . . . || . . . || . . . || . . . || . . .


Problem Link : https://cses.fi/problemset/task/1641 [ Sum Of Three Value ] 

Test Case : N<5000 SO Easy
4 8
2 7 5 1
Output : 1 3 4
The Idea : Iterate And Camculate all Previous Sum of Pair


void solve()
{

    //This is 5000*5000 + logN => TLE

    int n  , target ; 
    cin>>n>>target ; 
    int arr[n] ; 
    f(n) cin>>arr[i] ; 
    map<int , pair<int , int>> mp ; 
    for(int i = 0 ; i<n ; i++)
    {
        int need = target - arr[i] ; 
        if(mp.count(need)==1)
        {
            cout<<mp[need].fs+1<<" "<<mp[need].sc+1<<" "<<i+1<<endl ; 
            return ; 
        }
        else
        {
           for(int j = 0 ; j<i ; j++)
           {
            mp[arr[i]+arr[j]] = {i , j} ; 
           }
        }
    }
    cout<<"IMPOSSIBLE"<<endl ; 

    // in map Not pair Rather Single Value 

     int n  , target ; 
    cin>>n>>target ; 
    int arr[n] ; 
    f(n) cin>>arr[i] ; 
    map<int , int> mp ; 
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            ll need = target - ( arr[i]+arr[j]) ; 
            if(mp.count(need)==1) 
            {
                cout<<mp[need]+1<<" "<<j+1<<" "<<i+1<<endl ; 
                return  ; 
            }
        }
        mp[arr[i]] = i ; 
    }
    cout<<"IMPOSSIBLE"<<endl ;

}


int32_t main()
{
    moonstone();
    //fraction()
    
          // tc
    {
        solve() ; 
    }

    noob_sourav;
}   