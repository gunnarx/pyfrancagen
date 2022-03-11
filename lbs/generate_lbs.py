#!/usr/bin/python
# (C) 2017 Gunnar Andersson
# SPDX-License-Identifier: MPL-2.0

import sys, os
sys.path.append(os.getcwd() + "/../pyfranca_cpp")

from pyfranca_cpp import *

LOCALINPUTDIR = '../lbs/fidl'

FIDL_FILES =  [ '%s/%s' % (LOCALINPUTDIR,s) for s in [
    'navigation/poiservice/POIServiceTypes.fidl',
    'navigation/poiservice/POIContentAccessModule.fidl',
    'navigation/poiservice/POIConfiguration.fidl',
    'navigation/poiservice/POISearch.fidl',
    'navigation/poiservice/POIContentAccess.fidl',
    'navigation/navigationcore/NavigationCoreTypes.fidl',
    'navigation/navigationcore/Guidance.fidl',
    'navigation/navigationcore/Configuration.fidl',
    'navigation/navigationcore/MapMatchedPosition.fidl',
    'navigation/navigationcore/Routing.fidl',
    'navigation/navigationcore/LocationInput.fidl',
    'navigation/navigationcore/Session.fidl',
    'navigation/mapviewer/Configuration.fidl',
    'navigation/mapviewer/MapViewerControl.fidl',
    'navigation/mapviewer/Session.fidl', 'navigation/NavigationTypes.fidl',
    'navigation/freetextsearchservice/FreeTextSearch.fidl',
    'hmi/speechservice/SpeechOutput.fidl',
    'CommonTypes.fidl' ] ]

def main():
    for f in FIDL_FILES:
        log ("-------------------------------------------------------")
        log (" ----- PROCESSING %s -----" % f)
        log ("-------------------------------------------------------")
        process_file(f)


if __name__ == "__main__":
    main()

