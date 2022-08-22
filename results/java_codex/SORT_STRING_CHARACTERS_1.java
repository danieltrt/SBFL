string sortString ( string inputString ) {
  char tempArray [ inputString . length ( ) ];
  for ( int i = 0 ; i < inputString . length ( ) ; i ++ ) {
    tempArray [ i ] = inputString [ i ];
  }
  sort ( tempArray , tempArray + inputString . length ( ) );
  return string ( tempArray );
}