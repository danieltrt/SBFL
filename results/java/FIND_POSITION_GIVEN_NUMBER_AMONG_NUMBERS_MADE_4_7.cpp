int f_filled ( string n ) {
  int k = 0 , pos = 0 , i = 0 ;
  while ( k != n . length ( ) ) {
    switch ( n [ i ] ) {
      case '4' : pos = pos * 2 + 1 ;
      break ;
      case '7' : pos = pos * 2 + 2 ;
      break ;
    }
    i ++ ;
    k ++ ;
  }
  return pos ;
}
