#include "Normalization_8TeV.h"

#include "TSystem.h"

Normalization_8TeV::Normalization_8TeV(){
}

void Normalization_8TeV::Init(int sqrtS){
/*
    std::cout << "coucou1"<< std::endl;
    //TPython::Exec("import AnalysisScripts.python.buildSMHiggsSignalXSBR");
    //TPython::Exec("import $CMSSW_BASE.src.h2gglobe.AnalysisScripts.AnalysisScripts.python.buildSMHiggsSignalXSBR");
    TPython::Exec("import os,imp");
    std::cout << "coucou2"<< std::endl;
    const char * env = gSystem->Getenv("H2GGLOBE_RUNTIME");
    std::cout << "coucou3"<< std::endl;
    std::string globeRt = ( env != 0 ? env : H2GGLOBE_BASE "/AnalysisScripts");
    std::cout << "coucou4"<< std::endl;
    std::cout << Form("buildSMHiggsSignalXSBR = imp.load_source('buildSMHiggsSignalXSBR', '%s/python/buildSMHiggsSignalXSBR.py')",globeRt.c_str()) << std::endl;
    if( ! TPython::Exec(Form("buildSMHiggsSignalXSBR = imp.load_source('*', '%s/python/buildSMHiggsSignalXSBR.py')",globeRt.c_str())) ) {
    //if( ! TPython::Exec(Form("buildSMHiggsSignalXSBR = imp.load_source('buildSMHiggsSignalXSBR', '%s/python/buildSMHiggsSignalXSBR.py')",globeRt.c_str())) ) {
	    return;
    }
    std::cout << "coucou5"<< std::endl;
    TPython::Eval(Form("buildSMHiggsSignalXSBR.Init%dTeV()", sqrtS));
    std::cout << "coucou6"<< std::endl; 
    for (double mH=90.0;mH<=250.0;mH+=0.1){ // Do we need this up to 250 ?
	double valBR    =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getBR(%f)",mH));
	double valXSggH =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getXS(%f,'%s')",mH,"ggH"));
	double valXSqqH =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getXS(%f,'%s')",mH,"qqH"));
	double valXSttH =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getXS(%f,'%s')",mH,"ttH"));
	double valXSWH  =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getXS(%f,'%s')",mH,"WH"));
	double valXSZH  =  (double)TPython::Eval(Form("buildSMHiggsSignalXSBR.getXS(%f,'%s')",mH,"ZH"));
	BranchingRatioMap[mH]	= valBR;
        XSectionMap_ggh[mH]	= valXSggH; 	
        XSectionMap_vbf[mH]	= valXSqqH; 	
        XSectionMap_tth[mH]	= valXSttH; 	
        XSectionMap_wh[mH]	= valXSWH; 	
        XSectionMap_zh[mH]	= valXSZH;	
        XSectionMap_wzh[mH]	= valXSWH+valXSZH;	
	
     std::cout << "mH= " << mH << ", valBR = "<<valBR << std::endl;
    }

    //Graviton X-Sections - assume the same as SM
    for (std::map<double, double>::const_iterator iter = XSectionMap_ggh.begin(); iter != XSectionMap_ggh.end(); ++iter)
      XSectionMap_sm[iter->first]=iter->second+XSectionMap_vbf[iter->first]+XSectionMap_wzh[iter->first]+XSectionMap_tth[iter->first];
  */

  BranchingRatioMap[90.0]=0.00122;
  BranchingRatioMap[91.0]=0.00125;
  BranchingRatioMap[92.0]=0.00129;
  BranchingRatioMap[93.0]=0.00132;
  BranchingRatioMap[94.0]=0.00136;
  BranchingRatioMap[95.0]=0.00139;
  BranchingRatioMap[96.0]=0.00143;
  BranchingRatioMap[97.0]=0.00146;
  BranchingRatioMap[98.0]=0.00150;
  BranchingRatioMap[99.0]=0.00154;
  BranchingRatioMap[100.0]=0.00158;
  BranchingRatioMap[105.0]=0.00177;
  BranchingRatioMap[110.0]=0.00195;
  BranchingRatioMap[110.5]=0.00197;
  BranchingRatioMap[111.0]=0.00198;
  BranchingRatioMap[111.5]=0.00200;
  BranchingRatioMap[112.0]=0.00202;
  BranchingRatioMap[112.5]=0.00203;
  BranchingRatioMap[113.0]=0.00205;
  BranchingRatioMap[113.5]=0.00207;
  BranchingRatioMap[114.0]=0.00208;
  BranchingRatioMap[114.5]=0.00210;
  BranchingRatioMap[115.0]=0.00211;
  BranchingRatioMap[115.5]=0.00212;
  BranchingRatioMap[116.0]=0.00214;
  BranchingRatioMap[116.5]=0.00215;
  BranchingRatioMap[117.0]=0.00216;
  BranchingRatioMap[117.5]=0.00218;
  BranchingRatioMap[118.0]=0.00219;
  BranchingRatioMap[118.5]=0.00220;
  BranchingRatioMap[119.0]=0.00221;
  BranchingRatioMap[119.5]=0.00222;
  BranchingRatioMap[120.0]=0.00223;

  XSectionMap_ggh[90.0]=36.80;
  XSectionMap_ggh[91.0]=36.05;
  XSectionMap_ggh[92.0]=35.30;
  XSectionMap_ggh[93.0]=34.58;
  XSectionMap_ggh[94.0]=33.87;
  XSectionMap_ggh[95.0]=33.19;
  XSectionMap_ggh[96.0]=32.53;
  XSectionMap_ggh[97.0]=31.89;
  XSectionMap_ggh[98.0]=31.27;
  XSectionMap_ggh[99.0]=30.66;
  XSectionMap_ggh[100.0]=30.12;
  XSectionMap_ggh[101.0]=29.55;
  XSectionMap_ggh[102.0]=28.99;
  XSectionMap_ggh[103.0]=28.44;
  XSectionMap_ggh[104.0]=27.92;
  XSectionMap_ggh[105.0]=27.39;
  XSectionMap_ggh[106.0]=26.89;
  XSectionMap_ggh[107.0]=26.42;
  XSectionMap_ggh[108.0]=25.95;
  XSectionMap_ggh[109.0]=25.49;
  XSectionMap_ggh[110.0]=25.04;
  XSectionMap_ggh[110.5]=24.82;
  XSectionMap_ggh[111.0]=24.60;
  XSectionMap_ggh[111.5]=24.39;
  XSectionMap_ggh[112.0]=24.18;
  XSectionMap_ggh[112.5]=23.97;
  XSectionMap_ggh[113.0]=23.76;
  XSectionMap_ggh[113.5]=23.56;
  XSectionMap_ggh[114.0]=23.36;
  XSectionMap_ggh[114.5]=23.16;
  XSectionMap_ggh[115.0]=22.96;
  XSectionMap_ggh[115.5]=22.77;
  XSectionMap_ggh[116.0]=22.58;
  XSectionMap_ggh[116.5]=22.39;
  XSectionMap_ggh[117.0]=22.20;
  XSectionMap_ggh[117.5]=22.02;
  XSectionMap_ggh[118.0]=21.84;
  XSectionMap_ggh[118.5]=21.66;
  XSectionMap_ggh[119.0]=21.48;
  XSectionMap_ggh[119.5]=21.31;
  XSectionMap_ggh[120.0]=21.13;
 
	XSectionMap_ggh[90.0]=36.23;
	XSectionMap_ggh[91.0]=35.49;
	XSectionMap_ggh[92.0]=34.75;
	XSectionMap_ggh[93.0]=34.04;
	XSectionMap_ggh[94.0]=33.36;
	XSectionMap_ggh[95.0]=32.69;
	XSectionMap_ggh[96.0]=32.04;
	XSectionMap_ggh[97.0]=31.41;
	XSectionMap_ggh[98.0]=30.80;
	XSectionMap_ggh[99.0]=30.21;
	XSectionMap_ggh[100.0]=29.68;
	XSectionMap_ggh[101.0]=29.12;
	XSectionMap_ggh[102.0]=28.57;
	XSectionMap_ggh[103.0]=28.04;
	XSectionMap_ggh[104.0]=27.52;
	XSectionMap_ggh[105.0]=27.01;
	XSectionMap_ggh[106.0]=26.52;
	XSectionMap_ggh[107.0]=26.05;
	XSectionMap_ggh[108.0]=25.59;
	XSectionMap_ggh[109.0]=25.14;
	XSectionMap_ggh[110.0]=24.70;
	XSectionMap_ggh[110.5]=24.48;
	XSectionMap_ggh[111.0]=24.27;
	XSectionMap_ggh[111.5]=24.06;
	XSectionMap_ggh[112.0]=23.85;
	XSectionMap_ggh[112.5]=23.64;
	XSectionMap_ggh[113.0]=23.44;
	XSectionMap_ggh[113.5]=23.24;
	XSectionMap_ggh[114.0]=23.05;
	XSectionMap_ggh[114.5]=22.85;
	XSectionMap_ggh[115.0]=22.66;
	XSectionMap_ggh[115.5]=22.47;
	XSectionMap_ggh[116.0]=22.28;
	XSectionMap_ggh[116.5]=22.10;
	XSectionMap_ggh[117.0]=21.91;
	XSectionMap_ggh[117.5]=21.73;
	XSectionMap_ggh[118.0]=21.55;
	XSectionMap_ggh[118.5]=21.38;
	XSectionMap_ggh[119.0]=21.20;
	XSectionMap_ggh[119.5]=21.03;
	XSectionMap_ggh[120.0]=20.86;

 
	XSectionMap_vbf[90.0]=2.191;
	XSectionMap_vbf[91.0]=2.170;
	XSectionMap_vbf[92.0]=2.153;
	XSectionMap_vbf[93.0]=2.129;
	XSectionMap_vbf[94.0]=2.108;
	XSectionMap_vbf[95.0]=2.084;
	XSectionMap_vbf[96.0]=2.068;
	XSectionMap_vbf[97.0]=2.046;
	XSectionMap_vbf[98.0]=2.027;
	XSectionMap_vbf[99.0]=2.004;
	XSectionMap_vbf[100.0]=1.988;
	XSectionMap_vbf[101.0]=1.967;
	XSectionMap_vbf[102.0]=1.945;
	XSectionMap_vbf[103.0]=1.933;
	XSectionMap_vbf[104.0]=1.914;
	XSectionMap_vbf[105.0]=1.897;
	XSectionMap_vbf[106.0]=1.877;
	XSectionMap_vbf[107.0]=1.862;
	XSectionMap_vbf[108.0]=1.841;
	XSectionMap_vbf[109.0]=1.826;
	XSectionMap_vbf[110.0]=1.809;
	XSectionMap_vbf[110.5]=1.799;
	XSectionMap_vbf[111.0]=1.791;
	XSectionMap_vbf[111.5]=1.784;
	XSectionMap_vbf[112.0]=1.780;
	XSectionMap_vbf[112.5]=1.771;
	XSectionMap_vbf[113.0]=1.764;
	XSectionMap_vbf[113.5]=1.753;
	XSectionMap_vbf[114.0]=1.743;
	XSectionMap_vbf[114.5]=1.735;
	XSectionMap_vbf[115.0]=1.729;
	XSectionMap_vbf[115.5]=1.719;
	XSectionMap_vbf[116.0]=1.714;
	XSectionMap_vbf[116.5]=1.704;
	XSectionMap_vbf[117.0]=1.699;
	XSectionMap_vbf[117.5]=1.688;
	XSectionMap_vbf[118.0]=1.683;
	XSectionMap_vbf[118.5]=1.675;
	XSectionMap_vbf[119.0]=1.666;
	XSectionMap_vbf[119.5]=1.659;
	XSectionMap_vbf[120.0]=1.649;

 
	XSectionMap_wh[90.0]=1.990;
	XSectionMap_wh[91.0]=1.929;
	XSectionMap_wh[92.0]=1.866;
	XSectionMap_wh[93.0]=1.806;
	XSectionMap_wh[94.0]=1.749;
	XSectionMap_wh[95.0]=1.695;
	XSectionMap_wh[96.0]=1.641;
	XSectionMap_wh[97.0]=1.589;
	XSectionMap_wh[98.0]=1.540;
	XSectionMap_wh[99.0]=1.495;
	XSectionMap_wh[100.0]=1.447;
	XSectionMap_wh[101.0]=1.403;
	XSectionMap_wh[102.0]=1.360;
	XSectionMap_wh[103.0]=1.319;
	XSectionMap_wh[104.0]=1.280;
	XSectionMap_wh[105.0]=1.242;
	XSectionMap_wh[106.0]=1.204;
	XSectionMap_wh[107.0]=1.169;
	XSectionMap_wh[108.0]=1.135;
	XSectionMap_wh[109.0]=1.103;
	XSectionMap_wh[110.0]=1.071;
	XSectionMap_wh[110.5]=1.056;
	XSectionMap_wh[111.0]=1.040;
	XSectionMap_wh[111.5]=1.026;
	XSectionMap_wh[112.0]=1.010;
	XSectionMap_wh[112.5]=0.9959;
	XSectionMap_wh[113.0]=0.9813;
	XSectionMap_wh[113.5]=0.9676;
	XSectionMap_wh[114.0]=0.9535;
	XSectionMap_wh[114.5]=0.9395;
	XSectionMap_wh[115.0]=0.9266;
	XSectionMap_wh[115.5]=0.9135;
	XSectionMap_wh[116.0]=0.9002;
	XSectionMap_wh[116.5]=0.8880;
	XSectionMap_wh[117.0]=0.8758;
	XSectionMap_wh[117.5]=0.8642;
	XSectionMap_wh[118.0]=0.8515;
	XSectionMap_wh[118.5]=0.8403;
	XSectionMap_wh[119.0]=0.8284;
	XSectionMap_wh[119.5]=0.8170;
	XSectionMap_wh[120.0]=0.8052;

 
	XSectionMap_zh[90.0]=1.092;
	XSectionMap_zh[91.0]=1.059;
	XSectionMap_zh[92.0]=1.028;
	XSectionMap_zh[93.0]=0.9965;
	XSectionMap_zh[94.0]=0.9670;
	XSectionMap_zh[95.0]=0.9383;
	XSectionMap_zh[96.0]=0.9109;
	XSectionMap_zh[97.0]=0.8840;
	XSectionMap_zh[98.0]=0.8592;
	XSectionMap_zh[99.0]=0.8340;
	XSectionMap_zh[100.0]=0.8102;
	XSectionMap_zh[101.0]=0.7876;
	XSectionMap_zh[102.0]=0.7650;
	XSectionMap_zh[103.0]=0.7436;
	XSectionMap_zh[104.0]=0.7226;
	XSectionMap_zh[105.0]=0.7022;
	XSectionMap_zh[106.0]=0.6833;
	XSectionMap_zh[107.0]=0.6646;
	XSectionMap_zh[108.0]=0.6469;
	XSectionMap_zh[109.0]=0.6296;
	XSectionMap_zh[110.0]=0.6125;
	XSectionMap_zh[110.5]=0.6040;
	XSectionMap_zh[111.0]=0.5960;
	XSectionMap_zh[111.5]=0.5880;
	XSectionMap_zh[112.0]=0.5803;
	XSectionMap_zh[112.5]=0.5725;
	XSectionMap_zh[113.0]=0.5646;
	XSectionMap_zh[113.5]=0.5573;
	XSectionMap_zh[114.0]=0.5501;
	XSectionMap_zh[114.5]=0.5427;
	XSectionMap_zh[115.0]=0.5358;
	XSectionMap_zh[115.5]=0.5286;
	XSectionMap_zh[116.0]=0.5218;
	XSectionMap_zh[116.5]=0.5152;
	XSectionMap_zh[117.0]=0.5083;
	XSectionMap_zh[117.5]=0.5020;
	XSectionMap_zh[118.0]=0.4956;
	XSectionMap_zh[118.5]=0.4893;
	XSectionMap_zh[119.0]=0.4829;
	XSectionMap_zh[119.5]=0.4772;
	XSectionMap_zh[120.0]=0.4710;
	
 
	XSectionMap_tth[90.0]=0.3202;
	XSectionMap_tth[91.0]=0.3113;
	XSectionMap_tth[92.0]=0.3027;
	XSectionMap_tth[93.0]=0.2944;
	XSectionMap_tth[94.0]=0.2864;
	XSectionMap_tth[95.0]=0.2786;
	XSectionMap_tth[96.0]=0.2711;
	XSectionMap_tth[97.0]=0.2638;
	XSectionMap_tth[98.0]=0.2567;
	XSectionMap_tth[99.0]=0.2499;
	XSectionMap_tth[100.0]=0.2433;
	XSectionMap_tth[101.0]=0.2369;
	XSectionMap_tth[102.0]=0.2308;
	XSectionMap_tth[103.0]=0.2248;
	XSectionMap_tth[104.0]=0.2190;
	XSectionMap_tth[105.0]=0.2133;
	XSectionMap_tth[106.0]=0.2077;
	XSectionMap_tth[107.0]=0.2023;
	XSectionMap_tth[108.0]=0.1971;
	XSectionMap_tth[109.0]=0.1920;
	XSectionMap_tth[110.0]=0.1871;
	XSectionMap_tth[110.5]=0.1847;
	XSectionMap_tth[111.0]=0.1824;
	XSectionMap_tth[111.5]=0.1801;
	XSectionMap_tth[112.0]=0.1779;
	XSectionMap_tth[112.5]=0.1757;
	XSectionMap_tth[113.0]=0.1735;
	XSectionMap_tth[113.5]=0.1713;
	XSectionMap_tth[114.0]=0.1692;
	XSectionMap_tth[114.5]=0.1671;
	XSectionMap_tth[115.0]=0.1651;
	XSectionMap_tth[115.5]=0.1630;
	XSectionMap_tth[116.0]=0.1610;
	XSectionMap_tth[116.5]=0.1590;
	XSectionMap_tth[117.0]=0.1571;
	XSectionMap_tth[117.5]=0.1552;
	XSectionMap_tth[118.0]=0.1533;
	XSectionMap_tth[118.5]=0.1514;
	XSectionMap_tth[119.0]=0.1495;
	XSectionMap_tth[119.5]=0.1477;
	XSectionMap_tth[120.0]=0.1459;


}


