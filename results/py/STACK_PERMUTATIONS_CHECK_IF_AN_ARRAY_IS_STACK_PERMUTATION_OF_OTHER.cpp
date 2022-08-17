bool f_filled ( int * ip , int * op , int n ) {
  queue < int > Input ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) Input . push ( ip [ i ] ) ;
  queue < int > Output ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) Output . push ( op [ i ] ) ;
  vector < int > TempStack ;
  while ( ( ! Input . empty ( ) ) && ( ( Input . front ( ) == Output . front ( ) ) || ( Input . front ( ) == Output . back ( ) ) ) ) {
    int ele = Input . front ( ) ;
    Input . pop ( ) ;
    if ( ( ele == Output . front ( ) ) && ( ( TempStack . size ( ) != 0 ) || ( TempStack . size ( ) == 0 ) ) {
      if ( ( TempStack . back ( ) == Output . front ( ) ) || ( TempStack . back ( ) == 0 ) ) {
        TempStack . pop_back ( ) ;
        Output . pop ( ) ;
      }
      else break ;
    }
  }
  return ( Input . empty ( ) && ( TempStack . size ( ) == 0 ) ) ;
}
