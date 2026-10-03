class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n;
        int largest=arr[0];
        int secondLargest=-1;
        n= arr.size();
        for(int i=0;i<=n-1;i++)
        {
            if(arr[i]>largest)
            {
                secondLargest=largest;
                largest=arr[i];
                
            }
            else if(arr[i]<largest&&arr[i]>secondLargest)
            {
                secondLargest=arr[i];
            }
             
        }
        return secondLargest;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna