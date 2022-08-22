int removeConsecutiveSame ( vector < string > v ) {
  int n = v . size ( );
  for ( int i = 0;
  i < n - 1;
  ) {
    if ( v [ i ] == v [ i + 1 ] ) {
      v . erase ( v . begin ( ) + i );
      v . erase ( v . begin ( ) + i );
      if ( i > 0 ) i --;
      n = n - 2;
    }
    else i ++;
  }
  return v . size ( );
}