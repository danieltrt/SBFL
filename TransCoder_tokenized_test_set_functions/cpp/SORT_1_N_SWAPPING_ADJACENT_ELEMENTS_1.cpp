bool sortedAfterSwap ( int A [ ], bool B [ ], int n ) {
  for ( int i = 0;
  i < n - 1;
  i ++ ) {
    if ( B [ i ] ) {
      if ( A [ i ] != i + 1 ) swap ( A [ i ], A [ i + 1 ] );
    }
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( A [ i ] != i + 1 ) return false;
  }
  return true;
}