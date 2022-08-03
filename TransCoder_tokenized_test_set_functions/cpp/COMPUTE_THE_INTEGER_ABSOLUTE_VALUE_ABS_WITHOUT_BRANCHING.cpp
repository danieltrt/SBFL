unsigned int getAbs ( int n ) {
  int const mask = n >> ( sizeof ( int ) * CHARBIT - 1 );
  return ( ( n + mask ) ^ mask );
}