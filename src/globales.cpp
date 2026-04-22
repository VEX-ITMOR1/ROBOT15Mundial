#include "main.h"
#include "pros/adi.hpp"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"

pros::Motor intake1(10, pros::v5::MotorGears::blue);
pros::Motor intake2(-8, pros::v5::MotorGears::blue);
pros::Motor rollo(20, pros::v5::MotorGears::blue);


pros::adi::Pneumatics cargador('E', false);
pros::adi::Pneumatics gancho1('D', false);
pros::adi::Pneumatics gancho2('H', false);
pros::adi::Pneumatics puerta('C', false);

