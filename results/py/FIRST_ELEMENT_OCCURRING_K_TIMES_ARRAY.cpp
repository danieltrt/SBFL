int f_filled ( int arr [ ] , int n , int k ) {
  int countMap [ n ] ;
  ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] < countMap [ i ] ) || ( arr [ i ] > countMap [ i ] ) ) countMap [ arr [ i ] ] ++ ;
    else countMap [ arr [ i ] ] = 1 ;
    i ++ ;
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( countMap [ arr [ i ] ] == k ) || ( countMap [ arr [ i ] ] > countMap [ i ] ) ) return arr [ i ] ;
    i ++ ;
  }
  return - 1 ;
}
