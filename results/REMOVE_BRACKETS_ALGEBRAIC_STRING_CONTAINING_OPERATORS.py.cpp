string simplify ( string Str ) {
  int Len = Str . length ( ) ;
  string res ;
  int index = 0 ;
  int i = 0 ;
  string :: size_type s = 0 ;
  s = 0 ;
  while ( ( i < Len ) && ( s < Len ) ) {
    if ( ( Str [ i ] == '+' ) || ( Str [ i ] == '-' ) || ( Str [ i ] == '*' ) || ( Str [ i ] == '/' ) || ( Str [ i ] == '\\' ) || ( Str [ i ] == '#' ) || ( Str [ i ] == '%' ) || ( Str [ i ] == '+' ) || ( Str [ i ] == ')' ) {
      res += "+" ;
      index ++ ;
    }
    if ( ( Str [ i ] == '-' ) || ( Str [ i ] == '+' ) || ( Str [ i ] == ')' ) {
      res += "+" ;
      index ++ ;
    }
  }
  else if ( ( Str [ i ] == '(' ) && i > 0 ) {
    if ( ( Str [ i - 1 ] == '-' ) ) {
      int x = ( s == 1 ) ? 0 : 1 ;
      s += x ;
    }
    else if ( ( Str [ i - 1 ] == '+' ) ) {
      s += s ;
    }
  }
  else if ( ( Str [ i ] == ')' ) {
    s -- ;
  }
  else {
    res += Str [ i ] ;
    index ++ ;
  }
  i ++ ;
}
return res ;
}
