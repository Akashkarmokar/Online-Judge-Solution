#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    string str;
    cin>>str;
    int length = str.length();
    if(length<4){
        cout<<str<<endl;
    }
    else{
        int rem = length % 3 ;
        if(rem != 0){
            cout<<str.substr(0,rem);  //str.substr(index,length for how much you want to work);
            str.erase(0,rem); // str.erase(poistion,how much length you erase from index)
            int x = length/3;
            for(int i = 0 ;i<x ;i++){
                cout<<",";
                cout<<str.substr(0,3);
                str.erase(0,3);
            }
        }
        else{
            int x = length/3;
            for(int i = 1 ;i<=x ;i++){
                cout<<str.substr(0,3);
                if(i==x)
                    break;
                cout<<",";
                str.erase(0,3);
            }
        }
    }
    return 0;
}