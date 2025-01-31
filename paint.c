#include "paint.h"

#include <math.h>
#include <stdio.h>

void image_print(int I[NROWS][NCOLS])
{
    for(int row = 0; row < NROWS; ++row) {
        for(int col = 0; col < NCOLS; ++col) {
            printf("%c", I[row][col]);
        }
        printf("\n");
    }
}

void image_init(int I[NROWS][NCOLS], symbols_t symbol)
{
    for(int r = 0; r < NROWS; r++){
        for(int c = 0; c < NCOLS; c++){
            I[r][c] = symbol;
        }
    }
    // Here you should set all values of I to symbol
    // A double for-loop will do the job
}

void add_point(int I[NROWS][NCOLS], symbols_t symbol, int col, int row)
{
    I[row][col] = symbol;
    // Here you shall only set I[row][col], but only if col and row 
    // have valid values for setting I.
    // You should then use add_point to set I's values in the other functions
    // to make sure that the points are valid in the other functions as well  
}

void add_line_hori(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, int length)
{
    for(int c = col0; c < length + col0; c++){
        I[row0][c] = symbol;
    }
    // Add your code here

}

void add_line_vert(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, int length)
{
    for(int r = row0; r < length + row0; r++){
        I[r][col0] = symbol;
    }
    // Add your code here
}

void add_rectangle(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, int lcol, int lrow)
{
    add_line_hori(I, symbol, col0, row0, lcol);
    add_line_hori(I, symbol, col0, row0+lrow-1, lcol);
    add_line_vert(I, symbol, col0, row0, lrow);
    add_line_vert(I, symbol, col0+lcol-1, row0, lrow);
    
    // Add your code here
    // Hint: what other functions can you make use of here?
}

void add_points(int I[NROWS][NCOLS], symbols_t symbol, int cols[], int rows[], int n)
{
    for(int i = 0; i < n; i++){
        add_point(I, symbol, cols[i], rows[i]);
    }
    // Add your code here
}

void add_line_up(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, int length)
{
    for(int i = 0; i < length; i++){
        add_point(I, symbol, col0 + i, row0-i);
    }
    // Add your code here
}

void add_line_down(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, int length)
{
    for(int i = 0; i < length; i++){
        add_point(I, symbol, col0 + i, row0+i);
    }
    // Add your code here
}

void add_circle(int I[NROWS][NCOLS], symbols_t symbol, int col0, int row0, double r)
{
    int offset_x, offset_y;
    
    for(int row = 0; row <= 2*r; row++){
        for(int c = 0; c <= 2*r; c++){
            offset_x = row < 0 ? (row-r)*-1 : row-r;
            offset_y = c < 0 ? (c-r)*-1 : c-r;
            
            if(sqrt((float)pow(offset_x, 2) + (float)pow(offset_y, 2)) <= r){
                //printf("gello");
                add_point(I, symbol, c+col0-r, row+row0-r);
            }
        }
    }
}
