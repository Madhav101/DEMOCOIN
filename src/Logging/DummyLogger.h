// DEMOCOIN BY SRM STUDENTS FOR FINAL PROJECT
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <Logging/ILogger.h>

namespace Logging
{

class DummyLogger : public ILogger 
{
    public:
        virtual ~DummyLogger() {};

        virtual void operator()(const std::string &category, Level level, boost::posix_time::ptime time, const std::string &body) override
        {
            // do nothing
        }
};

} // namespace Logging
