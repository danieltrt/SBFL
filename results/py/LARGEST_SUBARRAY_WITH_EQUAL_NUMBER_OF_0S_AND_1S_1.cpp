int f_filled ( int arr [ ] , int n ) {
  int hashMap [ n ] ;
  int currSum = 0 ;
  int f_filled = 0 ;
  int endingIndex = - 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != - 1 ) ) arr [ i ] = - 1 ;
    else arr [ i ] = 1 ;
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    currSum = currSum + arr [ i ] ;
    if ( ( currSum == 0 ) && ( i == hashMap [ currSum + n ] ) ) {
      f_filled = i + 1 ;
      endingIndex = i ;
    }
    if ( ( currSum + n ) < hashMap [ currSum + n ] ) f_filled = max ( f_filled , i - hashMap [ currSum + n ] ) ;
    else hashMap [ currSum ] = i ;
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] == - 1 ) && ( arr [ i ] != 0 ) ) arr [ i ] = 0 ;
    else arr [ i ] = 1 ;
  }
  cout << endingIndex - f_filled + 1 << " " ;
  cout << "to" << " " ;
  cout << endingIndex << endl ;
  return f_filled ;
}
