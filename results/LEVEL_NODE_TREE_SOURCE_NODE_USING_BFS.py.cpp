void printLevels ( int * * graph , int V , int x ) {
  int * level = new int [ V ] ;
  bool marked [ V ] ;
  queue < int > que ;
  que . push ( x ) ;
  level [ x ] = 0 ;
  marked [ x ] = true ;
  while ( ( ! que . empty ( ) ) && ( ( x == 0 ) || ( ( x == 1 ) && ( marked [ x ] ) ) ) {
    int b = que . front ( ) ;
    if ( ( ! marked [ b ] ) || ( ( b == 0 ) && ( marked [ x ] ) ) ) {
      que . pop ( ) ;
      level [ b ] = level [ x ] + 1 ;
      marked [ b ] = true ;
    }
  }
  cout << "Nodes" << " " << "Level" << endl ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) cout << " " << i << " --> " << level [ i ] << endl ;
}
