#!/bin/bash

for i in *.C #*Nominal*.C
do
root -b -l <<EOF
.x ${i}
.q
EOF
done
