

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        string a = "", b = "", c = "";
        int index = 0;
        for (int i = 1; i < s.size() - 1; i++)
        {

            if (s[i] == 'a')
            {

                index = i;
                break;
            }
        }

        if (index)
        {
            for (int i = 0; i<index; i++)
            {

                a+= s[i];
            }

            for (int i = index+1; i < s.size(); i++)
            {
                c+= s[i];
            }

            cout<<a<<" "<<s[index]<<" "<<c<<endl;
            
        }

        else
        {

            for (int i = 1; i < s.size() - 1; i++)
            {

                b += s[i];
            }

            cout << s[0] << " " << b << " " << s[s.size() - 1] << endl;
        }
    }
    return 0;
}