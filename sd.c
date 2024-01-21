#include <stdio.h>
#include <string.h>
 
typedef struct book{
	int bookid;
	char bookname[20];
	char Author[20];
	float price;
	int rating;
	char category[20];
	
	
}book;
 int count;
 void storeinfo(book*,int );
       void display(book*,int);
              int searchByid(book*, int);
              void searchByname(book*, char*);
              int searchByAuthor(book*,char*);
 
 int updateByprice(book*,int);
 int updateByrating(book*, int);
  int remove(book*,int);
 
int main(){
	
	int selectnum,selectnumsub1,id,selectupdate,updateprice,updatebookid;
	int updaterating,removebookid,displaynum;
	char name[20],Authorname[20];
	
	
	printf(" \n");
	printf("\t BOOK MANEGMENT SYSYTEM \t \n");
	printf(" \n"); 
	printf(" Select the Number \n");
	printf(" 1. Store the Book Information : \n");
	printf(" 2. Display Book Infrormation : \n");
	printf(" 3. Search Book By:  \n");
	printf(" 4. Update Book By : \n");
	printf(" 5. Delete Book Information : \n");
	printf(" \n");
	printf("\t Select the Number ");
	scanf("  %d",&selectnum);
	
	book books[50];
	if(selectnum==1){
		storeinfo(books, 50);
	}else if(selectnum==2){
		display(books,displaynum);
	}else if(selectnum==3){
		printf(" 1. Search By Id: \n");
		printf(" 2. Search By Name: \n");
		printf(" 3. Search By Author: \n");
		scanf("%d",&selectnumsub1);
		if(selectnumsub1==1){
			printf("Enter the ID: ");
			scanf("%d",&id);
			  searchByid(books, id);
		}else if(selectnumsub1==2){
			printf("Enter the name of book : ");
			scanf("%s",&name);
			 searchByname(books, name);
		}else if(selectnumsub1==3){
			 printf("Enter the name of book Author : ");
			scanf("%s",&Authorname);
			searchByAuthor(books, Authorname );
		}else  {
			printf("Invlid Output");
		}
	}else if(selectnum==4){
		printf(" 1. Update the rate : ");
		printf( " 2. Update the Rating : ");
		scanf("%d",&selectupdate);
		if(selectupdate==1){
			printf("Enter the update price : ");
			scanf("%d",&updateprice);
			updateByprice(books,updateprice);  
		}else if(selectupdate==2){
			printf("Enter the Rating : ");
			scanf("%d",&updaterating);
			updateByrating(books, updaterating);
		}
		
	}else if(selectnum==5){
		printf("Enter the book id ");
		scanf("%d",&removebookid)
		remove(books,int);
	}
	 
	 
	
	
 

}
 

void storeinfo(book*books, int n){
//	PRINT----------------------------------------------------------------------------------------------------------------------
	if(count==n){
		printf("The Storage are full ");
	}else{
			 int b;
			 printf("Enter number of book : ");
			 scanf("%d",&b);
			 for(int i=0; i<b;i++){
			 
		printf(" Enter the Book-id : ");
		scanf("%d",&books[count].bookid);
		printf(" Enter the Book Name : ");
		scanf("%s",&books[count].bookname);
		printf(" Enter the Author Name : ");
		scanf("%s",&books[count].Author);
		printf(" Enter the price of Book : ");
		scanf("%d",&books[count].price);
		printf(" Enter the Rating of Book : ");
		scanf("%d",&books[count].rating);
		printf(" Enter the Category of Book :  ");
		scanf("%d \n",&books[count].category);
		count++;
		 }
}
}
//DISPLAY-----------------------------------------------------------------------------------------------------------------
  display(books, displaynum);{
  	printf("Student Deteils Number : ");
  	scanf("%d",&displaynum);
	for(int i=0; i<count; i++){
		if(books[i].bookid==displaynum){
		 
		printf("The book id : %d \n",books[i].bookid);
		printf("The book Name : %s \n",books[i].bookname);
		printf("The book Author : %s \n",books[i].Author);
		printf("The book Price : %d \n",books[i].price);
		printf("The book Rating : %d \n",books[i].rating);
		printf("The book Category : %d \n",books[i].category);
	}else{
		printf("Not Valid");
	}
	}
}

//SEARCH BY ID-----------------------------------------------------------------------------------------------------------------

    int searchByid(book*books,int id){
	for(int i=0;i<count;i++){
		if(books[i].bookid==id){
	    printf("The book id : %d \n",books[i].bookid);
		printf("The book Name : %s \n",books[i].bookname);
		printf("The book Author : %s \n",books[i].Author);
		printf("The book Price : %d \n",books[i].price);
		printf("The book Rating : %d \n",books[i].rating);
		printf("The book Category : %d \n",books[i].category);
		}else{
			printf("Enter Roll Number are not valid");
		}
	}
}

//SEARCH BY NAME----------------------------------------------------------------------------------------------------------------

  void searchByname(book*books,char* name){
	for(int i=0;i<count;i++){
		if(strcmp(books[i].bookname,name)==0){
	    printf("The book id : %d \n",books[i].bookid);
		printf("The book Name : %s \n",books[i].bookname);
		printf("The book Author : %s \n",books[i].Author);
		printf("The book Price : %d \n",books[i].price);
		printf("The book Rating : %d \n",books[i].rating);
		printf("The book Category : %d \n",books[i].category);
		}else{
			printf("Enter name are not valid");
		}
}
}

//SEARCH BY AUTHOR--------------------------------------------------------------------------------------------------------------
int searchByAuthor(book*books,char* Authorname){
	for(int i=0;i<count;i++){
		if(strcmp(books[i].Author,Authorname)==0){
	    printf("The book id : %d \n",books[i].bookid);
		printf("The book Name : %s \n",books[i].bookname);
		printf("The book Author : %s \n",books[i].Author);
		printf("The book Price : %d \n",books[i].price);
		printf("The book Rating : %d \n",books[i].rating);
		printf("The book Category : %d \n",books[i].category);
		}else{
			printf("Enter name are not valid");
		}
}
}

//UPDATE BY PRICE---------------------------------------------------------------------------------------------------
int updateByprice(book*books,int updateprice){
	printf("Enter the book id : ");
	scanf("%d",&updatebookid);
	for(int i=0; i<count; i++){
		if(books[i].bookid==updatebookid){
			books[i].price=updateprice;
		}
	}
}


//UPDATE BY RATING-----------------------------------------------------------------------------------------------------
 int updateByrating(book*books,int updaterating){
	printf("Enter the book id : ");
	scanf("%d",&updatebookid);
	for(int i=0; i<count; i++){
		if(books[i].bookid==updatebookid){
			books[i].price=updaterating;
		}
	}
}
}
DELETE THE BOOKINFORMATION---------------------------------------------------------------------------------------------------
int remove(book*books,int removebookid){
	for(int i=0;i<count;i++){
		0		if(books[i].bookid==removebookid){
			
		books[i]=books[i+1];
				count--;
		}else{
			printf("Given data is invalid");
		}
		return 0;
	}
}
