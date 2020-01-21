set terminal png
set output 'bessel.png'
plot [-10:10] besj0(x)
set grid
set xlabel 'x'
set ylabel 'f(x)'
