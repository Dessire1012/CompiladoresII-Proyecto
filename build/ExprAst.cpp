/* ExprAst.cpp.  Generated automatically by treecc */
#line 12 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"

	#include "ExprAst.hpp"

    SymbolVector vars;
	int offset = 0;

    void resetOffset() {
        offset = 0;
    }

	int getOffset(){
		return offset;
	}

	int addOffset()
	{
		return offset += 4;
	}
#line 22 "ExprAst.cpp"

#define YYNODESTATE_TRACK_LINES 1
#define YYNODESTATE_USE_ALLOCATOR 1
#line 1 "cpp_skel.cc"
/*
 * treecc node allocation routines for C++.
 *
 * Copyright (C) 2001  Southern Storm Software, Pty Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * As a special exception, when this file is copied by treecc into
 * a treecc output file, you may use that output file without restriction.
 */

#ifndef YYNODESTATE_BLKSIZ
#define	YYNODESTATE_BLKSIZ	2048
#endif

/*
 * Types used by the allocation routines.
 */
struct YYNODESTATE_block
{
	char data__[YYNODESTATE_BLKSIZ];
	struct YYNODESTATE_block *next__;

};
struct YYNODESTATE_push
{
	struct YYNODESTATE_push *next__;
	struct YYNODESTATE_block *saved_block__;
	int saved_used__;
};

/*
 * Initialize the singleton instance.
 */
#ifndef YYNODESTATE_REENTRANT
YYNODESTATE *YYNODESTATE::state__ = 0;
#endif

/*
 * Some macro magic to determine the default alignment
 * on this machine.  This will compile down to a constant.
 */
#define	YYNODESTATE_ALIGN_CHECK_TYPE(type,name)	\
	struct _YYNODESTATE_align_##name { \
		char pad; \
		type field; \
	}
