#include "main.h"
#include "pros/adi.hpp"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"

pros::Motor intake11W(4, pros::v5::MotorGears::blue);
pros::Motor palanca1(1, pros::v5::MotorGears::red);
pros::Motor palanca2(2, pros::v5::MotorGears::red);

pros::adi::Pneumatics cargador('F', false);
pros::adi::Pneumatics lift1('E', false);
pros::adi::Pneumatics lift2('G', false);
pros::adi::Pneumatics tapa('C', false);
pros::adi::Pneumatics gancho('D', false);
pros::ADIDigitalIn limit_switch('A');