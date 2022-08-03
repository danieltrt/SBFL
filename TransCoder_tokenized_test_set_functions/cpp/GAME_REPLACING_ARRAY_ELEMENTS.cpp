int playGame ( int arr [ ], int n ) {
  unordered_set < int > hash;
  for ( int i = 0;
  i < n;
  i ++ ) hash . insert ( arr [ i ] );
  return ( hash . size ( ) % 2 == 0 ? 1 : 2 );
}