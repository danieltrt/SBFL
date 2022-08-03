static int firstElement ( int arr [ ], int n, int k ) {
  HashMap < Integer, Integer > count_map = new HashMap < > ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    int a = 0;
    if ( count_map . get ( arr [ i ] ) != null ) {
      a = count_map . get ( arr [ i ] );
    }
    count_map . put ( arr [ i ], a + 1 );
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( count_map . get ( arr [ i ] ) == k ) {
      return arr [ i ];
    }
  }
  return - 1;
}