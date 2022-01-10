cmd_/home/pi/ELDD_EXAM/q2/Module.symvers := sed 's/ko$$/o/' /home/pi/ELDD_EXAM/q2/modules.order | scripts/mod/modpost -m -a   -o /home/pi/ELDD_EXAM/q2/Module.symvers -e -i Module.symvers   -T -
