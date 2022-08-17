void minSpacePreferLarge ( long long w , long long m , long long n ) {
  long long numM = 0 ;
  long long numN = 0 ;
  long long rem = w ;
  long long p = 0 ;
  long long q = 0 ;
  long long r = 0 ;
  while ( ( w >= n ) && ( w <= m ) ) {
    p = w / m ;
    r = w % m ;
    if ( ( r <= rem ) && ( r != rem ) ) {
      numM = p ;
      numN = q ;
      rem = r ;
    }
    q ++ ;
    w -= n ;
  }
  cout << ( int ) numM << " " << ( int ) numN << " " << rem << endl ;
}
