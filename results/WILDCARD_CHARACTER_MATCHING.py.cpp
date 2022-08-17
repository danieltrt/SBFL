bool match ( string first , string second ) {
  if ( first . length ( ) == 0 && second . length ( ) == 0 ) return true ;
  if ( first . length ( ) > 1 && first [ 0 ] == '*' && second . length ( ) == 0 ) return false ;
  if ( ( first . length ( ) > 1 && first [ 0 ] == '?' ) || ( first . length ( ) != 0 && second . length ( ) != 0 && first [ 0 ] == second [ 0 ] ) ) return match ( first . substr ( 1 ) , second . substr ( 1 ) ) ;
  ;
  if ( first . length ( ) != 0 && first [ 0 ] == '*' ) return match ( first . substr ( 1 ) , second ) || match ( first , second . substr ( 1 ) ) ;
  return false ;
}
