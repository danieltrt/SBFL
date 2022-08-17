int f_filled ( int arr [ ] , int n ) {
  int mp [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( mp [ arr [ i ] ] == 1 ) return arr [ i ] ;
  return - 1 ;
}
