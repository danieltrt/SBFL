void divisibilityCheck ( vector < int > arr , int n ) {
  vector < int > s ;
  int max_ele = INT_MAX ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    s . push_back ( arr [ i ] ) ;
    max_ele = max ( max_ele , arr [ i ] ) ;
  }
  unordered_set < int > res ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) for ( int j = arr [ i ] * 2 ;
    j <= max_ele ;
    j += arr [ i ] ) {
      if ( s . find ( j ) != s . end ( ) ) res . insert ( j ) ;
    }
  }
  vector < int > vec ( res ) ;
  sort ( vec . begin ( ) , vec . end ( ) ) ;
  for ( int temp : vec ) cout << temp << " " ;
}
