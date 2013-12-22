#include "ShrewMouseFrameListener.h"

ShrewMouseFrameListener::ShrewMouseFrameListener(SpShrewMouseManager miceManager, RenderWindow *win, Camera *cam,bool bufferedKeys, bool bufferedMouse, bool bufferedJoy)
    :ExampleFrameListener(win, cam, bufferedKeys, bufferedMouse, bufferedJoy)
    ,_miceManager(miceManager)
{

}
