set echo on

drop table department cascade constraints;
drop table student cascade constraints;
drop table professor cascade constraints; 
drop table course cascade constraints; 
drop table class cascade constraints;
drop table takes;

create table department (
	dept_id 	varchar2(10) 	not null,
	dept_name 	varchar2(20) 	not null,
	office 		varchar2(10),
	constraint pk_department primary key(dept_id)
);

create table student (
	stu_id 		varchar2(10),
	resident_id 	varchar2(14) not null,
	name 		varchar2(10) not null,
	year 		int,
	address 	varchar2(10),
	dept_id 	varchar2(10),
	constraint pk_student primary key(stu_id),
	constraint fk_student foreign key(dept_id) references department(dept_id)
);

create table professor 
(
	prof_id 	varchar2(10) ,
	resident_id 	varchar2(14) 	not null,
	name 		varchar2(10) 	not null,
	dept_id 	varchar2(10),
	position 	varchar2(10),
	year_emp 	int,
	constraint pk_professor primary key(prof_id),
	constraint fk_professor foreign key(dept_id) references department(dept_id)
);

create table course 
(
	course_id 	varchar2(10),
	title 		varchar2(20) not null,
	credit 		int,
	constraint 	pk_course primary key(course_id)
);

create table class (
	class_id 	varchar2(10) ,
	course_id 	varchar2(10),
	year 		int,
	semester 	int,
	division 	char(1),
	prof_id 	varchar2(10),
	classroom 	varchar2(9),
	enroll 		int,
	constraint 	pk_class primary key(class_id),
	constraint 	fk_class1 foreign key(course_id) 
			references course(course_id),
	constraint 	fk_class2 foreign key(prof_id) 
			references professor(prof_id) 
);

create table takes (
	stu_id 		varchar2(10) ,
	class_id 	varchar2(10),
	grade 		char(5),
	constraint 	pk_takes primary key(stu_id, class_id),
	constraint 	fk_takes1 foreign key(stu_id) 
			references student(stu_id),
	constraint 	fk_takes2 foreign key(class_id) 
			references class(class_id)
);

insert into department values ('920', '��ǻ�Ͱ��а�', '201ȣ');
insert into department values ('923', '������а�', '207ȣ');
insert into department values ('925', '���ڰ��а�', '308ȣ');

insert into student values ('1292001', '900424-1825409', '�豤��', 3, '����', 920);
insert into student values ('1292002', '900305-1730021', '������', 3, '����', 920);
insert into student values ('1292003', '891021-2308302', '������', 4, '����', 920);
insert into student values ('1292301', '890902-2704012', '������', 2, '�뱸', 923);
insert into student values ('1292303', '910715-1524390', '�ڱ���', 3, '����', 923);
insert into student values ('1292305', '921011-1809003', '�����', 4, '�λ�', 923);
insert into student values ('1292501', '900825-1506390', '��ö��', 3, '����', 925);
insert into student values ('1292502', '911011-1809003', '���¼�', 3, '����', 925);

insert into professor values('92001', '590327-1839240', '���±�', '920', '����', 1997);
insert into professor values('92002', '690702-1350026', '����', '920', '�α���', 2003);
insert into professor values('92301', '741011-2765501', '�ּ���', '923', '�α���', 2005);
insert into professor values('92302', '750728-1102458', '���¼�', '923', '����', 1999);
insert into professor values('92501', '620505-1200546', '��ö��', '925', '������', 2007);
insert into professor values('92502', '740101-1830264', '��μ�', '925', '�α���', 2005);

insert into course values ('C101', '���갳��', 3);
insert into course values ('C102', '�ڷᱸ��', 3);
insert into course values ('C103', '�����ͺ��̽�', 4);
insert into course values ('C301', '�ü��', 3);
insert into course values ('C302', '��ǻ�ͱ���', 3);
insert into course values ('C303', '�̻����', 4);
insert into course values ('C304', '��ü������', 4);
insert into course values ('C501', '�ΰ�����', 3);
insert into course values ('C502', '�˰���', 2);

insert into class values ('C101-01', 'C101', 2012, 1, 'A', '92301', '301ȣ', 40);
insert into class values ('C102-01', 'C102', 2012, 1, 'A', '92001', '209ȣ', 30);
insert into class values ('C103-01', 'C103', 2012, 1, 'A', '92501', '208ȣ', 30);
insert into class values ('C103-02', 'C103', 2012, 1, 'B', '92301', '301ȣ', 30);
insert into class values ('C501-01', 'C501', 2012, 1, 'A', '92501', '103ȣ', 45);
insert into class values ('C501-02', 'C501', 2012, 1, 'B', '92502', '204ȣ', 25);
insert into class values ('C301-01', 'C301', 2012, 2, 'A', '92502', '301ȣ', 30);
insert into class values ('C302-01', 'C302', 2012, 2, 'A', '92501', '209ȣ', 45);
insert into class values ('C502-01', 'C502', 2012, 2, 'A', '92001', '209ȣ', 30);
insert into class values ('C502-02', 'C502', 2012, 2, 'B', '92301', '103ȣ', 26);

insert into takes values ('1292001', 'C101-01', 'B+');
insert into takes values ('1292001', 'C103-01', 'A+');
insert into takes values ('1292001', 'C301-01', 'A0');
insert into takes values ('1292002', 'C102-01', 'A0');
insert into takes values ('1292002', 'C103-01', 'B+');
insert into takes values ('1292002', 'C502-01', 'C+');
insert into takes values ('1292003', 'C103-02', 'B0');
insert into takes values ('1292003', 'C501-02', 'A+');
insert into takes values ('1292301', 'C102-01', 'C+');
insert into takes values ('1292303', 'C102-01', 'C0');
insert into takes values ('1292303', 'C103-02', 'B+');
insert into takes values ('1292303', 'C501-01', 'A+');
insert into takes values ('1292303', 'C502-01', 'B0');
insert into takes values ('1292305', 'C102-01', 'B0');
insert into takes values ('1292305', 'C103-01', 'C+');
insert into takes values ('1292305', 'C501-02', 'A0');
insert into takes values ('1292305', 'C301-01', 'A+');
insert into takes values ('1292305', 'C502-01', 'A+');
insert into takes values ('1292501', 'C101-01', 'B0');
insert into takes values ('1292501', 'C102-01', 'B0');
insert into takes values ('1292501', 'C501-02', 'B0');
insert into takes values ('1292502', 'C501-01', 'C0');
insert into takes values ('1292502', 'C501-02', 'B0');

commit;

