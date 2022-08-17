int f_filled ( int * A , int n ) {
  int min_val = std :: min ( A , A + n ) ;
  return ( min_val * ( n - 1 ) ) ;
}
