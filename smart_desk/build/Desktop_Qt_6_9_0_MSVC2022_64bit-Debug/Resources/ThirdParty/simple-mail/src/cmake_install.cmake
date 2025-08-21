# Install script for directory: C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/qt/Qt/6.9.0/msvc2022_64/SimpleMail3Qt6")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/simple-mail/src/SimpleMail3Qt6.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/simple-mail/src/SimpleMail3Qt6.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/simplemail3-qt6/SimpleMail" TYPE FILE FILES
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/emailaddress.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimeattachment.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimecontentformatter.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimefile.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimehtml.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimeinlinefile.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimemessage.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimemultipart.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimepart.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/mimetext.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/quotedprintable.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/server.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/serverreply.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/smtpexports.h"
    "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/Resources/ThirdParty/simple-mail/src/SimpleMail"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/simple-mail/src/CMakeFiles/SimpleMail3Qt6.dir/install-cxx-module-bmi-Debug.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/simple-mail/src/SimpleMail3Qt6.pc")
endif()

