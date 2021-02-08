#ifndef CAMERA_H
#define CAMERA_H



class Camera
{

public:
    Camera(int SCREEN_WIDTH, int SCREEN_HEIGHT);
    ~Camera();
    void cameraPosition(int aladdinX, int aladdinY, int aladdinH, int aladdinW);
    int GetX();
    int GetY();
    int GetWidth();
    int GetHeight();

private:
    int SCREEN_WIDTH;
    int SCREEN_HEIGHT;
    float LEVEL_WIDTH;
    float LEVEL_HEIGHT;

    float x;
    float y;
    int width;
    int height;


};



#endif // CAMERA_H
