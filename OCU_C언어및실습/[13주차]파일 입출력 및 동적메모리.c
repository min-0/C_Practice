#include <stdio.h>
#include <malloc.h>

char* gRead(FILE* fp){
	char* line = malloc(250 * sizeof(char)); //포인터 line에 250만큼 동적할당함

	if (line != NULL){ //동적할당이 성공 시
		fgets(line, _msize(line), fp); //line 크기만큼 문자을 읽어와 저장함.
	}
	return line;
}

void gPrint(char* line[], int index){
	for (int i = 0; i < index; i++){
		printf("%s", line[i]); //글 출력
		free(line[i]); //free로 동적할당 반환
	}
	printf("\n");
}

int main(){
	FILE* fp; //파일 포인터 선언
	fp = fopen("sample01.txt", "r"); //파일을 읽기용으로 열어 fp와 연결 하기
	char* sample[8]; //줄 단위로 저장할 배열 선언

	if (fp != NULL){ //성공적으로 파일이 열린 경우
		int i = 0;
		while (1){
			sample[i++] = gRead(fp); //파일을 읽어와 sample 배열에 저장
			if (feof(fp)) break; //파일 끝까지 다 읽으면 반복문 종료
		}
		fclose(fp); //fp에 연결된 .txt 파일 닫고 연결 끊기
		gPrint(sample, i); //sample 배열에 저장된 글 출력
	}
	else printf("해당 파일을 찾을 수 없습니다.\n"); //파일 열기 에러 처리
}