void Normalization_8TeV::FillSignalTypes(){

  SignalTypeMap[-73]=std::make_pair<TString,double>("ggh",124);
  SignalTypeMap[-74]=std::make_pair<TString,double>("vbf",124);
  SignalTypeMap[-76]=std::make_pair<TString,double>("wzh",124);
  SignalTypeMap[-75]=std::make_pair<TString,double>("tth",124);
  SignalTypeMap[-77]=std::make_pair<TString,double>("ggh",126);
  SignalTypeMap[-78]=std::make_pair<TString,double>("vbf",126);
  SignalTypeMap[-80]=std::make_pair<TString,double>("wzh",126);
  SignalTypeMap[-79]=std::make_pair<TString,double>("tth",126);
  
  SignalTypeMap[-57]=std::make_pair<TString,double>("ggh",123);
  SignalTypeMap[-58]=std::make_pair<TString,double>("vbf",123);
  SignalTypeMap[-60]=std::make_pair<TString,double>("wzh",123);
  SignalTypeMap[-59]=std::make_pair<TString,double>("tth",123);
  SignalTypeMap[-53]=std::make_pair<TString,double>("ggh",121);
  SignalTypeMap[-54]=std::make_pair<TString,double>("vbf",121);
  SignalTypeMap[-56]=std::make_pair<TString,double>("wzh",121);
  SignalTypeMap[-55]=std::make_pair<TString,double>("tth",121);
  SignalTypeMap[-65]=std::make_pair<TString,double>("ggh",160);
  SignalTypeMap[-66]=std::make_pair<TString,double>("vbf",160);
  SignalTypeMap[-68]=std::make_pair<TString,double>("wzh",160);
  SignalTypeMap[-67]=std::make_pair<TString,double>("tth",160);
  SignalTypeMap[-61]=std::make_pair<TString,double>("ggh",155);
  SignalTypeMap[-62]=std::make_pair<TString,double>("vbf",155);
  SignalTypeMap[-64]=std::make_pair<TString,double>("wzh",155);
  SignalTypeMap[-63]=std::make_pair<TString,double>("tth",155);
  SignalTypeMap[-49]=std::make_pair<TString,double>("ggh",150);
  SignalTypeMap[-50]=std::make_pair<TString,double>("vbf",150);
  SignalTypeMap[-52]=std::make_pair<TString,double>("wzh",150);
  SignalTypeMap[-51]=std::make_pair<TString,double>("tth",150);
  SignalTypeMap[-45]=std::make_pair<TString,double>("ggh",145);
  SignalTypeMap[-46]=std::make_pair<TString,double>("vbf",145);
  SignalTypeMap[-48]=std::make_pair<TString,double>("wzh",145);
  SignalTypeMap[-47]=std::make_pair<TString,double>("tth",145);
  SignalTypeMap[-33]=std::make_pair<TString,double>("ggh",140);
  SignalTypeMap[-34]=std::make_pair<TString,double>("vbf",140);
  SignalTypeMap[-36]=std::make_pair<TString,double>("wzh",140);
  SignalTypeMap[-35]=std::make_pair<TString,double>("tth",140);
  SignalTypeMap[-41]=std::make_pair<TString,double>("ggh",135);
  SignalTypeMap[-42]=std::make_pair<TString,double>("vbf",135);
  SignalTypeMap[-44]=std::make_pair<TString,double>("wzh",135);
  SignalTypeMap[-43]=std::make_pair<TString,double>("tth",135);
  SignalTypeMap[-29]=std::make_pair<TString,double>("ggh",130);
  SignalTypeMap[-30]=std::make_pair<TString,double>("vbf",130);
  SignalTypeMap[-32]=std::make_pair<TString,double>("wzh",130);
  SignalTypeMap[-31]=std::make_pair<TString,double>("tth",130);
  SignalTypeMap[-37]=std::make_pair<TString,double>("ggh",125);
  SignalTypeMap[-38]=std::make_pair<TString,double>("vbf",125);
  SignalTypeMap[-40]=std::make_pair<TString,double>("wzh",125);
  SignalTypeMap[-39]=std::make_pair<TString,double>("tth",125);
  SignalTypeMap[-25]=std::make_pair<TString,double>("ggh",120);
  SignalTypeMap[-26]=std::make_pair<TString,double>("vbf",120);
  SignalTypeMap[-28]=std::make_pair<TString,double>("wzh",120);
  SignalTypeMap[-27]=std::make_pair<TString,double>("tth",120);
  SignalTypeMap[-21]=std::make_pair<TString,double>("ggh",115);
  SignalTypeMap[-22]=std::make_pair<TString,double>("vbf",115);
  SignalTypeMap[-24]=std::make_pair<TString,double>("wzh",115);
  SignalTypeMap[-23]=std::make_pair<TString,double>("tth",115);
  SignalTypeMap[-17]=std::make_pair<TString,double>("ggh",110);
  SignalTypeMap[-18]=std::make_pair<TString,double>("vbf",110);
  SignalTypeMap[-19]=std::make_pair<TString,double>("wzh",110);
  SignalTypeMap[-20]=std::make_pair<TString,double>("tth",110);
  SignalTypeMap[-13]=std::make_pair<TString,double>("ggh",105);
  SignalTypeMap[-14]=std::make_pair<TString,double>("vbf",105);
  SignalTypeMap[-16]=std::make_pair<TString,double>("wzh",105);
  SignalTypeMap[-15]=std::make_pair<TString,double>("tth",105);

  SignalTypeMap[-69]=std::make_pair<TString,double>("ggh",100);
  SignalTypeMap[-70]=std::make_pair<TString,double>("vbf",100);
  SignalTypeMap[-72]=std::make_pair<TString,double>("wzh",100);
  SignalTypeMap[-71]=std::make_pair<TString,double>("tth",100);

  SignalTypeMap[-91]=std::make_pair<TString,double>("ggh",95);
  SignalTypeMap[-92]=std::make_pair<TString,double>("vbf",95);
  SignalTypeMap[-94]=std::make_pair<TString,double>("wzh",95);
  SignalTypeMap[-93]=std::make_pair<TString,double>("tth",95);

  SignalTypeMap[-81]=std::make_pair<TString,double>("ggh",90);
  SignalTypeMap[-82]=std::make_pair<TString,double>("vbf",90);
  SignalTypeMap[-84]=std::make_pair<TString,double>("wzh",90);
  SignalTypeMap[-83]=std::make_pair<TString,double>("tth",90);

  SignalTypeMap[-101]=std::make_pair<TString,double>("ggh",125);
  SignalTypeMap[-102]=std::make_pair<TString,double>("ggh",125);
  SignalTypeMap[-103]=std::make_pair<TString,double>("ggh",125);

  SignalTypeMap[-137]=std::make_pair<TString,double>("gg_grav",125);
  SignalTypeMap[-138]=std::make_pair<TString,double>("qq_grav",125);
  SignalTypeMap[-177]=std::make_pair<TString,double>("gg_grav",126);
  SignalTypeMap[-178]=std::make_pair<TString,double>("qq_grav",126);

}

