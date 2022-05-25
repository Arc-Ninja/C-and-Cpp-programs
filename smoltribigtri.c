#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    int p[100],tmp1,tmp2,tmp3;
    double area[100],tmp;
	for(int i=0;i<=n;i++){
        p[i] = (tr[i].a+tr[i].b+tr[i].c)/2;
        area[i] = sqrt(p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
        
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(area[i]>area[i+1]){
                tmp1 = tr[i].a;
                tmp2 = tr[i].b;
                tmp3 = tr[i].c;
                tr[i].a = tr[i+1].a;
                tr[i].b = tr[i+1].b;
                tr[i].c = tr[i+1].c;
                tr[i+1].a = tmp1;
                tr[i+1].b = tmp2;
                tr[i+1].c = tmp3;
                tmp = area[i];
                area[i] = area[i+1];
                area[i+1]= tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}