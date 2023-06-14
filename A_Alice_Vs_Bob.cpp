

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

#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        string s;
        cin >> n >> s;

        int alice=0;
        int bob=0;
        bool flag = false;
        
        for (int i = 0; i < n; i++)
        {
            if(alice == 11){

                cout<<"Alice\n";
                flag = true;
                break;
            }

            if(bob==11){

                cout<<"Bob\n";
                flag = true;
                break;
            }
            
            if (s[i] == 'A')
            {

                alice++;
            }

            else if(s[i]=='B')
            {

                bob++;
            }
        }

        if(alice>bob && flag == false){

            cout<<"Alice\n";
        }

        else if(alice<bob && flag == false){

            cout<<"Bob\n";
        }
    }
    return 0;
}