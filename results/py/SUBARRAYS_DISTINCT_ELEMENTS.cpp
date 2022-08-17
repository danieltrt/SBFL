int f_filled ( int * arr , int n ) {
  int * s = new int [ n ] ;
  int j = 0 ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( ( j < n ) && ( arr [ j ] != 0 ) ) {
      s [ j ] = arr [ j ] ;
      j ++ ;
    }
    ans += ( ( j - i ) * ( j - i + 1 ) ) / 2 ;
    s [ i ] = arr [ i ] ;
  }
  return ans ;
}
