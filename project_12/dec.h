#pragma once
#include<iterator>
namespace my
{
	class list;
	class dec;
	class dec_iterator : public std::iterator<std::input_iterator_tag, int>
	{
	public:
		dec_iterator();
		dec_iterator(list* const&);
		dec_iterator(const dec_iterator&);
		dec_iterator operator=(const dec_iterator&);
		dec_iterator& operator++();
		dec_iterator operator++(int);
		dec_iterator& operator--();
		dec_iterator operator--(int);
		dec_iterator operator+(int)const;
		dec_iterator operator-(int)const;
		int& operator[](int);
		int& operator*();
		bool operator != (const dec_iterator&)const;
	private:
		list* pl;
	};
	class list
	{
	public:
		//friend class dec<stype>;
		list* lptr;
		list* rptr;
		int value;
	};
	
	class dec
	{
	public:
		typedef dec_iterator iterator;
		typedef const dec_iterator const_iterator;
		//������������
		dec();
		dec(const dec&);
		//���������
		iterator begin()const;
		iterator end()const;
		//����������� ���������
		//���������
		const dec& operator=(const dec&);
		bool operator==(const dec&)const;
		//size
		size_t size()const;
		//������� ����������
		void push_back(int);
		void push_front(int);
		//������� ��������
		int pop_back();
		int pop_front();
		//������
		bool empty()const;
		~dec();
		void ev_del_tw();
		int& operator[](int&) const;
	private:
		list* _begin;
		list* _end;
	};
}