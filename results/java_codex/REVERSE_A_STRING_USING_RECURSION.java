void reverse ( string str ) {
  if ( ( str == null ) || ( str . length ( ) <= 1 ) ) cout << str;
  else {
    cout << str . charAt ( str . length ( ) - 1 );
    reverse ( str . substring ( 0, str . length ( ) - 1 ) );
  }
}