TGraph * Normalization_8TeV::GetSigmaGraph(TString process)
{
  TGraph * gr = new TGraph();
	std::map<double, double> * XSectionMap = 0 ;
	if ( process == "ggh") {
		XSectionMap = &XSectionMap_ggh;
	} else if ( process == "vbf") {
		XSectionMap = &XSectionMap_vbf;
    } else if ( process == "vbfold") {
      XSectionMap = &XSectionMap_vbfold;
	} else if ( process == "wzh") {
		XSectionMap = &XSectionMap_wzh;
	} else if ( process == "tth") {
		XSectionMap = &XSectionMap_tth;
	} else if ( process == "wh") {
		XSectionMap = &XSectionMap_wh;
	} else if ( process == "zh") {
		XSectionMap = &XSectionMap_zh;
	} else if (process.Contains("grav")){
    XSectionMap = &XSectionMap_sm;
  } else {
    std::cout << "Warning ggh, vbf, wh, zh, wzh, tth or grav not found in histname!!!!" << std::endl;
    //exit(1);
  }
  
  for (std::map<double, double>::const_iterator iter = XSectionMap->begin();  iter != XSectionMap->end(); ++iter) {
    gr->SetPoint(gr->GetN(),iter->first, iter->second );
  }
	
	return gr;
}

