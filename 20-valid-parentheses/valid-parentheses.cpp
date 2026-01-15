#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
     bool balanced(char open , char close)
 {
     if (open == '(' && close == ')')
         return true;

     if (open == '[' && close == ']')
         return true;

     if (open == '{' && close == '}')
         return true;

     else
         return false;
 }
 bool isValid(string s) {
     stack <char> st;
     for (int i = 0; i < s.length();i++)
     {
         if (s[i] == '(' || s[i] == '[' || s[i] == '{')
             st.push(s[i]);

         else
         {
             if (st.empty())
                 return false;
             if (balanced(st.top(), s[i]))
                 st.pop();

             else
                 return false;
         }
     }

     if (st.empty())
         return true;
     else
         return false;



 }
};