// DEMOCOIN BY SRM STUDENTS FOR FINAL PROJECT
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt ="DEMOCOIN MADE BY SRM STUDENTS ";

const std::string nonWindowsAsciiArt = "DEMOCIN MADE BY SRM STUDENTS";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
