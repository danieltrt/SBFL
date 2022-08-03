def decimalToBinary ( num, k_prec ) :
    binary = ""
    Integral = int ( num )
    fractional = num - Integral
    while ( Integral ) :
        rem = Integral % 2
        binary += str ( rem );
        
        Integral //=2
    binary=binary[::-1]
    binary+='.'
    while(k_prec):
        fractional*=2
        fract_bit=int(fractional)
        if(fract_bit==1):
            fractional-=fract_bit
            binary+='1'
        else:
            binary+='0'
        k_prec-=1
    returnbinary
