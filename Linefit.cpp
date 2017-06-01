#include <iostream>
#include "math.h"
#include "Linefit.h"

CLinefit::CLinefit()
{

}

CLinefit::~CLinefit()
{
  delete[] m_Xdata;
}

void CLinefit::Getdata(double *Xdata,int datanum)
{
  m_Xdata=new double(datanum);
  int i;
  for(i=0;i<datanum;i++)
  {
    m_Xdata[i]=log(Xdata[i]);
  }
}

int CLinefit::Fit(double *Xdata,double *Ydata,int datanum)
{
  int i;
  double sigmaX=0;
  double sigmaY=0;
  double sigmaXX=0;
  double sigmaXY=0;
  for(i=0;i<datanum:i++)
  {
    sigmaX+=Xdata[i];
    sigmaY+=Ydata[i];
    sigmaXX+=pow(Xdata[i],2);
    sigmaXY+=Xdata[i]*Ydata[i];
  }
  k=(datanum*sigmaXY-sigmaX*sigmaY)/(datanum*sigmaXX-pow(sigmaX,2));
  b=(sigmaXX*sigmaY-sigmaX*sigmaXY)/(datanum*sigmaXX-pow(sigmaX,2));

  return(0);
}
