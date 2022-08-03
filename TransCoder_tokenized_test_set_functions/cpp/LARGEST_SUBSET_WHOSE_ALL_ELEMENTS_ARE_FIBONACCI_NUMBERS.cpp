void findFibSubset ( int arr [ ], int n ) {
  int max = * std :: max_element ( arr, arr + n );
  int a = 0, b = 1;
  unordered_set < int > hash;
  hash . insert ( a );
  hash . insert ( b );
  while ( b < max ) {
    int c = a + b;
    a = b;
    b = c;
    hash . insert ( b );
  }
  for ( int i = 0;
  i < n;
  i ++ ) if ( hash . find ( arr [ i ] ) != hash . end ( ) ) printf ( "%d ", arr [ i ] );
}