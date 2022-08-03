static void printAllAPTriplets ( int [ ] arr, int n ) {
  ArrayList < Integer > s = new ArrayList < Integer > ( );
  for ( int i = 0;
  i < n - 1;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      int diff = arr [ j ] - arr [ i ];
      boolean exists = s . contains ( arr [ i ] - diff );
      if ( exists ) System . out . println ( arr [ i ] - diff + " " + arr [ i ] + " " + arr [ j ] );
    }
    s . add ( arr [ i ] );
  }
}