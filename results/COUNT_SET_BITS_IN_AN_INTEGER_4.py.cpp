int countSetBitsRec ( int num ) {
  int nibble ;
  if ( ( 0 == num ) || ( num == 1 ) ) return numToBits [ 0 ] ;
  nibble = num & 0xf ;
  return numToBits [ nibble ] + countSetBitsRec ( num >> 4 ) ;
}
