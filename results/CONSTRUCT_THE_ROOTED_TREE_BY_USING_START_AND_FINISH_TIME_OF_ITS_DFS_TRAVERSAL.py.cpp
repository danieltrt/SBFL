int Restore_Tree ( int S , int E ) {
  int Identity [ N * N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) Identity [ Start [ i ] ] = i ;
  int parent [ N * N - 1 ] ;
  int currParent = Identity [ 0 ] ;
  for ( int j = 1 ;
  j < N ;
  j ++ ) {
    int child = Identity [ j ] ;
    if ( End [ child ] - j > 1 ) {
      parent [ child ] = currParent ;
      currParent = child ;
    }
    else {
      parent [ child ] = currParent ;
      while ( End [ child ] == End [ parent [ child ] ] ) {
        child = parent [ child ] ;
        currParent = parent [ child ] ;
        if ( currParent == Identity [ 0 ] ) break ;
      }
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) parent [ i ] ++ ;
  return parent [ N ] ;
}
