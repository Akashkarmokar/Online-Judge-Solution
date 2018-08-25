#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<stack>

using namespace std;

int main()
{
    stack<char>parentheses;
    char s[140];
    int test_case;
    scanf("%d",&test_case);
    getc(stdin);
    for(int i=0;i<test_case;i++){
        cin>>s;
        int length=strlen(s);
        for(int j=0;j<length;j++){
            if(s[j]=='('||s[j]=='['){
                parentheses.push(s[j]);
            }
            else {
                if(parentheses.empty()){
                    //printf("No\n");
                    parentheses.push(s[j]);
                    break;
                }
                else{
                    if(s[j]=')' && parentheses.top()=='('){
                        parentheses.pop();
                    }
                    else if(s[j]=']' && parentheses.top()=='['){
                        parentheses.pop();
                    }
                    else{
                        //printf("No\n");
                        break;
                    }
                }
            }

        }

        if(parentheses.empty() || length==0 ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
