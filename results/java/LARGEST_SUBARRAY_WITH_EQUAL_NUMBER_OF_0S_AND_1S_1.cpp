int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > hM ;
  int sum = 0 ;
  int f_filled = 0 ;
  int endingIndex = - 1 ;
  int startIndex = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == 0 ) ? - 1 : 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( sum == 0 ) {
      f_filled = i + 1 ;
      endingIndex = i ;
    }
    if ( hM . find ( sum + n ) != hM . end ( ) ) {
      if ( f_filled < i - hM [ sum + n ] ) {
        f_filled = i - hM [ sum + n ] ;
        endingIndex = i ;
      }
    }
    else hM [ sum + n ] = i ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = ( arr [ i ] == - 1 ) ? 0 : 1 ;
  int end = endingIndex - f_filled + 1 ;
  cout << end << " to " << endingIndex << endl ;
  return f_filled ;
}
