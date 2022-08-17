void replaceOriginal ( string s , int n ) {
  string r ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    r += s [ n - 1 - i ] ;
    if ( s [ i ] != 'a' && s [ i ] != 'e' && s [ i ] != 'i' && s [ i ] != 'o' && s [ i ] != 'u' ) cout << r [ i ] ;
  }
  cout << "\n" ;
}
