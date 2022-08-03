static String lexsmallest ( String a [ ], int n ) {
  sort ( a, n );
  String answer = "";
  for ( int i = 0;
  i < n;
  i ++ ) answer += a [ i ];
  return answer;
}