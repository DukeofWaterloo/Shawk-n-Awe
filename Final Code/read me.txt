this program is desined to take student data from an excel file and create a time table for each student.
for this program to run, you need; the program exe file, the student data (the excel file). 

__Before running__
[1] make sure the files just listed are in the same folder. 
[2] it is recomended to run this program in a empty folder, this program creates up to 17 new files.
________________


__How to sort the students__
[1] launch the exe file (final name here).
[2] enter the name of the excel file with the student data. dont forget the ".csv" at the end of the name. avalable files will be listed above the input position, if the file is not listed, please put the file with the students into the folder where the program is located before proceding.
[3] press enter to conferm.
[4] you heve entered the input stage, the program will list: the name of a corse and the recomended class size. 

--notice--
for the recomended class size, the program gives the user a 'guide line'. the guide line changes based of off the users inputed class size: a 'live' adjustment is calculated after each input. **it will give you the minimum class size needed**
-----------

[5] please enter the maximum class size for this corse, then press enter. (repeat untill all six classes have been inputed).
[6] after the sixth entry, the program will tell you: the class name, the number of times it will be runing (four times) in the day, and the total number of spaces in that class for the day. 
[7] if those numbers are correct, press the number 1, if you wish to change those numbers, press 2.  press enter to conferm. if you change the numbers, go back to step 4. (do not enter "one" or "two" that will make the program fail)

--notice--
a)if you do not reach the required amout of spaces for each student, the program will force you to change your inputed numbers. 
b)if you have more than the minimum amount of spaces needed, the program will let you know that if you need to, you can lower the class sizes without harming the program.
** it is recomended to enter, more than the minimum class size to inprove the programs efectiveness. **
****this program ocasionaly needs to put students into a class that has already reached "full" the persentage of students is <6% the larger the class sizes, the less students get put into full classes.****
----------
[8]now you must enter the class-room number for each class, hit enter to confrem. (repeat for each class).
[9]you have succsessfully sorted the students.  the program will tell you how many students where sorted. the program asks if you would like to print atendence sheets for each subject. 1 creates the sheets, 2 does not. press enter to continue. 

--notice--
a sheet for each subject is created.
each sheet has a class list for each period as well as a spot to mark them for atendance.
each student is listed "first name, last name" and are devided into four sections, one per period (the period is marked above the class by "p1, p2, p3, or p4"
at the bottom of each sheet is a total number of students per period (eg P3:17).
-----------

[10]the next option is to show the location of the files, as well as some other data witch is not needed. press 1 to view the location, 2 to skip, press enter to continue. the file location are listed as " Directory of C:\..." that is the location you must navigat to in "file explorer" you can coppy that location and past it in the navigation bar (in file explorer) to jump to that location.
[11] if you pressed "1" in step 9, press enter to continue. if you pressed 2, continue to step 11.
[12] the program has just finised sorting the students and has placed each student in a file called "DoomGuy.csv". you may now close the program.
________________


__how to creat the pdf of each students timetable (for printing)__
[1] open the excel file named "Control Panel.xlsm"
[2] on the orange tab that apears upt top (first time use only) click okay (repeat as many times as needed this enables the excel program to run).
[3] click on the button labled "inport students" then find the file labbled "DoomGuy.csv" and double click on it.
[4] click on the button labled "inport subjects" if you skip this step, the students will not have room numbers for the classes they are atending. find the file named "subjects" and double click on it.
[5] click the button named "create schedules".
[6] on the bottom of the excel program are tabs, click on the one named "Control Panel" and click the print schedules
_______________________________________________________


__how to view the subject time table__
[1] open the file that the program is located in (after running the program).
[2] find the file with the corisponding name to the period that you wish to view and double click on it to open it. 
_________________________________

