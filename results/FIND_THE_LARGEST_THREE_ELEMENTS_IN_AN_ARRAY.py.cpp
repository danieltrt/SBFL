int find3largest ( int * arr , int n ) {
  int check = 0 ;
  int count = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( ( count < 4 ) && ( check != arr [ n - i ] ) ) {
      if ( ( check != arr [ n - i ] ) || ( check != arr [ n - i ] ) ) {
        cout << arr [ n - i ] << " " ;
        check = arr [ n - i ] ;
        count ++ ;
      }
    }
    else {
      break ;
    }
  }
  return count ;
}
