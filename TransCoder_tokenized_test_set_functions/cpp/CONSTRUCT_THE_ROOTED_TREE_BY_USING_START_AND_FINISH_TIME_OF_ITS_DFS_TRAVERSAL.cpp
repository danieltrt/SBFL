vector < int > Restore_Tree ( int Start [ ], int End [ ] ) {
  vector < int > Identity ( N, 0 );
  for ( int i = 0;
  i < N;
  i ++ ) {
    Identity [ Start [ i ] ] = i;
  }
  vector < int > parent ( N, - 1 );
  int curr_parent = Identity [ 0 ];
  for ( int j = 1;
  j < N;
  j ++ ) {
    int child = Identity [ j ];
    if ( End [ child ] - j > 1 ) {
      parent [ child ] = curr_parent;
      curr_parent = child;
    }
    else parent [ child ] = curr_parent;
    while ( End [ child ] == End [ parent [ child ] ] ) {
      child = parent [ child ];
      curr_parent = parent [ child ];
      if ( curr_parent == Identity [ 0 ] ) break;
    }
  }
  for ( int i = 0;
  i < N;
  i ++ ) parent [ i ] += 1;
  return parent;
}