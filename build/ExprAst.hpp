/* ExprAst.hpp.  Generated automatically by treecc */
#ifndef __yy_ExprAst_hpp
#define __yy_ExprAst_hpp
#line 3 "/home/jorge/CompiladoresII-Proyecto/ExprAst.tc"

    #include <string>
    #include <iostream>
    #include <unordered_map> 

    using stdstring = std::string;
    using SymbolVector = std::unordered_map<stdstring, stdstring>;
#line 13 "ExprAst.hpp"

#include <new>

const int ASTNode_kind = 1;
const int Expr_kind = 2;
const int Program_kind = 3;
const int Stmt_kind = 15;
const int BinaryExpr_kind = 4;
const int NumExpr_kind = 5;
const int IdExpr_kind = 6;
const int DeclareList_kind = 25;
const int DeclareVar_kind = 26;
const int AddExpr_kind = 7;
const int SubExpr_kind = 8;
const int LTExpr_kind = 9;
const int GTExpr_kind = 10;
const int EqExpr_kind = 11;
const int NeqExpr_kind = 12;
const int LEQExpr_kind = 13;
const int GEQExpr_kind = 14;
const int BlockStmt_kind = 16;
const int PrintStmt_kind = 17;
const int IfStmt_kind = 18;
const int ElseIfStmt_kind = 19;
const int ForStmt_kind = 20;
const int AssignStmt_kind = 21;
const int WhileStmt_kind = 22;
const int DeclareListStmt_kind = 23;
const int DeclareStmt_kind = 24;

class ASTNode;
class Expr;
class Program;
class Stmt;
class BinaryExpr;
class NumExpr;
class IdExpr;
class DeclareList;
class DeclareVar;
class AddExpr;
class SubExpr;
class LTExpr;
class GTExpr;
class EqExpr;
class NeqExpr;
class LEQExpr;
class GEQExpr;
class BlockStmt;
class PrintStmt;
class IfStmt;
class ElseIfStmt;
class ForStmt;
class AssignStmt;
class WhileStmt;
class DeclareListStmt;
class DeclareStmt;

class YYNODESTATE
{
public:

	YYNODESTATE();
	virtual ~YYNODESTATE();

#line 1 "cpp_skel.h"
private:

	struct YYNODESTATE_block *blocks__;
	struct YYNODESTATE_push *push_stack__;
	int used__;
#line 84 "ExprAst.hpp"
private:

	static YYNODESTATE *state__;

public:

	static YYNODESTATE *getState()
		{
			if(state__) return state__;
			state__ = new YYNODESTATE();
			return state__;
		}

public:

	void *alloc(size_t);
	void dealloc(void *, size_t);
	int push();
	void pop();
	void clear();
	virtual void failed();
	virtual const char *currFilename() const;
	virtual long currLinenum() const;

};

class ASTNode
{
protected:

	int kind__;
	const char *filename__;
	long linenum__;

public:

	int getKind() const { return kind__; }
	const char *getFilename() const { return filename__; }
	long getLinenum() const { return linenum__; }
	void setFilename(const char *filename) { filename__ = filename; }
	void setLinenum(long linenum) { linenum__ = linenum; }

	void *operator new(size_t);
	void operator delete(void *, size_t);

protected:

	ASTNode();

public:

	stdstring place;
	stdstring code;

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ASTNode();

};

class Expr : public ASTNode
{
protected:

	Expr();

public:

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Expr();

};

class Program : public ASTNode
{
public:

	Program(DeclareListStmt * declareStmts, Stmt * stmts);

public:

	DeclareListStmt * declareStmts;
	Stmt * stmts;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Program();

};

class Stmt : public ASTNode
{
protected:

	Stmt();

public:

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~Stmt();

};

class BinaryExpr : public Expr
{
protected:

	BinaryExpr(Expr * expr1, Expr * expr2);

public:

	Expr * expr1;
	Expr * expr2;

	virtual stdstring genProgramCode() = 0;

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~BinaryExpr();

};

class NumExpr : public Expr
{
public:

	NumExpr(int value);

public:

	int value;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~NumExpr();

};

class IdExpr : public Expr
{
public:

	IdExpr(stdstring id);

public:

	stdstring id;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~IdExpr();

};

class DeclareList : public Expr
{
public:

	DeclareList(Expr * variables, Expr * newV);

public:

	Expr * variables;
	Expr * newV;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DeclareList();

};

class DeclareVar : public Expr
{
public:

	DeclareVar(IdExpr * newV);

public:

	IdExpr * newV;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DeclareVar();

};

class AddExpr : public BinaryExpr
{
public:

	AddExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~AddExpr();

};

class SubExpr : public BinaryExpr
{
public:

	SubExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~SubExpr();

};

class LTExpr : public BinaryExpr
{
public:

	LTExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~LTExpr();

};

class GTExpr : public BinaryExpr
{
public:

	GTExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~GTExpr();

};

class EqExpr : public BinaryExpr
{
public:

	EqExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~EqExpr();

};

class NeqExpr : public BinaryExpr
{
public:

	NeqExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~NeqExpr();

};

class LEQExpr : public BinaryExpr
{
public:

	LEQExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~LEQExpr();

};

class GEQExpr : public BinaryExpr
{
public:

	GEQExpr(Expr * expr1, Expr * expr2);

public:

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~GEQExpr();

};

class BlockStmt : public Stmt
{
public:

	BlockStmt(ASTNode * stmt1, ASTNode * stmt2);

public:

	ASTNode * stmt1;
	ASTNode * stmt2;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~BlockStmt();

};

class PrintStmt : public Stmt
{
public:

	PrintStmt(Expr * expr);

public:

	Expr * expr;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~PrintStmt();

};

class IfStmt : public Stmt
{
public:

	IfStmt(Expr * cond, Stmt * stmt1, Stmt * stmt2);

public:

	Expr * cond;
	Stmt * stmt1;
	Stmt * stmt2;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~IfStmt();

};

class ElseIfStmt : public Stmt
{
public:

	ElseIfStmt(Expr * cond, Stmt * stmt);

public:

	Expr * cond;
	Stmt * stmt;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ElseIfStmt();

};

class ForStmt : public Stmt
{
public:

	ForStmt(AssignStmt * var, Expr * cond, Stmt * block);

public:

	AssignStmt * var;
	Expr * cond;
	Stmt * block;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~ForStmt();

};

class AssignStmt : public Stmt
{
public:

	AssignStmt(IdExpr * varName, Expr * value);

public:

	IdExpr * varName;
	Expr * value;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~AssignStmt();

};

class WhileStmt : public Stmt
{
public:

	WhileStmt(Expr * cond, Stmt * block);

public:

	Expr * cond;
	Stmt * block;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~WhileStmt();

};

class DeclareListStmt : public Stmt
{
public:

	DeclareListStmt(DeclareListStmt * declareList, DeclareStmt * stmt);

public:

	DeclareListStmt * declareList;
	DeclareStmt * stmt;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DeclareListStmt();

};

class DeclareStmt : public Stmt
{
public:

	DeclareStmt(DeclareList * variables);

public:

	DeclareList * variables;

	virtual stdstring genProgramCode();

	virtual int isA(int kind) const;
	virtual const char *getKindName() const;

protected:

	virtual ~DeclareStmt();

};



#endif
