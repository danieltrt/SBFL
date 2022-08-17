int f_filled ( int a [ ] , int n ) {
  map < int , int > cnt ;
  int ans = 0 , pre_f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    ans += ( i * a [ i ] ) - pre_f_filled ;
    pre_f_filled += a [ i ] ;
    if ( cnt . find ( a [ i ] - 1 ) != cnt . end ( ) ) {
      ans -= cnt [ a [ i ] - 1 ] ;
    }
    if ( cnt . find ( a [ i ] + 1 ) != cnt . end ( ) ) {
      ans += cnt [ a [ i ] + 1 ] ;
    }
    if ( cnt . find ( a [ i ] ) != cnt . end ( ) ) cnt [ a [ i ] ] = cnt [ a [ i ] ] + 1 ;
    else cnt [ a [ i ] ] = 1 ;
  }
  return ans ;
}
