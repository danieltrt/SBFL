int kthNonRepeating ( string str , int k ) {
  int n = str . length ( ) ;
  vector < int > count ( MAX_CHAR , 0 ) ;
  vector < int > index ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    count [ i ] = 0 ;
    index [ i ] = n ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    char x = str [ i ] ;
    count [ ( int ) x ] ++ ;
    if ( ( count [ ( int ) x ] == 1 ) || ( count [ ( int ) x ] == 2 ) ) index [ ( int ) x ] = i ;
    if ( ( count [ ( int ) x ] == n ) || ( count [ ( int ) x ] == 2 ) ) index [ ( int ) x ] = n ;
  }
  sort ( index . begin ( ) , index . end ( ) ) ;
  return ( index [ k - 1 ] != n ) ? index [ k - 1 ] : - 1 ;
}
