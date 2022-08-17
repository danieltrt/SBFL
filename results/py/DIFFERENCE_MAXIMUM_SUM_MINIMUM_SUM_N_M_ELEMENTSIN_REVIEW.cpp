int f_filled ( int * arr , int n , int m ) {
  int max = 0 ;
  ;
  int min = 0 ;
  sort ( arr , arr + m ) ;
  int j = n - 1 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    min += arr [ i ] ;
    max += arr [ j ] ;
    j = j - 1 ;
  }
  return ( max - min ) ;
}
