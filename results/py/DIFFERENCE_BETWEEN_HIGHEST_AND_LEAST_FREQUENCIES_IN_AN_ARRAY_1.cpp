int f_filled ( int arr [ ] , int n ) {
  std :: map < int , int > mp ;
  mp [ arr [ i ] ] ++ ;
  int maxCount = 0 ;
  ;
  int minCount = n ;
  for ( std :: map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) {
    maxCount = std :: max ( maxCount , it -> second ) ;
    minCount = std :: min ( minCount , it -> second ) ;
  }
  return maxCount - minCount ;
}
