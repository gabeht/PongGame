#include <iostream>
#include "raylib.h"

class paddleClass
{
public:

	float paddleWidth;
	float paddleHeight;
	float paddleY;
	float paddleX;
	Color paddleColor;

	void createPaddle(int posX, int posY, int paddleWidth, int paddleHeight, Color paddleColor)
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


	//Ball Creation and Initialized
	ballClass ball;
	ball.xCord = screen_width / 2;
	ball.yCord = screen_height / 2;
	ball.ballRadius = 10;
	ball.ballColor = BLACK;



	//Paddle1 Creation and Initialized 
	paddleClass Paddle1;
	Paddle1.paddleHeight = 125;
	Paddle1.paddleWidth = 25;
	Paddle1.paddleColor = BLACK;



	//Paddle1 Position 
	Paddle1.paddleY = screen_height / 2 - Paddle1.paddleHeight / 2;
	Paddle1.paddleX = 10;

	
	

	InitWindow(screen_width, screen_height, "Pong?");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		
		BeginDrawing();
		Paddle1.paddleX++;


		ClearBackground(RAYWHITE);

		ball.createBall(ball.xCord, ball.yCord, ball.ballRadius, ball.ballColor);

		Paddle1.createPaddle(Paddle1.paddleX,Paddle1.paddleY,
			Paddle1.paddleWidth,Paddle1.paddleHeight,
			Paddle1.paddleColor);


		EndDrawing();
	}
	CloseWindow();

	return 0;
}