TGraph * Normalization_8TeV::GetBrGraph()
{
	TGraph * gr = new TGraph();
	for (std::map<double, double>::const_iterator iter = BranchingRatioMap.begin();  iter != BranchingRatioMap.end(); ++iter) {
		gr->SetPoint(gr->GetN(),iter->first, iter->second );
	}
	return gr;
}

double Normalization_8TeV::GetBR(double mass) {

  std::cout << "Mass in GetBR = "<< mass << std::endl;
  for (std::map<double, double>::const_iterator iter = BranchingRatioMap.begin();  iter != BranchingRatioMap.end(); ++iter) {
   std::cout << "iter->first = "<< iter->first << ", iter->second = "<< iter->second << std::endl;
    if (mass==iter->first) return iter->second;
    if (mass>iter->first) {
      double lowmass = iter->first;
      double lowbr = iter->second;
      ++iter;
      if (mass<iter->first) {
        double highmass = iter->first;
        double highbr = iter->second;
        double br = (highbr-lowbr)/(highmass-lowmass)*(mass-lowmass)+lowbr;
        return br;
      }
      --iter;
    }
  }
  
  std::cout << "Warning branching ratio outside range of 90-250GeV!!!!" << std::endl;
  //std::exit(1);
  return -1;
  
}


double Normalization_8TeV::GetXsection(double mass, TString HistName) {

  std::map<double,double> *XSectionMap;

  if (HistName.Contains("ggh")) {
    XSectionMap = &XSectionMap_ggh;
  } else if (HistName.Contains("vbf") && !HistName.Contains("vbfold")) {
    XSectionMap = &XSectionMap_vbf;
  } else if (HistName.Contains("vbfold")) {
    XSectionMap = &XSectionMap_vbfold;
  } else if (HistName.Contains("wh") && !HistName.Contains("wzh")) {
    XSectionMap = &XSectionMap_wh;
  } else if (HistName.Contains("zh") && !HistName.Contains("wzh")) {
    XSectionMap = &XSectionMap_zh;
  } else if (HistName.Contains("wzh")) {
    XSectionMap = &XSectionMap_wzh;
  } else if (HistName.Contains("tth")) {
    XSectionMap = &XSectionMap_tth;
  } else if (HistName.Contains("grav")) {
    XSectionMap = &XSectionMap_sm;
  } else {
    std::cout << "Warning ggh, vbf, wh, zh, wzh, tth or grav not found in " << HistName << std::endl;
    //exit(1);
  }

  for (std::map<double, double>::const_iterator iter = XSectionMap->begin();  iter != XSectionMap->end(); ++iter) {
    if (mass==iter->first) return iter->second;
    if (mass>iter->first) {
      double lowmass = iter->first;
      double lowxsec = iter->second;
      ++iter;
      if (mass<iter->first) {
        double highmass = iter->first;
        double highxsec = iter->second;
        double xsec = (highxsec-lowxsec)/(highmass-lowmass)*(mass-lowmass)+lowxsec;
        return xsec;
      }
      --iter;
    }
  }

  std::cout << "Warning cross section outside range of 80-300GeV!!!!" << std::endl;
  //exit(1);
  return -1;

}

