#include<bits/stdc++.h>
using namespace std;
    string intToRoman(int num) {
	//https://leetcode.com/problems/integer-to-roman/
	/*
	i solved it after a long time i don't know why but i faced a problem 
	that makes me search for the solution idea and i see the idea and implement the code 
	finally i got accepted solution wooow
	*/
     pair<int,string>p[13];
     p[0]=make_pair(1000,"M");
     p[1]=make_pair(900,"CM");
     p[2]=make_pair(500,"D");
     p[3]=make_pair(400,"CD");
     p[4]=make_pair(100,"C");
     p[5]=make_pair(90,"XC");
     p[6]=make_pair(50,"L");
     p[7]=make_pair(40,"XL");
     p[8]=make_pair(10,"X");
     p[9]=make_pair(9,"IX");
     p[10]=make_pair(5,"V");
     p[11]=make_pair(4,"IV");
     p[12]=make_pair(1,"I");
    string s="";
        for(int i=0;i<13 ;i++){
            int n=num/p[i].first;
            while(n--){
                s+=p[i].second;
            }
            num%=p[i].first;
        }
        return s;
    }
int main(){
   
    return 0;
}
