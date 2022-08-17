int longestSubsequence ( int a [ ] , int n ) {
  int mp [ 13 ] ;
  for ( int i = 0 ;
  i < 13 ;
  i ++ ) {
    mp [ i ] = 0 ;
  }
  int dp [ n ] ;
  int maximum = - INT_MAX - 1 ;
  int index = - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( a [ i ] - 1 ) < mp [ a [ i ] - 1 ] ) && ( ( a [ i ] - 1 ) < mp [ a [ i ] ] ) ) {
      int lastIndex = mp [ a [ i ] - 1 ] - 1 ;
      dp [ i ] = 1 + dp [ lastIndex ] ;
    }
    else {
      dp [ i ] = 1 ;
    }
    mp [ a [ i ] ] = i + 1 ;
    if ( ( maximum < dp [ i ] ) && ( maximum < dp [ i ] ) ) {
      maximum = dp [ i ] ;
      index = i ;
    }
  }
  for ( int curr = a [ index ] - maximum + 1 ;
  curr <= a [ index ] ;
  curr ++ ) {
    cout << curr << " " ;
  }
  return 0 ;
}
