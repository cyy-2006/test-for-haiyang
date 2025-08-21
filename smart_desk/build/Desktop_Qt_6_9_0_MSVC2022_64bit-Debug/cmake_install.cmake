# Install script for directory: C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/SmartDesk.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/manager/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/FileBackup/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/FileSystem/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/OnlineDoc/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/TagSchedule/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Setting/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/UserInfo/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/EmailService/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/MoreFunction/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/ClipBoard/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/DisposeAbstract/DisposeTXT/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/DisposeAbstract/DisposeCSV/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/DisposeAbstract/DisposeIMG/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/DisposeAbstract/DisposeXLSX/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/main/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/simple-mail/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/QXlsx/cmake_install.cmake")
  include("C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/Resources/ThirdParty/LmsgNotify/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "C:/Users/pyke/Downloads/SmartDesk-SmartDesk1_2/SmartDesk-SmartDesk1_2/build/Desktop_Qt_6_9_0_MSVC2022_64bit-Debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
