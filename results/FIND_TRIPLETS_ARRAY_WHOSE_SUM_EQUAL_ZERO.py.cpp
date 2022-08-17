void findTriplets ( int arr [ ] , int n ) {
  bool found = true ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n - 1 ;
    j ++ ) {
      for ( int k = j + 1 ;
      k <= n ;
      k ++ ) {
        if ( ( arr [ i ] + arr [ j ] + arr [ k ] == 0 ) && ( arr [ i ] == arr [ j ] || arr [ i ] == arr [ k ] ) ) {
          cout << arr [ i ] << " " << arr [ j ] << " " << arr [ k ] << endl ;
          found = true ;
        }
      }
    }
  }
  if ( ( found == false ) && ( arr [ 0 ] == 0 || arr [ 0 ] == 1 || arr [ 0 ] == 2 || arr [ 0 ] == 3 || arr [ 0 ] == 4 || arr [ 0 ] == 5 || arr [ 0 ] == 6 || arr [ 0 ] == 7 || arr [ 0 ] == 8 || arr [ 0 ] == 9 || arr [ 0 ] == 10 || arr [ 0 ] == 11 || arr [ 0 ] == 12 || arr [ 0 ] == 13 || arr [ 0 ] == 14 || arr [ 0 ] == 15 || arr [ 0 ] == 16 || arr [ 0 ] == 17 || arr [ 0 ] == 18 || arr [ 0 ] == 19 || arr [ 0 ] == 20 || arr [ 0 ] == 21 || arr [ 0 ] == 22 || arr [ 0 ] == 23 || arr [ 0 ] == 24 || arr [ 0 ] == 25 || arr [ 0 ] == 26 || arr [ 0 ] == 27 || arr [ 0 ] == 28 || arr [ 0 ] == 29 || arr [ 0 ] == 30 || arr [ 0 ] == 31 || arr [ 0 ] == 32 || arr [ 0 ] == 33 || arr [ 0 ] == 34