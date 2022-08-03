static void countFreq ( int [ ] a, int n ) {
  HashMap < Integer, Integer > hm = new HashMap < > ( );
  for ( int i = 0;
  i < n;
  i ++ ) hm . put ( a [ i ], hm . get ( a [ i ] ) == null ? 1 : hm . get ( a [ i ] ) + 1 );
  SortedMap < Integer, Integer > st = new TreeMap < > ( );
  for ( HashMap . Entry < Integer, Integer > x : hm . entrySet ( ) ) {
    st . put ( x . getKey ( ), x . getValue ( ) );
  }
  int cumul = 0;
  for ( SortedMap . Entry < Integer, Integer > x : st . entrySet ( ) ) {
    cumul += x . getValue ( );
    System . out . println ( x . getKey ( ) + " " + cumul );
  }
}