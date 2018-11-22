#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<String.h>
class tollcal
{
int tno;
char ttype[20];
int ttotal;
public:
void getdata1();
void putdata1();
void caltoll();
int gettno();
};
class tollmem
{
int tno;
char tname[20];
int age;
public:
void getdata2();
void putdata2();
int gettno();
};
class vehdet
{
int vno;
char vname[20];
char vtype[20];
public:
void getdata3();
void putdata3();
int getvno();
};
class DAILYUSER
{
	int uno;
	char uname[20];
	int  vno;
	public:
	void GetD4();
	void PutD4();
	int Getuno();
};
class  TAXDEPO
{
	int txno;
	char clname[20];
	int  totax;
	public:
	void GetD5();
	void PutD5();
	int Getcno();
};
void tollcal::getdata1()
{
cout<<"Enter toll no "<<endl;
cin>>tno;
cout<<"Enter toll type(Heavyvehicle,Cars,TwoWh) "<<endl;
gets(ttype);
}
void tollcal:: putdata1()
{
cout<<endl<<tno<<endl<<ttype<<endl<<ttotal<<endl;
}
int tollcal::gettno()
{
return(tno);
}
void tollcal::caltoll()
{
if(strcmp(ttype,"Heavyvehicle")==0)
ttotal=45;
else if(strcmp(ttype,"Cars")==0)
ttotal=30;
else if(strcmp(ttype,"TwoWh")==0)
ttotal=15;
}
void tollmem::getdata2()
{
cout<<"Enter toll member's name "<<endl;
gets(tname);
cout<<"Enter toll member's no "<<endl;
cin>>tno;
cout<<"Enter toll member's age "<<endl;
cin>>age;
}
void tollmem:: putdata2()
{
cout<<tno<<"  "<<tname<<"  "<<age<<endl;
}
int tollmem::gettno()
{
return(tno);
}
void vehdet::getdata3()
{
cout<<"Enter vehicle's name"<<endl;
gets(vname);
cout<<"Enter vehicle's no"<<endl;
cin>>vno;
cout<<"Enter vehicle's type(Heavyvehicle,Cars,TwoWh)"<<endl;
gets(vtype);
}
void vehdet:: putdata3()
{
cout<<vno<<"  "<<vname<<"  "<<vtype<<endl;
}
int vehdet::getvno()
{
return(vno);
}
void DAILYUSER:: GetD4()
{
	cout<<"Enter the user no "<<endl;
	cin>>uno;
	cout<<"Enter user name"<<endl;
	gets(uname);
	cout<<"Enter Vech. No"<<endl;
	cin>>vno;
}
void DAILYUSER:: PutD4()
{	  cout<<uno<<"\t"<<uname<<"\t"<<vno<<"\t"<<endl;
}
int DAILYUSER:: Getuno()
{
	 return(uno);
}
void TAXDEPO:: GetD5()
{
	cout<<"Enter the tax deposition reciept no."<<endl;
	cin>>txno;
	cout<<"Enter collecter officer name"<<endl;
	gets(clname);
	cout<<"Enter total tax collected"<<endl;
	cin>>totax;
}

void TAXDEPO:: PutD5()
{
	  cout<<txno<<"\t"<<clname<<"\t"<<totax<<"\t"<<endl;
}
int TAXDEPO:: Getcno()
{
	 return(txno);
}
tollcal t;
tollmem m;
vehdet v;           
DAILYUSER B;
TAXDEPO k;
void main3()
{
clrscr();
void enter_file1();
void display_file1();
void search1();
void modify1();
void Delete1();
int c;
do
{
cout<<"Main menu"<<endl;
cout<<"1.Add toll's record"<<endl;
cout<<"2.Display toll's record"<<endl;
cout<<"3.Search"<<endl;
cout<<"4.Modify"<<endl;
cout<<"5.Delete"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice ";
cin>>c;
switch(c)
{
case 1:enter_file1();
break;
case 2: display_file1();
break;
case 3:search1();
break;
case 4:modify1();
break;
case 5:Delete1();
break;
}
}while(c!=6);
getche();
}
void main1()
{
clrscr();
void enter_file2();
void display_file2();
void search2();
void modify2();
void Delete2();
int c;
do
{
cout<<"Main menu"<<endl;
cout<<"1.Add toll member's record"<<endl;
cout<<"2.Display toll member's record"<<endl;
cout<<"3.Search"<<endl;
cout<<"4.Modify"<<endl;
cout<<"5.Delete"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice "<<endl;
cin>>c;
switch(c)
{
case 1:enter_file2();
break;
case 2: display_file2();
break;
case 3:search2();
break;
case 4:modify2();
break;
case 5:Delete2();
break;
}
}while(c!=6);
 getche();
}
void main2()
{
clrscr();
void enter_file3();
void display_file3();
void search3();
void modify3();
void Delete3();
int c;
do
{
cout<<"Mainmenu"<<endl;
cout<<"1.Add vehicle's record"<<endl;
cout<<"2.Display vehicle's record"<<endl;
cout<<"3.Search"<<endl;
cout<<"4.Modify"<<endl;
cout<<"5.Delete"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice "<<endl;
cin>>c;
switch(c)
{
case 1:enter_file3();
break;
case 2: display_file3();
break;
case 3:search3();
break;
case 4:modify3();
break;
case 5:Delete3();
break;
}
}while(c!=6);
getche();
}
void main4()
{
clrscr();
void enterdet4();
void displaydet4();
void searchdet4();
void modifydet4();
void deletedet4();
int c;
     do
     {
	   cout<<"\n Main menu "<<endl;
	   cout<<"1. Enter the details of daily users"<<endl;
	   cout<<"2. Display details of daily users "<<endl;
	   cout<<"3. Search a daily user by its pass no "<<endl;
	   cout<<"4. Modify user details "<<endl;
	   cout<<"5. Delete user details "<<endl;
	   cout<<"6.Exit "<<endl;
cout<<"Enter your choice"<<" ";
cin>>c;
	  switch(c)
	  {
	  case 1: enterdet4();
	  break;
	  case 2: displaydet4();
	  break;
	  case 3: searchdet4();
	  break;
	  case 4: modifydet4();
	  break;
	  case 5: deletedet4();
	  break;
	  }
     }while(c!=6);
 getche();
}
void main5()
{
clrscr();
void enterdet5();
void displaydet5();
void searchdet5();
void modifydet5();
void deletedet5();
int c;
     do
     {
	   cout<<"\n Main menu "<<endl;
	   cout<<"1. Enter the details of tax deposition"<<endl;
	   cout<<"2. Display details of tax deposition "<<endl;
	   cout<<"3. Search tax deposition by tax nO. "<<endl;
	   cout<<"4. Modify deposition details "<<endl;
	   cout<<"5. Delete deposition details "<<endl;
	   cout<<"6.exit "<<endl;
cout<<"Enter your choice"<<" ";
cin>>c;
	  switch(c)
	  {
	  case 1: enterdet5();
	  break ;
	  case 2: displaydet5();
	  break ;
	  case 3: searchdet5();
	  break ;
	  case 4: modifydet5();
	  break ;
	  case 5: deletedet5();
	  break ;
	  }
     }while(c!=6);
getche();
}
void main()
{
int choic;
do
{
cout<<"Main Menu "<<endl;
cout<<"1  Toll Worker Credentials "<<endl;
cout<<"2  Vehicle Details "<<endl;
cout<<"3  Toll Calculation "<<endl;
cout<<"4  DailyUser details "<<endl;
cout<<"5  Tax Deposition  "<<endl;
cout<<"6  Exit "<<endl;
cout<<"Enter your choice "<<endl;
cin>>choic;
switch(choic)
{
case 1:
main1();
break;
case 2:
main2();
break;
case 3:
main3();
break;
case 4:
main4();
break;
case 5:
main5();
break;
}
}while(choic!=6);
getche();
}
void enter_file1()
{
ofstream afile("tcal.dat",ios::binary||ios::app);
t.getdata1();
t.caltoll();
afile.write((char*)&t,sizeof(t));
afile.close();
cout<<endl;
getche();
}
void display_file1()
{
ifstream bfile("tcal.dat",ios::binary);
while(bfile.read((char*)&t,sizeof(t)))
{
t.putdata1();
}
bfile.close();
cout<<endl;
getche();
}
void search1()
{
int p=-1,z;
ifstream cfile("tcal.dat",ios::binary);
cout<<"Please enter toll's no to be searched "<<endl;
cin>>z;
while(cfile.read((char*)&t,sizeof (t)))
{
if(t.gettno()==z)
{
t.putdata1();
p++;
}
}
if(p==-1)
cout<<"Sorry! record not found "<<endl;
cout<<endl;
cfile.close();
getche();
}
void modify1()
{
int l,a,q=-1;
cout<<"Please enter the toll's no whose record to be modify "<<endl;
cin>>l;
fstream dfile("tcal.dat",ios::in|ios::out);
while(dfile.read((char*)&t,sizeof(t)))
{
a++;
if(t.gettno()==l)
{
t.getdata1();
dfile.seekp((a-1)*sizeof(t),ios::beg);
dfile.write((char*)&t,sizeof(t));
q++;
}
}
if(q==-1)
cout<<"Sorry!record not found "<<endl;
dfile.close();
getche();
}
void Delete1()
{
int b;
ifstream efile("tcal.dat",ios::binary||ios::in);
ofstream ffile("temp.dat",ios::binary||ios::out);
cout<<"Please enter the toll's no to be deleted "<<endl;
cin>>b;
while(efile.read((char*)&t,sizeof(t)))
{
if(t.gettno()!=b)
{
ffile.write((char*)&t,sizeof (t));
}
}
remove("tcal.dat");
rename("temp.dat","tcal.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}
void enter_file2()
{
ofstream afile("tmem.dat",ios::binary,ios::app);
m.getdata2();
afile.write((char*)&m,sizeof(m));
afile.close();
cout<<endl;
getche();
}
void display_file2()
{
ifstream bfile("tmem.dat",ios::binary);
while(bfile.read((char*)&m,sizeof(m)))
{
m.putdata2();
}
bfile.close();
cout<<endl;
getche();
}
void search2()
{
int p=-1,z;
ifstream cfile("tmem.dat",ios::binary);
cout<<"Please enter toll member's no to be searched"<<endl;
cin>>z;
while(cfile.read((char*)&m,sizeof(m)))
{
if(m.gettno()==z)
{
m.putdata2();
p++;
}
}
if(p==-1)
cout<<"Sorry! record not found"<<endl;
cout<<endl;
cfile.close();
getche();
}
void modify2()
{
int l,a,q=-1;
cout<<"Please enter the toll member's no take modify"<<endl;
cin>>l;
fstream dfile("tmem.dat",ios::in|ios::out|ios::binary);
while(dfile.read((char*)&m,sizeof(m)))
{
a++;
if(m.gettno()==l)
{
m.getdata2();
dfile.seekp((a-1)*sizeof(m),ios::beg);
dfile.write((char*)&m,sizeof(m));
q++;
}
if(q==-1)
cout<<"Sorry! record not found"<<endl;
dfile.close();
getche();
}
}
void Delete2()
{
int b;
ifstream efile("tmem.dat",ios::binary);
ofstream ffile("temp.dat",ios::binary);
cout<<"Please enter the toll member's no to be deleted"<<endl;
cin>>b;
while(efile.read((char*)&m,sizeof(m)))
{
if(m.gettno()!=b)
{
ffile.write((char*)&m,sizeof(m));
}
}
remove("tmem.dat");
rename("temp.dat","tmem.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}
void enter_file3()
{
ofstream afile("veh.dat",ios::binary,ios::app|ios::out);
v.getdata3();
afile.write((char*)&v,sizeof(v));
afile.close();
cout<<endl;
getche();
}
void display_file3()
{
ifstream bfile("veh.dat",ios::binary|ios::in);
while(bfile.read((char*)&v,sizeof (v)))
{
v.putdata3();
}
bfile.close();
cout<<endl;
getche();
}
void search3()
{
int p=-1,z;
ifstream cfile("veh.dat",ios::binary);
cout<<"Please enter vehicle's no to be searched"<<endl;
cin>>z;
while(cfile.read((char*)&v,sizeof (v)))
{
if(v.getvno()==z)
{
v.putdata3();
p++;
}
}
if(p==-1)
cout<<"Sorry! record not found"<<endl;
cout<<endl;
cfile.close();
getche();
}
void modify3()
{
int l,a,q=-1;
cout<<"Please enter the vehicle's no take modify"<<endl;
cin>>l;
fstream dfile("veh.dat",ios::in|ios::out);
while(dfile.read((char*)&v,sizeof(v)))
{
a++;
if(v.getvno()==l)
{
v.getdata3();
dfile.seekp((a-1)*sizeof (v),ios::beg);
dfile.write((char*)&v,sizeof (v));
q++;
}
if(q==-1)
cout<<"Sorry! record not found"<<endl;
dfile.close();
getche();
}
}
void Delete3()
{
int b;
ifstream efile("veh.dat",ios::binary);
ofstream ffile("temp.dat",ios::binary);
cout<<"please enter the vehicle's no to be deleted"<<endl;
cin>>b;
while(efile.read((char*)&v,sizeof(v)))
{
if(v.getvno()!=b)
{
ffile.write((char*)&v,sizeof(v));
}
}
remove("veh.dat");
rename("temp.dat","veh.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}
void enterdet4()
{
ofstream afile("Dusr.dat",ios::binary|ios::app);
B.GetD4();
afile.write((char*)& B, sizeof(B));
afile.close();
cout<<endl;
getche();
}
void displaydet4()
{
ifstream bfile("dusr.dat",ios::binary);
	 while(bfile.read((char*)& B, sizeof(B)))
	 {
	 B.PutD4();
	 }
bfile.close();
cout<<endl;
getche();
}
void searchdet4()
{
int p=-1,z;
ifstream cfile("dusr.dat",ios::binary);
cout<<"Please enter user pass no to be searched:\n";
cin>>z;
	 while(cfile.read((char*)& B,sizeof(B)))
	 {
			   if(B.Getuno()==z)
			   B.PutD4();
			   p++;
	 }
	 if(p==-1)
	 cout<<"Sorry! record not found\n";
	 cout<<endl;
cfile.close();
getche();
}
void modifydet4()
{
int g=-1,a=0,t;
cout<<"Please enter the user pass no to be modified:\n";
cin>>t;
fstream dfile("dusr.dat",ios::in|ios::binary|ios::out );
		while(dfile.read((char*)& B,sizeof(B)))
		{
				    a++;
				    if(B.Getuno()==t)
				    {
				    B.GetD4();
				    dfile.seekp((a-1)*sizeof(B),ios::beg);
				    dfile.write((char*)& B, sizeof(B));
				    g++;
				    }
		}
		if(g==-1)
		cout<<"Sorry! record not found\n";
dfile.close();
getche();
}
void deletedet4()
{
int b;
ifstream efile("dusr.dat",ios::binary);
ofstream ffile("dusr1.dat",ios::binary);
cout<<"Please enter the user pass to be deleted\n";
cin>>b;
		 while(efile.read((char*)& B,sizeof(B)))
		 {
				    if(B.Getuno()!=b)
				    {
				    ffile.write((char*)& B,sizeof(B));
				    }
		 }
remove("dusr.dat");
rename("dusr1.dat","dusr.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}
void enterdet5()
{
ofstream afile("tdpo.dat",ios::binary|ios::app);
k.GetD5();
afile.write((char*)& k, sizeof(k));
afile.close();
cout<<endl;
getche();
}
void displaydet5()
{
ifstream Bfile("tdpo.dat",ios::binary);
	 while(Bfile.read((char*)& k, sizeof(k)))
	 {
	 k.PutD5();
	 }
Bfile.close();
cout<<endl;
getche();
}
void searchdet5()
{
int p=-1,z;
ifstream cfile("tdpo.dat",ios::binary);
cout<<"Please enter tax reciept no whose tax need to be searched:\n";
cin>>z;
	 while(cfile.read((char*)& k,sizeof(k)))
	 {
			   if(k.Getcno()==z)
			   {
			   k.PutD5();
			   p++;
			   }
	 }
	 if(p==-1)
	 cout<<"Sorry! record not found\n";
	 cout<<endl;
cfile.close();
getche();
}
void modifydet5()
{
int g=-1,a=0,t;
cout<<"Please enter the tax reciept no whose record need  to Be modified:\n";
cin>>t;
fstream dfile("tdpo.dat",ios::in|ios::binary|ios::out );
		while(dfile.read((char*)&k,sizeof(k)))
		{
				    a++;
				    if(k.Getcno()==t)
				    {
				    k.GetD5();
				    dfile.seekp((a-1)*sizeof(k),ios::beg);
				    dfile.write((char*)&k,sizeof(k));
				    g++;
				    }
		}
		if(g==-1)
		cout<<"Sorry! record not found\n";
dfile.close();
getche();
}
void deletedet5()
{
int B;
ifstream efile("tdpo.dat",ios::binary);
ofstream ffile("tdpo1.dat",ios::binary);
cout<<"Please enter the tax reciept no. whose record need to Be deleted\n";
cin>>B;
		 while(efile.read((char*)& k,sizeof(k)))
		 {
				    if(k.Getcno()!=B)
				    {
				    ffile.write((char*)& k,sizeof(k));
				    }
		 }
remove("tdpo.dat");
rename("tdpo1.dat","tdpo.dat");
efile.close();
ffile.close();
cout<<endl;
getche();
}