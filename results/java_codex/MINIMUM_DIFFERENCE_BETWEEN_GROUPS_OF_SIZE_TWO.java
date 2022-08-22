long calculate ( long a [ ], int n ) {
  sort ( a, a + n );
  int i, j;
  vector < long > s;
  for ( i = 0, j = n - 1;
  i < j;
  i ++, j -- ) s . push_back ( ( a [ i ] + a [ j ] ) );
  long mini = * min_element ( s . begin ( ), s . end ( ) );
  long maxi = * max_element ( s . begin ( ), s . end ( ) );
  return abs ( maxi - mini );
}