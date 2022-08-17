int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    mp [ arr [ i ] ] = mp [ arr [ i ] ] == 0 ? 1 : mp [ arr [ i ] ] + 1 ;
  }
  int res = 0 ;
  for ( unordered_map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) {
    res = max ( res , it -> second ) ;
  }
  return res ;
}
