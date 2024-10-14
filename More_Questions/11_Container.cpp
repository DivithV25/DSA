class Solution {
public:
    int maxArea(vector<int>& height) {
            int left=0;
            int right=height.size()-1;
            int maxArea=INT_MIN;
            while(left<right){
                maxArea=max(maxArea,(right-left)*(min(height[right],height[left])));
                if(height[left]<height[right]){
                    left++;
                }
                else{
                    right--;
                }
            }

            return maxArea;

    }
};

//Intution : keep the pointers towards largest height because ther is a good possibility that it might have more area