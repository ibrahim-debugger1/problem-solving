    vector<string>sol;
    vector<string> readBinaryWatch(int turnedOn) {
        if(turnedOn==9 || turnedOn==10)
            return sol;
        int arr[]={1,2,4,8,1,2,4,8,16,32};
        backTrack(arr,0,0,0,0,turnedOn);
        return sol;
    }
    void backTrack(int arr[],int currind,int hoursum,int minsum,int h,int turnedon){
        if(hoursum>11 || minsum>59)
            return ;
        if(h==turnedon){
            string temp="";
            if(hoursum>9){
                int a=hoursum%10;
                hoursum/=10;
                temp.push_back((char)(hoursum+48));
                temp.push_back((char)(a+48));
            }else{
                temp.push_back((char)(hoursum+48));
            }
            temp.push_back(':');
            if(minsum<10){
                temp.push_back('0');
                temp.push_back((char)(minsum+48));
            }else{
                int a=minsum%10;
                 minsum/=10;
                temp.push_back((char)(minsum+48));
                temp.push_back((char)(a+48));
            }
            sol.push_back(temp);
            return;
        }
        
        for(int i=currind;i<10;i++){
            h++;
            if(i<4)
                hoursum+=arr[i];
            else
                minsum+=arr[i];
            cout<<hoursum<<endl;
            backTrack(arr,i+1,hoursum,minsum,h,turnedon);
            if(i<4)
                hoursum-=arr[i];
            else
                minsum-=arr[i];
            h--;
            
        }
        return;
    }