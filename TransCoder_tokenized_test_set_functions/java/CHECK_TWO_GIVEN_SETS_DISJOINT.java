boolean aredisjoint ( int set1 [ ], int set2 [ ] ) {
  for ( int i = 0;
  i < set1 . length;
  i ++ ) {
    for ( int j = 0;
    j < set2 . length;
    j ++ ) {
      if ( set1 [ i ] == set2 [ j ] ) return false;
    }
  }
  return true;
}