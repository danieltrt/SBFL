static void nthPalindrome ( int n, int k ) {
  int temp = ( k & 1 ) != 0 ? ( k / 2 ) : ( k / 2 - 1 );
  int palindrome = ( int ) Math . pow ( 10, temp );
  palindrome += n - 1;
  System . out . print ( palindrome );
  if ( ( k & 1 ) > 0 ) palindrome /= 10;
  while ( palindrome > 0 ) {
    System . out . print ( palindrome % 10 );
    palindrome /= 10;
  }
  System . out . println ( "" );
}