
struct optab;
struct symtab;
struct sw;

void allo0(void);
int allo(NODE *p, struct optab *q);
void cerror(char *s, ...);
void werror(char *s, ...);
void uerror(char *s, ...);
int callreg(NODE *p);
int usable(NODE *p, int, int);
void rfree(int, TWORD t);
void rbusy(int r, TWORD t);
void rwprint(int rw);
void reclaim(NODE *p, int, int);
void prcook(int);
void walkf(NODE *, void (*f)(NODE *));
void allchk(void);
void tfree(NODE *);
int tshape(NODE *, int);
void rmove(int, int, TWORD);
void prtdcon(NODE *p);
unsigned int caloff(void);
void tinit(void);
void tcheck(void);
void tfree1(NODE *);
void fwalk(NODE *t, int (*f)(NODE *, int, int *, int *), int down);
void mkdope(void);
void tprint(TWORD);
int tshape(NODE *p, int shape);
int shtemp(NODE *p);
int flshape(NODE *p);
int shumul(NODE *p);
int ttype(TWORD t, int tword);
void setrew(void);
int match(NODE *p, int cookie);
void rcount(void);
void expand(NODE *, int, char *);
void hopcode(int, int);
void adrcon(CONSZ);
void zzzcode(NODE *, int);
void adrput(NODE *);
void conput(NODE *);
void insput(NODE *);
void upput(NODE *, int);
NODE *fortarg(NODE *p);
void econvert(NODE *);
int andable(NODE *);
int conval(NODE *, int, NODE *);
int ispow2(CONSZ);
void defid(NODE *q, int class);
void outstab(struct symtab *);
void deflab(int);
int getlab(void);
int locctr(int);
void ftnend(void);
void efcode(void);
void dclargs(void);
void fixarg(struct symtab *);
void cendarg(void);
void defalign(int);
void outstruct(int, int);
int fldal(unsigned int);
void vfdzero(int);
void zecode(int);
void defnam(struct symtab *);
void ilbrace(void);
void irbrace(void);
void irbrace(void);
void putbyte(int v);
void incode(NODE *, int);
void fincode(double, int);
void endinit(void);
void fixinit(void);
void doinit(NODE *p);
void ecomp(NODE *p);
void cinit(NODE *, int);
void bccode(void);
int upoff(int size, int alignment, int *poff);
void fldty(struct symtab *p);
void nidcl(NODE *p, int class);
int noinit(void);
void commdec(struct symtab *);
int eprint(NODE *, int, int *, int *);
int ctype(TWORD);
int uclass(int class);
int fixclass(int, TWORD type);
int cisreg(TWORD);
void clearst(int lev);
void lineid(int, char *);
void myreader(NODE *);
void mycanon(NODE *);
void delay(NODE *);
int delay1(NODE *);
void delay2(NODE *);
void setregs(void);
void p2bend(void);
void eobl2(void);
void codgen(NODE *p, int);
int autoincr(NODE *);
int deltest(NODE *);
void canon(NODE *);
void store(NODE *);
void order(NODE *, int);
int p2init(int argc, char *argv[]);
void p2compile(NODE *p);
void p2bbeg(int aoff, int myreg);
void rallo(NODE *p, int);
int nextcook(NODE *p, int);
void cbranch(NODE *p, int true, int false);
void cbgen(int, int, int);
void offstar(NODE *p);
int gencall(NODE *p, int);
int genscall(NODE *p, int);
int offset(NODE *p, int);
int tlen(NODE *p);
int setincr(NODE *);
int setstr(NODE *);
int setasop(NODE *);
int setasg(NODE *);
int setbin(NODE *);
int lastchance(NODE *, int);
void stoarg(NODE *p, int);
void stoasg(NODE *p, int);
void mkadrs(NODE *);
void constore(NODE *);
void markcall(NODE *);
void oreg2(NODE *p);
int notoff(TWORD, int, CONSZ, char *);
void makeor2(NODE *p, NODE *q, int, int);
int base(NODE *);
void sucomp(NODE *);
void ejobcode(int);
void lxenter(char *s, short m);
void lxmore(int c, int m);
void lxinit(void);
void bycode(int, int);
void lxcom(void);
void pstab(char *, int);
void psline(void);
NODE *buildtree(int, NODE *, NODE *);
int notlval(NODE *);
NODE *addroreg(NODE *);
int icons(NODE *);
void ecode(NODE *p);
int yylex(void);
void yyerror(char *s);
void pfstab(char *);
void plcstab(int);
int falloc(struct symtab *p, int w, int new, NODE *pty);
void prcstab(int);
void branch(int);
int oalloc(struct symtab *p, int *poff);
void pstabdot(int, int);
void p2tree(NODE *p);
int rewfld(NODE *p);
int freetemp(int k);
void prttype(int t);

