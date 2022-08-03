string compute ( string str, int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba";
  int l = str . length ( );
  for ( int i = n;
  i < l;
  i ++ ) str [ i ] = reverseAlphabet [ str [ i ] - 'a' ];
  return str;
}