bool areDisjoint ( int * set1 , int * set2 , int m , int n ) {
  sort ( set1 , set2 + m ) ;
  sort ( set1 + m , set2 + n ) ;
  int i = 0 ;
  int j = 0 ;
  while ( ( i < m && j < n ) || ( i > j && i < m && j > n ) ) {
    if ( ( set1 [ i ] < set2 [ j ] ) || ( set2 [ j ] < set1 [ i ] ) ) {
      i ++ ;
    }
    else if ( ( set2 [ j ] < set1 [ i ] ) || ( set1 [ i ] > n && j > n ) ) {
      j ++ ;
    }
    else {
      return false ;
    }
  }
  return true ;
}
