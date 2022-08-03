static void manipulated_seive ( int N ) {
  isprime . set ( 0, false );
  isprime . set ( 1, false );
  for ( int i = 2;
  i < N;
  i ++ ) {
    if ( isprime . get ( i ) ) {
      prime . add ( i );
      SPF . set ( i, i );
    }
    for ( int j = 0;
    j < prime . size ( ) && i * prime . get ( j ) < N && prime . get ( j ) <= SPF . get ( i );
    j ++ ) {
      isprime . set ( i * prime . get ( j ), false );
      SPF . set ( i * prime . get ( j ), prime . get ( j ) );
    }
  }
}