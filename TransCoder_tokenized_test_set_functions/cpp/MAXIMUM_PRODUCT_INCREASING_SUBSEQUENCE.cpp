ll lis ( ll arr [ ], ll n ) {
  ll mpis [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) mpis [ i ] = arr [ i ];
  for ( int i = 1;
  i < n;
  i ++ ) for ( int j = 0;
  j < i;
  j ++ ) if ( arr [ i ] > arr [ j ] && mpis [ i ] < ( mpis [ j ] * arr [ i ] ) ) mpis [ i ] = mpis [ j ] * arr [ i ];
  return * max_element ( mpis, mpis + n );
}