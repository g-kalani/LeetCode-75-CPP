class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x=flowerbed.size();
        int count=0;
        for(int i=0; i<x; i++){
            bool left= i==0 || flowerbed[i-1]==0;
            bool right= i==flowerbed.size()-1 || flowerbed[i + 1]==0;
            
            if (left && right && flowerbed[i]==0){
                flowerbed[i]=1;
                count++; 
            }
        }
        if(count>=n) return true;
        else return false;
    }
};