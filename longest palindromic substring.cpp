#include<bits/stdc++.h>
using namespace std;
//Given a string s, return the longest palindromic substring in s.
string longestPalindrome(string s) {
        int a=s.size();
        char c=s[0];
        string sol1(1,c);
        string sol=sol1;
        string s1="";
        if(a==1)
            return s;
        if(a==2){
            if(s[0]==s[1])
                return s;
            else 
                return sol;
        }
        bool flag=true;
        int l=0,r=a-1;
        while(l<r){
            if(s[l]!=s[r])
                flag=false;
            l++;
            r--;
        }
        if(flag)
            return s;
        for(int i=0;i<a;i++){
            int right=i+1,left=i-1;
            if(right<a && s[i]==s[right]){
                left=i;
                while(left>=0 && right<a){
                    if(s[left]==s[right]){
                        s1=s.substr(left,right-left+1);
                        if(s1.size()>sol.size()){
                            sol=s1;
                        }
                        left--;
                        right++;
                    }else
                        break;
                }
            }
            right=i+1;
            left=i-1;
            while(left>=0 && right<a){
                if(s[left]==s[right]){
                        s1=s.substr(left,right-left+1);
                        if(s1.size()>sol.size()){
                            sol=s1;
                        }
                        left--;
                        right++;
                    }else 
                    break;
            }
            }
        return sol;
    }