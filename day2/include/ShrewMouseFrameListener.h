#include "ExampleFrameListener.h"
#include <sstream>
#include "ShrewMouseManager.h"

class ShrewMouseFrameListener: public ExampleFrameListener
{
public:
    ShrewMouseFrameListener(SpShrewMouseManager miceManager, RenderWindow *win, Camera *cam, bool bufferedKeys = false, bool bufferedMouse = false, bool bufferedJoy = false);

    virtual bool processUnbufferedKeyInput(const FrameEvent& evt)
    {
        if(mKeyboard->isKeyDown(OIS::KC_SPACE))
        {
            std::stringstream ss;
            ss<<this->mCamera->getPosition()<<this->mCamera->getOrientation()<<std::endl;
            printf("Hominlinx-->%s\n", ss.str().c_str());
            return true;
        }
        return ExampleFrameListener::processUnbufferedKeyInput(evt);

    }
private:
    SpShrewMouseManager _miceManager;
};
