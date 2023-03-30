#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void convert_heading(char *line, FILE *output_file);
void convert_paragraph(char *line, FILE *output_file);
void convert_line(char *line, FILE *output_file);
void convert_bold(char *line, FILE *output_file);
void convert_italic(char *line, FILE *output_file);
void convert_ruler(char *line, FILE *output_file);
int assign(char *line);

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
        exit(1);
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        fprintf(stderr, "Error: could not open input file '%s'\n", argv[1]);
        exit(1);
    }

    FILE *output_file = fopen(argv[2], "w");
    if (output_file == NULL) {
        fprintf(stderr, "Error: could not open output file '%s'\n", argv[2]);
        exit(1);
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        convert_line(line, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}

void convert_heading(char *line, FILE *output_file) {
    int level = 0;
    while (line[level] == '#') {
        level++;
    }
    fprintf(output_file, "<h%d>%s</h%d>\n", level, line + level + 1, level);
}

void convert_paragraph(char *line, FILE *output_file) {
    fprintf(output_file, "<p>%s</p>\n", line);
}

void convert_bold(char *line, FILE *output_file){
    char *ptr = line;
    char *start = strstr(line, "**");
    char *end;
    int len;

    while (*ptr){
	    start = strstr(start, "**");

	    if (start == NULL) {
            fwrite(ptr, 1, strlen(ptr), output_file);
	        fprintf(output_file, "\n");
            break;
        }

	    if(ptr != start){
		    fwrite(ptr,1,start-ptr,output_file);
	    }

        end = strstr(start + 2, "**");

        if(end != NULL) {
            len = end - start - 2;
   	        fprintf(output_file, "<strong>");
            fwrite(start + 2, 1, len, output_file);
            fprintf(output_file, "</strong>");
            ptr = end + 2;
	        start = end + 2;
        }else{
	        fwrite(ptr, 1, strlen(ptr), output_file);
            break;
	    }
    }
}


void convert_italic(char *line, FILE *output_file) {
    char *ptr = line;
    char *start = strstr(line, "_");
    char *end;
    int len;

    while (*ptr){
	    start = strstr(start, "_");

	    if(start == NULL) {
            fwrite(ptr, 1, strlen(ptr), output_file);
	        fprintf(output_file, "\n");
                break;
        }

	    if(ptr != start){
		    fwrite(ptr,1,start-ptr,output_file);
	    }

        end = strstr(start + 1, "_");

        if(end != NULL){
            len = end - start - 1;
   	        fprintf(output_file, "<em>");
            fwrite(start + 1, 1, len, output_file);
            fprintf(output_file, "</em>");
            ptr = end + 1;
	        start = end + 1;
        }else{
	        fwrite(ptr, 1, strlen(ptr), output_file);
            break;
	    }
    }
}

void convert_ruler(char *line, FILE *output_file){
	fprintf(output_file, "<hr>\n");
}

int assign(char *line){
	if(line[0] == '#') return 1;
	if(strlen(line) == 3 && line[0] == '-' && line[1] == '-' && line[2] == '-') return 2;
	if(strstr(line, "**") != NULL) return 3;
	if(strstr(line, "_") != NULL) return 4;
	return -1;
}

void convert_line(char *line, FILE *output_file) {
	
    int num = assign(line);

    switch(num){
    	case 1:
		    convert_heading(line, output_file);
		    break;
	    case 2:
		    convert_ruler(line, output_file);
		    break;
	    case 3:
		    convert_bold(line, output_file);
		    break;
	    case 4:
		    convert_italic(line, output_file);
		    break;
	    default:
            convert_paragraph(line, output_file);
		    break;
    }
}

