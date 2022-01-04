#include<iostream>
using namespace std;

int main(){
          char s[100];
          cin>>s;
          int ct_1=0,ct_2=0,ct_3=0;
          for(int i=0;s[i]!='\0';i++){
                    if(s[i]=='1')
                    ct_1++;
                    else if(s[i]=='2')
                    ct_2++;
                    else if(s[i]=='3')
                    ct_3++;
          }
          while(ct_1+ct_2+ct_3){
          // cout<<ct_1<<ct_2<<ct_3<<endl;
                    if(ct_1){
                    cout<<'1';
                    ct_1--;
                    }
                    else if(ct_2){
                    cout<<'2';
                    ct_2--;}
                    else if(ct_3){
                    cout<<'3';
                    ct_3--;
                    }
                    
                    if(ct_1+ct_2+ct_3 == 0)
                    continue;
                    else
                    cout<<'+';
          }
          return 0;
}