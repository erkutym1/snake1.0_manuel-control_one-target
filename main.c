#include<stdio.h>
#include<math.h>
#include<time.h>



int main()
{
	//9x9 tahta yilan oyunu


	int hedefSatir,hedefSutun;
	int konumsatir,konumsutun;
	char komut;
	char tablo[9][9];

	for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            tablo[i][j]='*';
        }
    }

	srand(time(NULL));

	while (hedefSatir==konumsatir || hedefSutun==konumsutun)
    {
       	hedefSatir = rand()%9;
        hedefSutun = rand()%9;

        konumsatir = rand()%9;
        konumsutun = rand()%9;
    }

        tablo[konumsatir][konumsutun]='X';
        tablo[hedefSatir][hedefSutun]='o';

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("%c ", tablo[i][j]);
            }
            printf("\n");
        }


    while (hedefSatir!=konumsatir || hedefSutun!=konumsutun)
    {
        printf("WASD yon tuslarini kullanabilirsiniz\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        komut = getche();

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        if(komut=='W' || komut=='w')
        {
            if(konumsatir>0)
                konumsatir--;
        }

        else if(komut=='A' || komut=='a')
        {
            if(konumsutun>0)
                konumsutun--;
        }

        else if(komut=='S' || komut=='s')
        {
            if(konumsatir<8)
                konumsatir++;
        }

        else if(komut=='D' || komut=='d')
        {
            if(konumsutun<8)
                konumsutun++;

        }



       for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                tablo[i][j]='*';
            }
        }


        tablo[konumsatir][konumsutun]='X';
        tablo[hedefSatir][hedefSutun]='o';


        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("%c ", tablo[i][j]);
            }
            printf("\n");
        }


    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    tablo[hedefSatir][hedefSutun]='W';

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                printf("%c ", tablo[i][j]);
            }
            printf("\n");
        }

    printf("CONGRATS!");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");



	return 0;
}
