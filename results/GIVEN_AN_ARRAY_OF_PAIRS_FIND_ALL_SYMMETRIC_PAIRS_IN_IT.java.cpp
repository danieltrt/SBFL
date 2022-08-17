void findSymPairs ( int arr [ ] [ 2 ] ) {
  unordered_map < int , int > hM ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    int first = arr [ i ] [ 0 ] ;
    int sec = arr [ i ] [ 1 ] ;
    int val = hM . find ( sec ) ;
    if ( val != hM . end ( ) && val == first ) {
      cout << "(" << sec << ", " << first << ")" << endl ;
    }
    else {
      hM [ first ] = sec ;
    }
  }
}
