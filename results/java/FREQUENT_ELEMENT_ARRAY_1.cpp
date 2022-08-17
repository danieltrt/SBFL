int f_filled ( int arr [ ] , int n ) {
  map < int , int > hp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int key = arr [ i ] ;
    if ( hp . find ( key ) != hp . end ( ) ) {
      int freq = hp [ key ] ;
      freq ++ ;
      hp [ key ] = freq ;
    }
    else hp [ key ] = 1 ;
  }
  int maxCount = 0 , res = - 1 ;
  for ( map < int , int > :: iterator val = hp . begin ( ) ;
  val != hp . end ( ) ;
  val ++ ) {
    if ( maxCount < val -> second ) {
      res = val -> first ;
      maxCount = val -> second ;
    }
  }
  return res ;
}
