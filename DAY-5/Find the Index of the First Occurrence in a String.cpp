#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.size();
        int m = needle.size();
        for (int i = 0; i < n - m + 1; i++)
        {
            int k = i;
            bool re = true;
            for (int j = 0; j < m; j++)
            {
                if (haystack[k] != needle[j])
                {
                    re = false;
                    break;
                }
                k++;
            }
            if (re)
            {
                return i;
            }
        }
        return -1;
    }
};