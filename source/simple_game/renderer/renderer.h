/* FiberTaskingLibExamples
 *
 * This is a set of examples to accompany the FiberTaskingLib
 * https://github.com/RichieSams/FiberTaskingLib
 *
 * FiberTaskingLibExamples is the legal property of Adrian Astley
 * Copyright Adrian Astley 2016
 */

#pragma once

#include <fiber_tasking_lib/thread_abstraction.h>


struct RenderContext;
struct GLFWwindow;

GLFWwindow *CreateGLFWWindow(int width, int height, const char *title);

FTL_THREAD_FUNC_DECL RenderThreadStart(void *arg);
