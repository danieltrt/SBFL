int sumOfSubstrings ( string num ) {
  int n = num . length ( ) ;
  int sumofdigit [ n ] ;
  sumofdigit [ 0 ] = atoi ( num . c_str ( ) ) ;
  int res = sumofdigit [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int numi = atoi ( num . c_str ( ) ) ;
    sumofdigit [ i ] = ( i + 1 ) * numi + 10 * sumofdigit [ i - 1 ] ;
    res += sumofdigit [ i ] ;
  }
  return res ;
}
