class Solution
{
public:
    bool isNumber(string s)
    {
        bool ea = false, deci = false, dig = false;
        int plusMinus = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+' || s[i] == '-')
            {
                if (plusMinus == 2 || i + 1 == n || (i != 0 && (s[i - 1] != 'e' && s[i - 1] != 'E')))
                {
                    cout << "...";
                    return false;
                }
                else
                {
                    plusMinus++;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E')
            {
                if (ea || !dig || i == n - 1)
                {
                    return false;
                }
                else
                {
                    ea = true;
                }
            }
            else if (s[i] == '.')
            {
                if ((i + 1 == n && i - 1 < 0) || ea || deci || (i == n - 1 && !dig))
                {
                    // cout<<"...";
                    return false;
                }
                else
                {
                    deci = true;
                }
            }
            else
            {
                if (!isdigit(s[i]))
                {
                    return false;
                }
                else
                {
                    dig = true;
                }
            }
        }
        if (deci = true && dig == false)
        {
            return false;
        }
        return true;
    }
};