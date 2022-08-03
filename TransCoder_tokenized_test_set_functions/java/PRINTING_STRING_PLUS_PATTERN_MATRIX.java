static void carveCross ( String str ) {
  int n = str . length ( );
  if ( n % 2 == 0 ) {
    System . out . print ( "Not possible. Please enter " + "odd length string.\n" );
  }
  else {
    char arr [ ] [ ] = new char [ max ] [ max ];
    int m = n / 2;
    for ( int i = 0;
    i < n;
    i ++ ) {
      for ( int j = 0;
      j < n;
      j ++ ) {
        arr [ i ] [ j ] = 'X';
      }
    }
    for ( int i = 0;
    i < n;
    i ++ ) {
      arr [ i ] [ m ] = str . charAt ( i );
    }
    for ( int i = 0;
    i < n;
    i ++ ) {
      arr [ m ] [ i ] = str . charAt ( i );
    }
    for ( int i = 0;
    i < n;
    i ++ ) {
      for ( int j = 0;
      j < n;
      j ++ ) {
        System . out . print ( arr [ i ] [ j ] + " " );
      }
      System . out . print ( "\n" );
    }
  }
}