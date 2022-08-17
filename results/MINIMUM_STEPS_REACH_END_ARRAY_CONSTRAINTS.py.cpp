int getMinStepToReachEnd ( int arr [ ] , int N ) {
  bool visit [ N ] ;
  int distance [ N ] ;
  int digit [ 10 ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < 10 ;
    j ++ ) {
      digit [ arr [ i ] ] = i ;
    }
  }
  distance [ 0 ] = 0 ;
  visit [ 0 ] = true ;
  int q [ N ] ;
  q [ 0 ] = 0 ;
  while ( ( q [ 0 ] > 0 ) && ( q [ 0 ] < N ) ) {
    int idx = q [ 0 ] ;
    q [ 0 ] = q [ 0 ] ;
    if ( ( idx == N - 1 ) || ( idx == N - 2 ) ) break ;
    int d = arr [ idx ] ;
    for ( int i = 0 ;
    i < digit [ d ] ;
    i ++ ) {
      int nextidx = digit [ d ] [ i ] ;
      if ( ( visit [ nextidx ] == false ) == false ) {
        visit [ nextidx ] = true ;
        q [ nextidx ] = nextidx ;
        distance [ nextidx ] = distance [ idx ] + 1 ;
      }
    }
    if ( ( idx - 1 >= 0 ) && visit [ idx - 1 ] == false ) {
      visit [ idx - 1 ] = true ;
      q [ idx - 1 ] = idx - 1 ;
      distance [ idx - 1 ] = distance [ idx ] + 1 ;
    }
    if ( ( idx + 1 < N ) && visit [ idx + 1 ] == false ) {
      visit [ idx + 1 ] = true ;
      q [ idx + 1 ] = idx + 1 ;
      distance [ idx + 1 ] = distance [ idx ] + 1 ;
    }
  }
  return distance [ N - 1 ] ;
}
