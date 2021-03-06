//! \file Utility.hpp
//! General purpose utility functions.

#ifndef GOSU_UTILITY_HPP
#define GOSU_UTILITY_HPP

#include <string>
#include <vector>

namespace Gosu
{
    //! Converts an std::string into an std::wstring.
    std::wstring utf8ToWstring(const std::string& utf8);
    //! Converts an std::wstring into an std::string.
    std::string wstringToUTF8(const std::wstring& ws);
    
    //! Converts an std::string into an std::wstring using local encoding.
    std::wstring widen(const std::string& s);
    //! Converts an std::wstring into an std::string using local encoding.
    std::string narrow(const std::wstring& ws);
    
    //! Returns the user's preferred language, at the moment of calling the function. Expect return
    //! values such as 'en_US', 'de_DE.UTF-8', 'ja', 'zh-Hans'. You can rely only on the first two letters
    //! being a common language abbreviation.
    std::string language();
}

#endif
