#
# Regular cron jobs for the ip-scan package
#
0 4	* * *	root	[ -x /usr/bin/ip-scan_maintenance ] && /usr/bin/ip-scan_maintenance
