void printMat ( int * * degseq , int n ) {
  int * * mat = new int * [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( ( degseq [ i ] > 0 && degseq [ j ] > 0 ) || ( degseq [ i ] < 0 && degseq [ j ] < 0 ) ) {
        degseq [ i ] -- ;
        degseq [ j ] -- ;
        mat [ i ] [ j ] = 1 ;
        mat [ j ] [ i ] = 1 ;
      }
    }
  }
  cout << "      " << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) cout << " " << "(" << i << ")" << endl ;
  cout << endl ;
  cout << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << " " << "(" << i << ")" << endl ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) cout << "     " << mat [ i ] [ j ] << endl ;
    cout << endl ;
  }
}
