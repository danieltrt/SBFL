static void findMissing ( int a [ ], int b [ ], int n, int m ) {
  HashSet < Integer > s = new HashSet < > ( );
  for ( int i = 0;
  i < m;
  i ++ ) s . add ( b [ i ] );
  for ( int i = 0;
  i < n;
  i ++ ) if ( ! s . contains ( a [ i ] ) ) System . out . print ( a [ i ] + " " );
}