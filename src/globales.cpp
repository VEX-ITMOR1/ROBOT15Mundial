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

<<<<<<< HEAD
=======
pros::adi::Pneumatics cargador('F', false);
pros::adi::Pneumatics lift1('E', false);
pros::adi::Pneumatics lift2('G', false);
pros::adi::Pneumatics tapa('C', false);
pros::adi::Pneumatics gancho('D', false);
pros::ADIDigitalIn limit_switch('A');
>>>>>>> d5f318e82cab7458260ef8acaa18f21a9c167d86
