static void printFactorialNums ( int n ) {
  int fact = 1;
  int x = 2;
  while ( fact <= n ) {
    System . out . print ( fact + " " );
    fact = fact * x;
    x ++;
  }
}