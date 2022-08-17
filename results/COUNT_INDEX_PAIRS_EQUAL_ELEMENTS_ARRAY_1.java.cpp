int countPairs ( int arr [ ] , int n ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hm . count ( arr [ i ] ) == 0 ) {
      hm [ arr [ i ] ] = hm [ arr [ i ] ] + 1 ;
    }
    else {
      hm [ arr [ i ] ] = 1 ;
    }
  }
  int ans = 0 ;
  for ( unordered_map < int , int > :: iterator it = hm . begin ( ) ;
  it != hm . end ( ) ;
  it ++ ) {
    int count = it -> second ;
    ans += ( count * ( count - 1 ) ) / 2 ;
  }
  return ans ;
}
