class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        int l;
        l=nums.size();
        for(int i=0;i<l;i++)
        {
            if(nums[i]==0)
                red++;
            else if(nums[i]==1)
                white++;
            else
                blue++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(red!=0){
                nums[i]=0;
                red--;
            }
            else if(white!=0){
                nums[i]=1;
                white--;
            }
            
            else if(blue!=0){
                nums[i]=2;
                blue--;
            }
            
        }
          
    }
};