#include <ZeRoEngine.h>

class Sandbox : public ZeRoEngine::Application {
    public:
        Sandbox() {

        }
        ~Sandbox() {

        }
};

ZeRoEngine::Application* ZeRoEngine::CreateApplication() {
    return new Sandbox();
}