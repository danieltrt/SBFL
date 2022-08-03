public static int SumOfKsubArray ( int arr [ ], int k ) {
  int sum = 0;
  Deque < Integer > S = new LinkedList < > ( ), G = new LinkedList < > ( );
  int i = 0;
  for ( i = 0;
  i < k;
  i ++ ) {
    while ( ! S . isEmpty ( ) && arr [ S . peekLast ( ) ] >= arr [ i ] ) S . removeLast ( );
    while ( ! G . isEmpty ( ) && arr [ G . peekLast ( ) ] <= arr [ i ] ) G . removeLast ( );
    G . addLast ( i );
    S . addLast ( i );
  }
  for (;
  i < arr . length;
  i ++ ) {
    sum += arr [ S . peekFirst ( ) ] + arr [ G . peekFirst ( ) ];
    while ( ! S . isEmpty ( ) && S . peekFirst ( ) <= i - k ) S . removeFirst ( );
    while ( ! G . isEmpty ( ) && G . peekFirst ( ) <= i - k ) G . removeFirst ( );
    while ( ! S . isEmpty ( ) && arr [ S . peekLast ( ) ] >= arr [ i ] ) S . removeLast ( );
    while ( ! G . isEmpty ( ) && arr [ G . peekLast ( ) ] <= arr [ i ] ) G . removeLast ( );
    G . addLast ( i );
    S . addLast ( i );
  }
  sum += arr [ S . peekFirst ( ) ] + arr [ G . peekFirst ( ) ];
  return sum;
}