/***
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

bool isValid(string s) {
        if(s.length()%2 != 0) return false;
        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(st.empty()) {
                    return false;
                }
                if((s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[')) {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        if(st.empty()) {
            return true;
        }
        else return false;
    }