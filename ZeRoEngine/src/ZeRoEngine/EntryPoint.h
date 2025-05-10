#pragma once

#ifdef ZR_PLATFORM_WINDOWS

extern ZeRoEngine::Application* ZeRoEngine::CreateApplication();

int main(int argc, char** argv) {
    auto app = ZeRoEngine::CreateApplication();
    app->Run();
    delete app;
}

#endif
