/*
 * Copyright (c) scott.cgi All Rights Reserved.
 *
 * Since : 2017-3-12
 * Author: scott.cgi
 */

#include "Engine/Toolkit/Platform/Platform.h"

//--------------------------------------------------------------------------------------------------
#ifdef is_platform_android
//--------------------------------------------------------------------------------------------------

#include <GLES3/gl3.h>

//--------------------------------------------------------------------------------------------------
#elif defined(is_platform_ios)
//--------------------------------------------------------------------------------------------------

#include <OpenGLES/ES3/gl.h>

//--------------------------------------------------------------------------------------------------
#endif
//--------------------------------------------------------------------------------------------------
