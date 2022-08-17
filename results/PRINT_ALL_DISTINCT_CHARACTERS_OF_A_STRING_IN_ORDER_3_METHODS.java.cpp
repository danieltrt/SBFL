void printDistinct ( string str ) {
  vector < int > count ( NO_OF_CHARS , 0 ) ;
  int i ;
  for ( i = 0 ;
  i < str . length ( ) ;
  i ++ ) if ( str [ i ] != ' ' ) count [ ( int ) str [ i ] ] ++ ;
  int n = i ;
  for ( i = 0 ;
  i < n ;
  i ++ ) if ( count [ ( int ) str [ i ] ] == 1 ) cout << str [ i ] << endl ;
}
