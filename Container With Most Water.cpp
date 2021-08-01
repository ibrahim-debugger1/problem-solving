#include<bits/stdc++.h>
using namespace std;
//simple question but i can't solve it by my self and i search for an idea to solve it and i do it
//11. Container With Most Water
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
