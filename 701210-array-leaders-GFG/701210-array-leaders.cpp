class Solution {
  public:
    vector<int>leaders(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        int max_from_right=arr[n-1];
        for (int i=n-1;i>=0;i--)
        {
            if(arr[i]>=max_from_right){
            ans.push_back(arr[i]);
            max_from_right=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna