int MAXMIN ( int * arr , int n ) {
  int MIN = 10 * * 9 ;
  int MAX = - 10 * * 9 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n / 2 + 1 ;
    j ++ ) {
      if ( ( arr [ i ] [ j ] > arr [ i ] [ n - j - 1 ] ) && ( MIN > arr [ i ] [ n - j - 1 ] ) ) {
        if ( ( MAX < arr [ i ] [ j ] ) || ( MAX < arr [ i ] [ n - j - 1 ] ) ) {
          MAX = arr [ i ] [ j ] ;
        }
      }
      else {
        if ( ( MIN > arr [ i ] [ j ] ) || ( MIN < arr [ i ] [ n - j - 1 ] ) ) {
          MIN = arr [ i ] [ n - j - 1 ] ;
        }
        if ( ( MAX < arr [ i ] [ n - j - 1 ] ) || ( MAX < arr [ i ] [ n - j - 1 ] ) ) {
          MAX = arr [ i ] [ n - j - 1 ] ;
        }
      }
    }
  }
  cout << "MAXimum =" << MAX << ", MINimum =" << MIN << endl ;
  return MAX ;
}
