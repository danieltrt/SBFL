int f_filled ( int arr [ ] , int n ) {
  int jumps [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] >= n - i - 1 ) ) {
      jumps [ i ] = INT_MAX ;
    }
    else {
      int min = INT_MAX ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( arr [ i ] <= arr [ i ] + i ) && ( min > jumps [ j ] ) ) {
          min = jumps [ j ] ;
        }
      }
      if ( ( min != INT_MAX ) ) {
        jumps [ i ] = min + 1 ;
      }
      else {
        jumps [ i ] = min ;
      }
    }
  }
  return jumps [ 0 ] ;
}
