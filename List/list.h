/*
 * In The Name Of God
 * ========================================
 * [] File Name : list.h
 *
 * [] Creation Date : 29-10-2016
 *
 * [] Created By : Parham Alvani (parham.alvani@gmail.com)
 * =======================================
*/
/*
 * Copyright (c) 2016 Parham Alvani.
*/
#ifndef STACK_H
#define STACK_H

struct node {
	const void *data;
	struct node *next;
};

struct list {
	struct node *first;
};

struct list *list_new(void);
void list_push(struct list *l, const void *val);
void list_reverse(struct list *l);

#endif
