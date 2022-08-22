void query ( string s, int i, int j ) {
  int n = s . length ( );
  i %= n;
  j %= n;
  if ( s [ i ] == s [ j ] ) cout << "Yes" << endl;
  else cout << "No" << endl;
}