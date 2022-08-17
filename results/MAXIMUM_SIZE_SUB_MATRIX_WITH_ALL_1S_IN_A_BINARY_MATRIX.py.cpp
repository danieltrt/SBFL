void printMaxSubSquare ( int * * M ) {
  int R = sizeof ( int ) / sizeof ( int ) ;
  int C = sizeof ( int ) ;
  int * * S = new int * [ C ] ;
  for ( int l = 0 ;
  l < R ;
  l ++ ) {
    for ( int i = 1 ;
    i < R ;
    i ++ ) {
      for ( int j = 1 ;
      j < C ;
      j ++ ) {
        if ( ( M [ i ] [ j ] == 1 ) || ( M [ i ] [ j ] == 2 ) ) S [ i ] [ j ] = min ( S [ i ] [ j - 1 ] , S [ i - 1 ] [ j ] , S [ i - 1 ] [ j - 1 ] ) + 1 ;
        else S [ i ] [ j ] = 0 ;
      }
    }
    int maxOfS = S [ 0 ] [ 0 ] ;
    int maxI = 0 ;
    int maxJ = 0 ;
    for ( int i = 0 ;
    i < R ;
    i ++ ) {
      for ( int j = 0 ;
      j < C ;
      j ++ ) {
        if ( ( maxOfS < S [ i ] [ j ] ) || ( maxOfS < S [ i ] [ j ] ) ) {
          maxOfS = S [ i ] [ j ] ;
          maxI = i ;
          maxJ = j ;
        }
      }
    }
    cout << "Maximum size sub-matrix is: " ;
    for ( int i = maxI ;
    i >= maxI ;
    i -- ) {
      for ( int j = maxJ ;
      j >= maxJ ;
      j -- ) cout << M [ i ] [ j ] << " " ;
      cout << "\n" ;
    }
    delete [ ] S ;
  }
  