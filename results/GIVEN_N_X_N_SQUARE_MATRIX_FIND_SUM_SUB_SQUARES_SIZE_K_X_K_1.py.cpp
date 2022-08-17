void printSumTricky ( int * * mat , int k ) {
  static int n = 10 ;
  if ( k > n ) return ;
  int * * stripSum = new int * [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int Sum = 0 ;
      for ( int i = 0 ;
      i < k ;
      i ++ ) Sum += mat [ i ] [ j ] ;
      stripSum [ 0 ] [ j ] = Sum ;
      for ( int i = 1 ;
      i < n - k ;
      i ++ ) {
        Sum += ( mat [ i + k - 1 ] [ j ] - mat [ i - 1 ] [ j ] ) ;
        stripSum [ i ] [ j ] = Sum ;
      }
    }
    for ( int i = 0 ;
    i < n - k + 1 ;
    i ++ ) {
      int Sum = 0 ;
      for ( int j = 0 ;
      j < k ;
      j ++ ) Sum += stripSum [ i ] [ j ] ;
      cout << Sum << " " ;
      for ( int j = 1 ;
      j < n - k + 1 ;
      j ++ ) {
        Sum += ( stripSum [ i ] [ j + k - 1 ] - stripSum [ i ] [ j - 1 ] ) ;
        cout << Sum << " " ;
      }
      cout << endl ;
    }
  }
  