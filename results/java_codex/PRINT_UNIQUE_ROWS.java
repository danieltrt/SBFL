void printArray(int arr[][], int row, int col) {
  unordered_set<string> set;
  for (int i = 0; i < row; i++) {
    string s = "";
    for (int j = 0; j < col; j++) s += to_string(arr[i][j]);
    if (set.find(s) == set.end()) {
      set.insert(s);
      cout << s << endl;
    }
  }
}