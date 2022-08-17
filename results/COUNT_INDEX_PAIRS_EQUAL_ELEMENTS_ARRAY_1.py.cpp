int countPairs ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < mp . find ( arr [ i ] ) ) mp [ arr [ i ] ] ++ ;
    else mp [ arr [ i ] ] = 1 ;
  }
  int ans = 0 ;
  for ( map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) {
    int count = * it ;
    ans += ( count * ( count - 1 ) ) / 2 ;
  }
  return ans ;
}
