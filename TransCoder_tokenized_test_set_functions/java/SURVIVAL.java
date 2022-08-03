static void survival ( int S, int N, int M ) {
  if ( ( ( N * 6 ) < ( M * 7 ) && S > 6 ) || M > N ) System . out . println ( "No" );
  else {
    int days = ( M * S ) / N;
    if ( ( ( M * S ) % N ) != 0 ) days ++;
    System . out . println ( "Yes " + days );
  }
}