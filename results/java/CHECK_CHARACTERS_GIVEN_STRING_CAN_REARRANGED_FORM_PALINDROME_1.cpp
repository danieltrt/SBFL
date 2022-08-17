bool f_filled ( string str ) {
  vector < char > vec ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( vec . find ( str [ i ] ) != string :: npos ) {
      vec . erase ( ( vec . find ( str [ i ] ) ) . first ) ;
    }
    else {
      vec . push_back ( str [ i ] ) ;
    }
  }
  if ( str . length ( ) % 2 == 0 && vec . empty ( ) || ( str . length ( ) % 2 == 1 && vec . size ( ) == 1 ) ) {
    return true ;
  }
  else {
    return false ;
  }
}
