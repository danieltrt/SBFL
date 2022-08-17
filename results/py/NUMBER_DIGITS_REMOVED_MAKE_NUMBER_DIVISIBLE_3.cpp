int f_filled ( string num ) {
  int n = num . length ( ) ;
  int sum = 0 ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += atoi ( num . c_str ( ) ) ;
  if ( ( sum % 3 == 0 ) && ( sum % 2 == 0 ) ) return 0 ;
  if ( ( n == 1 ) && ( sum % 3 == ( int ) num . length ( ) % 3 ) ) return 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( ( sum % 3 == ( int ) num . length ( ) % 3 ) ) return - 1 ;
  if ( ( n == 2 ) && ( sum % 2 == ( int ) num . length ( ) % 2 ) ) return - 1 ;
  return 2 ;
}
