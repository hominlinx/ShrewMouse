
#include "ExampleApplication.h"
#include "ShrewMouseFrameListener.h"
class ShrewMouseApplication :public ExampleApplication
{
public:
    ShrewMouseApplication();
    ~ShrewMouseApplication();
protected:
    //
    void createScene();
    virtual void createFrameListener();

private:
    SpShrewMouseManager _miceManager;
    //ShrewMouseManager *_miceManager;
};
