#include"enrollment_manager.h"

int main(int argc,char** argv)
{
    EnrollmentManager* instance=EnrollmentManager::instance();
    instance->run(argc, argv);

    return 0;
}
