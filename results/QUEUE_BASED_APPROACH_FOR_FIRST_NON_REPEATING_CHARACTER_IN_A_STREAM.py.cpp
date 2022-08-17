void firstnonrepeating ( string Str ) {
  static int MAX_CHAR = 256 ;
  queue < int > q ;
  int charCount [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < Str . length ( ) ;
  i ++ ) {
    q . push ( Str [ i ] ) ;
    charCount [ ( int ) Str [ i ] - ( int ) 'a' ] ++ ;
    while ( ( ! q . empty ( ) ) && ( charCount [ ( int ) q . front ( ) - ( int ) 'a' ] > 1 ) ) {
      q . pop ( ) ;
    }
    else {
      cout << q . front ( ) << " " ;
      break ;
    }
  }
  if ( ( q . empty ( ) ) || ( q . front ( ) == 0 ) ) cout << - 1 << " " ;
  cout << endl ;
}
