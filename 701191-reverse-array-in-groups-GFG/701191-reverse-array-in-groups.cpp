class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; i += k) {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna