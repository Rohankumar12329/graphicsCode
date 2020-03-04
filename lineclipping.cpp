#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include "line.h"
using namespace std;


int main()
{
    int abx= 120-10;
    int aby= 90-10;
    int bcx= 70-120;
    int bcy= 30-90;
    int cax= 10-70;
    int cay= 10-30;

    int nabx= -aby;
    int naby= abx;
    int nbcx= -bcy;
    int nbcy= bcx;
    int ncax= -cay;
    int ncay= cax;

    int pe1x= 120;
    int pe1y= 90;
    int pe2x= 70;
    int pe2y= 30;
    int pe3x= 10;
    int pe3y= 10;

    int p1x_pe1x= 20-pe1x;
    int p1y_pe1y= 50-pe1y;
    int p1x_pe2x= 20-pe2x;
    int p1y_pe2y= 50-pe2y;
    int p1x_pe3x= 20-pe3x;
    int p1y_pe3y= 50-pe3y;

    int p2x_p1x=140-20;
    int p2y_p1y=40-50;

    float n1=p1x_pe1x*nabx + p1y_pe1y*naby;
    float n2=p1x_pe2x*nbcx + p1y_pe2y*nbcy;
    float n3=p1x_pe3x*ncax + p1y_pe3y*ncay;

    float d1=p2x_p1x*nabx + p2y_p1y*naby;
    float d2=p2x_p1x*nbcx + p2y_p1y*nbcy;
    float d3=p2x_p1x*ncax + p2y_p1y*ncay;


    float t1=-n1/d1;

    float t2=-n2/d2;

    float t3=-n3/d3;


    float pi1x=20+p2x_p1x*t1;

    float pi1y=50+p2y_p1y*t1;

    float pi2x=20+p2x_p1x*t2;
    pi2x=ceil(pi2x);
    float pi2y=50+p2y_p1y*t2;
    pi2y=ceil(pi2y);

    cout<<pi1x<<"   "<<pi1y<<"  "<<pi2x<<"   "<<pi2y;
    cout<<"\n";

    cout<<abx<<"i+"<<aby<<"j    "<<nabx<<"i+"<<naby<<"j     "<<pe1x<<"i+"<<pe1y<<"j    "<<p1x_pe1x<<"i+"<<p1y_pe1y<<"j    "<<n1<<"   "<<d1<<"    "<<t1<<"\n";
    cout<<bcx<<"i+"<<bcy<<"j    "<<nbcx<<"i+"<<nbcy<<"j     "<<pe2x<<"i+"<<pe2y<<"j    "<<p1x_pe2x<<"i+"<<p1y_pe2y<<"j    "<<n2<<"   "<<d2<<"    "<<t2<<"\n";
    cout<<cax<<"i+"<<cay<<"j    "<<ncax<<"i+"<<ncay<<"j     "<<pe3x<<"i+"<<pe3y<<"j    "<<p1x_pe3x<<"i+"<<p1y_pe3y<<"j    "<<n3<<"   "<<d3<<"    "<<t3<<"\n";

    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

    lineex(10,70,10,30);
    lineey(70,120,30,90);
    lineex(10,120,10,90);
    lineex(20,140,50,40);
    lineeup(pi1x,pi2x,pi1y,pi2y);

    getch();
    closegraph();
}
