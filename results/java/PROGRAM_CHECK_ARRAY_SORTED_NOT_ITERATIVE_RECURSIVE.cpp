int f_filled ( int arr [ ] , int n ) {
  if ( n == 1 || n == 0 ) return 1 ;
  if ( arr [ n - 1 ] < arr [ n - 2 ] ) return 0 ;
  return f_filled ( arr , n - 1 ) ;
}
