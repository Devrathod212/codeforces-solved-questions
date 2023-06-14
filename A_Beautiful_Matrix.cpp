

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
#define no_of_digits(n) ((ll)log10(n)) + 1
#define ll long long int
#define pyes cout << "YES\n";
#define pno cout < "NO\n";
#define all(m) m.begin(), m.end()
#define nl "\n";

vector<long long int> input()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    return v;
}
void solve()
{

    pair<int, int> p ;
    
    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                p.first = i+1;
                p.second = j+1;
            }
        }
    }

    cout<<(abs((p.first)-3) + abs((p.second)-3))<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}