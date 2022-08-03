static void deleteElements ( int arr [ ], int n, int k ) {
  Stack < Integer > s = new Stack < > ( );
  s . push ( arr [ 0 ] );
  int count = 0;
  for ( int i = 1;
  i < n;
  i ++ ) {
    while ( ! s . empty ( ) && s . peek ( ) < arr [ i ] && count < k ) {
      s . pop ( );
      count ++;
    }
    s . push ( arr [ i ] );
  }
  int m = s . size ( );
  Integer [ ] v = new Integer [ m ];
  while ( ! s . empty ( ) ) {
    v [ -- m ] = s . peek ( );
    s . pop ( );
  }
  for ( Integer x : v ) {
    System . out . print ( x + " " );
  };
  System . out . println ( "" );
}