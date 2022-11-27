int no = 10;

int x = 0;


x = no++;
x = (no = no + 1);
no = 11;
x = 10;


x = ++no;
x = (no = no + 1);
no = 11;
x = 11;



x = no--;
x = (no = no - 1);
no = 9;
x = 10;


x = --no;
x = (no = no - 1);
no = 9;
x = 9;
