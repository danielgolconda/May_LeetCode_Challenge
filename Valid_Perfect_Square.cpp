class Solution {
public:
    int square(int num)
    {
        int start = 0,end = num;
        while(start <= end)
        {
            long int mid = start+((end-start)/2);
            if(mid >= INT_MAX)
            {
                return false;
            }
            if((mid*mid) ==  num)
            {
                return true;
            }
            else if((mid*mid) > num)
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return false;
    }
    bool isPerfectSquare(int num) {
        return square(num);
    }
};
