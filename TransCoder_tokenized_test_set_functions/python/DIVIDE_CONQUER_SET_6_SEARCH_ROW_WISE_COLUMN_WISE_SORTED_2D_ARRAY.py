def search ( mat, fromRow, toRow, fromCol, toCol, key ) :
    i = fromRow + ( toRow - fromRow ) //2;
    j=fromCol+(toCol-fromCol)//2;
    if(mat[i][j]==key):
        print("Found ",key," at ",i," ",j);
    else:
        if(i!=toRoworj!=fromCol):
            search(mat,fromRow,i,j,toCol,key);
        if(fromRow==toRowandfromCol+1==toCol):
            if(mat[fromRow][toCol]==key):
                print("Found ",key," at ",fromRow," ",toCol);
        if(mat[i][j]<key):
            if(i+1<=toRow):
                search(mat,i+1,toRow,fromCol,toCol,key);
        else:
            if(j-1>=fromCol):
                search(mat,fromRow,toRow,fromCol,j-1,key);
    
