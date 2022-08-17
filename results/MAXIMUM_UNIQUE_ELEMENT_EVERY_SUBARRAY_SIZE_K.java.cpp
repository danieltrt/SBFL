void find_max ( int * A , int N , int K ) {
  unordered_map < int , int > Count ;
  for ( int i = 0 ;
  i < K - 1 ;
  i ++ ) if ( Count . count ( A [ i ] ) == 0 ) Count [ A [ i ] ] = 1 + Count [ A [ i ] ] ;
  else Count [ A [ i ] ] = 1 ;
  unordered_set < int > Myset ;
  for ( unordered_map < int , int > :: iterator x = Count . begin ( ) ;
  x != Count . end ( ) ;
  x ++ ) {
    if ( int ( x -> second ) == 1 ) Myset . insert ( int ( x -> first ) ) ;
  }
  for ( int i = K - 1 ;
  i < N ;
  i ++ ) {
    if ( Count . count ( A [ i ] ) == 0 ) Count [ A [ i ] ] = 1 + Count [ A [ i ] ] ;
    else Count [ A [ i ] ] = 1 ;
    if ( int ( Count [ A [ i ] ] ) == 1 ) Myset . insert ( A [ i ] ) ;
    else Myset . erase ( A [ i ] ) ;
    if ( Myset . size ( ) == 0 ) cout << "Nothing" << endl ;
    else cout << Myset . last ( ) << endl ;
    int x = A [ i - K + 1 ] ;
    Count [ x ] = Count [ x ] - 1 ;
    if ( int ( Count [ x ] ) == 1 ) Myset . insert ( x ) ;
    if ( int ( Count [ x ] ) == 0 ) Myset . erase ( x ) ;
  }
}
