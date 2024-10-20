#include <stdio.h>
#include <string.h>

struct Movie {

    char titlos[71];
    char protagonistis[51];
    long views;
};

void readInput(const char *infileonoma, struct Movie movies[], int *numMovies);
void findNewMovies(struct Movie januaryMovies[], int numJanuaryMovies,
                   struct Movie decemberMovies[], int numDecemberMovies,
                   struct Movie newMovies[], int *numNewMovies);
void writeOutput(const char *infileonoma, struct Movie newMovies[], int numNewMovies);

int main() {

    struct Movie moviesJan2019[100];
    struct Movie moviesDec2018[100];
    struct Movie newMovies[100];

    int numMoviesJan2019 = 0;
    int numMoviesDec2018 = 0;
    int numNewMovies = 0;

    readInput("moviesJan2019.txt", moviesJan2019, &numMoviesJan2019);
    readInput("moviesDec2018.txt", moviesDec2018, &numMoviesDec2018);

    findNewMovies(moviesJan2019, numMoviesJan2019, moviesDec2018, numMoviesDec2018,
                  newMovies, &numNewMovies);

    writeOutput("newMovies.txt", newMovies, numNewMovies);

    return 0;
}

void readInput(const char *infilename, struct Movie movies[], int *numMovies) {

    FILE *infile = fopen(infilename, "r");



    while (fscanf(infile, "%70[^,],%50[^,],%ld\n", movies[*numMovies].titlos,
                  movies[*numMovies].protagonistis, &movies[*numMovies].views) == 3) {
        (*numMovies)++;
    }

    fclose(infile);
}

void findNewMovies(struct Movie januaryMovies[], int numJanuaryMovies,
                   struct Movie decemberMovies[], int numDecemberMovies,
                   struct Movie newMovies[], int *numNewMovies) {

    *numNewMovies = 0;

    for (int i = 0; i < numJanuaryMovies; i++) {
        int isNew = 1;

        for (int j = 0; j < numDecemberMovies; j++) {
            if (strcmp(januaryMovies[i].titlos, decemberMovies[j].titlos) == 0) {
                isNew = 0;
                break;
            }
        }

        if (isNew) {
            strcpy(newMovies[*numNewMovies].titlos, januaryMovies[i].titlos);
            strcpy(newMovies[*numNewMovies].protagonistis, januaryMovies[i].protagonistis);
            newMovies[*numNewMovies].views = januaryMovies[i].views;
            (*numNewMovies)++;
        }
    }
}

void writeOutput(const char *infilename, struct Movie newMovies[], int numNewMovies) {

    FILE *outfile = fopen(infilename, "w");


    for (int i = 0; i < numNewMovies; i++) {
        fprintf(outfile, "%s, %s, %ld\n", newMovies[i].titlos, newMovies[i].protagonistis,
                newMovies[i].views);
    }

    fclose(outfile);
}

