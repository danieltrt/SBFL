int f_filled ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  return arr [ n - 1 ] ;
}
