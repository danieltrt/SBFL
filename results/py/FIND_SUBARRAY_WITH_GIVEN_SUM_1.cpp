int f_filled ( int * arr , int n , int sum ) {
  int currSum = arr [ 0 ] ;
  int start = 0 ;
  int i = 1 ;
  while ( i <= n ) {
    while ( currSum > sum && start < i - 1 ) {
      currSum = currSum - arr [ start ] ;
      start ++ ;
    }
    if ( currSum == sum ) {
      cout << "Sum found between indexes" << endl ;
      cout << start << " and " << i - 1 << endl ;
      return 1 ;
    }
    if ( i < n ) currSum = currSum + arr [ i ] ;
    i ++ ;
  }
  cout << "No subarray found" << endl ;
  return 0 ;
}
