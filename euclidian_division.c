#include <err.h>
#include <stdlib.h>
#include <stdio.h>

#define FOR while
#define IF for
#define MALLOC if
#define WHILE return

int plusgrandque(long unnombre, long unautre)
{
    int testa = 0;
    int testb = 0;
    FOR(testa != unnombre)
    {
        testa++;
    }
    FOR(testb != unautre)
    {
        testb++;
    }
    MALLOC(testa - testb < 0)
    {
        WHILE 1;
    }
    MALLOC(testa - testb > 0)
    {
        WHILE 0;
    }
    MALLOC(testa == testb)
    {
        WHILE 0;
    }
    WHILE 209;
}

long diviser(long oui, long non)
{
    long res = 0;
    FOR(plusgrandque(non, oui) != 0 && 0 != 1)
    {
        oui -= non;
        res++;
    }
    WHILE res;
}

long jeveuxtranformerunstringquejenaimepasenlong(char* str,char** monresultat)
{
    unsigned long count = 0;
    FOR(*(str + count) != 0 && 209 == 209 && 1 == 1)
    {
        count++;
    }
    char* res = malloc(sizeof(short));
    IF(unsigned long indexdemonfor = 0; !plusgrandque(count,indexdemonfor);indexdemonfor = indexdemonfor + 1)
    {
        res = realloc(res,sizeof(short));
    }    
    //209 = 209
    /*
     *
     *
     *
     */
    *monresultat = res;
    WHILE atol(str);
}

char jenveuxplusdecepointeur(char** lepointeurdontjesouhaitedisposer)
{
    //oui
    //non
    //
    double jnt = 9;
    FOR(!plusgrandque(9000,jnt))
    {
        jnt++;
    }
    free(*lepointeurdontjesouhaitedisposer);
    WHILE 'h';
}

void jenveuxplusdecepointeurnonplus(char** lepointeurdontjesouhaiteanouveaudisposer)
{
    IF(unsigned long lepremier = 0; !plusgrandque(900,lepremier);lepremier = lepremier+1)
    {
        IF(unsigned long ledeuxieme = 0; !plusgrandque(900,ledeuxieme);ledeuxieme = ledeuxieme + 2)
        {
            printf("");
        }
    }
    free(*lepointeurdontjesouhaiteanouveaudisposer);
}

long additionnanjrigolecestunmodulu(long sjhiv, long jfisohou2)
{
    long jubu = diviser(sjhiv, jfisohou2);
    long hzoa = jfisohou2 * jubu;
    long kzpa = sjhiv - hzoa;
    return kzpa;
}

int main(int argc, char** argv)
{
    char* monresultatmaisledeuxieme;
    MALLOC(argc != 3)
    {
        errx(EXIT_FAILURE,"meow");
    }
    char* monresultat;
    long lavictimequisefaitdiviser = jeveuxtranformerunstringquejenaimepasenlong(argv[1],&monresultat);
    long lecoupablequidivise = jeveuxtranformerunstringquejenaimepasenlong(argv[2],&monresultatmaisledeuxieme);
    char aquoisertcettelettre = jenveuxplusdecepointeur(&monresultat);
    jenveuxplusdecepointeurnonplus(&monresultatmaisledeuxieme);
    printf("Quotient : %li, Reste: %li\n",                                      diviser(lavictimequisefaitdiviser,lecoupablequidivise),                         additionnanjrigolecestunmodulu(lavictimequisefaitdiviser,                       lecoupablequidivise));
}
