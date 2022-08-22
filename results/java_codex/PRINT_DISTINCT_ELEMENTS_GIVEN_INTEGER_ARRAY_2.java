void printDistinct(int arr[]) {
  unordered_set<int> set;
  for (int i = 0; i < arr.length; i++) {
    if (!set.contains(arr[i])) {
      set.add(arr[i]);
      cout << arr[i] << " ";
    }
  }
}