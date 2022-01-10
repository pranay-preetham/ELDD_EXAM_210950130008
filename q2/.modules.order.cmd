cmd_/home/pi/ELDD_EXAM/q2/modules.order := {   echo /home/pi/ELDD_EXAM/q2/timer.ko; :; } | awk '!x[$$0]++' - > /home/pi/ELDD_EXAM/q2/modules.order
