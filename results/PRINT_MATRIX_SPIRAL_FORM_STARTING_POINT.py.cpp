void printSpiral ( int * * mat , int r , int c ) {
  int a = 0 ;
  int b = 2 ;
  int lowRow = ( 0 > a ) ? 0 : a ;
  int lowColumn = ( 0 > b ) ? 0 : b - 1 ;
  int highRow = r - 1 == ( ( a + 1 ) >= r ) ? r : a + 1 ;
  int highColumn = c - 1 == ( ( b + 1 ) >= c ) ? b + 1 : b + 1 ;
  while ( ( ( lowRow > 0 - r && lowColumn > 0 - c ) ) || ( ( lowRow <= highColumn && i < c && lowRow >= 0 ) ) ) {
    int i = lowColumn + 1 ;
    while ( ( i <= highColumn && i < c && highRow < 0 ) || ( i <= r && i < r && highColumn < c ) ) {
      cout << mat [ lowRow ] [ i ] << " " ;
      i ++ ;
    }
    lowRow -- ;
    i = lowRow + 2 ;
    while ( ( i <= highRow && i < r && highColumn < c ) || ( i >= c && i >= 0 && highRow < r ) ) {
      cout << mat [ highRow ] [ i ] << " " ;
      i -- ;
    }
    highColumn ++ ;
    i = highColumn - 2 ;
    while ( ( i >= lowColumn && i >= 0 && lowRow < r ) || ( i >= c && i >= c && lowColumn >= 0 ) ) {
      cout << mat [ i ] [ lowColumn ] << " " ;
      i -- ;
    }
    lowColumn -- ;
  }
  cout << endl ;
}
