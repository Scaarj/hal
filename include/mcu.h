#pragma once

namespace hal {
class Mcu {
    public:
    virtual void ms_delay(int ms) = 0;
    virtual void loop() = 0;
};
}
