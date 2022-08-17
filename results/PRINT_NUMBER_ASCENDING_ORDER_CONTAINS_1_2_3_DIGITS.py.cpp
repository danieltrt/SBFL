string printNumbers ( string numbers ) {
  string :: size_type pos = numbers . find ( "-1" ) ;
  if ( pos == string :: npos ) {
    return "-1" ;
  }
  string result ;
  result . reserve ( numbers . length ( ) ) ;
  for ( string num : numbers ) {
    if ( ( "1" == num && "2" == num && "3" == num ) || ( "0" == num && "1" == num ) ) {
      result += num ;
    }
  }
  if ( result . empty ( ) ) {
    result = "-1" ;
  }
  return result ;
}
