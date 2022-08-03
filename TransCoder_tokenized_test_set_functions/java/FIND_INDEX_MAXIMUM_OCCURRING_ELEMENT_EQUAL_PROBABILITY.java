static void findRandomIndexOfMax ( int arr [ ], int n ) {
  HashMap < Integer, Integer > mp = new HashMap < Integer, Integer > ( );
  for ( int i = 0;
  i < n;
  i ++ ) if ( mp . containsKey ( arr [ i ] ) ) {
    mp . put ( arr [ i ], mp . get ( arr [ i ] ) + 1 );
  }
  else {
    mp . put ( arr [ i ], 1 );
  }
  int max_element = Integer . MIN_VALUE;
  int max_so_far = Integer . MIN_VALUE;
  for ( Map . Entry < Integer, Integer > p : mp . entrySet ( ) ) {
    if ( p . getValue ( ) > max_so_far ) {
      max_so_far = p . getValue ( );
      max_element = p . getKey ( );
    }
  }
  int r = ( int ) ( ( new Random ( ) . nextInt ( max_so_far ) % max_so_far ) + 1 );
  for ( int i = 0, count = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] == max_element ) count ++;
    if ( count == r ) {
      System . out . print ( "Element with maximum frequency present " + "at index " + i + "\n" );
      break;
    }
  }
}