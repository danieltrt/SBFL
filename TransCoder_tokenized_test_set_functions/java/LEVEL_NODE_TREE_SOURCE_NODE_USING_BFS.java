static void printLevels ( Vector < Vector < Integer > > graph, int V, int x ) {
  int level [ ] = new int [ V ];
  boolean marked [ ] = new boolean [ V ];
  Queue < Integer > que = new LinkedList < Integer > ( );
  que . add ( x );
  level [ x ] = 0;
  marked [ x ] = true;
  while ( que . size ( ) > 0 ) {
    x = que . peek ( );
    que . remove ( );
    for ( int i = 0;
    i < graph . get ( x ) . size ( );
    i ++ ) {
      int b = graph . get ( x ) . get ( i );
      if ( ! marked [ b ] ) {
        que . add ( b );
        level [ b ] = level [ x ] + 1;
        marked [ b ] = true;
      }
    }
  }
  System . out . println ( "Nodes" + " " + "Level" );
  for ( int i = 0;
  i < V;
  i ++ ) System . out . println ( " " + i + " --> " + level [ i ] );
}