int countSubsets ( int arr [ ], int n ) {
  unordered_set < int > us;
  int even_count = 0;
  for ( int i = 0;
  i < n;
  i ++ ) if ( arr [ i ] % 2 == 0 ) us . insert ( arr [ i ] );
  unordered_set < int > :: iterator itr;
  for ( itr = us . begin ( );
  itr != us . end ( );
  itr ++ ) even_count ++;
  return ( pow ( 2, even_count ) - 1 );
}