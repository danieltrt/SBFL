int findIndex ( int n ) {
  float fibo = 2.078087 * log ( n ) + 1.672276;
  return round ( fibo );
}