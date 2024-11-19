#include "AirQuality.h"
#include "Anemometer.h"
#include "Barometer.h"
#include "CloudCover.h"
#include "Forecast.h"
#include "Hydrometcenter.h"
#include "Hygrometer.h"
#include "MagneticField.h"
#include "Meteorologist.h"
#include "Person.h"
#include "RainGauge.h"
#include "Thermometer.h"
#include "UVIndex.h"
#include "Warning.h"
#include "WeatherStation.h"


#include <gtest/gtest.h>

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
