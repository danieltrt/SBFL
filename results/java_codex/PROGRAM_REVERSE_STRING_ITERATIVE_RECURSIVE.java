string recursiveReverse(char str[]) {
  stack<char> st;
  for (int i = 0; i < str.length(); i++) st.push(str[i]);
  for (int i = 0; i < str.length(); i++) {
    str[i] = st.top();
    st.pop();
  }
  return string(str);
}