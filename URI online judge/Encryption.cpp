#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{

//#ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//#endif // ONLINE_JUDGE
    int t_c;
    scanf("%d",&t_c);
    char ch[1002];
    char ch1[1002];
    getchar();
    for(int i = 0;i<=t_c;i++)
    {
        if(i==0)
            continue;
        gets(ch);
        int len = strlen(ch);
        for(int j = 0 ; j< len ;j++)
        {
            if( (ch[j]>='A' && ch[j]<='Z') || (ch[j]>='a' && ch[j]<='z')  )
            {
                ch[j]= ch[j] +3 ;
            }
        }
        int p = len - 1 ;
        int j=0 ;
        for(j = 0 ; j< len ;j++)
        {
            ch1[j] = ch[p];
            p--;
        }
        ch1[j]='\0';
        for(int j = len/2 ; j<len;j++)
        {
            ch1[j]-=1;
        }
        printf("%s\n",ch1);
    }
    return 0 ;
}
