int getSingle ( int arr [ ], int n ) {
  int result = 0;
  int x, sum;
  for ( int i = 0;
  i < INT_SIZE;
  i ++ ) {
    sum = 0;
    x = ( 1 << i );
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( arr [ j ] & x ) sum ++;
    }
    if ( sum % 3 ) result |= x;
  }
  return result;
}