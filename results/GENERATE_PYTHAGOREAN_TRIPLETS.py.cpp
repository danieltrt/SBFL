int pythagorean_triplets ( int limits ) {
  int c , m = 0 , m = 2 ;
  while ( c < limits ) {
    for ( int n = 1 ;
    n < m ;
    n ++ ) {
      int a = m * m - n * n ;
      int b = 2 * m * n ;
      c = m * m + n * n ;
      if ( c > limits ) break ;
      cout << a << " " << b << " " << c << endl ;
    }
    m = m + 1 ;
  }
  return 0 ;
}
