
#include "ExampleApplication.h"
#include "ShrewMouseManager.h"
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
};
