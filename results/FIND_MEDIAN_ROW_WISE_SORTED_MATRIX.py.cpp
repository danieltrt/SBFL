int binaryMedian ( int m [ ] , int r , int d ) {
  int mi = m [ 0 ] [ 0 ] ;
  int mx = 0 ;
  for ( int i = 0 ;
  i < r ;
  i ++ ) {
    if ( m [ i ] [ 0 ] < mi ) mi = m [ i ] [ 0 ] ;
    if ( m [ i ] [ d - 1 ] > mx ) mx = m [ i ] [ d - 1 ] ;
  }
  int desired = ( r * d + 1 ) / 2 ;
  while ( ( mi < mx ) && ( i < r ) ) {
    int mid = mi + ( mx - mi ) / 2 ;
    int place [ 2 ] ;
    place [ 0 ] = 0 ;
    for ( int j = 0 ;
    j < 2 ;
    j ++ ) {
      int j = upper_bound ( m [ i ] , mid ) ;
      place [ 0 ] = place [ 0 ] + j ;
    }
    if ( ifplace [ 0 ] < desired ) mi = mid + 1 ;
    else mx = mid ;
  }
  cout << "Median is" << mi << endl ;
  return 0 ;
}
