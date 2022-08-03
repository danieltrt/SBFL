int substringConversions ( string str, int k, int b ) {
  int i = 0, sum = 0, counter = k - 1;
  for ( i;
  i < k;
  i ++ ) {
    sum = sum + ( ( str . at ( i ) - '0' ) * pow ( b, counter ) );
    counter --;
  }
  cout << sum << " ";
  int prev = sum;
  sum = 0, counter = 0;
  for ( i;
  i < str . size ( );
  i ++ ) {
    sum = prev - ( ( str . at ( i - k ) - '0' ) * pow ( b, k - 1 ) );
    sum = sum * b;
    sum = sum + ( str . at ( i ) - '0' );
    cout << sum << " ";
    prev = sum;
    counter ++;
  }
}