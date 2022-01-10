cmd_/home/pi/ELDD_EXAM/q1/Module.symvers := sed 's/ko$$/o/' /home/pi/ELDD_EXAM/q1/modules.order | scripts/mod/modpost -m -a   -o /home/pi/ELDD_EXAM/q1/Module.symvers -e -i Module.symvers   -T -
