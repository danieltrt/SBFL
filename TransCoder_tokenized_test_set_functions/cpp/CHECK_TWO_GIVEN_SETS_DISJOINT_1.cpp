bool areDisjoint ( int set1 [ ], int set2 [ ], int m, int n ) {
  sort ( set1, set1 + m );
  sort ( set2, set2 + n );
  int i = 0, j = 0;
  while ( i < m && j < n ) {
    if ( set1 [ i ] < set2 [ j ] ) i ++;
    else if ( set2 [ j ] < set1 [ i ] ) j ++;
    else return false;
  }
  return true;
}