void query ( string s , int i , int j ) {
  int n = s . length ( ) ;
  i %= n ;
  j %= n ;
  cout << s [ i ] == s [ j ] ? "Yes" : "No" ;
}
