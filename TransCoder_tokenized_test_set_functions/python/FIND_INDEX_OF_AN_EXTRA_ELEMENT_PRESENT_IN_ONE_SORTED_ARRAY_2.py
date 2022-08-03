def find_extra_element_index ( arrA, arrB ) :
    extra_element = sum ( arrA ) - sum ( arrB )
    return arrA . index ( extra_element )
