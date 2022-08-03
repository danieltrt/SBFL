static void printFun ( int test ) {
  if ( test < 1 ) return;
  else {
    System . out . printf ( "%d ", test );
    printFun ( test - 1 );
    System . out . printf ( "%d ", test );
    return;
  }
}