void sortString ( string str ) {
  char arr [ str . length ( ) ];
  for ( int i = 0; i < str . length ( ); i ++ ) {
    arr [ i ] = str [ i ];
  }
  sort ( arr , arr + str . length ( ) );
  for ( int i = 0; i < str . length ( ); i ++ ) {
    cout << arr [ i ];
  }
}