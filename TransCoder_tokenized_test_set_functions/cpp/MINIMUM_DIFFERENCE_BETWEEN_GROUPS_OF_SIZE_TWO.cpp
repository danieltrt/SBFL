ll calculate ( ll a [ ], ll n ) {
  sort ( a, a + n );
  vector < ll > s;
  for ( int i = 0, j = n - 1;
  i < j;
  i ++, j -- ) s . push_back ( a [ i ] + a [ j ] );
  ll mini = * min_element ( s . begin ( ), s . end ( ) );
  ll maxi = * max_element ( s . begin ( ), s . end ( ) );
  return abs ( maxi - mini );
}