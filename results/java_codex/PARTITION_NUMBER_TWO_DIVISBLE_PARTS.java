void findDivision(string str, int a, int b) {
  int len = str.length();
  int lr[len + 1];
  lr[0] = (str[0] - '0') % a;
  for (int i = 1; i < len; i++)
    lr[i] = (lr[i - 1] * 10 + (str[i] - '0')) % a;
  int rl[len + 1];
  rl[len - 1] = (str[len - 1] - '0') % b;
  int power10 = 10;
  for (int i = len - 2; i >= 0; i--) {
    rl[i] = (rl[i + 1] + (str[i] - '0') * power10) % b;
    power10 = (power10 * 10) % b;
  }
  for (int i = 0; i < len - 1; i++) {
    if (lr[i] != 0) continue;
    if (rl[i + 1] == 0) {
      cout << "YES" << endl;
      for (int k = 0; k <= i; k++) cout << str[k];
      cout << ", ";
      for (int k = i + 1; k < len; k++) cout << str[k];
      return;
    }
  }
  cout << "NO" << endl;
}