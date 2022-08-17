int f_filled ( int * arr , int n , int x , int y ) {
  int f_filled = 99999999 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( x == arr [ i ] && y == arr [ j ] || y == arr [ i ] && x == arr [ j ] ) && f_filled > abs ( i - j ) ) f_filled = abs ( i - j ) ;
    }
    return f_filled ;
  }
}
