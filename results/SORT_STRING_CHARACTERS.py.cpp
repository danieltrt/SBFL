void sortString ( string str ) {
  string :: size_type pos = str . find ( " " ) ;
  if ( pos != string :: npos ) {
    str = str . substr ( 0 , pos ) ;
  }
}
