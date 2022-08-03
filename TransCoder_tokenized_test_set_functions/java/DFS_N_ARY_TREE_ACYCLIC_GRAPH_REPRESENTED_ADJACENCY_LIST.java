public static void dfs ( LinkedList < Integer > list [ ], int node, int arrival ) {
  System . out . println ( node );
  for ( int i = 0;
  i < list [ node ] . size ( );
  i ++ ) {
    if ( list [ node ] . get ( i ) != arrival ) dfs ( list, list [ node ] . get ( i ), node );
  }
}