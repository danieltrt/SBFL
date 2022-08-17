int minDist ( int * arr , int n , int x , int y ) {
  int minDist = 99999999 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( x == arr [ i ] && y == arr [ j ] || y == arr [ i ] && x == arr [ j ] ) && minDist > abs ( i - j ) ) minDist = abs ( i - j ) ;
    }
    return minDist ;
  }
}
