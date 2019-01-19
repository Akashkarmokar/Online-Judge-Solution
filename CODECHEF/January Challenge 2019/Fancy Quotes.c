#include <stdio.h>

int main() {
    int test_case,i,k;
    char arr[101];
    scanf("%d",&test_case);
    while (test_case--){

        scanf(" %[^\n]",arr);
        for(i=0;arr[i]!='\0';i++){
            k = 0;
            if((arr[i-1]==NULL || arr[i-1]==' ') && arr[i]=='n' && arr[i+1]=='o' && arr[i+2]=='t' && (arr[i+3]==' ' || arr[i+3]=='\0')){
                k++;
                break;
            }
            else{
                k=0;
            }
        }
        if(k==1){
            printf("Real Fancy\n");
        }
        else{
            printf("regularly fancy\n");
        }
    }
    return 0;
}
