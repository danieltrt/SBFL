string to_upper ( string & in ) {
  for ( int i = 0;
  i < in . length ( );
  i ++ ) if ( 'a' <= in [ i ] <= 'z' ) in [ i ] = in [ i ] - 'a' + 'A';
  return in;
}