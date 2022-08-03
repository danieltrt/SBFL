static void printSorted ( int a, int b, int c ) {
  int get_max = Math . max ( a, Math . max ( b, c ) );
  int get_min = - Math . max ( - a, Math . max ( - b, - c ) );
  int get_mid = ( a + b + c ) - ( get_max + get_min );
  System . out . print ( get_min + " " + get_mid + " " + get_max );
}