

/**************************************************************
*****                                                     *****
***** ██████╗░███████╗██╗░░░██╗░█████╗░███╗░░██╗░██████╗░ *****
***** ██╔══██╗██╔════╝██║░░░██║██╔══██╗████╗░██║██╔════╝░ *****
***** ██║░░██║█████╗░░╚██╗░██╔╝███████║██╔██╗██║██║░░██╗░ *****
***** ██║░░██║██╔══╝░░░╚████╔╝░██╔══██║██║╚████║██║░░╚██╗ *****
***** ██████╔╝███████╗░░╚██╔╝░░██║░░██║██║░╚███║╚██████╔╝ *****
***** ╚═════╝░╚══════╝░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░╚══╝░╚═════╝░ *****
*****                                                     *****
**************************************************************/

#include <bits/stdc++.h>
using namespace std;
#define no_of_digits(n) ((ll)log10(n))+1
#define ll long long int
#define pyes cout<<"YES\n" ;
#define pno cout<<"NO\n" ;
#define all(m) m.begin(), m.end()
#define nl "\n";
const ll mod = 1000000007;
const long double pi=3.14159265358979323846264338327950288419716939937510582097494459230;

ll pct(ll x) { return __builtin_popcount(x); } // # of set bits
ll poww(ll a, ll b) { ll res=1; while(b) { if(b&1)	res=(res*a); a=(a*a); b>>=1; } return res; }
ll modI(ll a, ll m=mod) { ll m0=m,y=0,x=1;  if(m==1) return 0;  while(a>1)  { ll q=a/m; ll t=m;  m=a%m;  a=t; t=y; y=x-q*y;  x=t; } if(x<0) x+=m0; return x;}
ll powm(ll a, ll b,ll m=mod) {ll res=1;	while(b) {	if(b&1)	res=(res*a)%m;	a=(a*a)%m; b>>=1;	}	return res;}

map<ll, ll> Prime_Factors(ll n)
{
    map<ll, ll> mp;
    while (n % 2 == 0)
    {
        ++mp[2];
        n = n / 2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ++mp[i];
            n = n / i;
        }
    }
    if (n > 2)
        ++mp[n];
    return mp;
}

vector <long long int> input(){
        int n;
        cin>>n;
        vector <long long int> v(n);
        for(auto &i : v){
            cin>>i;
        }
        return v;
}
void solve(){
         int n;
         cin>>n;

         string s;
         cin>>s;

         int danik = count(s.begin(), s.end(), 'D'); 
         int anton = count(s.begin(), s.end(), 'A'); 
        if(danik>anton){

            cout<<"Danik\n";
        }

        else if(danik==anton){

            cout<<"Friendship\n";
        }

        else{

            cout<<"Anton\n";
        }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t=1;
    // cin>>t;
    while(t--){

        
        
           solve();
    
    }
    return 0;
}