double Normalization_8TeV::GetVBFCorrection(double mass) {
  return GetXsection(mass,"vbf")/GetXsection(mass,"vbfold");
}

// Simple accessors
TString Normalization_8TeV::GetProcess(int ty){
  if (ty < -7999){  // We dont go below 80 GeV and Spin samples in the 100 range 
    int process = -ty % 1000;
    if (process == 0 ) return "ggh";
    else if (process == 10 ) return "ggh_minlo";
    else if (process == 100) return "vbf";
    else if (process == 200) return "wh";
    else if (process == 300) return "zh";
    else if (process == 400) return "tth";
    else if (process == 500) return "wzh";
    else if (process == 500) return "wzh";
    else if (process == 600) return "gg_grav";
    else if (process == 610) return "gg_spin0";
    else if (process == 650) return "qq_grav";
    else {
	std::cout << "Error -- No signal process known " << process << std::endl;
	assert(0);
    }

  } else {
    return SignalTypeMap[ty].first;
  }
}

double Normalization_8TeV::GetMass(int ty){
  if (ty < -7999){  // We dont go below 80 GeV and Spin samples in the 100 range
    return double(-ty/1000);
  }	 
  else return SignalTypeMap[ty].second;
}
//// double Normalization_8TeV::GetXsection(int ty){
////   std::pair<TString,double> proc_mass = SignalTypeMap[ty];
////   // if "grav" in name then return all processes xs*br
////   if (proc_mass.first.Contains("grav")) {
////     return GetXsection(proc_mass.second);
////   }
////   else {
////     return GetXsection(proc_mass.second,proc_mass.first);
////   }
//// }
//// double Normalization_8TeV::GetBR(int ty){
////   std::pair<TString,double> proc_mass = SignalTypeMap[ty];
////   return GetBR(proc_mass.second);
//// }

