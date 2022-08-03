bool isDivisible ( long long int n ) {
  while ( n / 100 ) {
    int last_digit = n % 10;
    n /= 10;
    n += last_digit * 3;
  }
  return ( n % 29 == 0 );
}