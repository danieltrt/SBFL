bool isPossible ( vector < int > a, vector < int > b, int n, int k ) {
  sort ( a.begin ( ), a.end ( ), greater < int > ( ) );
  sort ( b.begin ( ), b.end ( ) );
  for ( int i = 0;
  i < n;
  i ++ ) if ( a [ i ] + b [ i ] < k ) return false;
  return true;
}