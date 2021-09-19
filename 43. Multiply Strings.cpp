//easy question but you have to implement it right 
int arr[1000];
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        reverse(num1.begin(),num1.end());reverse(num2.begin(),num2.end());
        for(int i=0;i<num1.size();i++){
            int n1=num1[i]-48;
            //cout<<n1<<endl;
            for(int j=0;j<num2.size();j++){
                int n2=num2[j]-48;
                //cout<<n2<<endl;
                int mult=n1*n2,carry=mult/10;
                arr[i+j]+=mult%10;
                arr[i+j+1]+=carry;
                if(arr[i+j]>=10){
                    arr[i+j+1]+=arr[i+j]/10;
                    arr[i+j]%=10;
                }
            }
        }
        string sol="";
        int ma=num1.size()+num2.size()-1;
        if(arr[ma]!=0){
            sol+=(char)(arr[ma]+48);
        }
       
        for(int i=ma-1;i>=0;i--){
            sol+=(char)(arr[i]+48);
        }
        return sol;
    }