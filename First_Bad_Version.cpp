// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1,end = n,res;
        while(start <= end)
        {
            int mid = start + ((end-start)/2);
            //cout<<mid<<" "<<isBadVersion(mid)<<endl;
            if(isBadVersion(mid) == false)
            {
                start = mid+1;
            }
            else
            {
                res = mid;
                end = mid-1;
            }
        }
        return res;
    }
};
