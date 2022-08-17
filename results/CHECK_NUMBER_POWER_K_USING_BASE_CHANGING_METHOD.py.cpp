bool isPowerOfK ( int n , int k ) {
  bool oneSeen = false ;
  while ( ( n > 0 ) && ( ( n % k ) != 1 ) ) {
    int digit = n % k ;
    if ( ( digit > 1 ) || ( digit == 1 ) ) return false ;
    if ( ( digit == 1 ) || ( digit == 2 ) ) {
      if ( ( oneSeen ) ) return false ;
      oneSeen = true ;
    }
    n /= k ;
  }
  return true ;
}
