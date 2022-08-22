void dfs ( vector < int > list [ ], int node, int arrival ) {
  cout << node << endl;
  for ( int i = 0;
  i < list [ node ] . size ( );
  i ++ ) {
    if ( list [ node ] . get ( i ) != arrival ) dfs ( list, list [ node ] . get ( i ), node );
  }
}