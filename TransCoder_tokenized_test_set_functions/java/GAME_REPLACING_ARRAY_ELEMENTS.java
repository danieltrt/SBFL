public static int playGame ( int arr [ ] ) {
  HashSet < Integer > set = new HashSet < > ( );
  for ( int i : arr ) set . add ( i );
  return ( set . size ( ) % 2 == 0 ) ? 1 : 2;
}