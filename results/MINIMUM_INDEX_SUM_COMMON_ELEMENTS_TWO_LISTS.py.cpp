int find ( string list1 , string list2 ) {
  string res ;
  int maxPossibleSum = list1 . length ( ) + list2 . length ( ) - 2 ;
  for ( int sum = 0 ;
  sum < maxPossibleSum + 1 ;
  sum ++ ) {
    for ( int i = 0 ;
    i < sum + 1 ;
    i ++ ) {
      if ( ( i < list1 . length ( ) ) && ( sum - i ) < list2 . length ( ) && list1 [ i ] == list2 [ sum - i ] ) res += list1 [ i ] ;
    }
    if ( ( res . length ( ) > 0 ) && ( res . length ( ) > maxPossibleSum ) ) break ;
  }
  for ( int i = 0 ;
  i < res . length ( ) ;
  i ++ ) cout << res [ i ] << " " ;
  return 0 ;
}
