#ifndef Cell_H
#define Cell_H
#include <mpi.h>

class Cell {
public:
  Cell() {
    box = new double[3]; 
    shift = new double[3];
    dr = new double[3]; 
    grid = new int[3];
    shift[0] = shift[1] = shift[2] = 0.0;
  }
  ~Cell() {delete[] box, shift, dr, grid;}
  void setup(int, int, int, int, int, int);
  void setup_mpi(int, int, int, int, int, int);
  double * box;
  double * shift;
  double * dr;
  int * grid;
  double volume, dv;
  int ngrid;
  int mgrid, yrsize, zrsize, xksize, yksize;
  int ystart, zstart;
  int xks, yks;
};

#endif // Cell_H
