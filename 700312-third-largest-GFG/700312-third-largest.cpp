class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int largest = -1;
        int secondLargest = -1;
        int thirdLargest = -1;
        int n = arr.size();

        if (n < 3) {
            return -1;
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] >= largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = arr[i];
            } 
            else if (arr[i] >= secondLargest) {
                thirdLargest = secondLargest;
                secondLargest = arr[i];
            } 
            else if (arr[i] >= thirdLargest) {
                thirdLargest = arr[i];
            }
        }

        return thirdLargest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna