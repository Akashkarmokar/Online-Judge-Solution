#include<stdio.h>
int main()
{
    int test_case,i,j,k,n,m,temp;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        int sum1=0;
        int sum2=0;
        scanf("%d %d",&n,&m);
        int array[n];
        for(k=0;k<n;k++){
            scanf("%d",&array[k]);
        }
        // Now it is time to sort the the variable (I use here bubble sort.As your wish you can use any sorting algorithm)
        for(k=0;k<n;k++){
            for(j=0;j<n-k-1;j++){
                if(array[j]>array[j+1]){
                    temp = array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        for(k=0;k<n-m;k++){
            sum1 = sum1 + array[k];
        }
        for(k=n-1;k>=n-(n-m);k--){
            sum2= sum2+array[k];
        }
        printf("%d\n",(sum2-sum1));
    }

    return 0;
}
/*
*   Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
* fb:https://www.facebook.com/akashcsemu
*
*/
