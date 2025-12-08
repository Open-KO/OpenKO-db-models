#pragma once

#include <cstdint>
#include <string>

/// \brief Collection of hand-written utilities and types
 namespace modelUtil
{
    static const std::string DbAccountString = "ACCOUNT";
    static const std::string DbGameString = "GAME";
    static const std::string DbLogString = "LOG";
    static const std::string DbInvalidString = "INVALID";

    /// \brief Database type identifier
    enum class DbType : int8_t
    {
        INVALID = -1,
        ACCOUNT = 0,
        GAME = 1,
        LOG = 2
    };

    /// \brief Returns the string equivalent of a DbType
    const std::string& DbTypeString(DbType db)
    {
        switch (db)
        {
            case DbType::ACCOUNT: return DbAccountString;
            case DbType::GAME: return DbGameString;
            case DbType::LOG: return DbLogString;
            default: return DbInvalidString;
        }
    }
}
