void findSymPairs(int arr[][]) {
  unordered_map<int, int> hM;
  for (int i = 0; i < arr.length; i++) {
    int first = arr[i][0];
    int sec = arr[i][1];
    int val = hM.get(sec);
    if (val != null && val == first) cout << "(" << sec << ", " << first << ")" << endl;
    else hM.put(first, sec);
  }
}