double Normalization_8TeV::GetXsection(double mass) {
  return GetXsection(mass,"ggh") + GetXsection(mass,"vbf") + GetXsection(mass,"wzh") + GetXsection(mass,"tth");
}

double Normalization_8TeV::GetNorm(double mass1, TH1F* hist1, double mass2, TH1F* hist2, double mass) {

  double br = GetBR(mass);
  double br1 = GetBR(mass1);
  double br2 = GetBR(mass2);
  
  double xsec = GetXsection(mass, hist1->GetName());
  double xsec1 = GetXsection(mass1, hist1->GetName());
  double xsec2 = GetXsection(mass2, hist2->GetName());
  
  double alpha = 1.0*(mass-mass1)/(mass2-mass1);
  double effAcc1 = hist1->Integral()/(xsec1*br1);
  double effAcc2 = hist2->Integral()/(xsec2*br2);

  double Normalization = (xsec*br)*(effAcc1 + alpha * (effAcc2 - effAcc1));

  /// std::cout << mass1 << " " << hist1->GetName() << " " << mass2 << " " << hist2->GetName() << " " << mass 
  /// 	    << br << " " << br1 << " " << br2 << " " << xsec << " " << xsec1 << " " << xsec2 << " " << alpha << " " 
  /// 	    << effAcc1 << " " << effAcc2 << " " << Normalization << std::endl;
	  

  return Normalization;
  
}

