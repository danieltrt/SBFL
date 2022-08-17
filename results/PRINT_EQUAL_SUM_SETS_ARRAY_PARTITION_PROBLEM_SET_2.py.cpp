void printEqualSumSets ( int arr [ ] , int n ) {
  int sumArray = sum ( arr ) ;
  if ( ( sumArray & 1 ) != 0 ) {
    cout << "-1" << endl ;
    return ;
  }
  int k = sumArray >> 1 ;
  int * * dp = new int * [ n + 1 ] ;
  for ( int i = 1 ;
  i <= k ;
  i ++ ) dp [ 0 ] [ i ] = false ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ i ] [ 0 ] = true ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int currSum = 1 ;
    currSum <= k ;
    currSum ++ ) {
      dp [ i ] [ currSum ] = dp [ i - 1 ] [ currSum ] ;
      if ( ( arr [ i - 1 ] <= currSum ) && ( dp [ i ] [ currSum ] || dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) ) dp [ i ] [ currSum ] = ( dp [ i ] [ currSum ] || dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) ;
    }
  }
  int set1 [ n ] , set2 [ n ] ;
  if ( ( ! dp [ n ] [ k ] ) ) {
    cout << "-1" << endl ;
    return ;
  }
  int i = n ;
  int currSum = k ;
  while ( ( i > 0 ) && currSum >= 0 ) {
    if ( ( dp [ i - 1 ] [ currSum ] ) ) {
      i -- ;
      set2 [ i ] = arr [ i ] ;
    }
    else if ( ( dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) ) {
      i -- ;
      currSum -= arr [ i ] ;
      set1 [ i ] = arr [ i ] ;
    }
  }
  cout << "Set 1 elements:" << endl ;
  for ( int i = 0 ;
  i < sizeof ( set1 ) / sizeof ( set1 [ 0 ] ) ;
  i ++ ) cout << set1 [ i ] << " " ;
  cout << "\nSet 2 elements:" << endl ;
  for ( int i = 0 ;
  i < sizeof ( set2 ) / sizeof ( set2 [ 0 ] ) ;
  i ++ ) cout << set2 [ i ] << " " ;
}
