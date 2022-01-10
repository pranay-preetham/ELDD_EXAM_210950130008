cmd_/home/pi/ELDD_EXAM/q1/modules.order := {   echo /home/pi/ELDD_EXAM/q1/char_driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/ELDD_EXAM/q1/modules.order
