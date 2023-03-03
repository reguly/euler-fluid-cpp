#ifdef GRAPHICS
const int SIZE = 100;
const int SCALE = 4;
#else
const int SIZE = 1000;
const int SCALE = 4;
#endif

#define IX(x,y,N) (int)(((y) * N) + (x))