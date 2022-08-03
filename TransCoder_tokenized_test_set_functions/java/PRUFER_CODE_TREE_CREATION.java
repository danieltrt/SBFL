static void printTreeEdges ( int prufer [ ], int m ) {
  int vertices = m + 2;
  int vertex_set [ ] = new int [ vertices ];
  for ( int i = 0;
  i < vertices;
  i ++ ) vertex_set [ i ] = 0;
  for ( int i = 0;
  i < vertices - 2;
  i ++ ) vertex_set [ prufer [ i ] - 1 ] += 1;
  System . out . print ( "\nThe edge set E(G) is :\n" );
  int j = 0;
  for ( int i = 0;
  i < vertices - 2;
  i ++ ) {
    for ( j = 0;
    j < vertices;
    j ++ ) {
      if ( vertex_set [ j ] == 0 ) {
        vertex_set [ j ] = - 1;
        System . out . print ( "(" + ( j + 1 ) + ", " + prufer [ i ] + ") " );
        vertex_set [ prufer [ i ] - 1 ] --;
        break;
      }
    }
  }
  j = 0;
  for ( int i = 0;
  i < vertices;
  i ++ ) {
    if ( vertex_set [ i ] == 0 && j == 0 ) {
      System . out . print ( "(" + ( i + 1 ) + ", " );
      j ++;
    }
    else if ( vertex_set [ i ] == 0 && j == 1 ) System . out . print ( ( i + 1 ) + ")\n" );
  }
}