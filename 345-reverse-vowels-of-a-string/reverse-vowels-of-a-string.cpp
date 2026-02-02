class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;

    while (l < r)
    {
        
        if (toupper(s[l]) != 'I' && toupper(s[l])!= 'E' && toupper(s[l])!= 'A' && toupper(s[l])!= 'O' && toupper(s[l]) != 'U')
            l++;

        else if (toupper(s[r]) != 'I' && toupper(s[r]) != 'E' && toupper(s[r]) != 'A' && toupper(s[r]) != 'O' && toupper(s[r]) != 'U')
            r--;

        else
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
           
    }

    return s;
    }
};