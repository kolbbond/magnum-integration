#ifndef Magnum_ImPlotIntegration_visibility_h
#define Magnum_ImPlotIntegration_visibility_h

#include <Corrade/Utility/VisibilityMacros.h>

#include "Magnum/ImPlotIntegration/configure.h"

#ifndef DOXYGEN_GENERATING_OUTPUT
#ifndef MAGNUM_IMPLOTINTEGRATION_BUILD_STATIC
    #if defined(MagnumImPlotIntegration_EXPORTS) || defined(MagnumImPlotIntegrationTestLib_EXPORTS)
        #define MAGNUM_IMPLOTINTEGRATION_EXPORT CORRADE_VISIBILITY_EXPORT
        /* From imconfig.h to export ImPlot symbols */
        #define IMPLOT_API CORRADE_VISIBILITY_EXPORT
    #else
        #define MAGNUM_IMPLOTINTEGRATION_EXPORT CORRADE_VISIBILITY_IMPORT
        #define IMPLOT_API CORRADE_VISIBILITY_IMPORT
    #endif

#else
    #define MAGNUM_IMPLOTINTEGRATION_EXPORT CORRADE_VISIBILITY_STATIC
    #define IMPLOT_API CORRADE_VISIBILITY_STATIC
#endif
#else
#define MAGNUM_IMPLOTINTEGRATION_EXPORT
#define IMPLOT_API
#endif

#endif
