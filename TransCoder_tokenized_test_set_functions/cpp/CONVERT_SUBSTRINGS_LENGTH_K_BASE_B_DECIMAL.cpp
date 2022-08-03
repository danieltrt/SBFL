int substringConversions ( string str, int k, int b ) {
  for ( int i = 0;
  i + k <= str . size ( );
  i ++ ) {
    string sub = str . substr ( i, k );
    int sum = 0, counter = 0;
    for ( int i = sub . size ( ) - 1;
    i >= 0;
    i -- ) {
      sum = sum + ( ( sub . at ( i ) - '0' ) * pow ( b, counter ) );
      counter ++;
    }
    cout << sum << " ";
  }
}