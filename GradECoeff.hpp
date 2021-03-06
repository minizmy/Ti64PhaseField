
//#include "MersenneTwister.h"
//#include "Tensor.hpp"
//#include "Tensor.hpp"

//double eigen_alpha[12][3][3];

using namespace std ;



void initialize_epsi()
{

epsi1[0][0] = 0.0806 ;
epsi1[0][1] = 0.0301 ;
epsi1[0][2] = -0.0642 ;
epsi1[1][0] = 0.0301 ;
epsi1[1][1] = 0.0806 ;
epsi1[1][2] = -0.0277 ;
epsi1[2][0] = -0.0642 ;
epsi1[2][1] = -0.0277 ;
epsi1[2][2] = 0.3834 ;

epsi2[0][0] = 0.3445 ;
epsi2[0][1] = -0.1183 ;
epsi2[0][2] = -0.0486 ;
epsi2[1][0] = -0.1183 ;
epsi2[1][1] = 0.1056 ;
epsi2[1][2] = 0.0011 ;
epsi2[2][0] = -0.0486 ;
epsi2[2][1] = 0.0011 ;
epsi2[2][2] = 0.0999 ;

epsi3[0][0] = 0.0895 ;
epsi3[0][1] = -0.0300 ;
epsi3[0][2] = -0.0635 ;
epsi3[1][0] = -0.0300 ;
epsi3[1][1] = 0.0759 ;
epsi3[1][2] = 0.0214 ;
epsi3[2][0] = -0.0635 ;
epsi3[2][1] = 0.0214 ;
epsi3[2][2] = 0.3847 ;

epsi4[0][0] = 0.0895 ;
epsi4[0][1] = 0.0300 ;
epsi4[0][2] = -0.0635 ;
epsi4[1][0] = 0.0300 ;
epsi4[1][1] = 0.0759 ;
epsi4[1][2] = -0.0214 ;
epsi4[2][0] = -0.0635 ;
epsi4[2][1] = -0.0214 ;
epsi4[2][2] = 0.3847 ;

epsi5[0][0] = 0.0989 ;
epsi5[0][1] = -0.0021 ;
epsi5[0][2] = -0.0226 ;
epsi5[1][0] = -0.0021 ;
epsi5[1][1] = 0.1575 ;
epsi5[1][2] = 0.1592 ;
epsi5[2][0] = -0.0227 ;
epsi5[2][1] = 0.1592 ;
epsi5[2][2] = 0.2936 ;

epsi6[0][0] = 0.0806 ;
epsi6[0][1] = -0.0301 ;
epsi6[0][2] = -0.0642 ;
epsi6[1][0] = -0.0301 ;
epsi6[1][1] = 0.0860 ;
epsi6[1][2] = 0.0277 ;
epsi6[2][0] = -0.0642 ;
epsi6[2][1] = 0.0277 ;
epsi6[2][2] = 0.3834 ;

epsi7[0][0] = 0.3240 ;
epsi7[0][1] = -0.1376 ;
epsi7[0][2] = -0.0411 ;
epsi7[1][0] = -0.1376 ;
epsi7[1][1] = 0.1322 ;
epsi7[1][2] = -0.0016 ;
epsi7[2][0] = -0.0411 ;
epsi7[2][1] = -0.0016 ;
epsi7[2][2] = 0.0938 ;

epsi8[0][0] = 0.0938 ;
epsi8[0][1] = 0.0016 ;
epsi8[0][2] = -0.0411 ;
epsi8[1][0] = 0.0016 ;
epsi8[1][1] = 0.1322 ;
epsi8[1][2] = 0.1376 ;
epsi8[2][0] = -0.0411 ;
epsi8[2][1] = 0.1376 ;
epsi8[2][2] = 0.3240 ;

epsi9[0][0] = 0.0758 ;
epsi9[0][1] = -0.0259 ;
epsi9[0][2] = -0.0278 ;
epsi9[1][0] = -0.0259 ;
epsi9[1][1] = 0.0771 ;
epsi9[1][2] = 0.0101 ;
epsi9[2][0] = -0.0278 ;
epsi9[2][1] = 0.0101 ;
epsi9[2][2] = 0.3971 ;

epsi10[0][0] = 0.3456 ;
epsi10[0][1] = -0.1251 ;
epsi10[0][2] = -0.0102 ;
epsi10[1][0] = -0.1251 ;
epsi10[1][1] = 0.1123 ;
epsi10[1][2] = -0.0155 ;
epsi10[2][0] = -0.0102 ;
epsi10[2][1] = -0.0155 ;
epsi10[2][2] = 0.0121 ;

epsi11[0][0] = 0.0758 ;
epsi11[0][1] = 0.0259 ;
epsi11[0][2] = -0.0278 ;
epsi11[1][0] = 0.0259 ;
epsi11[1][1] = 0.0771 ;
epsi11[1][2] = -0.0101 ;
epsi11[2][0] = -0.0278 ;
epsi11[2][1] = -0.0101 ;
epsi11[2][2] = 0.3971 ;

epsi12[0][0] = 0.0863 ;
epsi12[0][1] = 0.0177 ;
epsi12[0][2] = -0.0254 ;
epsi12[1][0] = 0.0177 ;
epsi12[1][1] = 0.0819 ;
epsi12[1][2] = 0.0729 ;
epsi12[2][0] = -0.0254 ;
epsi12[2][1] = 0.0729 ;
epsi12[2][2] = 0.3818 ;

}

