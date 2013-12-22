
#include "ShrewMouseApplication.h"
int main(int argc, char **argv)
{
    // Create application object
    ShrewMouseApplication app;

    try {
        app.go();
    } catch( Exception& e ) {
        std::cerr << "An exception has occured: " << e.getFullDescription();
    }


    return 0;
}
