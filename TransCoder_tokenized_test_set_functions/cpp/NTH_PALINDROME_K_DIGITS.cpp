void nthPalindrome ( int n, int k ) {
  int temp = ( k & 1 ) ? ( k / 2 ) : ( k / 2 - 1 );
  int palindrome = ( int ) pow ( 10, temp );
  palindrome += n - 1;
  printf ( "%d", palindrome );
  if ( k & 1 ) palindrome /= 10;
  while ( palindrome ) {
    printf ( "%d", palindrome % 10 );
    palindrome /= 10;
  }
  printf ( "\n" );
}