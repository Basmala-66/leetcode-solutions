 class Solution {
 public:
     int numOfSubarrays(vector<int>& arr, int k, int threshold) {

         int l = 0, r = 0,sum=0,count=0;
         for (;r < k;r++)
             sum += arr[r];

         
         r--;

         while (r < arr.size())
         {
            
             if ((sum / k) >= threshold)
                 count++;

             r++;
             if (r == arr.size()) break;

             sum += arr[r];
             sum -= arr[l];
             l++;

             
             
         }

         return count;
     }
 };