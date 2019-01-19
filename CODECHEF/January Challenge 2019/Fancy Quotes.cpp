//
// Created by akash_karmokar on 1/18/19.
//
#include <bits/stdc++.h>
#include<string>
#include <stdio.h>
using namespace std;
int main(){
    int test_case,i;
    cin>>test_case;
    cin.ignore();
    for (i=0;i<test_case;i++) {
        string text,word;
        int check = 0;
        getline(cin,text);
        stringstream ss(text);
        while(ss>>word){
            if(word=="not"){
                check = 1;
                break;
            }
        }
        if(check == 1){
            cout<< "Real Fancy"<<endl;
        }
        else{
            cout<<"regularly fancy"<<endl;
        }

    }
    return 0;
}
