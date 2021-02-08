//Using SDL, SDL_image, standard IO, math, and strings
#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>
#include "LTexture.h"
#include "Queue.h"
#include "Background.h"
#include "Unit.h"
#include "GlobalFunctions.h"
#include "EnemyBase.h"
#include "Enemy.h"
#include "Enemy2.h"
#include "Enemy3.h"
#include "Knife.h"
#include "Flames.h"
#include "Boss.h"
#include "BossSeat.h"
#include "Camel.h"
#include "CamelSaliva.h"
#include "Aladdin.h"
#include "CollisionCheck.h"
#include "Background.h"
#include "Camera.h"
#include "Pillar.h"
#include "PlaceObjects.h"
#include "PlatformStairs.h"

using namespace std;
//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
//const int SCREEN_WIDTH =  GlobalFunctions::GetSCREEN_WIDTH();
//const int SCREEN_HEIGHT = GlobalFunctions::GetSCREEN_HEIGHT();

//Starts up SDL and creates window
bool init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void close();

//Loads individual image as texture
//SDL_Texture* texture( std::string path );
SDL_Surface* loadSurface( std::string path );

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The window renderer
SDL_Renderer* gRenderer = NULL;

SDL_Surface* gScreenSurface = NULL;

//Sprites
LTexture gBackgroundTexture;
LTexture gEnemyTexture;
LTexture gAladdinTexture;
LTexture gBossTexture;
LTexture gFlameTexture;
LTexture gCamelTexture;
LTexture gBGTexture;
LTexture gPillarTexture;
//Current displayed image
SDL_Surface* gStretchedBackground = NULL;

