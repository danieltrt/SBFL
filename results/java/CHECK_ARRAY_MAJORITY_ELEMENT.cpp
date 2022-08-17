bool f_filled ( int a [ ] , int n ) {
  unordered_map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( mp . count ( a [ i ] ) ) mp [ a [ i ] ] = mp [ a [ i ] ] + 1 ;
  else mp [ a [ i ] ] = 1 ;
  for ( unordered_map < int , int > :: iterator x = mp . begin ( ) ;
  x != mp . end ( ) ;
  x ++ ) if ( x -> second >= n / 2 ) return true ;
  return false ;
}
