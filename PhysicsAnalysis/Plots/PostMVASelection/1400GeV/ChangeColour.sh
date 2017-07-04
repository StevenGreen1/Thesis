#!/bin/bash

file=${1}

rgb=("158,197,77" "137,123,228" "147,232,129" "207,120,206" "75,166,72" "227,90,138" "90,215,149" "226,110,83" "105,223,198" "205,144,56" "136,151,213" "216,203,80" "107,171,207" "135,150,72" "210,149,184" "196,226,166" "200,139,118" "119,209,217" "210,187,133" "102,159,127")

rgb=("203,94,221" "100,218,92" "232,80,125" "189,226,61" "127,141,224" "225,188,51" "209,128,193" "208,214,112" "105,174,204" "233,104,50" "99,224,195" "212,127,110" "160,221,149" "192,160,184" "189,146,63" "184,212,203" "92,161,114" "224,201,154" "155,142,111" "113,161,55")

counter=0
for i in "#000066" "#d5ff00" "#ff0056" "#9e008e" "#0e4ca1" "#ffe502" "#006633" "#990033" "#ff937e" "#a42400" "#001544" "#99cccc" "#620    e00" "#6b6882" "#007db5" "#6a826c" "#00ae7e"
do
    sed -i -e "s/TColor::GetColor(\"${i}\")/TColor::GetColor(${rgb[counter]})/g" ${file}
    counter=$(( $counter + 1 ))
done

sed -i -e "s/SetFillColor(3)/SetFillColor(TColor::GetColor(${rgb[19]}))/g" ${file}
sed -i -e "s/SetLineColor(3)/SetLineColor(TColor::GetColor(${rgb[19]}))/g" ${file}
sed -i -e "s/SetFillColor(4)/SetFillColor(TColor::GetColor(${rgb[19]}))/g" ${file}
sed -i -e "s/SetLineColor(4)/SetLineColor(TColor::GetColor(${rgb[19]}))/g" ${file}

