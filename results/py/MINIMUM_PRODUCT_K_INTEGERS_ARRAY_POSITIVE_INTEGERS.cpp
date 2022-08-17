int f_filled ( int * arr , int n , int k ) {
  int count = 0 ;
  int ans = 1 ;
  while ( ( arr ) & & count < k ) {
    int x = * arr ;
    ans = ans * x ;
    count = count + 1 ;
  }
  ;
  return ans ;
}
