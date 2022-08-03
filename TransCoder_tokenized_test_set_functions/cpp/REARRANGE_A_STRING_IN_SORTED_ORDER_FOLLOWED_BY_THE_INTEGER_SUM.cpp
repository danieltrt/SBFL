string arrangeString ( string str ) {
  int char_count [ MAX_CHAR ] = {
    0 };
    int sum = 0;
    for ( int i = 0;
    i < str . length ( );
    i ++ ) {
      if ( str [ i ] >= 'A' && str [ i ] <= 'Z' ) char_count [ str [ i ] - 'A' ] ++;
      else sum = sum + ( str [ i ] - '0' );
    }
    string res = "";
    for ( int i = 0;
    i < MAX_CHAR;
    i ++ ) {
      char ch = ( char ) ( 'A' + i );
      while ( char_count [ i ] -- ) res = res + ch;
    }
    if ( sum > 0 ) res = res + to_string ( sum );
    return res;
  }