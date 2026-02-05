class Solution {
public:
   string reverseWords(string s) {

    string re = "";
    string fre = "";

   int l = s.size()-1, r = s.size() - 1;

    while (r >= 0)
    {
        if (s[r] == ' ')
        {
            r--;
            l = r;
            continue;
        }

        while (l >= 0 && s[l] != ' ')
            l--;

        for (int i = l+1; i <= r; i++)
            re += s[i];

        if (fre == "")
            fre += re;
        else
            fre += ' ' + re;

        re = "";

        r = l - 1;
        l = r;
    }

    return fre;
}
};