bool init()
{
	//Initialization flag
	bool success = true;

	//Initialize SDL
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		//Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		//Create window
		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
		{
			//Create renderer for window
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
            if( gRenderer == NULL )
            {
                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
                success = false;
            }
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if( !( IMG_Init( imgFlags ) & imgFlags ) )
				{
					printf( "SDL_image could not initialize! SDL_mage Error: %s\n", IMG_GetError() );
					success = false;
				}
			}
		}
	}

	return success;
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load sprite sheet texture
//	gStretchedBackground = loadSurface( "Sprites/background.png" );
//	if( gStretchedBackground == NULL )
    if( !gBackgroundTexture.LoadFromFile( "Sprites/background.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gEnemyTexture.LoadFromFile( "Sprites/Enemy1.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gAladdinTexture.LoadFromFile( "Sprites/Aladdin.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gBossTexture.LoadFromFile( "Sprites/Boss.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gFlameTexture.LoadFromFile( "Sprites/flame.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gCamelTexture.LoadFromFile( "Sprites/Camel.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
    if( !gBGTexture.LoadFromFile( "Sprites/bg.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}

    if( !gPillarTexture.LoadFromFile( "Sprites/Pillar.png", gRenderer  ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
	return success;
}

void close()
{
	//Free loaded images
	SDL_FreeSurface(gStretchedBackground);
	gStretchedBackground = NULL;

	//Destroy window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
//	SDL_DestroyTexture(texture);
//	texture = NULL;
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

//SDL_Surface* loadSurface( std::string path )
//{
//	//The final optimized image
//	SDL_Surface* optimizedSurface = NULL;
//
//	//Load image at specified path
//	SDL_Surface* loadedSurface = gStretchedBackground;
//	if( loadedSurface == NULL )
//	{
//		printf( "Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
//	}
//	else
//	{
//		//Convert surface to screen format
//		optimizedSurface = SDL_ConvertSurface( loadedSurface, gScreenSurface->format, NULL );
//		if( optimizedSurface == NULL )
//		{
//			printf( "Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
//		}
//
//		//Get rid of old loaded surface
//		SDL_FreeSurface( loadedSurface );
//	}
//
//	return optimizedSurface;
//}


int main( int argc, char* args[] )
{
    //Start up SDL and create window
    srand(time(0));
    if( !init() )
    {
        printf( "Failed to initialize!\n" );
    }
    else
    {

        if( !loadMedia() )  //Load media
        {
            printf( "Failed to load media!\n" );
        }
        else
        {
            bool quit = false;  //Main loop controller
            SDL_Event events;
            long int frame = 0;
            long int moves = 0;
            //int randomNumber = rand() % SCREEN_WIDTH;
            //Button btn(&gSpriteSheetTexture , str, SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
            //gRenderer = SDL_CreateRenderer(gWindow, -1, 0);
            //SDL_Surface* image = IMG_Load("Enemies.PNG");
//			//Scene sprites
//            SDL_Rect gSpriteClips[ 4 ];
//            LTexture gSpriteSheetTexture;
            //SDL_Surface* image = loadSurface("background.PNG");
            //SDL_Texture* texture = SDL_CreateTextureFromSurface(gRenderer, image);

            Queue EventList;
            PlaceObjects* placeItems = new PlaceObjects(&gPillarTexture);
            placeItems->LoadStairs();
            placeItems->LoadPlatforms();
            placeItems->LoadPillars();

            Camera* camera = new Camera(SCREEN_WIDTH, SCREEN_HEIGHT);
//            Unit* startBackground = new Unit();
//            startBackground->Clip(&gBackgroundTexture, (float)4769/2, 0);
            Background* startBackground = new Background(&gBGTexture);
            Unit* aladdin = new Aladdin();
			aladdin->Clip(&gAladdinTexture, (float)SCREEN_WIDTH/2 - 300, (float)SCREEN_HEIGHT/2 + 150);
            EnemyBase* enemy3 = new Enemy3(&gEnemyTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
            //EnemyBase* enemy2 = new  Enemy2(&gEnemyTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
            //EnemyBase* enemy3 = new  Enemy3(&gEnemyTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
            EnemyBase* camel = new CamelSaliva(&gCamelTexture, (float)SCREEN_WIDTH/2, (float)SCREEN_HEIGHT - 80);
            EnemyBase* knife;
            //EnemyBase* boss = new Boss(&gBossTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
            //EnemyBase* knife = new Knife(&gEnemyTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
            //EnemyBase* camel = new Camel(&gCamelTexture, (float)SCREEN_WIDTH/2 , (float)SCREEN_HEIGHT - 80);
            //EventList.Enqueue(knife);
            while(!quit)
            {
                while( SDL_PollEvent( &events ) != 0 )
                {
                    if(events.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }

                const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );

                //if (startBackground->GetX() > -1000 && startBackground->GetX() < 2380 )
                //{
                    if(currentKeyStates[ SDL_SCANCODE_RIGHT ])
                    {
                        //startBackground->Move(RIGHT);
                        aladdin->Move(RIGHT);
                        //enemy3->Move(RIGHT);
                    }
                    if(currentKeyStates[ SDL_SCANCODE_LEFT ])
                    {
                        //startBackground->Move(LEFT);
                        aladdin->Move(LEFT);
                        //enemy3->Move(LEFT);
                    }
                //cout<<"health : "<<aladdin->GetHealth()<<endl;
                //cout<<"Alive : "<<aladdin->GetAlive()<<endl;
                //}



                if (currentKeyStates[ SDL_SCANCODE_SPACE ])
                {
                    //aladdin->knifeAttack();
                }

                if ( aladdin->GetAlive() == true)
                {
                    if (frame%30 == 0)
                    {
                        knife = new Knife(&gEnemyTexture, (float)SCREEN_WIDTH/2 + 300, (float)SCREEN_HEIGHT - 80);
                        EventList.Enqueue(knife);
                    }
                }
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );    //Clear screen
                SDL_RenderClear( gRenderer );

                camera->cameraPosition(aladdin->GetX(), aladdin->GetY(), aladdin->GetHeight(), aladdin->GetHeight());
                //std::cout << "Camera x: " << aladdin->GetX() << "Camera y: " << aladdin->GetY() << std::endl;

                startBackground->setCameraPosition(camera->GetX(), camera->GetY(), camera->GetHeight(), camera->GetWidth());
                startBackground->Render(gRenderer);
                enemy3->Check_Flip(aladdin);
                if (aladdin->GetHealth() == 0)
                {
                    aladdin->SetAlive(false);
                    break;
                }
                aladdin->Render(frame, gRenderer, false, camera->GetX(), camera->GetY());
                //cout<<"Aladdin render done"<<endl;
                enemy3->Render(frame, gRenderer, false);
                EventList.CheckAll(aladdin);
                //}
//                //else
//                //{
//                    cout<<"Hi"<<endl;
                    //cout<<"checkAll done"<<endl;
                    EventList.Move();
                    //cout<<"eventlist move"<<endl;
                    EventList.Render(frame, gRenderer, false);
                SDL_RenderPresent( gRenderer );     //Update screen

                ++frame;
                ++moves;
            }
            delete startBackground;
            delete enemy3;
        }
        close();
        return 0;
    }
}
