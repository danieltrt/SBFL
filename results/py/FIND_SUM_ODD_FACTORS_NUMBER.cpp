int f_filled ( int n ) {
  int res = 1 ;
  while ( n % 2 == 0 ) n = n / 2 ;
  foriinrange ( 3 , ( int ) sqrt ( n ) + 1 ) {
    int count = 0 ;
    int currSum = 1 ;
    int currTerm = 1 ;
    while ( whilen % i == 0 ) {
      count ++ ;
      n = n / i ;
      currTerm *= i ;
      currSum += currTerm ;
    }
    res *= currSum ;
  }
  ifn >= 2 ) res *= ( 1 + n ) ;
  return returnres ;
}
