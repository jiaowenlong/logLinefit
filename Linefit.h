#ifndef _H_Linefit_H_
#define _H_Linefit_H_

class CLinefit
{
public:
  CLinefit();
  ~CLinefit();
  void Getdata(double *Xdata,int datanum);
  int Fit(double *Xdata,double *Ydata,int datanum);
  double *m_Xdata;
  double k;
  double b;
}；

#endif