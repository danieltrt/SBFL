int f_filled ( int arr [ ] , int n ) {
  int f_filled [ n ] ;
  int i , j , max = 0 ;
  for ( i = 0 ;
  i < n ;
  i ++ ) {
    f_filled [ i ] = 1 ;
  }
  for ( i = 1 ;
  i < n ;
  i ++ ) for ( j = 0 ;
  j < i ;
  j ++ ) if ( arr [ i ] > arr [ j ] && f_filled [ i ] < f_filled [ j ] + 1 ) f_filled [ i ] = f_filled [ j ] + 1 ;
  for ( i = 0 ;
  i < n ;
  i ++ ) if ( max < f_filled [ i ] ) max = f_filled [ i ] ;
  return max ;
}
