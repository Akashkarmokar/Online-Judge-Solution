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
    for(int i = 0;i<test_case;i++){
        int n,people=0;
        scanf("%d",&n);
        int arr[n];
        for(int j =0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+n);
        for(int j =0;j<n;j++){
            if(arr[j]==0){
                people++;
            }
            else{
                if(people>=arr[j]){
                    people++;
                }
            }
        }
        printf("%d\n",people);

    }
    return 0;
}
