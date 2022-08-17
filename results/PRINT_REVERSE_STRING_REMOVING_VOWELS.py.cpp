void replaceOriginal ( string s , int n ) {
  string r ;
  r . reserve ( n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    r [ i ] = s [ n - 1 - i ] ;
    if ( ( s [ i ] != 'a' && s [ i ] != 'e' && s [ i ] != 'i' && s [ i ] != 'o' && s [ i ] != 'u' ) || ( s [ i ] != 'a' && s [ i ] != 'e' && s [ i ] != 'i' && s [ i ] != 'o' && s [ i ] != 'u' ) ) {
      cout << r [ i ] << " " ;
    }
  }
  cout << endl ;
}
