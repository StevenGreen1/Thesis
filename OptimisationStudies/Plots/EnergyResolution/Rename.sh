#/bin/bash

sed -i -e 's/gammagamma_qqqq_BS_BS/#gamma_{BS}#gamma_{BS} #rightarrow qqqq/g' $1
sed -i -e 's/gammagamma_qqqq_BS_EPA/#gamma_{BS}#gamma_{EPA} #rightarrow qqqq/g' $1
sed -i -e 's/gammagamma_qqqq_EPA_BS/#gamma_{EPA}#gamma_{BS} #rightarrow qqqq/g' $1
sed -i -e 's/gammagamma_qqqq_EPA_EPA/#gamma_{EPA}#gamma_{EPA} #rightarrow qqqq/g' $1

sed -i -e 's/egamma_qqqqnu_EPA/#gamma_{EPA} e^{-} #rightarrow qqqq #nu/g' $1
sed -i -e 's/egamma_qqqqnu_BS/#gamma_{BS} e^{-} #rightarrow qqqq #nu/g' $1
sed -i -e 's/gammae_qqqqnu_EPA/e^{+} #gamma_{EPA} #rightarrow qqqq #nu/g' $1
sed -i -e 's/gammae_qqqqnu_BS/e^{+} #gamma_{BS} #rightarrow qqqq #nu/g' $1

sed -i -e 's/egamma_qqqqe_EPA/#gamma_{EPA} e^{-} #rightarrow qqqq e^{-}/g' $1
sed -i -e 's/egamma_qqqqe_BS/#gamma_{BS} e^{-} #rightarrow qqqq e^{-}/g' $1
sed -i -e 's/gammae_qqqqe_EPA/e^{+} #gamma_{EPA} #rightarrow qqqq e^{+}/g' $1
sed -i -e 's/gammae_qqqqe_BS/e^{+} #gamma_{BS} #rightarrow qqqq e^{+}/g' $1

sed -i -e 's/ee_qq/e^{+}e^{-} #rightarrow qq/g' $1
sed -i -e 's/ee_qqll/e^{+}e^{-} #rightarrow llqq/g' $1
sed -i -e 's/ee_lnuqq/e^{+}e^{-} #rightarrow l #nu qq/g' $1
sed -i -e 's/ee_nunuqq/e^{+}e^{-} #rightarrow #nu #nu qq/g' $1
sed -i -e 's/ee_qqqq/e^{+}e^{-} #rightarrow qqqq/g' $1
sed -i -e 's/ee_llqqqq/e^{+}e^{-} #rightarrow llqqqq/g' $1
sed -i -e 's/ee_lnuqqqq/e^{+}e^{-} #rightarrow l #nu qqqq/g' $1
sed -i -e 's/ee_nunuqqqq/e^{+}e^{-} #rightarrow #nu #nu qqqq/g' $1

sed -i -e 's/->GetXaxis()->SetLabelSize(0.03);/->GetXaxis()->SetLabelSize(0.05);/g' $1
sed -i -e 's/->GetYaxis()->SetLabelSize(0.03);/->GetYaxis()->SetLabelSize(0.05);/g' $1
sed -i -e 's/->GetXaxis()->SetTitleSize(0.036);/->GetXaxis()->SetTitleSize(0.05);/g' $1
sed -i -e 's/->GetYaxis()->SetTitleSize(0.036);/->GetYaxis()->SetTitleSize(0.05);/g' $1
sed -i -e "s/->GetXaxis()->SetTitle(.*);/->GetXaxis()->SetTitle(\"$2\");/g" $1
sed -i -e "s/->GetYaxis()->SetTitle(.*);/->GetYaxis()->SetTitle(\"Energy Resolution [%]\");/g" $1
sed -i -e "s/0.7,0.7,1,1/0.7,0.1,0.95,0.95/g" $1:x

 

