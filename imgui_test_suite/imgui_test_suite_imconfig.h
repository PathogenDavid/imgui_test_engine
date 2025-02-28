#include "imconfig.h"

// Enable graphics backends
#ifdef _WIN32
#define IMGUI_APP_WIN32_DX11
#endif
//#define IMGUI_APP_SDL_GL3
//#define IMGUI_APP_GLFW_GL3

// Disable legacy features / enforce using latest
#ifdef IMGUI_HAS_IMSTR
#define IMGUI_DISABLE_OBSOLETE_FUNCTIONS
#endif
#define IMGUI_DISABLE_OBSOLETE_KEYIO

//------------------------------------------------------------------------
// Test Engine
//------------------------------------------------------------------------

// Disable tests that are known to be broken. This mainly exist as a way to grep them.
// We use this with #if instead of #ifdef to facilitate temporarily enabling a single broken test in the corresponding code.
#define IMGUI_BROKEN_TESTS 0

// Enable coroutine implementation using std::thread
// In your own application you may want to implement them using your own facilities (own thread or coroutine)
#define IMGUI_TEST_ENGINE_ENABLE_COROUTINE_STDTHREAD_IMPL 1

// Enable plotting of perflog data for comparing performance of different runs. This feature requires ImPlot.
#ifndef IMGUI_TEST_ENGINE_ENABLE_IMPLOT
#define IMGUI_TEST_ENGINE_ENABLE_IMPLOT 1
#endif

// Use relative path as this file may be compiled with different settings
#include "../imgui_test_engine/imgui_te_imconfig.h"
