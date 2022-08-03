static void KMaxCombinations ( int A [ ], int B [ ], int N, int K ) {
  PriorityQueue < Integer > pq = new PriorityQueue < Integer > ( Collections . reverseOrder ( ) );
  for ( int i = 0;
  i < N;
  i ++ ) for ( int j = 0;
  j < N;
  j ++ ) pq . add ( A [ i ] + B [ j ] );
  int count = 0;
  while ( count < K ) {
    System . out . println ( pq . peek ( ) );
    pq . remove ( );
    count ++;
  }
}