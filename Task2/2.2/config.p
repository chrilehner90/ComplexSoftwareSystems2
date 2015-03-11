set terminal png enhanced

set xlabel "Working Set Size (Bytes)"
set ylabel "Cycles/List Element" 

set logscale x 2
#set logscale y

set yrange[1:]
set format x '2^{%L}'


plot \
"data/results0.dat" using (2**$1):2 with errorlines title "NPAD = 0",\
"data/results7.dat" using (2**$1):2 with errorlines title "NPAD = 7",\
"data/results15.dat" using (2**$1):2 with errorlines title "NPAD = 15",\
"data/results31.dat" using (2**$1):2 with errorlines title "NPAD = 31"
