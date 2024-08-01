class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &n1, vector<int> &n2)
    {
        for (int i = 0; i < n1.size(); i++)
        {
            for (int j = 0; j < n2.size(); j++)
            {
                if (n1[i] == n2[j])
                {
                    n1[i] = j;
                    break;
                }
            }
        }
        unordered_map<int, int> M;
        stack<int> st;
        st.push(-1);
        for (int i = n2.size() - 1; i >= 0; i--)
        {
            while ((st.top() != -1) && (st.top() <= n2[i]))
                st.pop();
            int top = st.top();

            st.push(n2[i]);
            M[n2[i]] = top;
        }
        for (int i = 0; i < n1.size(); i++)
            n1[i] = M[n2[n1[i]]];
        return n1;
    }
};