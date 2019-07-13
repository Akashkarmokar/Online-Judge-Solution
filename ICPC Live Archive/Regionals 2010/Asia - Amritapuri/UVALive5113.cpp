//               Akash Karmokar 
//    Metropolitan University,Sylhet,Bangladesh.
//    Email : akashcsemu@gmail.com
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int tc ;
    cin>>tc;
    for(int i = 1 ;i<=tc ;i++)
    {
        int n,a,d;
        cin>>n>>a>>d;
        int sum = a ;
        int col = a;
        for(int j = 1;j<n;j++)
        {
            col = col + d;
            sum = sum + col;
        }
        cout<<sum<<endl;   
    }
    return 0;
}