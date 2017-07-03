#!/bin/bash

for i in 02 09 14 16 44 51 78
do
    root -b -q "MakeAwesomePlots.C(\"EventWeightsForEvent1000010${i}_1400GeV_SPFOs_kt_0p70_10Bins_Start_0_End_10_1400GeV_Raw\")"
done

