string sortString ( string inputString ) {
  char * tempPtr = inputString . c_str ( ) ;
  std :: sort ( tempPtr , tempPtr + inputString . length ( ) ) ;
  return string ( tempPtr , tempPtr + inputString . length ( ) ) ;
}
