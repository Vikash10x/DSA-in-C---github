// Link - https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int findpeakIndex(vector<int> arr){
        int s=0;
        int e=arr.size()-1;
        int mid=(s+e)/2;
        while(s<e) {
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        
    return findpeakIndex(arr);
}

};