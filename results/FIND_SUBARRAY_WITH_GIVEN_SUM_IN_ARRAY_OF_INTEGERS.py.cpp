int subArraySum ( int * arr , int n , int Sum ) {
  int Map [ n ] ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    currSum = currSum + arr [ i ] ;
    if ( currSum == Sum ) {
      cout << "Sum found between indexes 0 to" << i << endl ;
      return 0 ;
    }
    if ( ( currSum - Sum ) < Map [ currSum - Sum ] ) {
      cout << "Sum found between indexes" << "" << Map [ currSum - Sum ] + 1 << "to" << i << endl ;
      return 0 ;
    }
    Map [ currSum ] = i ;
  }
  cout << "No subarray with given sum exists" << endl ;
  return 0 ;
}
