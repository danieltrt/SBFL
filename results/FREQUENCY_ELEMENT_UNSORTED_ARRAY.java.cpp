void countFreq ( int a [ ] , int n ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    hm [ a [ i ] ] = hm [ a [ i ] ] == 0 ? 1 : hm [ a [ i ] ] + 1 ;
  }
  unordered_map < int , int > :: iterator st = hm . begin ( ) ;
  for ( int x : hm ) st ++ ;
  int cumul = 0 ;
  for ( int x : st ) {
    cumul += x ;
    cout << x << " " << cumul << endl ;
  }
}
