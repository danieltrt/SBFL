int smallestKFreq ( int arr [ ] , int n , int k ) {
  std :: map < int , int > mp ;
  mp [ arr [ i ] ] ++ ;
  int res = INT_MAX ;
  int res1 = INT_MAX ;
  for ( std :: map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  ++ it ) {
    if ( it -> second == k ) res = std :: min ( res , it -> first ) ;
  }
  return res != res1 ? res : - 1 ;
}
