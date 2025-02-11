#include<stdio.h>
#include<stdlib.h>
#define size 7

typedef struct{
	int x,y;
}Point;

Point pt(int,int);
int visit(int[][size],Point,Point);
void print(int[][size]);


int main(void){
	int maze[size][size]=
	{
		{0,0,2,2,2,2,2},
		{2,0,0,0,0,0,2},
		{2,0,2,0,2,0,2},
		{2,0,0,2,0,2,2},
		{2,2,0,2,0,2,2},
		{2,0,0,0,0,0,2},
		{2,2,2,2,0,0,0}
	};
	
	if(!visit(maze,pt(1,1),pt(7,7))){
		printf("沒有找到出口!\n");
		
	}
	
	print(maze);
	system("pause");
	return 0;			
} 

Point pt(int x,int y){
	Point p={x,y};
	return p;
}

int visit(int maze[][size],Point start,Point end){
	if(!maze[start.x][start.y]){
		maze[start.x][start.y]=1;
		if(!maze[end.x][end.y]&&!(visit(maze,pt(start.x,start.y+1),end))||
			visit(maze,pt(start.x+1,start.y),end)||
			visit(maze,pt(start.x,start.y-1),end)||
			visit(maze,pt(start.x-1,start.y),end)){
				maze[start.x][start.y]=0;
		}
	}
	return maze[end.x][end.y];
}

void print(int maze[][size]){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			switch(maze[i][j]){
				case 0:printf("-");break;
				case 1:printf(".");break;
				case 2:printf("#");break;	
			}
		}
		printf("\n");	
	}
}
