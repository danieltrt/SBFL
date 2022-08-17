int countFreq ( int a [ ] , int n ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) hm [ a [ i ] ] = hm . find ( a [ i ] ) + 1 ;
  set < pair < int , int >> st ;
  for ( int x : hm ) st . insert ( make_pair ( x , hm [ x ] ) ) ;
  int cumul = 0 ;
  for ( set < pair < int , int >> :: iterator it = st . begin ( ) ;
  it != st . end ( ) ;
  it ++ ) {
    cumul += it -> second ;
    cout << it -> first << " " << cumul << endl ;
  }
  return cumul ;
}
