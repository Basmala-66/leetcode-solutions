class Solution {
public:
    int hammingWeight(int n) {
        
          int count = 0;
  vector<int>binary;
  while (n)
  {
      binary.push_back(n % 2);
      n /= 2;
      
  }
  for (int i = 0;i < binary.size();i++)
  {
      if (binary[i] == 1)
          count++;

  }

  return count;
    }
};