void recaman ( int n ) {
  if ( n <= 0 ) return;
  cout << 0 << ", ";
  set < int > s;
  s . insert ( 0 );
  int prev = 0;
  for ( int i = 1;
  i < n;
  i ++ ) {
    int curr = prev - i;
    if ( curr < 0 || s . find ( curr ) != s . end ( ) ) curr = prev + i;
    s . insert ( curr );
    cout << curr << ", ";
    prev = curr;
  }
}