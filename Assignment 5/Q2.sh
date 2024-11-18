#2. Write a shell script to display menu like “1. Date, 2. Cal, 3. Ls, 4. Pwd, 5. Exit” and execute the commands depending on user choice.

echo -e -n "Enter your choice : "
read c

case $c in
	1) echo "Date : "
		date
		;;
	2) echo "Calender : "
		cal
		;;
	3) echo "Ls"
		ls
		;;
	4) echo "Working Directory : "
		pwd
		;;
	5) exit
		;;
	*)echo "Invalid"
esac
