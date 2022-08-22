void findFibSubset(vector<int> x) {
  int max = *max_element(x.begin(), x.end());
  vector<int> fib;
  vector<int> result;
  int a = 0;
  int b = 1;
  while (b < max) {
    int c = a + b;
    a = b;
    b = c;
    fib.push_back(c);
  }
  for (int i = 0; i < x.size(); i++) {
    if (find(fib.begin(), fib.end(), x[i]) != fib.end()) {
      result.push_back(x[i]);
    }
  }
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
}