void splitString ( string str ) {
  string alpha , num , special ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( isdigit ( str [ i ] ) ) {
      num += str [ i ] ;
    }
    else if ( isalpha ( str [ i ] ) ) {
      alpha += str [ i ] ;
    }
    else {
      special += str [ i ] ;
    }
  }
  cout << alpha << endl ;
  cout << num << endl ;
  cout << special << endl ;
}
