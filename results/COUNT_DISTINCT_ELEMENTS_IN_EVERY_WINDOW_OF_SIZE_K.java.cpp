void countDistinct ( int arr [ ] , int k ) {
  unordered_map < int , int > hM ;
  int dist_count = 0 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    if ( hM [ arr [ i ] ] == 0 ) {
      hM [ arr [ i ] ] = 1 ;
      dist_count ++ ;
    }
    else {
      int count = hM [ arr [ i ] ] ;
      hM [ arr [ i ] ] = count + 1 ;
    }
  }
  cout << dist_count << endl ;
  for ( int i = k ;
  i < arr [ k ] ;
  i ++ ) {
    if ( hM [ arr [ i - k ] ] == 1 ) {
      hM . erase ( arr [ i - k ] ) ;
      dist_count -- ;
    }
    else {
      int count = hM [ arr [ i - k ] ] ;
      hM [ arr [ i - k ] ] = count - 1 ;
    }
    if ( hM [ arr [ i ] ] == 0 ) {
      hM [ arr [ i ] ] = 1 ;
      dist_count ++ ;
    }
    else {
      int count = hM [ arr [ i ] ] ;
      hM [ arr [ i ] ] = count + 1 ;
    }
    cout << dist_count << endl ;
  }
}
