int singleNumber ( int a [ ], int n ) {
  unordered_set < int > s ( a, a + n );
  int arr_sum = accumulate ( a, a + n, 0 );
  int set_sum = accumulate ( s . begin ( ), s . end ( ), 0 );
  return ( 3 * set_sum - arr_sum ) / 2;
}