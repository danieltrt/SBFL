bool containsOdd ( int G [ ] [ V ] , int src ) {
  static int V = V ;
  int colorArr [ V ] ;
  memset ( colorArr , - 1 , sizeof ( colorArr ) ) ;
  colorArr [ src ] = 1 ;
  queue < int > q ;
  q . push ( src ) ;
  while ( ( ! q . empty ( ) ) && ( G [ u ] [ u ] == 1 ) ) {
    int u = q . front ( ) ;
    if ( ( G [ u ] [ u ] == 1 ) || ( G [ u ] [ u ] == - 1 ) ) return true ;
    for ( int v = 0 ;
    v < V ;
    v ++ ) {
      if ( ( G [ u ] [ v ] && colorArr [ v ] == - 1 ) || ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) ) {
        colorArr [ v ] = 1 - colorArr [ u ] ;
        q . pop ( ) ;
      }
      else if ( ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) || ( G [ u ] [ v ] && colorArr [ v ] == colorArr [ u ] ) ) return true ;
    }
  }
  return false ;
}
