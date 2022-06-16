class Solution
{
public:
    bool isValid(string s)
    {
        // Stack data structure LIFO
        stack<int> st;
        for (auto it : s)
        {
            if (it == '(' || it == '{' || it == '[')
                st.push(it);
            else
            {
                if (st.empty())
                    return false;
                char ch = st.top();
                st.pop(); // poped it first
                if ((it == ')' && ch == '(') || (it == '}' && ch == '{') || (it == ']' && ch == '['))
                    continue;
                else
                    return false;
            }
        }
        return st.empty();
    }
};