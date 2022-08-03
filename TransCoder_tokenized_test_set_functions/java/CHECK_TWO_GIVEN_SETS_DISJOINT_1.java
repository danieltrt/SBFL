boolean aredisjoint ( int set1 [ ], int set2 [ ] ) {
  int i = 0, j = 0;
  Arrays . sort ( set1 );
  Arrays . sort ( set2 );
  while ( i < set1 . length && j < set2 . length ) {
    if ( set1 [ i ] < set2 [ j ] ) i ++;
    else if ( set1 [ i ] > set2 [ j ] ) j ++;
    else return false;
  }
  return true;
}