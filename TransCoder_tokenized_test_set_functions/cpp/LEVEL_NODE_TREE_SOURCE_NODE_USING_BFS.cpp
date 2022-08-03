void printLevels ( vector < int > graph [ ], int V, int x ) {
  int level [ V ];
  bool marked [ V ];
  queue < int > que;
  que . push ( x );
  level [ x ] = 0;
  marked [ x ] = true;
  while ( ! que . empty ( ) ) {
    x = que . front ( );
    que . pop ( );
    for ( int i = 0;
    i < graph [ x ] . size ( );
    i ++ ) {
      int b = graph [ x ] [ i ];
      if ( ! marked [ b ] ) {
        que . push ( b );
        level [ b ] = level [ x ] + 1;
        marked [ b ] = true;
      }
    }
  }
  cout << "Nodes" << "    " << "Level" << endl;
  for ( int i = 0;
  i < V;
  i ++ ) cout << " " << i << "   -->   " << level [ i ] << endl;
}