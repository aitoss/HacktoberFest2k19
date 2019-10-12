#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0,curl=0,cnt = 0;
    char a[n];
    cin>>a;

    for(i=0;i<n;i++)
    {
        if(a[i]=='U')
        {
            curl++;
            if(curl==0)
                cnt++;
        }
        else if(a[i]=='D')
            curl--;
    }
    cout<<cnt;
    return 0;
}
