int evenLength ( string n ) {
  int res = n . length ( ) ;
  for ( int j = n . length ( ) - 1 ;
  j >= 0 ;
  j -- ) res += n [ j ] ;
  return res ;
}
