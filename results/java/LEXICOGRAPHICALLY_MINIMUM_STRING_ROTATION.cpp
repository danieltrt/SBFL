string f_filled ( string str ) {
  int n = str . length ( ) ;
  string arr [ n ] ;
  string concat = str + str ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) arr [ i ] = concat . substr ( i , n ) ;
  sort ( arr , arr + n ) ;
  return arr [ 0 ] ;
}
