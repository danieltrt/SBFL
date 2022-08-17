void printGrouped ( string string ) {
  int n = string . length ( ) ;
  vector < int > count ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) count [ string [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( count [ string [ i ] - 'a' ] ) {
      cout << string [ i ] << " " ;
      count [ string [ i ] - 'a' ] -- ;
    }
    count [ string [ i ] - 'a' ] = 0 ;
  }
}
