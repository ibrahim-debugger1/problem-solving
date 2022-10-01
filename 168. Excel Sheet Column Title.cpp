string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            columnNumber--;
            char a=(char)(columnNumber%26+65);
            s+=a;
            columnNumber/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }