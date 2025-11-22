class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int count = 0;
        int size = flowerbed.size();
        for(int i=0; i < size; i++){
            if (count==n){
                return true;
            }
            if (flowerbed[i]==0)
            {
                if( (i-1<0 || flowerbed[i-1]==0) && (i+1>=size || flowerbed[i+1] == 0) ){
                    count++;
                    i++;
                }
            }
        }

        if (count<n){
            return false;
        }
        else{
            return true;
        }
        
    }
};