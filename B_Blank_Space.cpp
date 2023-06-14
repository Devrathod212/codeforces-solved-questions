

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
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define P(v)         for(auto x:v) cout<<x<<' ';cout<<'\n';
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
       
       
//To convert Unsigned int32 to binary string.
string int_to_str(uint32_t a)
{
    string binary = "";
    int mask = 1;
    for (int i = 0; i < 31; i++)
    {
        if ((mask & a) >= 1)
            binary = "1" + binary;
        else
            binary = "0" + binary;
        mask <<= 1;
    }

    //cout << binary << endl;
    return binary;
}
        
        
//To convert Binary string to Decimal and in this function MSD is for sign bit to check whether bit is positive or negative
int BinaryStringToDecimal(string a)
{
    int num = 0;
    bool neg = false;
    if(a.at(0) == '1')
    {
        neg = true;
        for(int x = a.length()-1; x >= 0; x--)
        {
            if(a.at(x) == '1')
                a.at(x) = '0';
            else a.at(x) = '1';
        }
        a.at(a.length()-1) += 1;
        for(int x = a.length()-1; x >= 0; x--)
        {
            if(a.at(x) == '2')
            {
                if(x-1 >= 0)
                {
                    if(a.at(x-1) == '1')
                        a.at(x-1) = '2';
                    if(a.at(x-1) == '0')
                        a.at(x-1) = '1';
                    a.at(x) = '0';
                }
            }
            else if(a.at(x) == '3')
            {
                if(x-1 >= 0)
                    a.at(x-1) += '2';
                a.at(x) = '1';
            }
        }
        if(a.at(0) == '2')
            a.at(0) = '0';
        else if(a.at(0) == '3')
            a.at(0) = '1';
    }
    for(int x = a.length()-1; x >= 0; x--)
    {
        if(a.at(x) == '1')
            num += pow(2.0, a.length()-x-1);
    }
    if(neg)
        num = num*-1;   
    return num;
 }
    
    
/*transform(Iterator inputBegin, Iterator inputEnd, 
         Iterator OutputBegin, unary_operation)*/
          
void solve(){

          int n;
          cin>>n;

          int arr[n];
          for(auto &i:arr){
            cin>>i;
          }

          int cnt=0;
          int maxi=0;
          for (int i = 0; i < n; i++)
          {
                if(arr[i]==0){

                    cnt++;
                }

                else{

                    maxi = max(cnt, maxi);
                    cnt=0;

                }
          }

        if(n==1 && arr[0]==0){

          cout<<"1"<<endl;
          return;

        }
        maxi = max(cnt,maxi);
          cout<<maxi<<endl;
          
          
}


int main(){

fast;

    int t=1;
    cin>>t;
    while(t--){

        
        
           solve();
    
    }
    return 0;
}