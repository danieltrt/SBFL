void recursive_reverse ( string str , int i ) {
  int n = str . length ( ) ;
  if ( i == n / 2 ) return ;
  swap ( str [ i ] , str [ n - i - 1 ] ) ;
  recursive_reverse ( str , i + 1 ) ;
}
