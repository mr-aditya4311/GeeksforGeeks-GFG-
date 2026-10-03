class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
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
