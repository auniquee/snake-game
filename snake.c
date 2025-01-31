#include "paint.h"
//(❁´◡`❁)
#include "snake.h"

#include <stdio.h>

void world_field(int world[Y_SIZE][X_SIZE], apple_t *apple,
                 snake_t *snake) {
  // TODO
  image_init(world, GRASS);
  add_rectangle(world, WALL, 0, 0, X_SIZE, Y_SIZE);
  add_point(world, SNAKE_HEAD, (*snake).x[0], (*snake).y[0]);
  add_point(world, APPLE, (*apple).x, (*apple).y);
  
    for(int i = 1; i < snake->length; i++){
        add_point(world, SNAKE_BODY, snake->x[i], snake->y[i]);
    }
}

void snake_init(snake_t *snake) {
  
    snake->x[0] = X_SIZE/2;
    snake->y[0] = Y_SIZE/2;
    snake->x[1] = X_SIZE/2-1;
    snake->y[1] = Y_SIZE/2;
    snake->length = 2;
    snake->dir = RIGHT;
    
   
 // TODO 
    
}

void snake_move(snake_t *snake) {
  // TODO
    for(int i = 0; i < snake->length - 1 ; i++){
        snake->x[snake->length-i-1] = snake->x[snake->length-i-2];
        snake->y[snake->length-i-1] = snake->y[snake->length-i-2];
    }

    switch (snake->dir){
        case RIGHT:
            snake->x[0]++;
            break;
        case LEFT:
            snake->x[0]--;
            break;
        case UP:
            snake->y[0]--;
            break;
        case DOWN:
            snake->y[0]++;
            break;
        
        //snake->x[0]
    
        
        
  }
  // HInt: start by updating snake positions from the last part of the tail to segment behind head
  //       then update the position of the head
}

void snake_turn(snake_t *snake) {
  if (kbhit()) {          // user hits key
    int input = getch();  // fetch the key value to input
    switch (input){
        case UP_ARROW:
            snake->dir = UP;
            break;
        case DOWN_ARROW:
            snake->dir = DOWN;
            break;
        case RIGHT_ARROW:
            snake->dir = RIGHT;
            break;
        case LEFT_ARROW:
            snake->dir = LEFT;
            break;
    }
  }
}

bool snake_hit_wall(snake_t *snake) {
  // TODO
  if (
    snake->x[0] >= X_SIZE-1 ||
    snake->y[0] >= Y_SIZE-1 ||
    snake->x[0] <= 0 ||
    snake->y[0] <= 0
  ){
      return true;
  }else{
      return false;
  }
}

bool snake_hit_self(snake_t *snake) {
  // TODO
  for(int x = 0; x < snake->length; x++){
    for(int y = 0; y < snake->length; y++){
        if(
            snake->x[x] == snake->x[y] &&
            snake->y[x] == snake->y[y] &&
            x != y
        ){
            return true;
        }
    }    
  }
  return false;
  /*
  switch (snake->dir){
    case UP:
        if (snake->y[1] < snake->y[0]){
            return true;
        }
        break;
    case DOWN:
        if (snake->y[1] > snake->y[0]){
            return true;
        }
        break;
    case RIGHT:
        if (snake->x[1] > snake->x[0]){
            return true;
        }
        break;
    case LEFT:
        if (snake->x[1] < snake->x[0]){
            return true;
        }
        break;
    
  }
   * */
  return false;
}

void apple_new(apple_t *apple, snake_t *snake) {
  // TODO
    apple->x = rand() % (X_SIZE-2) + 1;
    apple->y = rand() % (Y_SIZE-2) + 1;
    for(int i = 0; i < snake->length; i++){
        if(
            snake->x[i] == apple->x &&
            snake->y[i] == apple->y
        ){
                    
            apple->x = rand() % X_SIZE;
            apple->y = rand() % Y_SIZE;
            i = 0;
        }
  }
  
  // Hint: Draw random positions for the apple until position not hitting snake found
}

bool snake_eat_apple(apple_t *apple, snake_t *snake) {
    if(
        snake->x[0] == apple->x &&
        snake->y[0] == apple->y
    ){
        snake->length++;
        apple_new(apple, snake);
        return true;
    }
    return false;
  // TODO
}

