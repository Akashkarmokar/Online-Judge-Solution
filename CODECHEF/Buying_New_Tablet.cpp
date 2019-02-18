//
// Created by akash_karmokar on 2/17/19.
//
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int test_case;
    scanf("%d",&test_case);
    for(int i =0;i<test_case;i++){
        int n=0,b=0,w=0,h=0,p=0,m=1000001,j;
        scanf("%d%d",&n,&b);
        int area = 0,area2;
        for(j=1;j<=n;j++){
            scanf("%d %d %d",&w,&h,&p);
            if(p<=b){
                area2 = w*h;
                if(area2>=area){
                    area = area2;
                }
            }
            else{
                continue;
            }
        }
        if(area==0){
            printf("no tablet\n");
        } else{
            printf("%d\n",area);
        }
    }
    return 0;
}
