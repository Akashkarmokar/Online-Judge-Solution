#include<iostream>
using namespace std;
int main()
{
    int a,b,t,n,k,s;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&k,&s);
        for(int j=0;j<s;j++){
            scanf("%d %d",&a,&b);
            if(a==k){
                k=b;
            }
            else if(b==k){
                k=a;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
/*
* Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
*
*
*/
