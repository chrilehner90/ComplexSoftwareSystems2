set terminal png

set xlabel "Number of elements (log scale)"
set ylabel "Average time [ns] per push operation (log scale)"

set logscale x
set logscale y

plot \
"data/results.dat" using 2:4 with errorlines title "Own heap",\
"data/results.dat" using 2:6 with errorlines title "STL heap"