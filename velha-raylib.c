#include "raylib.h"
#include <stdio.h>



char mat[3][3]={"   ","   ","   "};

Texture2D image, image2;
    const int width = 600;
    const int height = 600;
    
    int i=0,j, index1,index2, a=0, total=0;
    int vez=1;
 
    int cellwidth= width/3;
    int cellheight= height/3;
 

    
int main(void){

  

    InitWindow(width, height, "jogo da velha");

    
    SetTargetFPS(60);               
    
image=LoadTexture("letra-x.png");
image2=LoadTexture("letra-o.png");
 
          
        
    while (WindowShouldClose()==false)   
    {
         
               
      
            BeginDrawing();
            
            ClearBackground(RAYWHITE);
          
              for(i=0;i<3;i++){
              for(j=0;j<3;j++){
              DrawRectangleLines(i*cellwidth, j*cellheight, cellwidth, cellheight, BLACK);}}
              if(vez==0)
                 DrawText(TextFormat("vez do x"), 200, 15, 40, RED);
             else 
                 DrawText(TextFormat("vez do o"), 200, 15, 40, RED);
            if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                Vector2 pos=GetMousePosition();
                
                index1= pos.x/cellwidth;
             index2= pos.y/cellheight;
             
          if(vez==0&&mat[index1][index2]==' '){
            mat[index1][index2]='x';
            
        vez=vez+1;
          }else if(vez==1&&mat[index1][index2]==' '){
            mat[index1][index2]='o';
            
            vez=vez-1;}}
            
          
                   if(mat[0][0]=='x')
                       DrawTexture(image,50,50,WHITE);
                    if(mat[0][0]=='o')
                        DrawTexture(image2,50,50,WHITE);
                   if(mat[1][0]=='x')
                         DrawTexture(image,250,50,WHITE);
                     
                   if(mat[1][0]=='o')
                         DrawTexture(image2,250,50,WHITE);
                       
                   if(mat[2][0]=='x')
                        DrawTexture(image,450,50,WHITE);
                      
                   if(mat[2][0]=='o')
                        DrawTexture(image2,450,50,WHITE);
                      
                   if(mat[0][1]=='x')
                       DrawTexture(image,50,250,WHITE);
                   
                     if(mat[0][1]=='o')
                          DrawTexture(image2,50,250,WHITE);
                   
                   if(mat[1][1]=='x')
                       DrawTexture(image,250,250,WHITE);
             
                   if(mat[1][1]=='o')
                       DrawTexture(image2,250,250,WHITE);
                  
                   if(mat[2][1]=='x')
                         DrawTexture(image,450,250,WHITE);
                   
                    if(mat[2][1]=='o')
                         DrawTexture(image2,450,250,WHITE);
                    
                   if(mat[0][2]=='x')
                       DrawTexture(image,50,450,WHITE);
                      
                   if(mat[0][2]=='o')
                       DrawTexture(image2,50,450,WHITE);
              
                   if(mat[1][2]=='x')
                         DrawTexture(image,250,450,WHITE);
                 
                   if(mat[1][2]=='o')
                       DrawTexture(image2,250,450,WHITE);
                 
                   if(mat[2][2]=='x')
                         DrawTexture(image,450,450,WHITE);
                      
                    if(mat[2][2]=='o')
                        DrawTexture(image2,450,450,WHITE);
                   
              
              
            
               if(mat[0][0]=='x'&&mat[1][0]=='x'&&mat[2][0]=='x'||mat[0][0]=='o'&&mat[1][0]=='o'&&mat[2][0]=='o'){
                    DrawText(TextFormat("O %c ganhou",mat[0][0]), 150, 300, 50, BLUE);   
               DrawLine( 10, 100, 580,100, BLACK);
               a=1; }
                
              else   if(mat[0][1]=='x'&&mat[1][1]=='x'&&mat[2][1]=='x'||mat[0][1]=='o'&&mat[1][1]=='o'&&mat[2][1]=='o'){
                     DrawText(TextFormat("O %c ganhou",mat[0][1]), 200, 80, 40, BLUE);
                  DrawLine( 10, 300, 580,300, BLACK);
                  a=1;}
                  
             else    if(mat[0][2]=='x'&&mat[1][2]=='x'&&mat[2][2]=='x'||mat[0][2]=='o'&&mat[1][2]=='o'&&mat[2][2]=='o'){
                      DrawText(TextFormat("O %c ganhou",mat[0][2]), 200, 80, 40, BLUE);
                        DrawLine( 10, 500, 580,500, BLACK);
                        a=1;}  
                        
            else    if(mat[0][1]=='x'&&mat[0][2]=='x'&&mat[0][0]=='x'||mat[0][1]=='o'&&mat[0][2]=='o'&&mat[0][0]=='o'){
                       DrawText(TextFormat("O %c ganhou",mat[0][1]), 200, 80, 40, BLUE);
                      DrawLine(100,10,100,580,BLACK);
                          a=1;}
                          
             else    if(mat[1][0]=='x'&&mat[1][1]=='x'&&mat[1][2]=='x'||mat[1][0]=='o'&&mat[1][1]=='o'&&mat[1][2]=='o'){
                      DrawText(TextFormat("O %c ganhou",mat[1][0]), 200, 80, 40, BLUE);
                       DrawLine(300,10,300,580,BLACK);
                          
                 a=1;}
                  
            else      if(mat[2][0]=='x'&&mat[2][1]=='x'&&mat[2][2]=='x'||mat[2][0]=='o'&&mat[2][1]=='o'&&mat[2][2]=='o'){
                         DrawText(TextFormat("O %c ganhou",mat[2][0]), 200, 80, 40, BLUE);
                       DrawLine(500,10,500,580,BLACK);
                  a=1;}
                  
              else   if(mat[0][0]=='x'&&mat[1][1]=='x'&&mat[2][2]=='x'||mat[0][0]=='o'&&mat[1][1]=='o'&&mat[2][2]=='o'){
                      DrawText(TextFormat("O %c ganhou",mat[0][0]), 200, 80, 40, BLUE);
                       DrawLine(10,10,580,580,BLACK);
                  a=1; }
                      
             else if(mat[2][0]=='x'&&mat[1][1]=='x'&&mat[0][2]=='x'||mat[2][0]=='o'&&mat[1][1]=='o'&&mat[0][2]=='o')  { 
            
                      DrawText(TextFormat("O %c ganhou",mat[2][0]), 200, 80, 40, BLUE);
                    DrawLine(580,10,10,580,BLACK);
             a=1;}
                  
           else     if(mat[0][0]!=' '&&mat[0][1]!=' '&&mat[0][2]!=' '&&mat[1][0]!=' '&&mat[1][1]!=' '&&mat[1][2]!=' '&&mat[2][0]!=' '&&mat[2][1]!=' '&&mat[2][2]!=' '){
                      DrawText(TextFormat("empate"), 200, 80, 40, BLUE);
    a=1;}
        EndDrawing();
        
        if(a==1){
            WaitTime(3);
        break;}
        
  
    }

 
               
    CloseWindow();        


    return 0;
}







