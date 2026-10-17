class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n,max;
        n=arr.size();
        max=arr[0];
        
        for(int i =1;i<=n-1;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        return max;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna