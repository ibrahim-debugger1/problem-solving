#include<bits/stdc++.h>
using namespace std;
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' '){
            i++;
        }
        bool sign=true;
        if(s[i]=='-'){
            sign=false;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        string so="";
        while((int)s[i]>=48 && (int)s[i]<=57){
            so+=s[i];
            i++;
        }
        string sol="";
        int j=0;
        while(so[j]=='0'){
            j++;
        }
        while(j<so.size()){
            sol+=so[j];
            j++;
        }
        cout<<sign<<endl;
        if(sol.size()==0)
            return 0;
        else if(sol.size()>10 && sign){
            return 2147483647;
        cout<<sign<<endl;
        }
        else if(sol.size()>10 && !sign)
            return -2147483648;
        else{
            long long a=0;
            for(int j=0;j<sol.size();j++){
                a=(a*10)+(sol[j]-'0');
            }
            cout<<a<<endl;
            if(sign){
                if(a>2147483647)
                    return 2147483647;
                else 
                    return a;
            }else{
                a*=-1;
                if(a<-2147483648)
                    return -2147483648;
                else 
                    return a;
                    
            }
            }
        
    }
int main(){
   
    return 0;
}