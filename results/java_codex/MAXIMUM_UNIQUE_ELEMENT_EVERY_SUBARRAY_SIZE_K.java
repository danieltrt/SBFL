void find_max(int A[], int N, int K) {
  unordered_map<int, int> Count;
  for (int i = 0; i < K - 1; i++)
    if (Count.find(A[i]) != Count.end())
      Count[A[i]]++;
    else
      Count[A[i]] = 1;
  set<int> Myset;
  for (auto x : Count) {
    if (x.second == 1)
      Myset.insert(x.first);
  }
  for (int i = K - 1; i < N; i++) {
    if (Count.find(A[i]) != Count.end())
      Count[A[i]]++;
    else
      Count[A[i]] = 1;
    if (Count[A[i]] == 1)
      Myset.insert(A[i]);
    else
      Myset.erase(A[i]);
    if (Myset.size() == 0)
      cout << "Nothing" << endl;
    else
      cout << *Myset.rbegin() << endl;
    int x = A[i - K + 1];
    Count[x]--;
    if (Count[x] == 1)
      Myset.insert(x);
    if (Count[x] == 0)
      Myset.erase(x);
  }
}