void Normalization_8TeV::CheckNorm(double Min, double Max, double Step, TString histname="") {

  vector <double> Mass;
  vector <double> BranchingRatio;
  vector <double> XSection;
  for (double i=Min; i<Max; i+=Step) {
    Mass.push_back(i);
    BranchingRatio.push_back(GetBR(i));
    if (histname=="") XSection.push_back(GetXsection(i));
    else XSection.push_back(GetXsection(i,histname));
  }

  TGraph* BranchGraph = new TGraph(Mass.size(),&Mass[0],&BranchingRatio[0]);
  TGraph* XSectionGraph = new TGraph(Mass.size(),&Mass[0],&XSection[0]);
  BranchGraph->SetTitle("Interpolated Branching Ratios");
  XSectionGraph->SetTitle("Interpolated Cross Sections");
  BranchGraph->SetMarkerStyle(20);
  XSectionGraph->SetMarkerStyle(20);
  BranchGraph->SetMarkerSize(1);
  XSectionGraph->SetMarkerSize(1);

  TCanvas* c1 = new TCanvas("c1","c1",800,650);
  c1->cd();
  BranchGraph->Draw("AP");
  c1->SaveAs("BranchingRatios.png");
  c1->Clear();
  XSectionGraph->Draw("AP");
  TString outfile = "XSections.png";
  if (histname!="") outfile.ReplaceAll(".png",histname.Append(".png"));
  c1->SaveAs(outfile.Data());

  delete BranchGraph;
  delete XSectionGraph;
  delete c1;

}
void Normalization_8TeV::PlotXS(double Min, double Max){

	gROOT->SetBatch(1);
	TLegend *leg = new TLegend(0.65,0.7,0.89,0.89);
	leg->SetFillColor(0);
	leg->SetBorderSize(0);

	TCanvas *can = new TCanvas("c","",800,800);
	TGraph *ggh = new TGraph();
	TGraph *vbf = new TGraph();
	TGraph *wh = new TGraph();
	TGraph *zh = new TGraph();
	TGraph *tth = new TGraph();

	ggh->SetLineColor(kBlue);
	vbf->SetLineColor(kRed);
	wh->SetLineColor(kGreen+3);
	zh->SetLineColor(kBlack);
	tth->SetLineColor(kViolet);

	leg->AddEntry(ggh,"gg fusion","L");
	leg->AddEntry(vbf,"Vector boson fusion","L");
	leg->AddEntry(wh,"W assoc","L");
	leg->AddEntry(zh,"Z assoc","L");
	leg->AddEntry(tth,"t#bar{t} assoc","L");

	ggh->SetLineWidth(3);vbf->SetLineWidth(3);wh->SetLineWidth(3);zh->SetLineWidth(3);tth->SetLineWidth(3);
	int i=0;
	for(double mH = Min;mH<=Max;mH+=0.5){
		ggh->SetPoint(i,mH,GetXsection(mH,"ggh"));
		vbf->SetPoint(i,mH,GetXsection(mH,"vbf"));
		wh->SetPoint(i,mH,GetXsection(mH,"wh"));
		zh->SetPoint(i,mH,GetXsection(mH,"zh"));
		tth->SetPoint(i,mH,GetXsection(mH,"tth"));	
		i++;
	}
	can->SetLogy();
	ggh->Draw("AL");vbf->Draw("L");wh->Draw("L");zh->Draw("L");tth->Draw("L");
	ggh->SetTitle(""); ggh->GetYaxis()->SetRangeUser(10E-4,100);
	ggh->GetXaxis()->SetTitle("m_{H} (GeV)");
	ggh->GetYaxis()->SetTitle("#sigma(pp#rightarrow H) ");
	leg->Draw();
	if (is2011_) can->SaveAs("xsections_7TeV.pdf");
	else	     can->SaveAs("xsections_8TeV.pdf");
}
void Normalization_8TeV::PlotBR(double Min, double Max){

	gROOT->SetBatch(1);
	TLegend *leg = new TLegend(0.65,0.7,0.89,0.89);
	leg->SetFillColor(0);
	leg->SetBorderSize(0);

	TCanvas *can = new TCanvas("c","",800,800);
	TGraph *ggh = new TGraph();

	ggh->SetLineColor(kBlue);

	leg->AddEntry(ggh,"SM H# rightarrow #gamma#gamma","L");

	ggh->SetLineWidth(3);
	int i=0;
	for(double mH = Min;mH<=Max;mH+=0.5){
		ggh->SetPoint(i,mH,GetBR(mH));	
		i++;
	}
	can->SetLogy();
	ggh->Draw("AL");
	ggh->SetTitle(""); ggh->GetYaxis()->SetRangeUser(10E-6,0.1);
	ggh->GetXaxis()->SetTitle("m_{H} (GeV)");
	ggh->GetYaxis()->SetTitle(" BR(H#rightarrow#gamma#gamma) ");
	leg->Draw();
	can->SaveAs("branchingratio.pdf");
}

