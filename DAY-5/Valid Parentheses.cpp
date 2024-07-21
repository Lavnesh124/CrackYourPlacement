#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char p = st.top();
                if (s[i] == ')' && p == '(' || s[i] == '}' && p == '{' || s[i] == ']' && p == '[')
                {
                    st.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
            ;
        }
        return false;
    }
};