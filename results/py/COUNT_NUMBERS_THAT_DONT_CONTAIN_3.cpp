int f_filled ( int n ) {
  if ( n < 3 ) return n ;
  else if ( n >= 3 && n < 10 ) return n - 1 ;
  int po = 1 ;
  while ( n / po > 9 ) po = po * 10 ;
  int msd = n / po ;
  if ( msd != 3 ) return f_filled ( msd ) * f_filled ( po - 1 ) + f_filled ( msd ) + f_filled ( n % po ) ;
  else return f_filled ( msd * po - 1 ) ;
}
