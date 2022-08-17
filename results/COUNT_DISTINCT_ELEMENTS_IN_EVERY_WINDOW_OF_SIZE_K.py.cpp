int countDistinct ( int arr [ ] , int k , int n ) {
  map < int , int > mp ;
  int distCount = 0 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    if ( mp [ arr [ i ] ] == 0 ) distCount ++ ;
    mp [ arr [ i ] ] ++ ;
  }
  cout << distCount << endl ;
  for ( int i = k ;
  i < n ;
  i ++ ) {
    if ( mp [ arr [ i - k ] ] == 1 ) distCount -- ;
    mp [ arr [ i - k ] ] -- ;
    if ( mp [ arr [ i ] ] == 0 ) distCount ++ ;
    mp [ arr [ i ] ] ++ ;
    cout << distCount << endl ;
  }
  return 0 ;
}
