int findRotations(string str) {
  string tmp = str + str;
  int n = str.length();
  for (int i = 1; i <= n; i++) {
    string substring = tmp.substring(i, str.length());
    if (str == substring) return i;
  }
  return n;
}