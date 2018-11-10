#include<stdio.h>
int main()
{
  int i,test_case,a,b;
  scanf("%d",&test_case);
  for(i=0;i<test_case;i++){
    scanf("%d %d",&a,&b);
    if(b-a>0 || a-b>0){
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }
  return 0;
}
