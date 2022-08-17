int isLucky ( int n ) {
  int nextPosition = n ;
  if ( isLucky . counter > n ) return 1 ;
  if ( n % isLucky . counter == 0 ) return 0 ;
  nextPosition = nextPosition - nextPosition / isLucky . counter ;
  isLucky . counter = isLucky . counter + 1 ;
  return isLucky ( nextPosition ) ;
}
