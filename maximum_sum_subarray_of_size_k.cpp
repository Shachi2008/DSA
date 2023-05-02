class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int wstart=0,wend=0;
        long s=0;
        long ans=0;
        while(wend<Arr.size())
        {
            s+=Arr[wend];
            if(wend-wstart+1==K)
            {
                ans=max(ans,s);
                s-=Arr[wstart];
                wstart+=1;
            }
            wend+=1;
        }
        return ans;
    }
};