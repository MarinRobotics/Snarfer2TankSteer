#include "main.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);

//define motors
pros::Motor front_left_mtr (8, MOTOR_GEARSET_06);
pros::Motor middle_left_mtr (9, MOTOR_GEARSET_06);
pros::Motor back_left_mtr (10, MOTOR_GEARSET_06);
pros::Motor front_right_mtr (5, MOTOR_GEARSET_06);
pros::Motor middle_right_mtr (6, MOTOR_GEARSET_06);
pros::Motor back_right_mtr (7, MOTOR_GEARSET_06);

pros::Motor front_arm (1, MOTOR_GEARSET_36);
pros::Motor back_arm (4, MOTOR_GEARSET_36);


/* I don't think that this code is important but who knows


void moveRight(int speed) {
	front_right = speed;
	back_right = speed;
}

void moveLeft (int speed) {
	front_left = speed;
	back_right = speed;
}

*/

// TODO: fix all this weird auton code CALVIN!!!!!!
// TODO: Use PID controller for autonomous

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {
	pros::lcd::initialize();
	/* pros::lcd::set_text(1, "Hello PROS User!"); */

	pros::lcd::register_btn1_cb(on_center_button);





void disabled() {}
void competition_initialize() {}
void autonomous() {
	
	/*RedLeft(); */

}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */


void opcontrol() {
	
while (true) {
int left = master.get_analog(ANALOG_LEFT_Y);
int right = master.get_analog(ANALOG_RIGHT_Y);

front_left_mtr = left;
middle_left_mtr = left;
back_left_mtr = left;
front_right_mtr = right;
middle_right_mtr = right;
back_right_mtr = right;






pros::delay(20);

}
}
