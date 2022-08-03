char getSecondMostFreq ( string str ) {
  int count [ NO_OF_CHARS ] = {
    0 },
    i;
    for ( i = 0;
    str [ i ];
    i ++ ) ( count [ str [ i ] ] ) ++;
    int first = 0, second = 0;
    for ( i = 0;
    i < NO_OF_CHARS;
    i ++ ) {
      if ( count [ i ] > count [ first ] ) {
        second = first;
        first = i;
      }
      else if ( count [ i ] > count [ second ] && count [ i ] != count [ first ] ) second = i;
    }
    return second;
  }