#define	YYNODESTATE_ALIGN_FOR_TYPE(type)	\
	((unsigned)(unsigned long)(&(((struct _YYNODESTATE_align_##type *)0)->field)))
#define	YYNODESTATE_ALIGN_MAX(a,b)	\
	((a) > (b) ? (a) : (b))
#define	YYNODESTATE_ALIGN_MAX3(a,b,c) \
	(YYNODESTATE_ALIGN_MAX((a), YYNODESTATE_ALIGN_MAX((b), (c))))
YYNODESTATE_ALIGN_CHECK_TYPE(int, int);
YYNODESTATE_ALIGN_CHECK_TYPE(long, long);
#if defined(WIN32) && !defined(__CYGWIN__)
YYNODESTATE_ALIGN_CHECK_TYPE(__int64, long_long);
#else
YYNODESTATE_ALIGN_CHECK_TYPE(long long, long_long);
#endif
YYNODESTATE_ALIGN_CHECK_TYPE(void *, void_p);
YYNODESTATE_ALIGN_CHECK_TYPE(float, float);
YYNODESTATE_ALIGN_CHECK_TYPE(double, double);
#define	YYNODESTATE_ALIGNMENT	\
	YYNODESTATE_ALIGN_MAX( \
			YYNODESTATE_ALIGN_MAX3	\
			(YYNODESTATE_ALIGN_FOR_TYPE(int), \
		     YYNODESTATE_ALIGN_FOR_TYPE(long), \
			 YYNODESTATE_ALIGN_FOR_TYPE(long_long)), \
  	     YYNODESTATE_ALIGN_MAX3 \
		 	(YYNODESTATE_ALIGN_FOR_TYPE(void_p), \
			 YYNODESTATE_ALIGN_FOR_TYPE(float), \
			 YYNODESTATE_ALIGN_FOR_TYPE(double)))

/*
 * Constructor for YYNODESTATE.
 */
YYNODESTATE::YYNODESTATE()
{
	/* Initialize the allocation state */
	blocks__ = 0;
	push_stack__ = 0;
	used__ = 0;

#ifndef YYNODESTATE_REENTRANT
	/* Register this object as the singleton instance */
	if(!state__)
	{
		state__ = this;
	}
#endif
}

/*
 * Destructor for YYNODESTATE.
 */
YYNODESTATE::~YYNODESTATE()
{
	/* Free all node memory */
	clear();

#ifndef YYNODESTATE_REENTRANT
	/* We are no longer the singleton instance */
	if(state__ == this)
	{
		state__ = 0;
	}
#endif
}

#ifdef YYNODESTATE_USE_ALLOCATOR

/*
 * Allocate a block of memory.
 */
void *YYNODESTATE::alloc(size_t size__)
{
	struct YYNODESTATE_block *block__;
	void *result__;

	/* Round the size to the next alignment boundary */
	size__ = (size__ + YYNODESTATE_ALIGNMENT - 1) &
				~(YYNODESTATE_ALIGNMENT - 1);

	/* Do we need to allocate a new block? */
	block__ = blocks__;
	if(!block__ || (used__ + size__) > YYNODESTATE_BLKSIZ)
	{
		if(size__ > YYNODESTATE_BLKSIZ)
		{
			/* The allocation is too big for the node pool */
			return (void *)0;
		}
		block__ = new YYNODESTATE_block;
		if(!block__)
		{
			/* The system is out of memory.  The programmer can
			   inherit the "failed" method to report the
			   out of memory state and/or abort the program */
			failed();
			return (void *)0;
		}
		block__->next__ = blocks__;
		blocks__ = block__;
		used__ = 0;
	}

	/* Allocate the memory and return it */
	result__ = (void *)(block__->data__ + used__);
	used__ += size__;
	return result__;
}

/*
 * Deallocate a block of memory.
 */
void YYNODESTATE::dealloc(void *ptr__, size_t size__)
{
	/* Nothing to do for this type of node allocator */
}

/*
 * Push the node allocation state.
 */
int YYNODESTATE::push()
{
	struct YYNODESTATE_block *saved_block__;
	int saved_used__;
	struct YYNODESTATE_push *push_item__;

	/* Save the current state of the node allocation pool */
	saved_block__ = blocks__;
	saved_used__ = used__;

	/* Allocate space for a push item */
	push_item__ = (struct YYNODESTATE_push *)
			alloc(sizeof(struct YYNODESTATE_push));
	if(!push_item__)
	{
		return 0;
	}

	/* Copy the saved information to the push item */
	push_item__->saved_block__ = saved_block__;
	push_item__->saved_used__ = saved_used__;

	/* Add the push item to the push stack */
	push_item__->next__ = push_stack__;
	push_stack__ = push_item__;
	return 1;
}

/*
 * Pop the node allocation state.
 */
void YYNODESTATE::pop()
{
	struct YYNODESTATE_push *push_item__;
	struct YYNODESTATE_block *saved_block__;
	struct YYNODESTATE_block *temp_block__;

	/* Pop the top of the push stack */
	push_item__ = push_stack__;
	if(push_item__ == 0)
	{
		saved_block__ = 0;
		used__ = 0;
	}
	else
	{
		saved_block__ = push_item__->saved_block__;
		used__ = push_item__->saved_used__;
		push_stack__ = push_item__->next__;
	}

	/* Free unnecessary blocks */
	while(blocks__ != saved_block__)
	{
		temp_block__ = blocks__;
		blocks__ = temp_block__->next__;
		delete temp_block__;
	}
}

/*
 * Clear the node allocation pool completely.
 */
void YYNODESTATE::clear()
{
	struct YYNODESTATE_block *temp_block__;
	while(blocks__ != 0)
	{
		temp_block__ = blocks__;
		blocks__ = temp_block__->next__;
		delete temp_block__;
	}
	push_stack__ = 0;
	used__ = 0;
}

#endif /* YYNODESTATE_USE_ALLOCATOR */

/*
 * Default implementation of functions which may be overridden.
 */
void YYNODESTATE::failed()
{
}

#ifdef YYNODESTATE_TRACK_LINES

const char *YYNODESTATE::currFilename() const
{
	return (const char *)0;
}

long YYNODESTATE::currLinenum() const
{
	return 0;
}

#endif
#line 301 "ExprAst.cpp"
void *ASTNode::operator new(size_t size__)
{
	return YYNODESTATE::getState()->alloc(size__);
}

void ASTNode::operator delete(void *ptr__, size_t size__)
{
	YYNODESTATE::getState()->dealloc(ptr__, size__);
}

ASTNode::ASTNode()
{
	this->kind__ = ASTNode_kind;
	this->filename__ = YYNODESTATE::getState()->currFilename();
	this->linenum__ = YYNODESTATE::getState()->currLinenum();
}

ASTNode::~ASTNode()
{
	// not used
}

int ASTNode::isA(int kind) const
{
	if(kind == ASTNode_kind)
		return 1;
	else
		return 0;
}

const char *ASTNode::getKindName() const
{
	return "ASTNode";
}

Expr::Expr()
	: ASTNode()
{
	this->kind__ = Expr_kind;
}

Expr::~Expr()
{
	// not used
}

int Expr::isA(int kind) const
{
	if(kind == Expr_kind)
		return 1;
	else
		return ASTNode::isA(kind);
}

const char *Expr::getKindName() const
{
	return "Expr";
}

Program::Program(DeclareListStmt * declareStmts, Stmt * stmts)
	: ASTNode()
{
	this->kind__ = Program_kind;
	this->declareStmts = declareStmts;
	this->stmts = stmts;
}

Program::~Program()
{
	// not used
}

stdstring Program::genProgramCode()
{
	Program *node = this;
#line 110 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring declareStmts = node->declareStmts->genProgramCode();
	    node->code = "\n\tsub esp, " + std::to_string(offset) + "\n";
	    resetOffset();
	
	    stdstring stmts = node->stmts->genProgramCode();
	    node->code += "start:\n\tpush ebp\n\tmov ebp, esp\n\tsub esp, "+std::to_string(offset)+"\n";
	    node->code += "\n" + stmts;
	
	    return node->code;
	}
#line 389 "ExprAst.cpp"
}

int Program::isA(int kind) const
{
	if(kind == Program_kind)
		return 1;
	else
		return ASTNode::isA(kind);
}

const char *Program::getKindName() const
{
	return "Program";
}

Stmt::Stmt()
	: ASTNode()
{
	this->kind__ = Stmt_kind;
}

Stmt::~Stmt()
{
	// not used
}

int Stmt::isA(int kind) const
{
	if(kind == Stmt_kind)
		return 1;
	else
		return ASTNode::isA(kind);
}

const char *Stmt::getKindName() const
{
	return "Stmt";
}

BinaryExpr::BinaryExpr(Expr * expr1, Expr * expr2)
	: Expr()
{
	this->kind__ = BinaryExpr_kind;
	this->expr1 = expr1;
	this->expr2 = expr2;
}

BinaryExpr::~BinaryExpr()
{
	// not used
}

int BinaryExpr::isA(int kind) const
{
	if(kind == BinaryExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *BinaryExpr::getKindName() const
{
	return "BinaryExpr";
}

NumExpr::NumExpr(int value)
	: Expr()
{
	this->kind__ = NumExpr_kind;
	this->value = value;
}

NumExpr::~NumExpr()
{
	// not used
}

stdstring NumExpr::genProgramCode()
{
	NumExpr *node = this;
#line 122 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    node->place = std::to_string(node->value);
	    return "";
	}
#line 475 "ExprAst.cpp"
}

int NumExpr::isA(int kind) const
{
	if(kind == NumExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *NumExpr::getKindName() const
{
	return "NumExpr";
}

IdExpr::IdExpr(stdstring id)
	: Expr()
{
	this->kind__ = IdExpr_kind;
	this->id = id;
}

IdExpr::~IdExpr()
{
	// not used
}

stdstring IdExpr::genProgramCode()
{
	IdExpr *node = this;
#line 127 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    node->place = vars[node->id];
	    return "";
	}
#line 511 "ExprAst.cpp"
}

int IdExpr::isA(int kind) const
{
	if(kind == IdExpr_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *IdExpr::getKindName() const
{
	return "IdExpr";
}

DeclareList::DeclareList(Expr * variables, Expr * newV)
	: Expr()
{
	this->kind__ = DeclareList_kind;
	this->variables = variables;
	this->newV = newV;
}

DeclareList::~DeclareList()
{
	// not used
}

stdstring DeclareList::genProgramCode()
{
	DeclareList *node = this;
#line 220 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring varsList = node->variables->genProgramCode();
	    stdstring newVar = node->newV->genProgramCode();
	
	    node->code = varsList + "\n" + newVar;
	
	    return node->code;
	}
#line 552 "ExprAst.cpp"
}

int DeclareList::isA(int kind) const
{
	if(kind == DeclareList_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *DeclareList::getKindName() const
{
	return "DeclareList";
}

DeclareVar::DeclareVar(IdExpr * newV)
	: Expr()
{
	this->kind__ = DeclareVar_kind;
	this->newV = newV;
}

DeclareVar::~DeclareVar()
{
	// not used
}

stdstring DeclareVar::genProgramCode()
{
	DeclareVar *node = this;
#line 229 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    std::cout << "DeclareVar" << code << std::endl;
	    vars[node->newV->id] = "dword [ebp + " + std::to_string(addOffset()) + "]";
	    node->place = vars[node->newV->id];
	    node->code = "\tpush eax";
	    return node->code;
	}
#line 591 "ExprAst.cpp"
}

int DeclareVar::isA(int kind) const
{
	if(kind == DeclareVar_kind)
		return 1;
	else
		return Expr::isA(kind);
}

const char *DeclareVar::getKindName() const
{
	return "DeclareVar";
}

AddExpr::AddExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = AddExpr_kind;
}

AddExpr::~AddExpr()
{
	// not used
}

stdstring AddExpr::genProgramCode()
{
	AddExpr *node = this;
#line 132 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov edx, " + node->expr1->place;
	    node->code += "\n\tadd edx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], edx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	    return node->code;
	}
#line 636 "ExprAst.cpp"
}

int AddExpr::isA(int kind) const
{
	if(kind == AddExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *AddExpr::getKindName() const
{
	return "AddExpr";
}

SubExpr::SubExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = SubExpr_kind;
}

SubExpr::~SubExpr()
{
	// not used
}

stdstring SubExpr::genProgramCode()
{
	SubExpr *node = this;
#line 147 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    int offset = addOffset();
	
	    stdstring e1 = node->expr1->genProgramCode();
	    stdstring e2 = node->expr2->genProgramCode();
	
	    node->code = e1 + "\n" + e2;
	
	    node->code += "\n\tmov edx, " + node->expr1->place;
	    node->code += "\n\tsub edx, " + node->expr2->place;
	    node->code += "\n\tmov dword [ebp - " + std::to_string(offset) + "], edx\n";
	    node->place = "dword [ebp - " + std::to_string(offset) + "]";
	    return node->code;
	}
#line 681 "ExprAst.cpp"
}

int SubExpr::isA(int kind) const
{
	if(kind == SubExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *SubExpr::getKindName() const
{
	return "SubExpr";
}

LTExpr::LTExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = LTExpr_kind;
}

LTExpr::~LTExpr()
{
	// not used
}

stdstring LTExpr::genProgramCode()
{
	LTExpr *node = this;
#line 162 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    
	}
#line 715 "ExprAst.cpp"
}

int LTExpr::isA(int kind) const
{
	if(kind == LTExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *LTExpr::getKindName() const
{
	return "LTExpr";
}

EqExpr::EqExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = EqExpr_kind;
}

EqExpr::~EqExpr()
{
	// not used
}

stdstring EqExpr::genProgramCode()
{
	EqExpr *node = this;
#line 166 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	   
	}
#line 749 "ExprAst.cpp"
}

int EqExpr::isA(int kind) const
{
	if(kind == EqExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *EqExpr::getKindName() const
{
	return "EqExpr";
}

NeExpr::NeExpr(Expr * expr1, Expr * expr2)
	: BinaryExpr(expr1, expr2)
{
	this->kind__ = NeExpr_kind;
}

NeExpr::~NeExpr()
{
	// not used
}

stdstring NeExpr::genProgramCode()
{
	NeExpr *node = this;
#line 170 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    
	}
#line 783 "ExprAst.cpp"
}

int NeExpr::isA(int kind) const
{
	if(kind == NeExpr_kind)
		return 1;
	else
		return BinaryExpr::isA(kind);
}

const char *NeExpr::getKindName() const
{
	return "NeExpr";
}

BlockStmt::BlockStmt(ASTNode * stmt1, ASTNode * stmt2)
	: Stmt()
{
	this->kind__ = BlockStmt_kind;
	this->stmt1 = stmt1;
	this->stmt2 = stmt2;
}

BlockStmt::~BlockStmt()
{
	// not used
}

stdstring BlockStmt::genProgramCode()
{
	BlockStmt *node = this;
#line 174 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{    
	    stdstring s1 = node->stmt1->genProgramCode();
	    stdstring s2 = node->stmt2->genProgramCode();
	
	    node->code = s1 + s2;
	
	    return node->code;
	}
#line 824 "ExprAst.cpp"
}

int BlockStmt::isA(int kind) const
{
	if(kind == BlockStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *BlockStmt::getKindName() const
{
	return "BlockStmt";
}

PrintStmt::PrintStmt(Expr * expr)
	: Stmt()
{
	this->kind__ = PrintStmt_kind;
	this->expr = expr;
}

PrintStmt::~PrintStmt()
{
	// not used
}

stdstring PrintStmt::genProgramCode()
{
	PrintStmt *node = this;
#line 183 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring s1 = node->expr->genProgramCode();
	
	    node->code = s1 + "\n"; 
	
	    node->code += "\n\tmov eax, 1";
	    node->code += "\n\tmov ebx, " + node->expr->place;
	    node->code += "\n\tint 0x80";
	
	     node->code += "\n\tmov eax, 11";
	    node->code += "\n\tmov ebx, 10";
	    node->code += "\n\tint 0x80";
	
	    return node->code;
	}
#line 871 "ExprAst.cpp"
}

int PrintStmt::isA(int kind) const
{
	if(kind == PrintStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *PrintStmt::getKindName() const
{
	return "PrintStmt";
}

IfStmt::IfStmt(Expr * cond, Stmt * stmt1, Stmt * stmt2)
	: Stmt()
{
	this->kind__ = IfStmt_kind;
	this->cond = cond;
	this->stmt1 = stmt1;
	this->stmt2 = stmt2;
}

IfStmt::~IfStmt()
{
	// not used
}

stdstring IfStmt::genProgramCode()
{
	IfStmt *node = this;
#line 199 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    
	}
#line 908 "ExprAst.cpp"
}

int IfStmt::isA(int kind) const
{
	if(kind == IfStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *IfStmt::getKindName() const
{
	return "IfStmt";
}

AssignStmt::AssignStmt(IdExpr * varName, Expr * value)
	: Stmt()
{
	this->kind__ = AssignStmt_kind;
	this->varName = varName;
	this->value = value;
}

AssignStmt::~AssignStmt()
{
	// not used
}

stdstring AssignStmt::genProgramCode()
{
	AssignStmt *node = this;
#line 253 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring expr = node->value->genProgramCode();
	
	    node->code = expr + "\n";
	
	    std::cout << node->code << std::endl << std::endl;
	
	    if (node->value->place.at(0) == 'd') {
	        node->code += "\tmov eax, " + node->value->place + "\n";
	        node->code += "\tmov " + vars[node->varName->id] + ", eax";
	    } else {
	        node->code += "\tmov " + vars[node->varName->id] + ", " + node->value->place;
	    }
	    return node->code;
	  
	}
#line 957 "ExprAst.cpp"
}

int AssignStmt::isA(int kind) const
{
	if(kind == AssignStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *AssignStmt::getKindName() const
{
	return "AssignStmt";
}

WhileStmt::WhileStmt(Expr * cond, Stmt * block)
	: Stmt()
{
	this->kind__ = WhileStmt_kind;
	this->cond = cond;
	this->block = block;
}

WhileStmt::~WhileStmt()
{
	// not used
}

stdstring WhileStmt::genProgramCode()
{
	WhileStmt *node = this;
#line 203 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    int offset = addOffset();
	    
	    stdstring cond = node->cond->genProgramCode();
	    stdstring block = node->block->genProgramCode();
	
	    node->code = "\nwhile" + std::to_string(offset); + ":";
	    node->code += cond;
	    node->code += "\n\tmov edx, 1";
	    node->code += "\n\tcmp edx, " + node->cond->place;
	    node->code += "\n\tje while" + std::to_string(offset);
	    node->code += block + "\n\tjne endwhile" + std::to_string(offset);
	    node->code += "\nendwhile" + std::to_string(offset) + ":";
	
	    return node->code;
	}
#line 1006 "ExprAst.cpp"
}

int WhileStmt::isA(int kind) const
{
	if(kind == WhileStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *WhileStmt::getKindName() const
{
	return "WhileStmt";
}

DeclareListStmt::DeclareListStmt(DeclareListStmt * declareList, DeclareStmt * stmt)
	: Stmt()
{
	this->kind__ = DeclareListStmt_kind;
	this->declareList = declareList;
	this->stmt = stmt;
}

DeclareListStmt::~DeclareListStmt()
{
	// not used
}

stdstring DeclareListStmt::genProgramCode()
{
	DeclareListStmt *node = this;
#line 237 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring declares = node->declareList->genProgramCode();
	    stdstring stmt = node->stmt->genProgramCode();
	    std::cout << "DeclarationBlock" << code << std::endl;
	    node->code = declares + "\n" + stmt;
	
	    return node->code;
	}
#line 1047 "ExprAst.cpp"
}

int DeclareListStmt::isA(int kind) const
{
	if(kind == DeclareListStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *DeclareListStmt::getKindName() const
{
	return "DeclareListStmt";
}

DeclareStmt::DeclareStmt(DeclareList * variables)
	: Stmt()
{
	this->kind__ = DeclareStmt_kind;
	this->variables = variables;
}

DeclareStmt::~DeclareStmt()
{
	// not used
}

stdstring DeclareStmt::genProgramCode()
{
	DeclareStmt *node = this;
#line 246 "/home/dessi/Downloads/CompiladoresII-Proyecto/ExprAst.tc"
	{
	    stdstring code = node->variables->genProgramCode();
	    std::cout << "DeclareStmt" << std::endl;
	    node->code = code;
	    return node->code;
	}
#line 1085 "ExprAst.cpp"
}

int DeclareStmt::isA(int kind) const
{
	if(kind == DeclareStmt_kind)
		return 1;
	else
		return Stmt::isA(kind);
}

const char *DeclareStmt::getKindName() const
{
	return "DeclareStmt";
}

