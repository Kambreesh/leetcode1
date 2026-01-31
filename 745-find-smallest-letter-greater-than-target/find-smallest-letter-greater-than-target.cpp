class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        int index=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(letters[mid]>target)
            {
                index=mid;
                end=mid-1;
            }
            else
            {
              start=mid+1;
            }
        }
        return index>-1?letters[index]:letters[0];
    }
};