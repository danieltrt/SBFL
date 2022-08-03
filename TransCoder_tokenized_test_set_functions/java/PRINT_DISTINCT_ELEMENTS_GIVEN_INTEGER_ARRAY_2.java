static void printDistinct ( int arr [ ] ) {
  HashSet < Integer > set = new HashSet < > ( );
  for ( int i = 0;
  i < arr . length;
  i ++ ) {
    if ( ! set . contains ( arr [ i ] ) ) {
      set . add ( arr [ i ] );
      System . out . print ( arr [ i ] + " " );
    }
  }
}