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
#define pno cout<"NO\n" ;

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
          
        ll n;
        cin>>n;
        if(n==1){

            cout<<"2\n";
            return;

        }
        if(n==4){

            cout<<"2\n";
            return;
        }

        if(n%3==0){

            cout<<(n/3)<<endl;
        }

        else {

            cout<<((n)/3) + 1<<endl;


        }


}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        
        
           solve();
    
    }
    return 0;
}