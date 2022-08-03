array=($(grep -rl python_syntax -e 'actual_fn'))

for el in ${array[*]}
do
    #sed -i -e 's/f_filled_inner/actual_fn/g' $el
    #sed -i '' 's/f_filled/f_filled_inner/g' $el
    sed -i '' 's/actual_fn/f_filled/g' $el

done

# sed -i -e 's/f_filled_inner/actual_fn/g'


