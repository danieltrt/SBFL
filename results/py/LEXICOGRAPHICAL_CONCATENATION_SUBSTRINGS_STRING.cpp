string f_filled ( string s ) {
  int n = s . length ( ) ;
  ;
  int sub_count = ( n * ( n + 1 ) ) / 2 ;
  int arr [ sub_count ] ;
  int index = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n - i + 1 ;
    j ++ ) {
      arr [ index ] = s . substr ( i , j - i + 1 ) ;
      index ++ ;
    }
  }
  sort ( arr , arr + sub_count ) ;
  string res ;
  for ( int i = 0 ;
  i < sub_count ;
  i ++ ) res += arr [ i ] ;
  return res ;
}
