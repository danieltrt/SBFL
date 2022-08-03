static void printkthnode ( Vector < pair > adj [ ], int wt [ ], int n, int k ) {
  for ( int i = 0;
  i < n;
  i ++ ) Collections . sort ( adj [ i ], new Comparator < pair > ( ) {
    public int compare ( pair p1, pair p2 ) {
      return p1 . first - p2 . first;
    }
  }
  );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( adj [ i ] . size ( ) >= k ) System . out . print ( adj [ i ] . get ( adj [ i ] . size ( ) - k ) . second + " " );
    else System . out . print ( "-1" );
  }
}