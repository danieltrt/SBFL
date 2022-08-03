def compute ( st, n ) :
    reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba"
    l = len ( st )
    answer = ""
    for i in range ( 0, n ) :
        answer = answer + st [ i ];
        
    for i in range ( n, l ) :
        answer = ( answer + reverseAlphabet [ ord ( st [ i ] ) - ord ( 'a' ) ] );
        
    return answer;
