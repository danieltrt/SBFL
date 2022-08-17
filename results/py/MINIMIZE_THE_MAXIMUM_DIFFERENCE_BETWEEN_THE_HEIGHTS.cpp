int f_filled ( int * arr , int n , int k ) {
  if ( ( n == 1 ) || ( n == 2 ) ) return 0 ;
  sort ( arr , arr + n - 1 ) ;
  int ans = arr [ n - 1 ] - arr [ 0 ] ;
  int small = arr [ 0 ] + k ;
  int big = arr [ n - 1 ] - k ;
  if ( ( small > big ) && ( small < big ) ) small = big ;
  for ( int i = 1 ;
  i < n - 1 ;
  i ++ ) {
    int subtract = arr [ i ] - k ;
    int add = arr [ i ] + k ;
    if ( ( subtract >= small || add <= big ) ) continue ;
    if ( ( big - subtract <= add - small ) && ( big - add <= small ) ) small = subtract ;
    else big = add ;
  }
  return min ( ans , big - small ) ;
}
