#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, m;
    cin>>a>>m;
    int cnt[1000001] = {0};

    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout<<cnt[i]<<endl;
    }

    return 0;
}