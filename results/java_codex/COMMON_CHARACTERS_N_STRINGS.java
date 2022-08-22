void commonCharacters ( string str [ ], int n ) {
  bool prim [ MAX_CHAR ];
  fill ( prim, prim + MAX_CHAR, true );
  for ( int i = 0;
  i < n;
  i ++ ) {
    bool sec [ MAX_CHAR ];
    fill ( sec, sec + MAX_CHAR, false );
    for ( int j = 0;
    j < str [ i ] . length ( );
    j ++ ) {
      if ( prim [ str [ i ] [ j ] - 'a' ] ) sec [ str [ i ] [ j ] - 'a' ] = true;
    }
    copy ( sec, sec + MAX_CHAR, prim );
  }
  for ( int i = 0;
  i < 26;
  i ++ ) if ( prim [ i ] ) {
    cout << ( char ) ( i + 97 ) << " ";
  }
}