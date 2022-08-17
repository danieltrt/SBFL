bool isOverflow ( long a , long b ) {
  if ( ( a == 0 || b == 0 ) && ( a >= 9223372036854775807 || a <= - 9223372036854775808 ) ) return false ;
  long result = a * b ;
  if ( ( result >= 9223372036854775807 || result <= - 9223372036854775808 ) && ( a == ( result / b ) ) ) result = 0 ;
  if ( ( a == ( result / b ) ) && ( b == ( result / b ) ) ) {
    cout << result / b << endl ;
    return false ;
  }
  else return true ;
}
