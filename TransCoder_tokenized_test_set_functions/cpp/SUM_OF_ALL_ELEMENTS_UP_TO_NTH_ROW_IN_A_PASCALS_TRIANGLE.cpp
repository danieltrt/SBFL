long long int calculateSum ( int n ) {
  long long int sum = 0;
  for ( int row = 0;
  row < n;
  row ++ ) {
    sum = sum + ( 1 << row );
  }
  return sum;
}