#include <iostream>
#include "raylib.h"

class paddleClass
{
public:

	static float paddleWidth;
	static float paddleHeight;
	Color paddleColor;

	void createPaddle(int paddleWidth, int paddleHeight, int posX, int posY, Color paddleColor)
	{

		DrawRectangle(posX, posY, paddleWidth, paddleHeight, paddleColor);
	}

};


class ballClass
{
public:

	float xCord;
	float yCord;
	float ballRadius;
	Color ballColor;

	void createBall(int xCord, int yCord,float ballRadius, Color ballColor)
	{
		DrawCircle(xCord, yCord, ballRadius, ballColor);
	}

};




int main() {
	const int screen_width = 800;
	const int screen_height = 450;
	const float ballRadius = 10;
	//Paddle1 Creation and Initialized 
	paddleClass Paddle1;
	Paddle1.paddleHeight = 125;
	Paddle1.paddleWidth = 25;
	Paddle1.paddleColor = BLACK;
	//Ball Creation and Initialized
	ballClass ball;
	

	InitWindow(screen_width, screen_height, "Pong?");

	SetTargetFPS(69);

	while (!WindowShouldClose()) {
		
		BeginDrawing();	

		ClearBackground(RAYWHITE);
		DrawCircle(screen_width / 2, screen_height /2,ballRadius,
			WHITE);

		Paddle1.createPaddle(Paddle1.paddleWidth,Paddle1.paddleHeight,
			10,screen_height/2 - Paddle1.paddleHeight/2,
			Paddle1.paddleColor);


		EndDrawing();
	}
	CloseWindow();

	return 0;
}