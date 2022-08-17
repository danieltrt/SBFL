int subArraySum ( int arr [ ] , int n , int sum ) {
  int currSum = arr [ 0 ] , start = 0 , i ;
  for ( i = 1 ;
  i <= n ;
  i ++ ) {
    while ( currSum > sum && start < i - 1 ) {
      currSum = currSum - arr [ start ] ;
      start ++ ;
    }
    if ( currSum == sum ) {
      int p = i - 1 ;
      cout << "Sum found between indexes " << start << " and " << p << endl ;
      return 1 ;
    }
    if ( i < n ) {
      currSum = currSum + arr [ i ] ;
    }
  }
  cout << "No subarray found" << endl ;
  return 0 ;
}
