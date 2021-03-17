#define _CRT_SECURE_NO_WARNINGS 1



#pragma once 

namespace bite
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
	public:
		vector()
			//����������һ��ʼ�����ɿ�
			:start(nullptr)
			, finish(nullptr)
			, iterator end_of_storage(nullptr)
		{
			//���������λ�ø���һ���յĹ���ĵķ���
			//�����ײ�Ŀռ�����Ҳ��û�и�����
		}
		vector(size_t n, const T& data = T())
		{
			//���������ʵ�����൱���ṩ�˸���n��Ԫ�صĹ���ķ���
			//����������Ҫ�����һ������ǣ�������T���������͵�
			//���е�Ԫ�أ�����û�û�и����Ļ�����ô����ֵ����ʵ���൱����0
			//������Զ������͵Ļ�����ô������������Ҫ���޲εĹ��캯������
			//˵��ȫȱʡ�Ĺ��캯�������û���ṩ�Ļ�����ô����϶����ǻᷢ�������
			start = new T[n];
			for (size_t i = 0; i < n; i++)
			{
				start[i] = data;
			}

			finish = start + n;
			end_of_storage = finish;
		}

		template<class Iterator, class Iterator>
		vector(Iterator first, Iterator last)
		{
			//���������ʵ�����൱�����Ǹ�����һ������Ĺ���
			//Ҳ����˵�����������������������ȥ��vector���й���Ĳ���
			//����һ������ǵ���������ô�����ĵ��������͵�����ʲô��������ʵ�ǲ�֪����
			//�������������֮ǰ���Ǹ�����ģ������б�
			//�����ĵ�����
			//������Ҫȥ����һ������������ж���Ԫ�أ��ڼ������֮�󣬷�����ȥ���ٿռ�
			size_t size = 0;
			auto it = first;
			while (it != last)
			{
				++size;   //Ȼ��Ԫ�ظ����������������
			}
			//��ȥ���пռ�Ŀ���
			//Ȼ��һ��һ��ȥ���и�ֵ�Ĳ���
			start = new T[size];
			finish = start;
			while (first != last)
			{
				*finish++ = *first++;
			}
			end_of_storage = finish;
		}

		//������������
		vector(const vector<T>& v)
		{
			//��ȥ���ٿռ�
			//����Ŀ�������ķ�ʽ��ʵ���ǰ�������ķ�ʽ����������
			//��Ϊ�Ҹ��µĶ�������ȥnew�ռ��ˣ������൱��������ķ�ʽ
			start = new T[v.size()];
			finish = start;
			auto it = v.begin();
			while (it != v.end())
			{
				//�ռ俪�ٺ���֮����ֻ��Ҫ��v�����Ԫ��һ��һ���Ž�ȥ��ʵ�ͺ���
				*finish++ = *it++;
			}
			end_of_storage = finish;
		}

		//������ֵ�����������
		//vector<T>& operator=(const vector<T>& v);

		//��������
		~vector()
		{
			//����֮���ȿ�һ��start��û��ָ��ռ�
			if (start)
				delete[] start;
			start = finish = end_of_storage = nullptr;
		}

		//�����������Ĳ���
		iterator begin()
		{
			return start;
		}

		iterator end()
		{
			return finish;
		}

		//������صĲ���
		size_t size()const
		{
			return finish - start;
		}

		size_t capacity()const
		{
			return end_of_storage - start;
		}

		bool empty()const
		{
			//ȥ��start��finish�ڲ���һ��λ�ã������һ��λ�õĻ�����ô�ͱ�ʾ���ǿյ���
			return start == finish;
		}

		void resize(size_t newsize, const T& data = T())
		{
			//�ڶ�����������˼��������û�û���ṩֵȥ��ʼ���Ļ�
			//��ô������������������Ĭ��ֵȥ���г�ʼ���Ĳ���

			//������ȥ��һ��oldsize��Ҳ����ȥ��һ�¾ɵ�Ԫ�صĸ����ж��ٸ�
			size_t oldsize = size();
			if (newsize <= oldsize)
			{
				//��Ԫ�ؼ��ٵ�newsize�Ϳ�����
				finish = start + newsize;
				//Ȼ��ͽ�Ԫ�صĸ������newsize����
			}
			else
			{
				//��Ԫ�ظ������ӵ�newsize������ô��Ȼ������Ԫ�صĻ�
				//��ô���ܿ��ܾͻ�ȥ�������ݵĲ���
				if (newsize > capacity())
				{
					reserve(newsize); //���ݵ�newsize����С�Ϳ�����
				}
				//Ȼ�������ȥ���Ԫ��
				for (size_t i = oldsize; i < newsize; i++)
				{
					*finish++ = *data;
				}
			}
		}

		void reserve(size_t newcapacity)
		{
			size_t oldCapacity = capacity();
			//�������������ݵĲ���
			if (newsize > oldCapacity)
			{
				//����ռ�
				//һ����˵������ȥ���Ŀռ�Ĵ��µ�ʱ��linux��stl�ǰ���������
				//��ʽȥ�������ݵģ�vs���ǰ���1.5�ķ�ʽȥ�������ݵĲ�����
				//������������������ڱ߲���Ԫ�ص�ͬʱ��ȥ�������ݵĲ���
				//���ڵ��������newsize�Ĵ�С�Ѿ��������ˣ������ݵ�newsize
				//�����Ĵ�С�Ϳ�����
				T* temp = new T[newcapacity];
				//����Ԫ��
				memcpy(temp, start, sizeof(T) * size());
				//�ͷžɵĿռ�
				delete[] start;
				//ʹ���µĿռ�
				start = temp;
				finish = start + size();
				end_of_storage = start + newcapacity;
			}
		}

		//Ԫ�ط��ʵ���ز���
		//�±������
		T& operator[](size_t index)
		{
			assert(index < size());
			retunr start[index];
		}

		const T& operator[](size_t index)const
		{
			assert(index < size());
			retunr start[index];
		}

		T& front()const
		{
			return *start;
		}

		const T& front()const
		{
			return *start;
		}

		T& back()const
		{
			return *(finish - 1);
		}

		const T& back()const
		{
			return *(finish - 1);
		}

		//modify
		//�޸Ĳ���
		void push_back(const T& data)
		{
			//����β��Ĳ���
			insert(end(), data);
		}

		void pop_back()
		{
			//����βɾ�Ĳ���
			erase(end() - 1);
		}

		//����ֵ���ص����²����Ԫ�ص�λ��
		iterator insert(inerator pos, const T& data)
		{
			//���Ҫ����insert�Ļ�����ô����������Ҫȥȷ��pos����Ч��
			if (pos<start || pos>end)
			{
				return end(); // �������ʧ����
			}
			//ͬʱ�������ڽ���Ԫ�ز����ʱ���㻹��Ҫȥ�ײ���һ��
			//�ײ���û�пռ䣬����˵���ײ�Ŀռ乻����ʹ��
			if (finish == end_of_storage)  //����û��������
				reserve(2 * capacity());
			//��Ҫ��Ԫ�����������а��ƣ����ʱ��ſ��Խ�������Ҫ�����ȥ��Ԫ�سɹ��Ĳ���������
			auto cur = finish - 1;
			auto next = finish;
			while (cur > pos)
			{
				*next-- = *cur--;
			}
			*next = data;
			//����Ԫ�����֮��finish��Ҫ�����һ��
			finish++;
			return pos;
		}

		//erase�����ķ���ֵʱ���ش�ɾ��Ԫ����һ��Ԫ�ص�λ��
		iterator erase(inerator pos)
		{
			//����λ�õ�ɾ������ʵ���ǽ�Ԫ�ؽ�����ǰ���ƵĲ���
			if (pos < start || pos >= finish)
				return finish;
			auto prev = pos;
			auto next = prev + 1;  //cur����Ҫ���Ƶĵ�һ��Ԫ�ص�λ��
			//Ȼ�����ǿ��Կ�ʼ���а��ƵĲ�����
			while (cur < finish)
			{
				*prev++ = *cur++;
			}
			//��ΪԪ�صĸ���������һ��
			--finish;
			return pos;
		}

		void clear()
		{
			finish = start;
		}
	private:
		iterator start; //�ռ����ʼλ��
		iterator finish;   //���һ��Ԫ�ص���һ��λ��
		iterator end_of_storage;    //�ռ��ĩβ

	};
}