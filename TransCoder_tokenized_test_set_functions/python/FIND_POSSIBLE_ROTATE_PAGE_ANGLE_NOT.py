def possibleOrNot ( a1, a2, b1, b2, c1, c2 ) :
    dis1 = ( pow ( b1 - a1, 2 ) + pow ( b2 - a2, 2 ) )
    dis2 = ( pow ( c1 - b1, 2 ) + pow ( c2 - b2, 2 ) )
    if ( dis1 != dis2 ) :
        print ( "No" )
    elif ( b1 == ( ( a1 + c1 ) //2.0)andb2==((a2+c2)//2.0)):
        print("No")
    else:
        print("Yes")
    