void Normalization_8TeV::PlotExpected(double Min, double Max){

	gROOT->SetBatch(1);
	TLegend *leg = new TLegend(0.65,0.7,0.89,0.89);
	leg->SetFillColor(0);
	leg->SetBorderSize(0);

	TCanvas *can = new TCanvas("c","",800,800);
	TGraph *ggh = new TGraph();
	TGraph *vbf = new TGraph();
	TGraph *wzh = new TGraph();
	TGraph *tth = new TGraph();

	ggh->SetLineColor(kBlue);
	vbf->SetLineColor(kRed);
	wzh->SetLineColor(kGreen+3);
	tth->SetLineColor(kViolet);

	leg->AddEntry(ggh,"gg fusion","L");
	leg->AddEntry(vbf,"Vector boson fusion","L");
	leg->AddEntry(wzh,"W/Z assoc","L");
	leg->AddEntry(tth,"t#bar{t} assoc","L");

	ggh->SetLineWidth(3);vbf->SetLineWidth(3);wzh->SetLineWidth(3);tth->SetLineWidth(3);
	int i=0;
	for(double mH = Min;mH<=Max;mH+=0.5){
		ggh->SetPoint(i,mH,GetBR(mH)*GetXsection(mH,"ggh"));
		vbf->SetPoint(i,mH,GetBR(mH)*GetXsection(mH,"vbf"));
		wzh->SetPoint(i,mH,GetBR(mH)*GetXsection(mH,"wzh"));
		tth->SetPoint(i,mH,GetBR(mH)*GetXsection(mH,"tth"));
		
		i++;
	}
	can->SetLogy();
	ggh->Draw("AL");vbf->Draw("L");wzh->Draw("L");tth->Draw("L");
	ggh->SetTitle(""); ggh->GetYaxis()->SetRangeUser(10E-10,1);
	ggh->GetXaxis()->SetTitle("m_{H} (GeV)");
	ggh->GetYaxis()->SetTitle("#sigma(pp#rightarrow H) #times BR(#rightarrow#gamma#gamma) ");
	leg->Draw();
	if (is2011_)	can->SaveAs("signalnormalization_7TeV.pdf");
	else		can->SaveAs("signalnormalization_8TeV.pdf");
}


