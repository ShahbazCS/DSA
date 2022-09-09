class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
        int start=0;
        int end=n-1;
        int result1=-1;
        int mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(x==arr[mid])
            {
                result1= mid;
                end=mid-1;
            } 
            else if(x<arr[mid]) end=mid-1;
            else start=mid+1;
        }
        int fo=result1;
        
         //for second occurance
        start=0;
         end=n-1;
        result1=-1;
        mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(x==arr[mid])
            {
                result1= mid;
                start=mid+1;
            } 
            else if(x<arr[mid]) end=mid-1;
            else start=mid+1;
        }
        if(fo==-1 and result1==-1) return 0;
       
        
        
        return result1-fo+1;
	}
};
