int longest ( int a [ ] , int n , int k ) {
  int freq [ n ] ;
  int start = 0 ;
  int end = 0 ;
  int now = 0 ;
  int l = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    freq [ a [ i ] ] ++ ;
    if ( ( freq [ a [ i ] ] == 1 ) || ( freq [ a [ i ] ] == 0 ) ) now ++ ;
    while ( ( now > k ) && ( ( freq [ a [ l ] ] == 0 ) || ( freq [ a [ l ] ] == 1 ) ) ) {
      freq [ a [ l ] ] -- ;
      if ( ( freq [ a [ l ] ] == 0 ) || ( freq [ a [ l ] ] == 1 ) ) now -- ;
      l ++ ;
    }
    if ( ( i - l + 1 >= end - start + 1 ) ) {
      end = i ;
      start = l ;
    }
  }
  for ( int i = start ;
  i <= end ;
  i ++ ) cout << a [ i ] << " " ;
  return 0 ;
}
