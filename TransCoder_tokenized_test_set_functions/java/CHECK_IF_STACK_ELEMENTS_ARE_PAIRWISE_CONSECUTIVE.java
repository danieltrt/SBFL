static boolean pairWiseConsecutive ( Stack < Integer > s ) {
  Stack < Integer > aux = new Stack < Integer > ( );
  while ( ! s . isEmpty ( ) ) {
    aux . push ( s . peek ( ) );
    s . pop ( );
  }
  boolean result = true;
  while ( aux . size ( ) > 1 ) {
    int x = aux . peek ( );
    aux . pop ( );
    int y = aux . peek ( );
    aux . pop ( );
    if ( Math . abs ( x - y ) != 1 ) result = false;
    s . push ( x );
    s . push ( y );
  }
  if ( aux . size ( ) == 1 ) s . push ( aux . peek ( ) );
  return result;
}