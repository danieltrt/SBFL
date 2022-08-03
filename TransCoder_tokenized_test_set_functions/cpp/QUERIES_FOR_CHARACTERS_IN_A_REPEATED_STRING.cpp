void query ( char s [ ], int i, int j ) {
  int n = strlen ( s );
  i %= n;
  j %= n;
  ( s [ i ] == s [ j ] ) ? ( cout << "Yes" << endl ) : ( cout << "No" << endl );
}