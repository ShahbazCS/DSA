class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        //for first occurance
        int n=nums.size();
        int start=0;
        int end=n-1;
        int result1=-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(target==nums[mid])
            {
                result1= mid;
                end=mid-1;
            } 
            else if(target<nums[mid]) end=mid-1;
            else start=mid+1;
        }
        vector<int>v;
        v.push_back(result1);
        
         //for second occurance
         n=nums.size();
        start=0;
         end=n-1;
        result1=-1;
        mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(target==nums[mid])
            {
                result1= mid;
                start=mid+1;
            } 
            else if(target<nums[mid]) end=mid-1;
            else start=mid+1;
        }
       
        v.push_back(result1);
        
        return v;
        
    }
};