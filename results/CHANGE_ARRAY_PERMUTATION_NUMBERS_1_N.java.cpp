void makePermutation ( int a [ ] , int n ) {
  unordered_map < int , int > count ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count . find ( a [ i ] ) != count . end ( ) ) count [ a [ i ] ] = count [ a [ i ] ] + 1 ;
    else count [ a [ i ] ] = 1 ;
  }
  int nextMissing = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count . find ( a [ i ] ) != count . end ( ) && count [ a [ i ] ] != 1 || a [ i ] > n || a [ i ] < 1 ) {
      count [ a [ i ] ] = count [ a [ i ] ] - 1 ;
      while ( count . find ( nextMissing ) != count . end ( ) ) nextMissing ++ ;
      a [ i ] = nextMissing ;
      count [ nextMissing ] = 1 ;
    }
  }
}
