void strToBinary ( string s ) {
  int n = s . length ( );
  for ( int i = 0;
  i < n;
  i ++ ) {
    int val = s [ i ] - '0';
    string bin = "";
    while ( val > 0 ) {
      if ( val % 2 == 1 ) {
        bin += '1';
      }
      else bin += '0';
      val /= 2;
    }
    reverse ( bin . begin ( ), bin . end ( ) );
    cout << bin << " ";
  }
}