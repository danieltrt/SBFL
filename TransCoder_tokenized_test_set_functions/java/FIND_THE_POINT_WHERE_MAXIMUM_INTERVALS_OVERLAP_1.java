public static void maxOverlap ( int [ ] start, int [ ] end, int n ) {
  int maxa = Arrays . stream ( start ) . max ( ) . getAsInt ( );
  int maxb = Arrays . stream ( end ) . max ( ) . getAsInt ( );
  int maxc = Math . max ( maxa, maxb );
  int [ ] x = new int [ maxc + 2 ];
  Arrays . fill ( x, 0 );
  int cur = 0, idx = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    ++ x [ start [ i ] ];
    -- x [ end [ i ] + 1 ];
  }
  int maxy = Integer . MIN_VALUE;
  for ( int i = 0;
  i <= maxc;
  i ++ ) {
    cur += x [ i ];
    if ( maxy < cur ) {
      maxy = cur;
      idx = i;
    }
  }
  System . out . println ( "Maximum value is:" + maxy + " at position: " + idx + "" );
}