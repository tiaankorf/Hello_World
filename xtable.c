{\rtf1\ansi\ansicpg1252\cocoartf1404
{\fonttbl\f0\fnil\fcharset0 Monaco;}
{\colortbl;\red255\green255\blue255;\red36\green36\blue36;\red242\green242\blue242;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl280\partightenfactor0

\f0\fs20 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include<stdio.h>    \
\
int main (void)\{    \
  int i, j;    \
\
  for (i = 1; i < 13; ++i)\{    \
    for (j = 1; j < 13; ++j)    \
        printf ("%#3d\\t", i * j);    \
      printf ("\\n");    \
  \}    \
  return 0;    \
\}  \
}