void findSymPairs ( int arr [ ] [ 2 ] , int row ) {
  map < int , int > hM ;
  for ( int i = 0 ;
  i < row ;
  i ++ ) {
    int first = arr [ i ] [ 0 ] ;
    int sec = arr [ i ] [ 1 ] ;
    if ( ( sec < hM . size ( ) ) && hM [ sec ] == first ) cout << "(" << sec << "," << first << ")" << endl ;
    else hM [ first ] = sec ;
  }
}
