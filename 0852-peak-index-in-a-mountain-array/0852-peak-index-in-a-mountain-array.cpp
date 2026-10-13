class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 1;
        int end = n-1;

        while(st<=end){
            int mid = st+(end-st)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            
            if(arr[mid]<arr[mid-1]){
                end= mid-1;
            }else{
                st=mid+1;
            }
        }
        return -1;
    }
};