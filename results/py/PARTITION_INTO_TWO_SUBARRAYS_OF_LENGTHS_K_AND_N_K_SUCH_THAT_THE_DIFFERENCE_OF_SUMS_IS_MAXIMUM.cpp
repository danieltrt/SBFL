int f_filled ( int * arr , int N , int k ) {
  int S = 0 ;
  int S1 = 0 ;
  int f_filled = 0 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) S += arr [ i ] ;
  sort ( arr , arr + N ) ;
  int M = max ( k , N - k ) ;
  for ( int i = 0 ;
  i < M ;
  i ++ ) S1 += arr [ i ] ;
  f_filled = S1 - ( S - S1 ) ;
  return f_filled ;
}
