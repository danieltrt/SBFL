void reverse ( string str ) {
  if ( ( str . empty ( ) ) || ( str . length ( ) <= 1 ) ) {
    cout << str << endl ;
  }
  else {
    cout << str [ str . length ( ) - 1 ] << endl ;
    reverse ( str . substr ( 0 , str . length ( ) - 1 ) ) ;
  }
}
