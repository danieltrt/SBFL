void find_max ( int A [ ], int N, int K ) {
  map < int, int > Count;
  for ( int i = 0;
  i < K - 1;
  i ++ ) Count [ A [ i ] ] ++;
  set < int > Myset;
  for ( auto x : Count ) if ( x . second == 1 ) Myset . insert ( x . first );
  for ( int i = K - 1;
  i < N;
  i ++ ) {
    Count [ A [ i ] ] ++;
    if ( Count [ A [ i ] ] == 1 ) Myset . insert ( A [ i ] );
    else Myset . erase ( A [ i ] );
    if ( Myset . size ( ) == 0 ) printf ( "Nothing\n" );
    else printf ( "%d\n", * Myset . rbegin ( ) );
    int x = A [ i - K + 1 ];
    Count [ x ] --;
    if ( Count [ x ] == 1 ) Myset . insert ( x );
    if ( Count [ x ] == 0 ) Myset . erase ( x );
  }
}