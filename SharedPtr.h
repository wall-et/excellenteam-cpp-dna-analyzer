//
// Created by alian on 12/28/18.
//

#ifndef EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SHAREDPTR_H
#define EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SHAREDPTR_H

#include <iostream>

template<typename T>
class SharedPtr
{
public :

    explicit SharedPtr(T *ptr = NULL);
    ~SharedPtr();

    SharedPtr(const SharedPtr &ptr);
    SharedPtr& operator =(const SharedPtr &ptr);
    SharedPtr& operator =(T*);


    bool isvalid() const;
    int getCount() const;//for testing
    T* get() const;

    operator bool() const;
    bool operator!=(const SharedPtr& other) const;
    bool operator==(const SharedPtr& other) const;

    template <class U>
    SharedPtr(const SharedPtr<U>&pt);

    template <class U>
    friend class SharedPtr;

    T* operator ->() const;
    T& operator *() const;

private :
    size_t *refCount;
    T* m_ptr;

    void release();
    void swap(SharedPtr &other);

};

template<typename T>
SharedPtr<T>::SharedPtr(T *ptr)try :m_ptr(ptr)
{
    refCount = new size_t(1);
}
catch (std::bad_alloc& e)
{
    delete ptr;
    throw ;
}

template<typename T>
void SharedPtr<T>::release()
{
    if((*refCount) <= 0)
    {
        std::cout <<"DESTROY"<<std::endl;
        delete refCount;
        delete m_ptr;
    }

}
template<typename T>
SharedPtr<T>::~SharedPtr()
{
    if(isvalid())
    {
        --(*refCount);
        release();
        refCount = NULL;
        m_ptr = NULL;
    }
}

template<typename T>
SharedPtr<T>::SharedPtr(const SharedPtr &ptr) : refCount(ptr.refCount), m_ptr(ptr.m_ptr)
{
    if(isvalid())
        (*refCount)++;
}

template<typename T>
void SharedPtr<T>::swap(SharedPtr &other)
{
    std::swap(m_ptr,other.m_ptr);
    std::swap(refCount,other.refCount);
}

template<typename T>
SharedPtr<T>& SharedPtr<T>:: operator =(const SharedPtr &ptr)
{
    SharedPtr<T> temp(ptr);
    swap(temp);

    return *this;
}

template<typename T>
SharedPtr<T>& SharedPtr<T>:: operator =(T* other)
{   //TODO release()
    //TODO try & catch with other

    return *this;
}

template<typename T>
bool SharedPtr<T>::isvalid() const
{
    return (m_ptr != NULL && refCount != NULL);
}

template<typename T>
int SharedPtr<T>:: getCount() const
{
    if(refCount != NULL)
        return *refCount;
    else
        return 0;
}

template<typename T>
T* SharedPtr<T>::operator ->() const
{
    return m_ptr;
}

template<typename T>
T& SharedPtr<T>::operator *()const
{
    return *m_ptr;
}

template<typename T>
bool SharedPtr<T>::operator==(const SharedPtr& other) const
{
    return (m_ptr==other.m_ptr)&&(refCount==other.refCount);
}

template<typename T>
bool SharedPtr<T>:: operator!=(const SharedPtr& other) const
{
    return (m_ptr != other.m_ptr);
}

template<typename T>
T * SharedPtr<T>:: get() const
{
    return m_ptr;
}

template<typename T>
SharedPtr<T>::operator bool()const
{
    return dynamic_cast<T *>(get()) != NULL;
}

template<typename T>
template<typename U>
SharedPtr<T>::SharedPtr(const SharedPtr<U>& ptr)
        :refCount(ptr.refCount),
         m_ptr(ptr.m_ptr)
{
    if(isvalid())
        (*refCount)++;
}


#endif //EXCELLENTEAM_ELLA_C_DNA_WALL_ET_SHAREDPTR_H
