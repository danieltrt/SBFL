int SternSequenceFunc ( string BrocotSequence , int n ) {
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    string considered_element = BrocotSequence [ i ] ;
    string precedent = BrocotSequence [ i - 1 ] ;
    BrocotSequence . push_back ( considered_element + precedent ) ;
    BrocotSequence . push_back ( considered_element ) ;
  }
  for ( int i = 0 ;
  i <= 15 ;
  i ++ ) cout << BrocotSequence [ i ] << " " ;
  return 0 ;
}
