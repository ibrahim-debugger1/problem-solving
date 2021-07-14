#include<bits/stdc++.h>
using namespace std;
    int maxArea(vector<int>& height) {
     int sol=0,l=0,r=height.size()-1;
        while(l<r){
            sol=max(sol,min(height[l],height[r])*(r-l));
            if(height[l]<height[r])
                l++;
            else 
                r--;
        }
        return sol;
        
    }
int main(){
   
    return 0;
}