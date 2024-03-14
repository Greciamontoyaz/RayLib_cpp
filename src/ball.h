#pragma once
#include <raylib.h>

class Ball
{
public:
    Ball();
    void Update();
    void Draw();

public:
    int x;
    int y;
    int speedX;
    int speedY;
    int radius;
    Color color;
  
};