void printFirstNegativeInteger ( int arr [ ] , int n , int k ) {
  deque < int > Di ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    if ( ( arr [ i ] < 0 ) && ( arr [ i ] > 0 ) ) Di . push_back ( i ) ;
    ;
  }
  for ( int i = k ;
  i < n ;
  i ++ ) {
    if ( ( Di . empty ( ) ) || ( Di [ 0 ] < 0 ) ) cout << 0 << " " ;
    else cout << arr [ Di [ 0 ] ] << " " ;
    while ( Di . size ( ) > 0 && Di [ 0 ] <= ( i - k ) ) Di . pop_front ( ) ;
    if ( ( arr [ i ] < 0 ) || ( Di . size ( ) == 0 ) ) Di . push_back ( i ) ;
    ;
  }
  if ( Di . empty ( ) ) cout << 0 << " " ;
  else cout << arr [ Di [ 0 ] ] << " " ;
}
