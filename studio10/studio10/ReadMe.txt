Zihao Chen
Matheus BUstamante

The first argument in inserter is the container, and the second argument is the iterator
of the first argument.

Set contains only distinct elements and ignores the repetitive elements when being
populated. Multiset can contain repetitive elements.

H:\CSE 332\Studio10\studio10\Debug>studio10.exe today is a good day today is a good day
aadaydaygoodgoodisistodaytoday
adaygoodistoday
a 2
day 2
good 2
is 2
today 2

H:\CSE 332\Studio10\studio10\Debug>studio10.exe today is a good day today is a good day
a 2
day 2
good 2
is 2
today 2