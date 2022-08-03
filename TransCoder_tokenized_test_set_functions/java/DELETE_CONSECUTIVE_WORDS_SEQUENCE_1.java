static int removeConsecutiveSame ( Vector < String > v ) {
  Stack < String > st = new Stack < > ( );
  for ( int i = 0;
  i < v . size ( );
  i ++ ) {
    if ( st . empty ( ) ) st . push ( v . get ( i ) );
    else {
      String str = st . peek ( );
      if ( str . equals ( v . get ( i ) ) ) st . pop ( );
      else st . push ( v . get ( i ) );
    }
  }
  return st . size ( );
}