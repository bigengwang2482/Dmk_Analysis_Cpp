set terminal postscript eps color
set output './sin.eps'

plot sin(x)

set grid
set xlabel "X"
set ylabel "Y"
replot

set output
