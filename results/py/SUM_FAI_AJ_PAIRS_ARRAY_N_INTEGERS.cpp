int f_filled ( int a [ ] , int n ) {
  map < int , int > cnt ;
  int ans = 0 ;
  int pre_f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    ans += ( i * a [ i ] ) - pre_f_filled ;
    pre_f_filled += a [ i ] ;
    if ( ( a [ i ] - 1 ) < cnt . size ( ) ) ans -= cnt [ a [ i ] - 1 ] ;
    if ( ( a [ i ] + 1 ) < cnt . size ( ) ) ans += cnt [ a [ i ] + 1 ] ;
    if ( a [ i ] != 0 ) cnt [ a [ i ] ] = 0 ;
    cnt [ a [ i ] ] ++ ;
  }
  return ans ;
}
