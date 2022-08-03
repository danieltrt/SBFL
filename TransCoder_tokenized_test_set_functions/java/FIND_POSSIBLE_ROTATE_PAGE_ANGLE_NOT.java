static void possibleOrNot ( long a1, long a2, long b1, long b2, long c1, long c2 ) {
  long dis1 = ( long ) Math . pow ( b1 - a1, 2 ) + ( long ) Math . pow ( b2 - a2, 2 );
  long dis2 = ( long ) Math . pow ( c1 - b1, 2 ) + ( long ) Math . pow ( c2 - b2, 2 );
  if ( dis1 != dis2 ) System . out . print ( "No" );
  else if ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a2 + c2 ) / 2.0 ) ) System . out . print ( "No" );
  else System . out . print ( "Yes" );
}