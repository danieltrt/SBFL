static boolean isMinHeap ( int [ ] level ) {
  int n = level . length - 1;
  for ( int i = ( n / 2 - 1 );
  i >= 0;
  i -- ) {
    if ( level [ i ] > level [ 2 * i + 1 ] ) return false;
    if ( 2 * i + 2 < n ) {
      if ( level [ i ] > level [ 2 * i + 2 ] ) return false;
    }
  }
  return true;
}