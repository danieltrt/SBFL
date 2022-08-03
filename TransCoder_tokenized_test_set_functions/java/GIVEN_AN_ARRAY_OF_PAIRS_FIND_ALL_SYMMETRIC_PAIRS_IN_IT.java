static void findSymPairs ( int arr [ ] [ ] ) {
  HashMap < Integer, Integer > hM = new HashMap < Integer, Integer > ( );
  for ( int i = 0;
  i < arr . length;
  i ++ ) {
    int first = arr [ i ] [ 0 ];
    int sec = arr [ i ] [ 1 ];
    Integer val = hM . get ( sec );
    if ( val != null && val == first ) System . out . println ( "(" + sec + ", " + first + ")" );
    else hM . put ( first, sec );
  }
}