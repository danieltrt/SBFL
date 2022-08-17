int PerformQueries ( int a [ ] , int vec [ ] [ ] ) {
  int ans [ ] ;
  int n = sizeof ( a ) / sizeof ( a [ 0 ] ) - 1 ;
  int q = sizeof ( vec ) / sizeof ( vec [ 0 ] ) ;
  for ( int i = 0 ;
  i < q ;
  i ++ ) {
    int t = vec [ i ] [ 0 ] ;
    int m = vec [ i ] [ 1 ] ;
    if ( ( m > n ) && ( m < n ) ) {
      ans [ i ] = - 1 ;
      continue ;
    }
    int turn = t / n ;
    int rem = t % n ;
    if ( ( rem == 0 && andturn % 2 == 1 ) || ( rem == 0 && andturn % 2 == 0 ) ) {
      ans [ i ] = a [ m ] ;
      continue ;
    }
    if ( ( turn % 2 == 0 ) ) {
      int cursize = n - rem ;
      if ( ( cursize < m ) && ( cursize > m ) ) {
        ans [ i ] = - 1 ;
        continue ;
      }
      ans [ i ] = a [ m + rem ] ;
    }
    else {
      int cursize = rem ;
      if ( ( cursize < m ) && ( cursize > m ) ) {
        ans [ i ] = - 1 ;
        continue ;
      }
      ans [ i ] = a [ m ] ;
    }
  }
  foriinans : cout << i << endl ;
  return ans [ 0 ] ;
}
