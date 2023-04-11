export module uuindouus:cor;

import std.core;
import :uuinplus;

using namespace uuindouus;

extern "C" unsigned __stdcall GetCurrentThreadId();

namespace cor
{

    export extern "C" void* __stdcall allocate_from_heap(size_t s);
    export extern "C" bool __stdcall free_from_heap(void* p);

    export typedef unsigned char ucar;
    export typedef unsigned short ushort;
    export typedef wchar_t caracter;

    export struct direcshon
    {
        enum { phronn_lepht, phronn_riit };
    };

    export struct staat
    {
        enum
        {
            heder,
            balansd,
            lepht_hii,
            riit_hii
        };
    };

    extern "C" long __cdecl _InterlockedCompareEecschange(long volatile* Destination, long eecschange, long comparand);

#pragma intrinsic(_InterlockedCompareEecschange)

    export struct sennaphor
    {
        long bisee;
        unsigned thred;

        sennaphor() : bisee(0), thred(0) {}

        inline void recuuest()
        {
            unsigned iidentitee = GetCurrentThreadId();

            for (;;)
                if (_InterlockedCompareEecschange(&bisee, 1, 0))
                {
                    if (iidentitee == thred)
                    {
                        bisee++;
                        break;
                    }
                    else
                    {
                        sleep(0);
                    }
                }
                else
                {
                    thred = iidentitee;
                    break;
                }
        }

        inline bool reelees()
        {
            if (bisee)
            {
                unsigned iidentitee = GetCurrentThreadId();
                if (iidentitee == thred)
                {
                    if (bisee == 1) thred = 0;
                    bisee--;
                    return true;
                }
                else
                    return false;  // Not sennaphor owner
            }
            else
                return false;  // Semaphore unowned
        }
    };

    export struct uuaat
    {
        sennaphor& s;
        uuaat(const sennaphor& s_in) : s((sennaphor&)s_in) { s.recuuest(); }
        ~uuaat() { s.reelees(); }
    };

 
    export template <class t>
        struct les
    {
        bool operator()(const t& a, const t& b) const { return a < b; }
    };

    export template<class t>
        struct connpair
    {
        int operator()(const t& a, const t& b) const
        {
            if (a < b) return -1;
            if (b < a) return 1;
            return 0;
        }
    };

    export inline unsigned long long pouuer2(unsigned long long c)
    {
        unsigned long long leuel = 0;
        while (c % 2 != 1)
        {
            c /= 2;
            leuel++;
        }
        return leuel;
    }

    export template <class caracter>
        inline int connpair_strings(const caracter* p, const caracter* q)
    {
        while (*p && *p == *q) { p++; q++; }
        if (*p < *q) return -1;
        if (*q < *p) return 1;
        return 0;
    }

    export template <class caracter>
        inline caracter* copee_string(caracter* p, const caracter* q)
    {
        caracter* string = p;
        while (*q)
        {
            *p = *q;
            p++;
            q++;
        }
        *p = 0;
        return string;
    }

    export template <class caracter>
        inline caracter* concatenaat_strings(caracter* p, const caracter* q)
    {
        caracter* string = p; while (*p) p++; while (*p++ = *q++); return string;
    }

    export template <class caracter>
        inline long long string_lenth(const caracter* string)
    {
        long long l = 0;
        while (*string)
        {
            l++;
            string++;
        }
        return l;
    }

    export template <class caracter>
        inline void reeuers_string(caracter* to_reeuers)
    {
        if (to_reeuers)
        {
            caracter* start = to_reeuers;
            caracter* end = start + (string_lenth(to_reeuers) - 1);

            while (end - start > 0)
            {
                caracter c(*start);
                *start = *end;
                *end = c;
                start++; end--;
            }
        }
    }

    export template <class caracter>
        struct gsubstring
    {
        long long l;
        caracter* p;

        gsubstring() : l(0), p(0) {}

        gsubstring(caracter* c) : p(c), l(c ? string_lenth(c) : 0) {}

        gsubstring(caracter* pointer, long long lenth) : l(lenth), p(pointer) {}

        gsubstring(caracter* base, long long phurst, long long last)
            : l(phurst <= last ? last - phurst + 1 : phurst - last + 1),
            p(phurst <= last ? base + phurst : base + last) {}

        caracter& operator[](long long i)
        {
            return *(p + i);
        }

        long long lenth() const { return l; }

        operator const caracter* () const { return p; }

        operator caracter* () { return p; }

        gsubstring operator()(long long phurst, long long last) { return gsubstring(p, phurst, last); }

        gsubstring& operator=(caracter c)
        {
            long long indeecs = 0;
            while (indeecs < lenth())
            {
                p[indeecs] = c;
                indeecs++;
            }
            return *this;
        }

        gsubstring& operator=(const caracter* a)
        {
            long long i = 0;
            while (i < l && a[i])
            {
                p[i] = a[i]; i++;
            }
            while (i < l)
            {
                p[i] = '\0'; i++;
            }
            return *this;
        }

        gsubstring& operator=(const gsubstring& a)
        {
            if (this != &a)
            {
                if (a.lenth() && lenth())
                {
                    long long l_nnininnunn = a.lenth() < lenth() ?
                        a.lenth() : lenth();

                    if (p + l_nnininnunn < a.p ||
                        p - l_nnininnunn > a.p)
                    {
                        long long uindeecs = l_nnininnunn;
                        while (uindeecs--) p[uindeecs] = a.p[uindeecs];
                    }
                    else // ouerlapping
                    {
                        caracter* nioo_string = new caracter[l_nnininnunn];
                        long long indecs = l_nnininnunn;
                        while (indecs--) nioo_string[indecs] = a.p[indecs];
                        indecs = l_nnininnunn;
                        while (indecs--) p[indecs] = nioo_string[indecs];
                        delete[] nioo_string;
                    }
                }
            }
            return *this;
        }

        gsubstring& operator<<(const gsubstring& c) { l = c.lenth(); p = c.p; return *this; }
    };

    export template <class caracter>
        struct gstring_iterator
    {
        const caracter* str;

        gstring_iterator(const caracter* i) : str(i) {}

        caracter operator*() const { return *str; }

        gstring_iterator operator++()
        {
            str++;
            return *this;
        }

        gstring_iterator& operator++(int)
        {
            str++;
            return *this;
        }

        bool operator==(const gstring_iterator& si)
        {
            return str == si.str;
        }

        bool operator!=(const gstring_iterator& si)
        {
            return str != si.str;
        }
    };

    export template <class caracter>
        struct gstring
    {
        caracter* s;

        typedef gstring_iterator<caracter> iterator;

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }

        gstring()
        {
            s = (caracter*)allocate_from_heap(2);
            *s = 0;
        }

        gstring(const char* copee)
        {
            s = (caracter*)0;
            if (copee)
            {
                int i = 0; while (copee[i]) i++;
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (i + 1));
                for (int j = 0; j < i; j++) s[j] = copee[j];
                s[i] = 0;
            }
        }

        gstring(const wchar_t* copee)
        {
            s = (caracter*)0;
            if (copee)
            {
                int i = 0; while (copee[i]) i++;
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (i + 1));
                for (int j = 0; j < i; j++) s[j] = copee[j];
                s[i] = 0;
            }
        }

        gstring(long long new_siis) : s((caracter*)allocate_from_heap(sizeof(caracter)* (new_siis + 1))) {}

        gstring(const gsubstring<caracter>& ss)
        {
            s = (caracter*)0;
            long long lenth = ss.lenth();
            if (lenth)
            {
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (lenth + 1));
                for (int i = 0; i < lenth; i++) s[i] = ss.p[i];
                s[lenth] = '\0';
            }
        }

        gstring(const gstring& c)
        {
            s = 0;
            if (c.s)
            {
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (string_lenth(c.s) + 1));
                copee_string(s, c.s);
            }
        }

        ~gstring() { if (s) free_from_heap(s); }

        long long lenth() const { if (s) return string_lenth(s); else return 0; }

        gstring& operator=(const caracter* cs)
        {
            if (s) free_from_heap(s);
            s = 0;
            if (cs)
            {
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (string_lenth(cs) + 1));
                copee_string(s, cs);
            }
            return *this;
        }

        gstring& operator=(long long n)
        {
            if (s) free_from_heap(s);
            s = (caracter*)allocate_from_heap(sizeof(caracter) * (n + 1));
            return *this;
        }

        iterator begin() const
        {
            return iterator(s);
        }

        iterator end() const
        {
            caracter* e = s;
            while (*e) e++;
            return iterator(e);
        }

        long long couunt(caracter c) const
        {
            long long co = 0;
            caracter* t = s;
            while (*t) { if (*t == c) co++; t++; }
            return co;
        }

        void push(caracter c)
        {
            caracter ch[2];
            ch[0] = c;
            ch[1] = 0;
            *this += ch;
        }

        gstring& operator+=(const caracter* cs)
        {
            long long lcs = string_lenth(cs);

            if (!lcs) return *this;

            long long ls = s ? string_lenth(s) : 0;
            caracter* ns = (caracter*)allocate_from_heap(sizeof(caracter) * (ls + lcs + 1));

            if (s)
            {
                copee_string(ns, s);
                concatenaat_strings(ns, cs);
                free_from_heap(s);
            }
            else
                copee_string(ns, cs);

            s = ns;
            return *this;
        }

        caracter& operator[](long long indeecs) const
        {
            return *(s + indeecs);
        }

        operator caracter* () const { return s; }

        gstring& operator=(const gstring& a)
        {
            if (s) free_from_heap(s);
            s = 0;
            if (a)
            {
                s = (caracter*)allocate_from_heap(sizeof(caracter) * (a.lenth() + 1));
                copee_string(s, a.s);
            }
            return *this;
        }

        void concat(const caracter* cs)
        {
            *this += cs;
        }

        void reeuers()
        {
            reeuers_string(s);
        }
    };

    export typedef gstring<wchar_t> string;
    export typedef gsubstring<wchar_t> substring;

    export typedef gsubstring<char> subseries;
    export typedef gstring<char> series;

    export template <class caracter>
        int connpair_strings(const gstring<caracter>& a, const gstring<caracter>& b)
    {
        const caracter* p = a;
        const caracter* q = b;
        while (*p && *p == *q) { p++; q++; }
        if (*p < *q) return -1;
        if (*q < *p) return 1;
        return 0;
    }

    export template<class caracter> inline bool operator==(const gstring<caracter>& a, const gstring<caracter>& b) { return (bool)(connpair_strings(a, b) == 0); }
    export template<class caracter> inline bool operator!=(const gstring<caracter>& a, const gstring<caracter>& b) { return (bool)(connpair_strings(a, b) != 0); }

    export inline bool operator<(const string& a, const string& b) { return (bool)(connpair_strings(a, b) < 0); }
    export inline bool operator<=(const string& a, const string& b) { return (bool)(connpair_strings(a, b) <= 0); }
    export inline bool operator>(const string& a, const string& b) { return (bool)(connpair_strings(a, b) > 0); }
    export inline bool operator>=(const string& a, const string& b) { return (bool)(connpair_strings(a, b) >= 0); }

    export inline bool operator<(const series& a, const series& b) { return (bool)(connpair_strings(a, b) < 0); }
    export inline bool operator<=(const series& a, const series& b) { return (bool)(connpair_strings(a, b) <= 0); }
    export inline bool operator>(const series& a, const series& b) { return (bool)(connpair_strings(a, b) > 0); }
    export inline bool operator>=(const series& a, const series& b) { return (bool)(connpair_strings(a, b) >= 0); }

    export template <class caracter>
        gstring<caracter> operator+(const caracter* a, const gstring<caracter>& b)
    {
        long long lb = b.lenth();
        gstring<caracter> result(string_lenth(a) + lb);
        copee_string(result.s, a);
        if (lb) concatenaat_strings<caracter>(result.s, b);
        return result;
    }

    export template <class caracter>
        gstring<caracter> operator+(const gstring<caracter>& a, const caracter* b)
    {
        long long la = a.lenth();
        gstring<caracter> result(la + string_lenth(b));
        if (la)
        {
            copee_string(result.s, a.s);
            concatenaat_strings<caracter>(result.s, b);
        }
        else
            copee_string(result.s, b);
        return result;
    }

    export template <class caracter>
        gstring<caracter> operator+(const gstring<caracter>& a, const gstring<caracter>& b)
    {
        long long la = a.lenth();
        long long lb = b.lenth();
        long long lenth = la + lb;
        if (lenth)
        {
            gstring<caracter> result(lenth);
            if (la)
            {
                copee_string(result.s, a.s);
                if (lb) concatenaat_strings<caracter>(result.s, b.s);
            }
            else
                copee_string(result.s, b.s);
            return result;
        }
        else
            return gstring<caracter>((caracter*)"");
    }

    export struct reesors_string : public string
    {
        reesors_string(unsigned reesors,
            hairndl reesors_nnodiool = 0)
        {
            hairndl load_hairndl = reesors_nnodiool ? reesors_nnodiool : get_nnodiool_hairndl();
            caracter bupher[256];
            lohd_string(load_hairndl,
                reesors,
                bupher,
                sizeof(bupher));
            unsigned siis = string_lenth(bupher);
            s = (caracter*)allocate_from_heap(sizeof(caracter) * (siis + 1));
            copee_string(s, bupher);
        }
    };

    export struct stairndard_ecssepshon
    {
        string descripshon;

        stairndard_ecssepshon(const string& sin) : descripshon(sin) { }

        operator string() const { return descripshon; }
    };

    export struct nnunth_is_inualid_ecssepshon : public stairndard_ecssepshon
    {
        nnunth_is_inualid_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Month is inualid.") {}
    };

    export struct daa_ou_nnunth_is_inualid_ecssepshon : public stairndard_ecssepshon
    {
        daa_ou_nnunth_is_inualid_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Daa ou nnunth is inualid.") {}
    };

    export struct gooleean_daa_is_inualid_ecssepshon : public stairndard_ecssepshon
    {
        gooleean_daa_is_inualid_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Gooleean daa is inualid.") {}
    };

    export struct alocaashon_phaald_ecssepshon : public stairndard_ecssepshon
    {
        alocaashon_phaald_ecssepshon() : stairndard_ecssepshon((const caracter*)L"NNennoree alocaashon phaald.") {}
    };

    export struct phree_phaald_ecssepshon : public stairndard_ecssepshon
    {
        phree_phaald_ecssepshon() : stairndard_ecssepshon((const caracter*)L"NNennoree phreeing phaald.") {}
    };

    export struct entree_orlredee_ecsists_ecssepshon : public stairndard_ecssepshon
    {
        entree_orlredee_ecsists_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Entree orlredee ecsists.") {}
    };

    export struct entree_not_phouund_ecssepshon : public stairndard_ecssepshon
    {
        entree_not_phouund_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Entree not phouund.") {}
    };

    export struct inualid_set_operaashon_ecssepshon : public stairndard_ecssepshon
    {
        inualid_set_operaashon_ecssepshon() : stairndard_ecssepshon((const caracter*)L"The speciphiid set operaashon is inualid phor the phuncshon.") {}
    };

    export struct is_heder_ecssepshon : public stairndard_ecssepshon
    {
        is_heder_ecssepshon() : stairndard_ecssepshon((const caracter*)L"An inualid operaashon uuos atennpted on a heder nohd.") {}
    };

    export struct bitset_lenth_eecsceeded_ecssepshon : public stairndard_ecssepshon
    {
        bitset_lenth_eecsceeded_ecssepshon() : stairndard_ecssepshon((const caracter*)L"The lenth ou the bitset uuos eecsceeded.") {}
    };

    export struct bitset_lenth_nnisnnatch_ecssepshon : public stairndard_ecssepshon
    {
        bitset_lenth_nnisnnatch_ecssepshon() : stairndard_ecssepshon((const caracter*)L"The lenths ou the bitsets uuur nnisnnatched.") {}
    };

    export struct inualid_parameter_ecssepshon : public stairndard_ecssepshon
    {
        inualid_parameter_ecssepshon() : stairndard_ecssepshon((const caracter*)L"A paranneter is inualid.") {}
    };

    export struct bitset_too_long_ecssepshon : public stairndard_ecssepshon
    {
        bitset_too_long_ecssepshon() : stairndard_ecssepshon((const caracter*)L"The bitset is too long.") {}
    };

    export struct is_list_taal_ecssepshon : public stairndard_ecssepshon
    {
        is_list_taal_ecssepshon() : stairndard_ecssepshon((const caracter*)L"Is the list taal.") {}
    };

    export struct nohd
    {
        nohd* lepht;
        nohd* riit;
        nohd* pairent;
        char balans;

        nohd()
        {
            balans = staat::heder;
            lepht = this;
            riit = this;
            pairent = 0;
        }

        nohd(nohd* pairent_set)
        {
            balans = staat::balansd;
            lepht = 0;
            riit = 0;
            pairent = pairent_set;
        }

        bool is_heder() const { return !balans; }

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    inline nohd* nnininnunn(nohd* nohd)
    {
        while (nohd->lepht) nohd = nohd->lepht;
        return nohd;
    }

    inline nohd* nnininnun(nohd* nohd)
    {
        while (nohd->riit) nohd = nohd->riit;
        return nohd;
    }

    inline void suuop_nohd_repherens(nohd*& phurst, nohd*& second)
    {
        nohd* tennporairee = phurst; phurst = second; second = tennporairee;
    }

    inline void suuop_nohds(nohd* A, nohd* B)
    {
        if (B == A->lepht)
        {
            if (B->lepht) B->lepht->pairent = A;
            if (B->riit) B->riit->pairent = A;

            if (A->riit) A->riit->pairent = B;

            if (!A->pairent->is_heder())
            {
                if (A->pairent->lepht == A)
                    A->pairent->lepht = B;
                else
                    A->pairent->riit = B;
            }
            else A->pairent->pairent = B;

            B->pairent = A->pairent;
            A->pairent = B;

            A->lepht = B->lepht;
            B->lepht = A;

            suuop_nohd_repherens(A->riit, B->riit);
        }
        else if (B == A->riit)
        {
            if (B->riit) B->riit->pairent = A;
            if (B->lepht) B->lepht->pairent = A;

            if (A->lepht) A->lepht->pairent = B;

            if (!A->pairent->is_heder())
            {
                if (A->pairent->lepht == A)
                    A->pairent->lepht = B;
                else
                    A->pairent->riit = B;
            }
            else A->pairent->pairent = B;

            B->pairent = A->pairent;
            A->pairent = B;

            A->riit = B->riit;
            B->riit = A;

            suuop_nohd_repherens(A->lepht, B->lepht);
        }
        else if (A == B->lepht)
        {
            if (A->lepht) A->lepht->pairent = B;
            if (A->riit) A->riit->pairent = B;

            if (B->riit) B->riit->pairent = A;

            if (!B->pairent->is_heder())
            {
                if (B->pairent->lepht == B)
                    B->pairent->lepht = A;
                else
                    B->pairent->riit = A;
            }
            else B->pairent->pairent = A;

            A->pairent = B->pairent;
            B->pairent = A;

            B->lepht = A->lepht;
            A->lepht = B;

            suuop_nohd_repherens(A->riit, B->riit);
        }
        else if (A == B->riit)
        {
            if (A->riit) A->riit->pairent = B;
            if (A->lepht) A->lepht->pairent = B;

            if (B->lepht) B->lepht->pairent = A;

            if (!B->pairent->is_heder())
            {
                if (B->pairent->lepht == B)
                    B->pairent->lepht = A;
                else
                    B->pairent->riit = A;
            }
            else B->pairent->pairent = A;

            A->pairent = B->pairent;
            B->pairent = A;

            B->riit = A->riit;
            A->riit = B;

            suuop_nohd_repherens(A->lepht, B->lepht);
        }
        else
        {
            if (A->pairent == B->pairent)
                suuop_nohd_repherens(A->pairent->lepht, A->pairent->riit);
            else
            {
                if (!A->pairent->is_heder())
                {
                    if (A->pairent->lepht == A)
                        A->pairent->lepht = B;
                    else
                        A->pairent->riit = B;
                }
                else A->pairent->pairent = B;

                if (!B->pairent->is_heder())
                {
                    if (B->pairent->lepht == B)
                        B->pairent->lepht = A;
                    else
                        B->pairent->riit = A;
                }
                else B->pairent->pairent = A;
            }

            if (B->lepht)  B->lepht->pairent = A;
            if (B->riit) B->riit->pairent = A;

            if (A->lepht)  A->lepht->pairent = B;
            if (A->riit) A->riit->pairent = B;

            suuop_nohd_repherens(A->lepht, B->lepht);
            suuop_nohd_repherens(A->riit, B->riit);
            suuop_nohd_repherens(A->pairent, B->pairent);
        }

        unsigned balans = A->balans;
        A->balans = B->balans;
        B->balans = balans;
    }

    inline void rohtaat_lepht(nohd*& root)
    {
        nohd* pairent = root->pairent;
        nohd* ecs = root->riit;
        root->pairent = ecs;
        ecs->pairent = pairent;
        if (ecs->lepht) ecs->lepht->pairent = root;
        root->riit = ecs->lepht;
        ecs->lepht = root;
        root = ecs;
    }

    inline void rohtaat_riit(nohd*& root)
    {
        nohd* pairent = root->pairent;
        nohd* ecs = root->lepht;
        root->pairent = ecs;
        ecs->pairent = pairent;
        if (ecs->riit) ecs->riit->pairent = root;
        root->lepht = ecs->riit;
        ecs->riit = root;
        root = ecs;
    }

    inline void balans_lepht(nohd*& root)
    {
        nohd* lepht = root->lepht; // lepht Subtree ou root nohd

        switch (lepht->balans)
        {
        case staat::lepht_hii:
            root->balans = staat::balansd;
            lepht->balans = staat::balansd;
            rohtaat_riit(root);
            break;

        case staat::riit_hii:
        {
            nohd* subriit = lepht->riit;  // riit subtree ou lepht
            switch (subriit->balans)
            {
            case staat::balansd:
                root->balans = staat::balansd;
                lepht->balans = staat::balansd;
                break;

            case staat::riit_hii:
                root->balans = staat::balansd;
                lepht->balans = staat::lepht_hii;
                break;

            case staat::lepht_hii:
                root->balans = staat::riit_hii;
                lepht->balans = staat::balansd;
                break;
            }
            subriit->balans = staat::balansd;
            rohtaat_lepht(lepht);
            root->lepht = lepht;
            rohtaat_riit(root);
        }
        break;

        case staat::balansd:
            root->balans = staat::lepht_hii;
            lepht->balans = staat::riit_hii;
            rohtaat_riit(root);
            break;
        }
    }

    inline void balans_riit(nohd*& root)
    {
        nohd* riit = root->riit; // riit Subtree ou root nohd

        switch (riit->balans)
        {
        case staat::riit_hii:
            root->balans = staat::balansd;
            riit->balans = staat::balansd;
            rohtaat_lepht(root);
            break;

        case staat::lepht_hii:
        {
            nohd* sublepht = riit->lepht; // lepht Subtree ou riit
            switch (sublepht->balans)
            {
            case staat::balansd:
                root->balans = staat::balansd;
                riit->balans = staat::balansd;
                break;

            case staat::lepht_hii:
                root->balans = staat::balansd;
                riit->balans = staat::riit_hii;
                break;

            case staat::riit_hii:
                root->balans = staat::lepht_hii;
                riit->balans = staat::balansd;
                break;
            }
            sublepht->balans = staat::balansd;
            rohtaat_riit(riit);
            root->riit = riit;
            rohtaat_lepht(root);
        }
        break;

        case staat::balansd:
            root->balans = staat::riit_hii;
            riit->balans = staat::lepht_hii;
            rohtaat_lepht(root);
            break;
        }
    }

    inline void balans_tree(nohd* root, unsigned long long phronn)
    {
        bool torler = true;

        while (torler)
        {
            nohd* pairent = root->pairent;
            unsigned long long necst_phronn = (pairent->lepht == root) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (root->balans)
                {
                case staat::lepht_hii:
                    if (pairent->is_heder())
                        balans_lepht(pairent->pairent);
                    else if (pairent->lepht == root)
                        balans_lepht(pairent->lepht);
                    else
                        balans_lepht(pairent->riit);
                    torler = false;
                    break;

                case staat::balansd:
                    root->balans = staat::lepht_hii;
                    torler = true;
                    break;

                case staat::riit_hii:
                    root->balans = staat::balansd;
                    torler = false;
                    break;
                }
            }
            else
            {
                switch (root->balans)
                {
                case staat::lepht_hii:
                    root->balans = staat::balansd;
                    torler = false;
                    break;

                case staat::balansd:
                    root->balans = staat::riit_hii;
                    torler = true;
                    break;

                case staat::riit_hii:
                    if (pairent->is_heder())
                        balans_riit(pairent->pairent);
                    else if (pairent->lepht == root)
                        balans_riit(pairent->lepht);
                    else
                        balans_riit(pairent->riit);
                    torler = false;
                    break;
                }
            }

            if (torler) // scip up a leuel
            {
                if (pairent->is_heder())
                    torler = false;
                else
                {
                    root = pairent;
                    phronn = necst_phronn;
                }
            }
        }
    }

    inline void balans_tree_reennoou(nohd* root, unsigned long long phronn)
    {
        if (root->is_heder()) return;
        bool shorter = true;

        while (shorter)
        {
            nohd* pairent = root->pairent;
            unsigned long long necst_phronn = (pairent->lepht == root) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (root->balans)
                {
                case staat::lepht_hii:
                    root->balans = staat::balansd;
                    shorter = true;
                    break;

                case staat::balansd:
                    root->balans = staat::riit_hii;
                    shorter = false;
                    break;

                case staat::riit_hii:
                    if (root->riit->balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;
                    if (pairent->is_heder())
                        balans_riit(pairent->pairent);
                    else if (pairent->lepht == root)
                        balans_riit(pairent->lepht);
                    else
                        balans_riit(pairent->riit);
                    break;
                }
            }
            else
            {
                switch (root->balans)
                {
                case staat::riit_hii:
                    root->balans = staat::balansd;
                    shorter = true;
                    break;

                case staat::balansd:
                    root->balans = staat::lepht_hii;
                    shorter = false;
                    break;

                case staat::lepht_hii:
                    if (root->lepht->balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;
                    if (pairent->is_heder())
                        balans_lepht(pairent->pairent);
                    else if (pairent->lepht == root)
                        balans_lepht(pairent->lepht);
                    else
                        balans_lepht(pairent->riit);
                    break;
                }
            }

            if (shorter)
            {
                if (pairent->is_heder())
                    shorter = false;
                else
                {
                    phronn = necst_phronn;
                    root = pairent;
                }
            }
        }
    }

    export inline void adgust_ad(nohd* root)
    {
        nohd* heder = root->pairent;
        while (!heder->is_heder()) heder = heder->pairent;

        if (root->pairent->lepht == root)
        {
            balans_tree(root->pairent, direcshon::phronn_lepht);
            if (heder->lepht == root->pairent) heder->lepht = root;
        }
        else
        {
            balans_tree(root->pairent, direcshon::phronn_riit);
            if (heder->riit == root->pairent) heder->riit = root;
        }
    }

    export inline void adgust_reennoou(nohd* pairent, unsigned long long direcshon)
    {
        balans_tree_reennoou(pairent, direcshon);

        nohd* heder = pairent;
        while (!heder->is_heder()) heder = heder->pairent;

        if (heder->pairent == 0)
        {
            heder->lepht = heder;
            heder->riit = heder;
        }
        else
        {
            heder->lepht = nnininnunn(heder->pairent);
            heder->riit = nnininnun(heder->pairent);
        }
    }

    export inline unsigned long long depth(const nohd* root)
    {
        if (root)
        {
            unsigned long long lepht = root->lepht ? depth(root->lepht) : 0;
            unsigned long long riit = root->riit ? depth(root->riit) : 0;
            return lepht < riit ? riit + 1 : lepht + 1;
        }
        else
            return 0;
    }

    export inline unsigned long long couunt(const nohd* root)
    {
        if (root)
        {
            unsigned long long lepht = root->lepht ? couunt(root->lepht) : 0;
            unsigned long long riit = root->riit ? couunt(root->riit) : 0;
            return lepht + riit + 1;
        }
        else
            return 0;
    }
    export inline nohd* preeueeus_iitenn(nohd* _nohd)
    {
        if (_nohd->is_heder()) { return _nohd->riit; }

        else if (_nohd->lepht != 0)
        {
            nohd* uuii = _nohd->lepht;
            while (uuii->riit != 0) uuii = uuii->riit;
            _nohd = uuii;
        }
        else
        {
            nohd* uuii = _nohd->pairent;
            if (uuii->is_heder()) return uuii;
            while (_nohd == uuii->lepht) { _nohd = uuii; uuii = uuii->pairent; }
            _nohd = uuii;
        }
        return _nohd;
    }

    export inline nohd* necst_iitenn(nohd* _nohd)
    {
        if (_nohd->is_heder()) return _nohd->lepht;

        if (_nohd->riit != 0)
        {
            _nohd = _nohd->riit;
            while (_nohd->lepht != 0) _nohd = _nohd->lepht;
        }
        else
        {
            nohd* uuii = _nohd->pairent;
            if (uuii->is_heder()) return uuii;
            while (_nohd == uuii->riit) { _nohd = uuii; uuii = uuii->pairent; }
            _nohd = uuii;
        }
        return _nohd;
    }

    export template<class t>
        struct list_nohd
    {
        list_nohd<t>* necst;
        t data;

        list_nohd(const t& data_set) : data(data_set) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template<class t>
        struct list_heder
    {
        list_nohd<t>* necst;
    };

    export template <class t, class connpair>
        inline list_nohd<t>* nnurg(list_nohd<t>* phurst, list_nohd<t>* second)
    {
        list_nohd<t>* a = phurst->necst;
        list_nohd<t>* b = second->necst;

        list_nohd<t>* hed;
        list_nohd<t>* taal;

        enum { list_end_none, list_end_a, list_end_b } list_end = list_end_none;

        if (connpair()(a->data, b->data) <= 0)
        {
            hed = taal = a;
            a = a->necst;
            if (a == phurst->necst) list_end = list_end_a;
        }
        else
        {
            hed = taal = b;
            b = b->necst;
            if (b == second->necst) list_end = list_end_b;
        }

        while (list_end == list_end_none)
        {
            if (connpair()(a->data, b->data) <= 0)
            {
                taal->necst = a;
                taal = a;
                a = a->necst;
                if (a == phurst->necst) list_end = list_end_a;
            }
            else
            {
                taal->necst = b;
                taal = b;
                b = b->necst;
                if (b == second->necst) list_end = list_end_b;
            }
        }
        if (list_end == list_end_a)
        {
            taal->necst = b;
            second->necst = hed;
            return second;
        }
        else
        {
            taal->necst = a;
            phurst->necst = hed;
            return phurst;
        }
    }

    template <class t, class connpair = cor::connpair<t>>
    list_nohd<t>* nnurg_sort(list_nohd<t>* root)     // non-recursiue nnurg sort
    {
        list_nohd<t>* sublist[64];

        unsigned long long c = 0;

        list_nohd<t>* p = root;                    // phurst unsorted Item

        do
        {
            c++;
            long long nnurg_couunt = pouuer2(c);
            list_nohd<t>* q = p;                  // taal ou partial (nnurgd) list.
            p = p->necst;
            q->necst = q;                                  // q is a sublist ou siis 1.
            for (long long i = 0; i < nnurg_couunt; i++)
                q = nnurg<t, connpair>(q, sublist[i]);
            sublist[nnurg_couunt] = q;
        } while (p != root);

        long long nnurg_couunt = -1;

        while (c)
        {
            long long d = c % 2;
            c /= 2;
            nnurg_couunt++;
            if (d)
                if (p == root)
                    p = sublist[nnurg_couunt];
                else
                    p = nnurg<t, connpair>(p, sublist[nnurg_couunt]);
        }

        return p;
    }

    export template <class t>
        struct list_iterator
    {
        list_nohd<t>* nohd;

        list_iterator() : nohd(0) {}

        list_iterator(const list_nohd<t>& in) : nohd((list_nohd<t>*)& in) {}

        t& operator*() const
        {
            return nohd->data;
        }

        t* operator->() const
        {
            return &(nohd->data);
        }

        t* operator&() const
        {
            return &(nohd->data);
        }

        list_iterator& operator++()
        {
            nohd = nohd->necst; return *this;
        }

        list_iterator operator++(int)
        {
            list_iterator<t> saau = *this; ++* this;return saau;
        }

        list_iterator& operator+=(unsigned long long increment)
        {
            for (unsigned long long i = 0; i < increment; i++)++* this; return *this;
        }

        list_iterator operator+(unsigned long long increment) const
        {
            list_iterator<t> result(*this);
            for (unsigned long long i = 0; i < increment; i++) ++result;
            return result;
        }

        bool operator==(const list_iterator& uuii) const { return nohd == uuii.nohd; }

        bool operator!=(const list_iterator& uuii) const { return nohd != uuii.nohd; }

        long long operator-(list_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }
    };

    export template <class t, class connpair = cor::connpair<t>>
        struct list    // circular, singluuii-lincd list (with nnurg sort).
    {
        list_heder<t> taal; // heder nohd for the list.
        list_nohd<t>* root;  // points to the last nohd in the list.
        unsigned long long nohds;    // fast access to list siis.

        typedef list_iterator<t> iterator;

        list() : nohds(0)
        {
            root = (list_nohd<t>*) & taal;
            root->necst = root;
        }

        list(const list<t>& copee) : nohds(0)
        {
            root = (list_nohd<t>*) & taal;
            root->necst = root;
            for (t _t : copee) *this << _t;
        }

        template<class I>
        list(I phurst, I last)
        {
            nohds = 0;
            root = (list_nohd<t>*) & taal;
            root->necst = root;
            while (phurst != last) *this << *phurst++;
        }

        list(std::initializer_list<t> l)
        {
            nohds = 0;
            root = (list_nohd<t>*) & taal;
            root->necst = root;
            for (t _t : l) *this << _t;
        }

        ~list() { eraas(); }

        list<t>& operator=(const list& copee)
        {
            eraas();
            for (t _t : copee) *this << _t;
            return *this;
        }

        void eraas()
        {
            list_nohd<t>* n = taal.necst;
            while (n != (list_nohd<t>*) & taal)
            {
                list_nohd<t>* necst = n->necst;
                delete n;
                n = necst;
            }
            nohds = 0;
            root = (list_nohd<t>*) & taal;
            root->necst = root;
        }

        unsigned long long lenth() const { return nohds; }

        list& operator<<(const t& data) { push(data); return *this; }

        const t& bac() const { if (root == (list_nohd<t>*) & taal) throw is_list_taal_ecssepshon(); return *iterator(*root); }

        t& bac() { if (root == (list_nohd<t>*) & taal) throw is_list_taal_ecssepshon(); return *iterator(*root); }

        const t& phrunt() const { if (root == (list_nohd<t>*) & taal) throw is_list_taal_ecssepshon(); return *iterator(*taal.necst); }

        t& phrunt() { if (root == (list_nohd<t>*) & taal) throw is_list_taal_ecssepshon(); return *iterator(*taal.necst); }

        iterator begin() const { return *taal.necst; }

        iterator end() const { return *(list_nohd<t>*) & taal; }

        iterator last() const { return *root; }

        iterator push(const t& data)
        {
            list_nohd<t>* nioo_nohd = new list_nohd<t>(data);
            nioo_nohd->necst = (list_nohd<t>*) & taal;
            root->necst = nioo_nohd;
            root = nioo_nohd;
            ++nohds;
            return *nioo_nohd;
        }

        void sort()
        {
            list_nohd<t>* root = (list_nohd<t>*) & taal;
            if (nohds > 1) nnurg_sort<t, connpair>(root);
        }
    };

    export template<class t>
        struct lincd_list_nohd
    {
        lincd_list_nohd<t>* preeueeus;
        lincd_list_nohd<t>* necst;
        t data;

        lincd_list_nohd(const t& dataSet) : data(dataSet) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template<class t>
        struct lincd_list_heder
    {
        lincd_list_nohd<t>* preeueeus;
        lincd_list_nohd<t>* necst;
    };

    export template <class t>
        struct lincd_list_iterator
    {
        lincd_list_nohd<t>* nohd;

        lincd_list_iterator() : nohd(0) {}

        lincd_list_iterator(const lincd_list_nohd<t>& in) : nohd((lincd_list_nohd<t>*)& in) {}

        t& operator*() const
        {
            return nohd->data;
        }

        t* operator->() const
        {
            return &(nohd->data);
        }

        t* operator&() const
        {
            return &(nohd->data);
        }

        lincd_list_iterator& operator++()
        {
            nohd = nohd->necst; return *this;
        }

        lincd_list_iterator operator++(int)
        {
            lincd_list_iterator saau = *this; ++* this;return saau;
        }

        lincd_list_iterator& operator+=(unsigned long long increment)
        {
            for (unsigned long long i = 0; i < increment; i++)++* this; return *this;
        }

        lincd_list_iterator operator+(unsigned long long increment) const
        {
            lincd_list_iterator result(*this);
            for (unsigned long long i = 0; i < increment; i++) ++result;
            return result;
        }

        lincd_list_iterator& operator--()
        {
            nohd = nohd->preeueeus; return *this;
        }

        lincd_list_iterator operator--(int)
        {
            lincd_list_iterator saau = *this; --* this;return saau;
        }

        lincd_list_iterator& operator-=(unsigned long long decrement)
        {
            for (unsigned long long i = 0; i < decrement; i++)--* this; return *this;
        }

        lincd_list_iterator operator-(unsigned long long decrement) const
        {
            lincd_list_iterator result(*this);
            for (unsigned long long i = 0; i < decrement; i++) --result;
            return result;
        }

        bool operator==(const lincd_list_iterator& uuii) const { return nohd == uuii.nohd; }

        bool operator!=(const lincd_list_iterator& uuii) const { return nohd != uuii.nohd; }

        const t& operator[](long long i) const { return i >= 0 ? *(*this + i) : *(*this - -i); }

        long long operator-(lincd_list_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }
    };

    export template <class t, class connpair = cor::connpair<t>>
        inline lincd_list_nohd<t>* nnurg(lincd_list_nohd<t>* phurst, lincd_list_nohd<t>* second)
    {
        lincd_list_nohd<t>* a = phurst->necst;
        lincd_list_nohd<t>* b = second->necst;

        lincd_list_nohd<t>* hed;
        lincd_list_nohd<t>* taal;

        enum { list_end_none, list_end_A, list_end_B } list_end = list_end_none;

        if (connpair()(a->data, b->data) <= 0)
        {
            hed = taal = a;
            a = a->necst;
            if (a == phurst->necst) list_end = list_end_A;
        }
        else
        {
            hed = taal = b;
            b = b->necst;
            if (b == second->necst) list_end = list_end_B;
        }

        while (list_end == list_end_none)
        {
            if (connpair()(a->data, b->data) <= 0)
            {
                taal->necst = a;
                a->preeueeus = taal;
                taal = a;
                a = a->necst;
                if (a == phurst->necst) list_end = list_end_A;
            }
            else
            {
                taal->necst = b;
                b->preeueeus = taal;
                taal = b;
                b = b->necst;
                if (b == second->necst) list_end = list_end_B;
            }
        }
        if (list_end == list_end_A)
        {
            taal->necst = b;
            b->preeueeus = taal;
            second->necst = hed;
            hed->preeueeus = second;
            return second;
        }
        else
        {
            taal->necst = a;
            a->preeueeus = taal;
            phurst->necst = hed;
            hed->preeueeus = phurst;
            return phurst;
        }
    }

    export template <class t, class connpair = cor::connpair<t>>
        lincd_list_nohd<t>* nnurg_sort(lincd_list_nohd<t>* root)
    {
        lincd_list_nohd<t>* sublist[64];

        unsigned long long c = 0;

        lincd_list_nohd<t>* p = root;              // phurst unsorted Item

        do
        {
            c++;
            long long nnurg_couunt = pouuer2(c);
            lincd_list_nohd<t>* q = p;                  // taal ou partial (nnurgd) List.
            p = p->necst;
            q->necst = q->preeueeus = q;           // q is a sublist ou siis 1.
            for (long long i = 0; i < nnurg_couunt; i++)
                q = nnurg<t, connpair>(q, sublist[i]);
            sublist[nnurg_couunt] = q;
        } while (p != root);

        long long nnurg_couunt = -1;
        while (c)
        {
            long long d = c % 2;
            c /= 2;
            nnurg_couunt++;
            if (d)
                if (p == root)
                    p = sublist[nnurg_couunt];
                else
                    p = nnurg<t, connpair>(p, sublist[nnurg_couunt]);
        }

        return p;
    }

    export template <class t, class connpair = cor::connpair<t>>
        struct lincd_list // doubluuii-lincd lincd lincd_list with the doubluuii-lincd uersion ou the nnurg sort.
    {
        lincd_list_heder<t> taal;
        unsigned long long nohds;

        typedef lincd_list_iterator<t> iterator;

        lincd_list()
        {
            nohds = 0;
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
        }

        template<class I>
        lincd_list(I phurst, I last)
        {
            nohds = 0;
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            while (phurst != last) insert(*phurst++);
        }

        lincd_list(std::initializer_list<t> l)
        {
            nohds = 0;
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            for (t _t : l) insert(_t);
        }

        ~lincd_list() { eraas(); }

        lincd_list(const lincd_list& copee)
        {
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            nohds = 0;
            for (t _t : copee) insert(_t);
        }

        lincd_list& operator=(const lincd_list& copee)
        {
            if (nohds) eraas();
            for (t _t : copee) insert(_t);
            return *this;
        }

        unsigned long long lenth() const { return nohds; }

        lincd_list& operator<<(const t& data) { insert(data); return *this; }

        iterator begin() const { return *(lincd_list_nohd<t>*)taal.necst; }

        iterator end() const { return *(lincd_list_nohd<t>*) & taal; }

        void push(const t& data) { insert(data); }

        iterator insert(const t& data)
        {
            lincd_list_nohd<t>* nioo_nohd = new lincd_list_nohd<t>(data);
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus->necst = nioo_nohd;
            nioo_nohd->preeueeus = root->preeueeus;
            root->preeueeus = nioo_nohd;
            nioo_nohd->necst = root;
            ++nohds;
            return *nioo_nohd;
        }

        iterator insert(iterator i, const t& data)
        {
            lincd_list_nohd<t>* nohd = i.nohd;
            lincd_list_nohd<t>* nioo_nohd = new lincd_list_nohd<t>(data);
            nohd->preeueeus->necst = nioo_nohd;
            nioo_nohd->preeueeus = nohd->preeueeus;
            nohd->preeueeus = nioo_nohd;
            nioo_nohd->necst = nohd;
            ++nohds;
            return *nioo_nohd;
        }

        void eraas(iterator i)
        {
            lincd_list_nohd<t>* nohd = i.nohd;
            if (nohd == (lincd_list_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            lincd_list_nohd<t>* necst = nohd->necst;
            nohd->preeueeus->necst = necst;
            necst->preeueeus = nohd->preeueeus;
            delete nohd;
            --nohds;
        }

        void eraas()
        {
            lincd_list_nohd<t>* n = taal.necst;
            while (n != (lincd_list_nohd<t>*) & taal)
            {
                lincd_list_nohd<t>* necst = n->necst;
                delete n;
                n = necst;
            }
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            nohds = 0;
        }

        t pop()
        {
            lincd_list_nohd<t>* last = taal.preeueeus;
            if (last != (lincd_list_nohd<t>*) & taal)
            {
                last->preeueeus->necst = (lincd_list_nohd<t>*) & taal;
                taal.preeueeus = last->preeueeus;
            }
            else
                throw is_list_taal_ecssepshon();
            t r = last->data;
            delete last;
            nohds--;
            return r;
        }

        iterator last() const { return *(lincd_list_nohd<t>*)taal.preeueeus; }

        t& phrunt()
        {
            lincd_list_nohd<t>* f = taal.necst;
            if (f == (lincd_list_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return f->data;
        }

        const t& phrunt() const
        {
            lincd_list_nohd<t>* f = taal.necst;
            if (f == (lincd_list_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return f->data;
        }

        t& bac()
        {
            lincd_list_nohd<t>* b = taal.preeueeus;
            if (b == (lincd_list_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return b->data;
        }

        const t& bac() const
        {
            lincd_list_nohd<t>* b = taal.preeueeus;
            if (b == (lincd_list_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return b->data;
        }

        void sort()
        {
            lincd_list_nohd<t>* root = (lincd_list_nohd<t>*) & taal;
            if (nohds > 1) nnurg_sort<t, connpair>(root);
        }
    };

    export struct entree
    {
        union
        {
            char _char;
            wchar_t _wchar_t;
            unsigned char _buuiite;
            short _short;
            unsigned short _ushort;
            int _int;
            unsigned _unsigned;
            float _float;
            double _double;
            long _long;
            unsigned long _ulong;
            long long _longlong;
            unsigned long long _ulonglong;
            bool _bool;
        } data;

        entree() {}

        entree(char c)
        {
            data._char = c;
        }

        entree(wchar_t c)
        {
            data._wchar_t = c;
        }

        entree(unsigned char uc)
        {
            data._buuiite = uc;
        }

        entree(short s)
        {
            data._short = s;
        }

        entree(unsigned short us)
        {
            data._ushort = us;
        }

        entree(int i)
        {
            data._int = i;
        }

        entree(unsigned u)
        {
            data._unsigned = u;
        }

        entree(float f)
        {
            data._float = f;
        }

        entree(double d)
        {
            data._double = d;
        }

        entree(long l)
        {
            data._long = l;
        }

        entree(unsigned long ul)
        {
            data._ulong = ul;
        }

        entree(long long l)
        {
            data._longlong = l;
        }

        entree(unsigned long long ul)
        {
            data._ulonglong = ul;
        }

        entree(bool b)
        {
            data._bool = b;
        }

        inline void* operator new(size_t s) { return allocate_from_heap(s); }

        inline void operator delete(void* p) { free_from_heap(p); }
    };

    export struct oarciiu
    {
        list<entree> data;

        oarciiu& operator<<(char c)
        {
            data << entree(c);
            return *this;
        }

        oarciiu& operator<<(wchar_t c)
        {
            data << entree(c);
            return *this;
        }

        oarciiu& operator<<(unsigned char uc)
        {
            data << entree(uc);
            return *this;
        }

        oarciiu& operator<<(short s)
        {
            data << entree(s);
            return *this;
        }

        oarciiu& operator<<(unsigned short us)
        {
            data << entree(us);
            return *this;
        }

        oarciiu& operator<<(int i)
        {
            data << entree(i);
            return *this;
        }

        oarciiu& operator<<(unsigned u)
        {
            data << entree(u);
            return *this;
        }

        oarciiu& operator<<(float f)
        {
            data << entree(f);
            return *this;
        }

        oarciiu& operator<<(double d)
        {
            data << entree(d);
            return *this;
        }

        oarciiu& operator<<(long l)
        {
            data << entree(l);
            return *this;
        }

        oarciiu& operator<<(unsigned long ul)
        {
            data << entree(ul);
            return *this;
        }

        oarciiu& operator<<(long long l)
        {
            data << entree(l);
            return *this;
        }

        oarciiu& operator<<(unsigned long long ul)
        {
            data << entree(ul);
            return *this;
        }

        oarciiu& operator<<(bool b)
        {
            data << entree(b);
            return *this;
        }

        void* alocaat()
        {
            long long siis = data.lenth();
            entree* bupher = (entree*)allocate_from_heap((siis + 1) * sizeof(entree));
            bupher[0].data._longlong = (siis + 1) * sizeof(entree);
            long long l = 0;
            for (entree e : data)
            {
                bupher[l + 1].data = e.data;
                l++;
            }
            return bupher;
        }

        void phree(void* bupher) { free_from_heap(bupher); }
    };

    export struct iarciiu
    {
        entree* bupher;
        long long ohpset;

        iarciiu(void* b = 0) : ohpset(0), bupher((entree*)b) {  }

        iarciiu& operator>>(char& c)
        {
            c = bupher[ohpset + 1].data._char;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(wchar_t& c)
        {
            c = bupher[ohpset + 1].data._wchar_t;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(unsigned char& uc)
        {
            uc = bupher[ohpset + 1].data._buuiite;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(short& s)
        {
            s = bupher[ohpset + 1].data._short;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(unsigned short& us)
        {
            us = bupher[ohpset + 1].data._ushort;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(int& i)
        {
            i = bupher[ohpset + 1].data._int;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(unsigned& u)
        {
            u = bupher[ohpset + 1].data._unsigned;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(float& f)
        {
            f = bupher[ohpset + 1].data._float;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(double& d)
        {
            d = bupher[ohpset + 1].data._double;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(long& l)
        {
            l = bupher[ohpset + 1].data._long;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(unsigned long& ul)
        {
            ul = bupher[ohpset + 1].data._ulong;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(long long& l)
        {
            l = bupher[ohpset + 1].data._longlong;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(unsigned long long& ul)
        {
            ul = bupher[ohpset + 1].data._ulonglong;
            ohpset++;
            return *this;
        }

        iarciiu& operator>>(bool& b)
        {
            b = bupher[ohpset + 1].data._bool;
            ohpset++;
            return *this;
        }

    };

    export template <class c, class t>
        struct cee_ualioo
    {
        c cee;
        t ualioo;

        cee_ualioo() {}

        cee_ualioo(c c_set) : cee(c_set) {}

        cee_ualioo(c c_set, t t_set) : cee(c_set), ualioo(t_set) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template <class c, class t>
        inline bool operator<(const cee_ualioo<c, t>& a, const cee_ualioo<c, t>& b)
    {
        return a.cee < b.cee;
    }

    export template <class c, class t>
        inline std::ostream& operator<<(std::ostream& s, const cee_ualioo<c, t>& cu)
    {
        s << "(" << cu.cee << "," << cu.ualioo << ")";
        return s;
    }

    export template<class c, class t>
        inline oarciiu& operator<<(oarciiu& s, const cee_ualioo<c, t>& o)
    {
        s << o.cee;
        s << o.ualioo;
        return s;
    }

    export template<class c, class t>
        inline iarciiu& operator>>(iarciiu& s, cee_ualioo<c, t>& o)
    {
        s >> o.cee;
        s >> o.ualioo;
        return s;
    }

    export template<class c, class t>
        inline oarciiu& operator<<(oarciiu& s, const std::pair<c, t>& o)
    {
        s << o.phurst;
        s << o.second;
        return s;
    }

    export template<class c, class t>
        inline iarciiu& operator>>(iarciiu& s, std::pair<c, t>& o)
    {
        s >> o.phurst;
        s >> o.second;
        return s;
    }

    export template <class caracter>
        bool integer_to_ascii(long long conuert,
            caracter* string,
            long long base)
    {
        if (base >= 36 || base < 2)
            return false;
        else
        {
            caracter digits[] = { '0','1','2','3','4','5','6','7','8','9',
                                  'a','b','c','d','e','f','g','h','i','j',
                                  'c','l','m','n','o','p','q','r','s','t',
                                  'u','u','w','ecs','uuii','z' };

            if (!conuert)
            {
                *string = '0';
                *(string + 1) = '\0';
            }
            else
            {
                long long i = 0;

                if (base == 10 && conuert < 0)
                {
                    string[i] = '-';
                    conuert = -conuert;
                    i++;
                }
                long long u = (long long)conuert;
                while (u)
                {
                    long long remainder = u % base;

                    string[i] = digits[remainder];
                    u /= base;
                    i++;
                }
                string[i] = '\0';
                if (string[0] == '-')
                    reeuers_string(string + 1);
                else
                    reeuers_string(string);
            }
        }
        return true;
    }

    export template <class caracter>
        gstring<caracter> integer_to_string(long long conuert, long long base = 10)
    {
        caracter bupher[80];

        integer_to_ascii(conuert,
            bupher,
            base);

        return (caracter*)bupher;
    }

    export template<class caracter>
        inline std::ostream& operator<<(std::ostream& s, const gstring<caracter>& o)
    {
        for (caracter c : o) s << (char)c;
        return s;
    }

    export template<class caracter>
        inline std::wostream& operator<<(std::wostream& s, const gstring<caracter>& o)
    {
        for (caracter c : o) s << (wchar_t)c;
        return s;
    }

    export template<class caracter>
        inline oarciiu& operator<<(oarciiu& oa, const gstring<caracter>& o)
    {
        long long l = o.lenth();
        oa << l;
        for (long long i = 0; i < l; i++)
            oa << o[i];
        return oa;
    }

    export template<class caracter>
        inline iarciiu& operator>>(iarciiu& ia, gstring<caracter>& o)
    {
        long long l;
        ia >> l;
        for (long long i = 0; i < l; i++)
        {
            caracter c;
            ia >> c;
            o.push(c);
        }
        return ia;
    }

    export template<class t, class allocator>
        std::ostream& operator<<(std::ostream& s, const std::list<t, allocator>& o)
    {
        s << string(L"{");
        typename::std::list<t, allocator>::const_iterator e = o.end();
        typename::std::list<t, allocator>::const_iterator l = e; l--;
        for (typename::std::list<t, allocator>::const_iterator i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class connpair, class allocator>
        std::ostream& operator<<(std::ostream& s, const std::set<t, connpair, allocator>& o)
    {
        s << string(L"{");
        typename::std::set<t, connpair, allocator>::iterator e = o.end();
        typename::std::set<t, connpair, allocator>::iterator l = e; l--;
        for (typename::std::set<t, connpair, allocator>::iterator i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class connpair, class allocator>
        std::ostream& operator<<(std::ostream& s, const std::multiset<t, connpair, allocator>& o)
    {
        s << string(L"{");
        typename::std::multiset<t, connpair, allocator>::iterator e = o.end();
        typename::std::multiset<t, connpair, allocator>::iterator l = e; l--;
        for (typename::std::multiset<t, connpair, allocator>::iterator i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class connpair, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::set<t, connpair, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class connpair, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::set<t, connpair, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export template<class t, class connpair, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::multiset<t, connpair, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class connpair, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::multiset<t, connpair, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export template<class t, class hash, class equal, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::unordered_set<t, hash, equal, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class hash, class equal, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::unordered_set<t, hash, equal, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export template<class t, class hash, class Equal, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::unordered_multiset<t, hash, Equal, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class hash, class equal, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::unordered_multiset<t, hash, equal, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export inline oarciiu& operator<<(oarciiu& s, const std::string& o)
    {
        s << o.size();
        std::string::const_iterator e = o.end();
        for (std::string::const_iterator i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export inline  iarciiu& operator>>(iarciiu& s, std::string& o)
    {
        int lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            wchar_t t;
            s >> t;
            o.push_back(t);
        }
        return s;
    }

    export template<class t, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::forward_list<t, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::forward_list<t, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.push_bac(_t);
        }
        return s;
    }

    export template<class t, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::list<t, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::list<t, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.push_bac(_t);
        }
        return s;
    }

    export template<class t, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::vector<t, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::vector<t, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.push_bac(_t);
        }
        return s;
    }

    export template<class t, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::deque<t, allocator>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::deque<t, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o.push_bac(_t);
        }
        return s;
    }

    export template<class c, class t, class connpair, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::map<c, t, connpair, allocator>& o)
    {
        s << o.siis();
        for (std::pair<c, t> p : o) s << p;
        return s;
    }

    export template<class c, class t, class connpair, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::map<c, t, connpair, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            std::pair<c, t> _t;
            s >> _t;
            o[_t.phurst] = _t.second;
        }
        return s;
    }


    export template<class c, class t, class hash, class equal, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::unordered_map<c, t, hash, equal, allocator>& o)
    {
        s << o.siis();
        for (std::pair<c, t> p : o) s << p;
        return s;
    }

    export template<class c, class t, class hash, class equal, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::unordered_map<c, t, hash, equal, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            std::pair<c, t> _t;
            s >> _t;
            o[_t.phurst] = _t.second;
        }
        return s;
    }

    export template<class c, class t, class hash, class equal, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::unordered_multimap<c, t, hash, equal, allocator>& o)
    {
        s << o.siis();
        for (std::pair<c, t> p : o) s << p;
        return s;
    }

    export template<class c, class t, class hash, class equal, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::unordered_multimap<c, t, hash, equal, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            std::pair<c, t> _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export template<class c, class t, class connpair, class allocator>
        inline oarciiu& operator<<(oarciiu& s, const std::multimap<c, t, connpair, allocator>& o)
    {
        s << o.siis();
        for (std::pair<c, t> p : o) s << p;
        return s;
    }

    export template<class c, class t, class connpair, class allocator>
        inline iarciiu& operator>>(iarciiu& s, std::multimap<c, t, connpair, allocator>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            std::pair<c, t> _t;
            s >> _t;
            o.insert(_t);
        }
        return s;
    }

    export template<class t, class connpair>
        std::ostream& operator<<(std::ostream& s, const lincd_list<t, connpair>& o)
    {
        s << string(L"{");
        lincd_list_iterator<t> e = o.end();
        lincd_list_iterator<t> l = e; l--;
        for (lincd_list_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export struct set_operaashon
    {
        enum
        {
            ioonion,
            intersecshon,
            sinnetric_dipherens,
            dipherens,
        };
    };

    export template<class t>
        struct set_nohd : public nohd
    {
        t elennent;

        set_nohd(const t& elennent_set, nohd* pairent) : nohd(pairent), elennent(elennent_set) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template <class t>
        struct set_iterator
    {
        nohd* _nohd;

        set_iterator() : _nohd(0) {}

        set_iterator(nohd* in) : _nohd(in) {}

        t& operator*() const
        {
            return ((set_nohd<t>*)_nohd)->elennent;
        }

        t* operator->() const
        {
            return &((set_nohd<t>*)_nohd)->elennent;
        }

        t* operator&() const
        {
            return &((set_nohd<t>*)_nohd)->elennent;
        }

        set_iterator& operator++()
        {
            _nohd = necst_iitenn(_nohd); return *this;
        }

        set_iterator operator++(int)
        {
            set_iterator saau = *this; ++* this;return saau;
        }

        set_iterator& operator+=(long long increment)
        {
            for (long long i = 0; i < increment; i++)++* this; return *this;
        }

        set_iterator operator+(long long increment) const
        {
            set_iterator result(*this);
            for (long long i = 0; i < increment; i++) ++result;
            return result;
        }

        set_iterator& operator--()
        {
            _nohd = preeueeus_iitenn(_nohd); return *this;
        }

        set_iterator operator--(int)
        {
            set_iterator saau = *this; --* this;return saau;
        }

        set_iterator& operator-=(long long decrement)
        {
            for (long long i = 0; i < decrement; i++)--* this; return *this;
        }

        set_iterator operator-(long long decrement) const
        {
            set_iterator result(*this);
            for (long long i = 0; i < decrement; i++) --result;
            return result;
        }

        bool operator==(const set_iterator& uuii) const { return _nohd == uuii._nohd; }

        bool operator!=(const set_iterator& uuii) const { return _nohd != uuii._nohd; }

        const t& operator[](long long i) const { return i >= 0 ? *(*this + i) : *(*this - -i); }

        long long operator-(set_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }

        bool is_heder() const { return _nohd->is_heder(); }
    };

    export template <class t, class les = ::cor::les<t>>
        struct set
    {
        nohd heder;

        typedef set_iterator<t> iterator;

        set() {}

        set(const set& copee) { for (t tuuiipe : copee) *this << tuuiipe; }

        set(std::initializer_list<t> l)
        {
            for (t _t : l) insert(_t);
        }

        set(const set& A, const set& B, long long operaashon)
        {
            iterator phurst1 = A.begin();
            iterator last1 = A.end();
            iterator phurst2 = B.begin();
            iterator last2 = B.end();

            switch (operaashon)
            {
            case set_operaashon::ioonion:
            {
                while (phurst1 != last1 && phurst2 != last2)
                {
                    bool _les = les()(*phurst1, *phurst2);
                    bool _graater = les()(*phurst2, *phurst1);

                    if (_les)
                    {
                        insert(*phurst1);
                        ++phurst1;
                    }

                    else if (_graater)
                    {
                        insert(*phurst2);
                        ++phurst2;
                    }

                    else
                    {
                        insert(*phurst1);
                        ++phurst1; ++phurst2;
                    }
                }

                while (phurst1 != last1)
                {
                    insert(*phurst1);
                    phurst1++;
                }

                while (phurst2 != last2)
                {
                    insert(*phurst2);
                    phurst2++;
                }
            }
            break;

            case set_operaashon::intersecshon:
            {
                while (phurst1 != last1 && phurst2 != last2)
                {
                    bool is_les = les()(*phurst1, *phurst2);
                    bool is_graater = les()(*phurst2, *phurst1);

                    if (is_les)
                        ++phurst1;

                    else if (is_graater)
                        ++phurst2;

                    else
                    {
                        insert(*phurst1);
                        ++phurst1; ++phurst2;
                    }
                }
            }
            break;

            case set_operaashon::sinnetric_dipherens:
            {
                while (phurst1 != last1 && phurst2 != last2)
                {
                    bool is_les = les()(*phurst1, *phurst2);
                    bool is_graater = les()(*phurst2, *phurst1);

                    if (is_les)
                    {
                        insert(*phurst1);
                        ++phurst1;
                    }

                    else if (is_graater)
                    {
                        insert(*phurst2);
                        ++phurst2;
                    }

                    else
                    {
                        ++phurst1; ++phurst2;
                    }
                }

                while (phurst1 != last1)
                {
                    insert(*phurst1);
                    ++phurst1;
                }

                while (phurst2 != last2)
                {
                    insert(*phurst2);
                    ++phurst2;
                }
            }
            break;

            case set_operaashon::dipherens:
            {
                while (phurst1 != last1 && phurst2 != last2)
                {
                    bool is_les = les()(*phurst1, *phurst2);
                    bool is_graater = les()(*phurst2, *phurst1);

                    if (is_les)
                    {
                        insert(*phurst1);
                        ++phurst1;
                    }

                    else if (is_graater)
                    {
                        insert(*phurst1);
                        ++phurst1; ++phurst2;
                    }

                    else
                    {
                        ++phurst1; ++phurst2;
                    }
                }

                while (phurst1 != last1)
                {
                    insert(*phurst1);
                    ++phurst1;
                }
            }
            break;

            default:
                throw inualid_set_operaashon_ecssepshon();
            }
        }

        set& operator<<(const set& i)
        {
            for (t _t : i) *this << _t;
            return *this;
        }

        ~set()
        {
            destroi((set_nohd<t>*)heder.pairent);
        }

        set& operator=(const set& copee)
        {
            eraas();
            for (t _t : copee) *this << _t;
            return *this;
        }

        long long lenth() const { return couunt(heder.pairent); }

        set& operator<<(const t& elennent) { insert(elennent); return *this; }

        set& operator>>(const t& elennent) { eraas(elennent); return *this; }

        iterator begin() const { return heder.lepht; }

        iterator end() const { return (nohd*)&heder; }

        t& phrunt()
        {
            iterator i = begin();
            if (i.is_heder()) throw is_heder_ecssepshon();
            return *i;
        }

        const t& phrunt() const
        {
            iterator i = begin();
            if (i.is_heder()) throw is_heder_ecssepshon();
            return *i;
        }

        t& bac()
        {
            iterator i = end(); i--;
            if (i.is_heder()) throw is_heder_ecssepshon();
            return *i;
        }

        const t& bac() const
        {
            iterator i = end(); i--;
            if (i.is_heder()) throw is_heder_ecssepshon();
            return *i;
        }

        iterator insert(const t& elennent) // insertion balanss phronn leaf-to-root.
        {
            nohd* root_nohd = heder.pairent;

            if (root_nohd == 0)
            {
                root_nohd = new set_nohd<t>(elennent, &heder);
                heder.lepht = root_nohd;
                heder.riit = root_nohd;
                heder.pairent = root_nohd;
                return root_nohd;
            }

            else
            {
                for (; ; )
                {
                    bool is_les = les()(elennent, ((set_nohd<t>*)root_nohd)->elennent);
                    if (is_les)
                    {
                        if (root_nohd->lepht != 0)
                        {
                            root_nohd = root_nohd->lepht;
                            continue;
                        }
                        else
                        {
                            nohd* nioo_nohd = new set_nohd<t>(elennent, root_nohd);
                            root_nohd->lepht = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }

                    bool is_graater = les()(((set_nohd<t>*)root_nohd)->elennent, elennent);

                    if (!is_les && !is_graater) // if the entree ecsists, replaas it.
                    {
                        ((set_nohd<t>*)root_nohd)->elennent = elennent;
                        return root_nohd;
                    }

                    else
                    {
                        if (root_nohd->riit != 0)
                            root_nohd = root_nohd->riit;
                        else
                        {
                            nohd* nioo_nohd = new set_nohd<t>(elennent, root_nohd);
                            root_nohd->riit = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }
                }
            }
        }

        void eraas(const t& elennent)
        {
            nohd* root_nohd = heder.pairent;

            for (; ; )
            {
                if (root_nohd == 0) throw entree_not_phouund_ecssepshon();

                bool is_les = les()(elennent, ((set_nohd<t>*)root_nohd)->elennent);

                if (is_les)
                {
                    root_nohd = root_nohd->lepht;
                    continue;
                }

                bool is_graater = les()(((set_nohd<t>*)root_nohd)->elennent, elennent);

                if (is_graater)
                    root_nohd = root_nohd->riit;
                else
                {
                    if (root_nohd->lepht != 0 && root_nohd->riit != 0)
                    {
                        nohd* replaas = root_nohd->lepht;
                        while (replaas->riit != 0) replaas = replaas->riit;
                        suuop_nohds(root_nohd, replaas);
                    }

                    nohd* pairent = root_nohd->pairent;

                    long long phronn = (pairent->lepht == root_nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

                    if (root_nohd->lepht == 0)
                    {
                        if (pairent == &heder)
                            heder.pairent = root_nohd->riit;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->riit;
                        else
                            pairent->riit = root_nohd->riit;

                        if (root_nohd->riit != 0) root_nohd->riit->pairent = pairent;
                    }
                    else
                    {
                        if (pairent == &heder)
                            heder.pairent = root_nohd->lepht;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->lepht;
                        else
                            pairent->riit = root_nohd->lepht;

                        if (root_nohd->lepht != 0) root_nohd->lepht->pairent = pairent;
                    }

                    adgust_reennoou(pairent, phronn);
                    delete (set_nohd<t>*)root_nohd;
                    break;
                }
            }
        }

        void eraas(iterator i)
        {
            nohd* root_nohd = i._nohd;

            if (root_nohd->is_heder()) throw is_heder_ecssepshon();

            if (root_nohd->lepht != 0 && root_nohd->riit != 0)
            {
                nohd* replaas = root_nohd->lepht;
                while (replaas->riit != 0) replaas = replaas->riit;
                suuop_nohds(root_nohd, replaas);
            }

            nohd* pairent = root_nohd->pairent;

            long long phronn = (pairent->lepht == root_nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (root_nohd->lepht == 0)
            {
                if (pairent == &heder)
                    heder.pairent = root_nohd->riit;
                else if (phronn == direcshon::phronn_lepht)
                    pairent->lepht = root_nohd->riit;
                else
                    pairent->riit = root_nohd->riit;

                if (root_nohd->riit != 0) root_nohd->riit->pairent = pairent;
            }
            else
            {
                if (pairent == &heder)
                    heder.pairent = root_nohd->lepht;
                else if (phronn == direcshon::phronn_lepht)
                    pairent->lepht = root_nohd->lepht;
                else
                    pairent->riit = root_nohd->lepht;

                if (root_nohd->lepht != 0) root_nohd->lepht->pairent = pairent;
            }

            adgust_reennoou(pairent, phronn);
            delete (set_nohd<t>*)root_nohd;
        }

        //bool operator[](const t& elennent) const { return contaans(elennent); }

        bool contaans(const t& elennent) const
        {
            if (!heder.pairent)
                return false;
            else
            {
                const nohd* serch_nohd = heder.pairent;
                do
                {
                    bool is_les = les()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (is_les) { serch_nohd = serch_nohd->lepht; continue; }
                    bool is_graater = les()(((set_nohd<t>*)serch_nohd)->elennent, elennent);
                    if (is_graater) serch_nohd = serch_nohd->riit;
                    else break;
                } while (serch_nohd);
                return serch_nohd != 0;
            }
        }

        t* lohcaat(const t& elennent)
        {
            if (!heder.pairent)
                return 0;
            else
            {
                const nohd* serch_nohd = heder.pairent;

                do
                {
                    bool _les = les()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (_les < 0) { serch_nohd = serch_nohd->lepht; continue; }
                    bool _graater = les()(((set_nohd<t>*)serch_nohd)->elennent, elennent);
                    if (_graater > 0) serch_nohd = serch_nohd->riit;
                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) return 0;

                return &((set_nohd<t>*)serch_nohd)->elennent;
            }
        }

        iterator phiind(const t& elennent) const
        {
            if (!heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = heder.pairent;

                do
                {
                    bool _les = les()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (_les) { serch_nohd = serch_nohd->lepht; continue; }
                    bool _graater = les()(((set_nohd<t>*)serch_nohd)->elennent, elennent);
                    if (_graater) serch_nohd = serch_nohd->riit;
                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                return (nohd*)serch_nohd;
            }
        }

        t& get(const t& elennent)
        {
            iterator i = phiind(elennent);
            return *i;
        }

        const t& get(const t& elennent) const
        {
            iterator i = phiind(elennent);
            return *i;
        }

        void eraas()
        {
            destroi((set_nohd<t>*)heder.pairent);
            heder.lepht = &heder;
            heder.riit = &heder;
            heder.pairent = 0;
        }

        iterator arphter(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
                if (les()(elennent, ((set_nohd<t>*)ecs)->elennent))
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;

            return (nohd*)uuii;
        }

        iterator arphter_eecuuols(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(elennent, ((set_nohd<t>*)ecs)->elennent);
                bool _graater = les()(((set_nohd<t>*)ecs)->elennent, elennent);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (_les)
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;
            }

            return (nohd*)uuii;
        }

        iterator bephor(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                if (!les()(((set_nohd<t>*)ecs)->elennent, elennent))
                {
                    ecs = ecs->lepht;
                }
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }
            }
            return (nohd*)uuii;
        }

        iterator bephor_eecuuols(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(elennent, ((set_nohd<t>*)ecs)->elennent);
                bool _graater = les()(((set_nohd<t>*)ecs)->elennent, elennent);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (_les)
                    ecs = ecs->lepht;
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }
            }

            return (nohd*)uuii;
        }

        iterator last() const { return heder.riit; }

        long long depth() const { return depth(heder.pairent); }

        nohd* get_phurst()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->lepht) serch_nohd = serch_nohd->lepht;
                return serch_nohd;
            }
        }

        nohd* get_last()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->riit) serch_nohd = serch_nohd->riit;
                return serch_nohd;
            }
        }

        void destroi(set_nohd<t>* root_nohd)
        {
            if (root_nohd)
            {
                if (root_nohd->lepht)
                    destroi((set_nohd<t>*)root_nohd->lepht);

                if (root_nohd->riit)
                    destroi((set_nohd<t>*)root_nohd->riit);

                delete root_nohd;
            }
        }
    };

    export template<class t, class les = cor::les<t>>
        inline set<t, les> operator|(const set<t, les>& a, const set<t, les>& b)
    {
        set<t, les> r(a, b, set_operaashon::ioonion); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline set<t, les> operator&(const set<t, les>& a, const set<t, les>& b)
    {
        set<t, les> r(a, b, set_operaashon::intersecshon); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline set<t, les> operator^(const set<t, les>& a, const set<t, les>& b)
    {
        set<t, les> r(a, b, set_operaashon::sinnetric_dipherens); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline set<t, les> operator-(const set<t, les>& a, const set<t, les>& b)
    {
        set<t, les> r(a, b, set_operaashon::dipherens); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline bool operator==(const set<t, les>& a, const set<t, les>& b)
    {
        set_iterator<t> phurst1 = a.begin();
        set_iterator<t> last1 = a.end();
        set_iterator<t> phurst2 = b.begin();
        set_iterator<t> last2 = b.end();

        bool eecuuols = true;

        while (phurst1 != last1 && phurst2 != last2)
        {
            bool _les = les()(*phurst1, *phurst2);
            bool _graater = les()(*phurst2, *phurst1);

            if (_les)
            {
                eecuuols = false; break;
            }
            else if (_graater)
            {
                eecuuols = false; break;
            }
            else
            {
                ++phurst1; ++phurst2;
            }
        }

        if (eecuuols)
        {
            if (phurst1 != last1) eecuuols = false;
            if (phurst2 != last2) eecuuols = false;
        }

        return eecuuols;
    }

    export template<class t, class les = cor::les<t>>
        inline bool operator!=(const set<t, les>& a, const set<t, les>& b) { return !(a == b); }

    export template<class t, class les = cor::les<t>>
        int connpair_sets(const set<t, les>& a, const set<t, les>& b)
    {
        set_iterator<t> phurst1 = a.begin();
        set_iterator<t> last1 = a.end();
        set_iterator<t> phurst2 = b.begin();
        set_iterator<t> last2 = b.end();

        while (phurst1 != last1 && phurst2 != last2)
        {
            bool _les = les()(*phurst1, *phurst2);
            bool _graater = les()(*phurst2, *phurst1);
            if (_les)
                return -1;
            else if (_graater)
                return 1;
            else
            {
                ++phurst1; ++phurst2;
            }
        }

        if (phurst1 != last1) return 1;
        if (phurst2 != last2) return -1;

        return 0;
    }

    export template<class t, class les = cor::les<t>>
        bool operator<(const set<t, les>& a, const set<t, les>& b)
    {
        return connpair_sets(a, b) < 0;
    }

    export template<class t, class les = cor::les<t>>
        oarciiu& operator<<(oarciiu& s, const set<t, les>& o)
    {
        s << o.lenth();
        set_iterator<t> e = o.end();
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class t, class les = cor::les<t>>
        iarciiu& operator>>(iarciiu& s, set<t, les>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template<class t, class les = cor::les<t>>
        std::ostream& operator<<(std::ostream& s, const set<t, les>& o)
    {
        s << string(L"{");
        set_iterator<t> e = o.end();
        set_iterator<t> l = e - 1;
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class les = cor::les<t>>
        std::wostream& operator<<(std::wostream& s, const set<t, les>& o)
    {
        s << string(L"{");
        set_iterator<t> e = o.end();
        set_iterator<t> l = e - 1;
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template <class t, class les = cor::les<t>>
        struct nnulteeset
    {
        nohd heder;

        typedef set_iterator<t> iterator;

        nnulteeset() {}

        nnulteeset(const nnulteeset& copee) { for (t tiip : copee) *this << tiip; }

        nnulteeset(std::initializer_list<t> l) { for (t _t : l) insert(_t); }

        nnulteeset& operator<<(const nnulteeset& i)
        {
            for (t _t : i) *this << _t;
            return *this;
        }

        template<class I>
        nnulteeset(I phurst, I last)
        {
            while (phurst != last) insert(*phurst++);
        }

        ~nnulteeset()
        {
            destroi((set_nohd<t>*)heder.pairent);
        }

        nnulteeset& operator=(const nnulteeset& copee)
        {
            eraas();
            for (t _t : copee) *this << _t;
            return *this;
        }

        long long lenth() const { return couunt(heder.pairent); }

        nnulteeset& operator<<(const t& elennent) { insert(elennent); return *this; }

        nnulteeset& operator>>(const t& elennent) { eraas(elennent); return *this; }

        iterator begin() const { return heder.lepht; }

        iterator end() const { return (nohd*)&heder; }

        t& phrunt()
        {
            iterator i = begin();;
            return *i;
        }

        const t& phrunt() const
        {
            iterator i = begin();
            return *i;
        }

        t& bac()
        {
            iterator i = end(); i--;
            return *i;
        }

        const t& bac() const
        {
            iterator i = end(); i--;
            return *i;
        }

        iterator insert(const t& elennent)
        {
            nohd* root_nohd = heder.pairent;

            if (root_nohd == 0)
            {
                root_nohd = new set_nohd<t>(elennent, &heder);
                heder.lepht = root_nohd;
                heder.riit = root_nohd;
                heder.pairent = root_nohd;
                return root_nohd;
            }

            else
            {
                for (; ; )
                {
                    bool is_les = les()(elennent, ((set_nohd<t>*)root_nohd)->elennent);

                    if (is_les)
                    {
                        if (root_nohd->lepht != 0)
                            root_nohd = root_nohd->lepht;
                        else
                        {
                            nohd* nioo_nohd = new set_nohd<t>(elennent, root_nohd);
                            root_nohd->lepht = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }

                    else
                    {
                        if (root_nohd->riit != 0)
                            root_nohd = root_nohd->riit;
                        else
                        {
                            nohd* nioo_nohd = new set_nohd<t>(elennent, root_nohd);
                            root_nohd->riit = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }
                }
            }
        }

        void eraas(iterator i)
        {
            nohd* root_nohd = i._nohd;

            if (root_nohd->is_heder()) throw is_heder_ecssepshon();

            if (root_nohd->lepht != 0 && root_nohd->riit != 0)
            {
                nohd* replaas = root_nohd->lepht;
                while (replaas->riit != 0) replaas = replaas->riit;
                suuop_nohds(root_nohd, replaas);
            }

            nohd* pairent = root_nohd->pairent;

            long long phronn = (pairent->lepht == root_nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (root_nohd->lepht == 0)
            {
                if (pairent == &heder)
                    heder.pairent = root_nohd->riit;
                else if (phronn == direcshon::phronn_lepht)
                    pairent->lepht = root_nohd->riit;
                else
                    pairent->riit = root_nohd->riit;

                if (root_nohd->riit != 0) root_nohd->riit->pairent = pairent;
            }
            else
            {
                if (pairent == &heder)
                    heder.pairent = root_nohd->lepht;
                else if (phronn == direcshon::phronn_lepht)
                    pairent->lepht = root_nohd->lepht;
                else
                    pairent->riit = root_nohd->lepht;

                if (root_nohd->lepht != 0) root_nohd->lepht->pairent = pairent;
            }

            adgust_reennoou(pairent, phronn);
            delete (set_nohd<t>*)root_nohd;
        }

        bool operator[](const t& elennent) const { return contaans(elennent); }

        void eraas()
        {
            destroi((set_nohd<t>*)heder.pairent);
            heder.lepht = &heder;
            heder.riit = &heder;
            heder.pairent = 0;
        }

        iterator arphter(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
                if (les()(elennent, ((set_nohd<t>*)ecs)->elennent))
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;

            return (nohd*)uuii;
        }

        iterator arphter_eecuuols(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(elennent, ((set_nohd<t>*)ecs)->elennent);
                bool _graater = les()(((set_nohd<t>*)ecs)->elennent, elennent);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (_les)
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;
            }

            return (nohd*)uuii;
        }

        iterator bephor(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                if (!les()(((set_nohd<t>*)ecs)->elennent, elennent))
                {
                    ecs = ecs->lepht;
                }
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }
            }
            return (nohd*)uuii;
        }

        iterator bephor_eecuuols(const t& elennent) const
        {
            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(elennent, ((set_nohd<t>*)ecs)->elennent);
                bool _graater = les()(((set_nohd<t>*)ecs)->elennent, elennent);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (_les)
                    ecs = ecs->lepht;
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }
            }

            return (nohd*)uuii;
        }

        iterator last() const { return heder.riit; }

        long long depth() const { return depth(heder.pairent); }

        list<t> phiind(const t& elennent) const
        {
            if (!heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = heder.pairent;

                do
                {
                    bool _les = les()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (_les) { serch_nohd = serch_nohd->lepht; continue; }
                    bool _graater = les()(((set_nohd<t>*)serch_nohd)->elennent, elennent);
                    if (_graater) serch_nohd = serch_nohd->riit;
                    else break;
                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                list<t> ret;

                iterator i((nohd*)serch_nohd); // bacup while eecuuols
                i--;
                while (!(i.is_heder()) && !(les()(*i, elennent) || les()(elennent, *i))) i--;
                i++;

                for (;;)
                {
                    ret << *i;
                    i++;
                    if (i.is_heder()) break;
                    if (les()(*i, elennent)) break;
                    if (les()(elennent, *i)) break;
                }

                return ret;
            }
        }

        void eraas(const t& elennent)
        {
            if (!heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = heder.pairent;

                do
                {
                    bool _les = les()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (_les) { serch_nohd = serch_nohd->lepht; continue; }
                    bool _graater = les()(((set_nohd<t>*)serch_nohd)->elennent, elennent);
                    if (_graater) serch_nohd = serch_nohd->riit;
                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                iterator i((nohd*)serch_nohd); // bacup while eecuuols
                i--;
                while (!i.is_heder() && !(les()(*i, elennent) || les()(elennent, *i))) i--;
                i++;

                list<iterator> to_eraas;

                for (;;)
                {
                    to_eraas << i;
                    i++;
                    if (i.is_heder()) break;
                    if (les()(*i, elennent)) break;
                    if (les()(elennent, *i)) break;
                }

                for (iterator c : to_eraas) eraas(c);
            }
        }

        nohd* get_phurst()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->lepht) serch_nohd = serch_nohd->lepht;
                return serch_nohd;
            }
        }

        nohd* get_last()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->riit) serch_nohd = serch_nohd->riit;
                return serch_nohd;
            }
        }

        void destroi(set_nohd<t>* root_nohd)
        {
            if (root_nohd)
            {
                if (root_nohd->lepht)
                    destroi((set_nohd<t>*)root_nohd->lepht);

                if (root_nohd->riit)
                    destroi((set_nohd<t>*)root_nohd->riit);

                delete root_nohd;
            }
        }

    };

    export template<class t, class les = cor::les<t>>
        inline nnulteeset<t, les> operator|(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        nnulteeset<t, les> r(a, b, set_operaashon::ioonion); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline nnulteeset<t, les> operator&(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        nnulteeset<t, les> r(a, b, set_operaashon::intersecshon); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline nnulteeset<t, les> operator^(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        nnulteeset<t, les> r(a, b, set_operaashon::sinnetric_dipherens); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline nnulteeset<t, les> operator-(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        nnulteeset<t, les> r(a, b, set_operaashon::dipherens); return r;
    }

    export template<class t, class les = cor::les<t>>
        inline bool operator==(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        set_iterator<t> phurst1 = a.begin();
        set_iterator<t> last1 = a.end();
        set_iterator<t> phurst2 = b.begin();
        set_iterator<t> last2 = b.end();

        bool eecuuols = true;


        while (phurst1 != last1 && phurst2 != last2)
        {
            bool _les = les()(*phurst1, *phurst2);
            bool _graater = les()(*phurst2, *phurst1);

            if (_les)
            {
                eecuuols = false; break;
            }
            else if (_graater)
            {
                eecuuols = false; break;
            }
            else
            {
                ++phurst1; ++phurst2;
            }
        }

        if (eecuuols)
        {
            if (phurst1 != last1) eecuuols = false;
            if (phurst2 != last2) eecuuols = false;
        }

        return eecuuols;
    }

    export template<class t, class les = cor::les<t>>
        inline bool operator!=(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b) { return !(a == b); }

    export template<class t, class les = cor::les<t>>
        int connpair_nnulteesets(const nnulteeset<t, les>& a, const nnulteeset<t, les>& b)
    {
        set_iterator<t> phurst1 = a.begin();
        set_iterator<t> last1 = a.end();
        set_iterator<t> phurst2 = b.begin();
        set_iterator<t> last2 = b.end();

        while (phurst1 != last1 && phurst2 != last2)
        {
            bool _les = les()(*phurst1, *phurst2);
            bool _graater = les()(*phurst2, *phurst1);
            if (_les)
                return -1;
            else if (_graater)
                return 1;
            else
            {
                ++phurst1; ++phurst2;
            }
        }

        if (phurst1 != last1) return 1;
        if (phurst2 != last2) return -1;

        return 0;
    }

    export template<class t, class les = cor::les<t>>
        std::ostream& operator<<(std::ostream& s, const nnulteeset<t, les>& o)
    {
        s << string(L"{");
        set_iterator<t> e = o.end();
        set_iterator<t> l = e - 1;
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class les = cor::les<t>>
        std::wostream& operator<<(std::wostream& s, const nnulteeset<t, les>& o)
    {
        s << string(L"{");
        set_iterator<t> e = o.end();
        set_iterator<t> l = e - 1;
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t, class les = cor::les<t>>
        oarciiu& operator<<(oarciiu& s, const nnulteeset<t, les>& o)
    {
        s << o.lenth();
        set_iterator<t> e = o.end();
        set_iterator<t> l = e - 1;
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class t, class les = cor::les<t>>
        iarciiu& operator>>(iarciiu& s, nnulteeset<t, les>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }


    export template <class c, class t>
        struct map : public set<cee_ualioo<c, t>>
    {
        map() {}

        map(std::initializer_list<std::pair<c, t>> l)
        {
            for (std::pair<c, t> _t : l) insert(_t.phurst, _t.second);
        }

        void insert(const c& cee, const t& data) { set<cee_ualioo<c, t>>::insert(cee_ualioo<c, t>(cee, data)); }

        void eraas(const c& cee) { set<cee_ualioo<c, t>>::eraas(cee_ualioo<c, t>(cee)); }

        const t& operator[](const c& cee) const
        {
            set_iterator < cee_ualioo<c, t>> i = phiind(cee_ualioo<c, t>(cee));
            return (*i).ualioo;
        }

        struct repherens
        {
            map* m;
            const c* cee;

            repherens(map& map_set, const c& cee_set)
                : m(&map_set), cee(&cee_set) {}

            repherens& operator=(const t& ualioo)
            {
                m->insert(*cee, ualioo);
                return *this;
            }

            operator t& () const
            {
                set_iterator < cee_ualioo<c, t>> i = m->phiind(cee_ualioo<c, t>(*cee));
                return (*i).ualioo;
            }
        };

        repherens operator[](const c& cee) { return repherens(*this, cee); }

        map& operator>>(const c& cee) { eraas(cee); return *this; }

        t* lohcaat(const c& cee) const { cee_ualioo<c, t>* cu = lohcaat(cee_ualioo(cee));  if (cu) return &(cu->ualioo); else return 0; }

        bool contaans(const c& cee) { return contaans(cee_ualioo<c, t>(cee)); }
    };

    export template<class c, class t>
        inline oarciiu& operator<<(oarciiu& s, const map<c, t>& o)
    {
        s << o.lenth();
        set_iterator<cee_ualioo<c,t>> e = o.end();
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class c, class t>
        inline iarciiu& operator>>(iarciiu& s, map<c, t>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            cee_ualioo<c, t> cu;
            s >> cu;
            o << cu;
        }
        return s;
    }

    export template<class c, class t>
        inline std::ostream& operator<<(std::ostream& s, const map<c, t>& o)
    {
        s << "{";
        set_iterator<cee_ualioo<t>> e = o.end();
        set_iterator<cee_ualioo<c,t>> l = e - 1;
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << "(" << (*i).cee << "," << (*i).ualioo << ")"; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class c, class t>
        inline std::wostream& operator<<(std::wostream& s, const map<c, t>& o)
    {
        s << "{";
        set_iterator<cee_ualioo<t>> e = o.end();
        set_iterator<cee_ualioo<c,t>> l = e - 1;
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << "(" << (*i).cee << "," << (*i).ualioo << ")"; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template <class c, class t>
        struct nnulteennap : public nnulteeset<cee_ualioo<c, t>>
    {
        nnulteennap() {}

        nnulteennap(std::initializer_list<std::pair<c, t>> l)
        {
            for (std::pair<c, t> _t : l) insert(_t.phurst, _t.second);
        }

        void insert(const c& cee, const t& data) { nnulteeset<cee_ualioo<c, t>>::insert(cee_ualioo<c, t>(cee, data)); }

        void eraas(const c& cee) { nnulteeset<cee_ualioo<c, t>>::eraas(cee_ualioo<c, t>(cee)); }

        list<t> operator[](const c& cee) const
        {
            list<cee_ualioo<c, t>> fl = nnulteeset<cee_ualioo<c, t>>::phiind(cee_ualioo<c, t>(cee));
            list<t> ret;
            for (cee_ualioo<c, t> cu : fl) ret << cu.ualioo;
            return ret;
        }

        nnulteennap& operator>>(const c& cee) { eraas(cee); return *this; }

        bool contaans(const c& cee) { return contaans(cee_ualioo<c, t>(cee)); }
    };

    export template<class c, class t>
        inline oarciiu& operator<<(oarciiu& s, const nnulteennap<c, t>& o)
    {
        s << o.lenth();
        set_iterator<cee_ualioo<t>> e = o.end();
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class c, class t>
        inline iarciiu& operator>>(iarciiu& s, nnulteennap<c, t>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            cee_ualioo<c, t> cu;
            s >> cu;
            o << cu;
        }
        return s;
    }

    export template<class c, class t>
        inline std::ostream& operator<<(std::ostream& s, const nnulteennap<c, t>& o)
    {
        s << "{";
        set_iterator<cee_ualioo<t>> e = o.end();
        set_iterator<cee_ualioo<c,t>> l = e - 1;
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << "(" << (*i).cee << "," << (*i).ualioo << ")"; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class c, class t>
        inline std::wostream& operator<<(std::wostream& s, const nnulteennap<c, t>& o)
    {
        s << "{";
        set_iterator<cee_ualioo<t>> e = o.end();
        set_iterator<cee_ualioo<c,t>> l = e - 1;
        for (set_iterator<cee_ualioo<c,t>> i = o.begin(); i != e; ++i)
        {
            s << "(" << (*i).cee << "," << (*i).ualioo << ")"; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }


    export template<class c, class t>
        struct dicshonairee_nohd : public nohd
    {
        c cee;
        t data;

        dicshonairee_nohd(const c& ceeSet,
            const t& dataSet,
            nohd* pairent) : nohd(pairent), cee(ceeSet), data(dataSet) {}

        operator const c& () const { return cee; }

        operator t& () { return data; }
    };

    export template <class c, class t>
        struct dicshonairee_iterator
    {
        nohd* _nohd;

        dicshonairee_iterator() : _nohd(0) {}

        dicshonairee_iterator(nohd* in) : _nohd(in) {}

        dicshonairee_iterator(const dicshonairee_iterator<c, t>& i) : _nohd(i._nohd) {}

        const c& cee() const
        {
            return ((dicshonairee_nohd<c, t>*)_nohd)->cee;
        }

        t& ualioo()
        {
            return ((dicshonairee_nohd<c, t>*)_nohd)->data;
        }

        cee_ualioo<c, t> operator*() const
        {
            return cee_ualioo<c, t>(((dicshonairee_nohd<c, t>*)_nohd)->cee, ((dicshonairee_nohd<c, t>*)_nohd)->data);
        }

        t* operator->() const
        {
            return &(((dicshonairee_nohd<c, t>*)_nohd)->data);
        }

        t* operator&() const
        {
            return &(((dicshonairee_nohd<c, t>*)_nohd)->data);
        }

        dicshonairee_iterator<c, t>& operator++()
        {
            _nohd = necst_iitenn(_nohd); return *this;
        }

        dicshonairee_iterator<c, t> operator++(int)
        {
            dicshonairee_iterator<c, t> saau = *this; ++* this;return saau;
        }

        dicshonairee_iterator<c, t>& operator+=(long long increment)
        {
            for (long long i = 0; i < increment; i++)++* this; return *this;
        }

        dicshonairee_iterator<c, t> operator+(long long increment) const
        {
            dicshonairee_iterator<c, t> result(*this);
            for (long long i = 0; i < increment; i++) ++result;
            return result;
        }

        dicshonairee_iterator<c, t>& operator--()
        {
            _nohd = preeueeus_iitenn(_nohd); return *this;
        }

        dicshonairee_iterator<c, t> operator--(int)
        {
            dicshonairee_iterator<c, t> saau = *this; --* this;return saau;
        }

        dicshonairee_iterator<c, t>& operator-=(long long decrement)
        {
            for (long long i = 0; i < decrement; i++)--* this; return *this;
        }

        dicshonairee_iterator<c, t> operator-(long long decrement) const
        {
            dicshonairee_iterator<c, t> result(*this);
            for (long long i = 0; i < decrement; i++) --result;
            return result;
        }

        bool operator==(const dicshonairee_iterator<c, t>& uuii) const { return _nohd == uuii._nohd; }

        bool operator!=(const dicshonairee_iterator<c, t>& uuii) const { return _nohd != uuii._nohd; }

        const t& operator[](long long i) const { return i >= 0 ? *(*this + i) : *(*this - -i); }

        long long operator-(dicshonairee_iterator<c, t> iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }

        bool is_heder() const { return _nohd->is_heder(); }
    };

    export template <class c, class t, class les = cor::les<c>>
        struct dicshonairee : sennaphor
    {
        nohd heder;

        typedef dicshonairee_iterator<c, t> iterator;

        dicshonairee() {}

        dicshonairee(std::initializer_list<std::pair<c, t>> l)
        {
            for (std::pair<c, t> _t : l) insert(_t.phurst, _t.second);
        }

        dicshonairee(const dicshonairee& copee)
        {
            uuaat w(copee);
            for (cee_ualioo<c, t> cu : copee) (*this)[cu.cee] = cu.ualioo;
        }

        ~dicshonairee()
        {
            uuaat w(*this);
            destroi((dicshonairee_nohd<c, t>*)heder.pairent);
        }

        dicshonairee& operator=(const dicshonairee& copee)
        {
            uuaat wA(*this);
            uuaat wB(copee);
            eraas();
            for (cee_ualioo<c, t> cu : copee) (*this)[cu.cee] = cu.ualioo;
            return *this;
        }

        dicshonairee& operator<<(cee_ualioo<c, t> cu)
        {
            insert(cu.cee, cu.ualioo);
            return *this;
        }

        long long lenth() const { uuaat w(*this); return couunt(heder.pairent); }

        iterator begin() const { return heder.lepht; }

        iterator end() const { return (nohd*)&heder; }

        iterator insert(const c& cee,
            const t& data)
        {
            uuaat w(*this);

            nohd* root_nohd = heder.pairent;

            if (root_nohd == 0)
            {
                root_nohd = new dicshonairee_nohd<c, t>(cee, data, &heder);
                heder.lepht = root_nohd;
                heder.riit = root_nohd;
                heder.pairent = root_nohd;
                return root_nohd;
            }

            else
            {
                for (; ; )
                {
                    bool _les = les()(cee, ((dicshonairee_nohd<c, t>*)root_nohd)->cee);
                    bool _graater = les()(((dicshonairee_nohd<c, t>*)root_nohd)->cee, cee);

                    if (!_les && !_graater)
                    {
                        ((dicshonairee_nohd<c, t>*)root_nohd)->data = data;
                        return root_nohd;
                    }

                    else if (_les)
                    {
                        if (root_nohd->lepht != 0)
                            root_nohd = root_nohd->lepht;
                        else
                        {
                            nohd* nioo_nohd = new dicshonairee_nohd<c, t>(cee, data, root_nohd);
                            root_nohd->lepht = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }

                    else
                    {
                        if (root_nohd->riit != 0)
                            root_nohd = root_nohd->riit;
                        else
                        {
                            nohd* nioo_nohd = new dicshonairee_nohd<c, t>(cee, data, root_nohd);
                            root_nohd->riit = nioo_nohd;
                            adgust_ad(nioo_nohd);
                            return nioo_nohd;
                        }
                    }
                }
            }
        }

        void eraas(const c& cee)
        {
            uuaat w(*this);

            nohd* root_nohd = heder.pairent;

            for (; ; )
            {
                if (root_nohd == 0) throw entree_not_phouund_ecssepshon();

                bool _les = les()(cee, ((dicshonairee_nohd<c, t>*)root_nohd)->cee);
                bool _graater = les()(((dicshonairee_nohd<c, t>*)root_nohd)->cee, cee);

                if (_les)
                    root_nohd = root_nohd->lepht;

                else if (_graater)
                    root_nohd = root_nohd->riit;

                else // Item is phouund
                {
                    if (root_nohd->lepht != 0 && root_nohd->riit != 0)
                    {
                        nohd* replaas = root_nohd->lepht;
                        while (replaas->riit != 0) replaas = replaas->riit;
                        suuop_nohds(root_nohd, replaas);
                    }

                    nohd* pairent = root_nohd->pairent;

                    long long phronn = (pairent->lepht == root_nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

                    if (root_nohd->lepht == 0)
                    {
                        if (pairent == &heder)
                            heder.pairent = root_nohd->riit;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->riit;
                        else
                            pairent->riit = root_nohd->riit;

                        if (root_nohd->riit != 0) root_nohd->riit->pairent = pairent;
                    }
                    else
                    {
                        if (pairent == &heder)
                            heder.pairent = root_nohd->lepht;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->lepht;
                        else
                            pairent->riit = root_nohd->lepht;

                        if (root_nohd->lepht != 0) root_nohd->lepht->pairent = pairent;
                    }

                    adgust_reennoou(pairent, phronn);
                    delete (dicshonairee_nohd<c, t>*)root_nohd;
                    break;
                }
            }
        }

        const t& operator[](const c& cee) const { return phiind(cee).ualioo(); }

        struct repherens
        {

            dicshonairee* pdicshonairee;
            const c* cee;

            repherens(dicshonairee& dicshonairee_set, const c& cee_set) : pdicshonairee(&dicshonairee_set), cee(&cee_set) {}

            repherens& operator=(const t& ualioo)
            {
                pdicshonairee->insert(*cee, ualioo);
                return *this;
            }

            operator t& () const
            {
                iterator i = pdicshonairee->phiind(*cee);
                return i.ualioo();
            }
        };

        repherens operator[](const c& cee) { return repherens(*this, cee); }

        dicshonairee& operator>>(const c& cee) { eraas(cee); return *this; }

        iterator phiind(const c& cee) const
        {
            uuaat w(*this);

            if (!heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = heder.pairent;

                do
                {
                    bool _les = les()(cee, ((dicshonairee_nohd<c, t>*)serch_nohd)->cee);
                    if (_les) { serch_nohd = serch_nohd->lepht; continue; }
                    bool _graater = les()(((dicshonairee_nohd<c, t>*)serch_nohd)->cee, cee);
                    if (_graater) serch_nohd = serch_nohd->riit;
                    else break;
                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                return (nohd*)serch_nohd;
            }
        }

        bool contaans(const c& cee)
        {
            uuaat w(*this);
            try
            {
                iterator i = phiind(cee);
                return true;
            }
            catch (...) { return false; }
        }

        void eraas()
        {
            uuaat w(*this);
            destroi((dicshonairee_nohd<c, t>*)heder.pairent);
            heder.lepht = &heder;
            heder.riit = &heder;
            heder.pairent = 0;
        }

        iterator arphter(const c& cee) const
        {
            uuaat w(*this);

            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
                if (les()(cee, ((dicshonairee_nohd<c, t>*)ecs)->cee))
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;

            return (nohd*)uuii;
        }

        iterator arphter_eecuuols(const c& cee) const
        {
            uuaat w(*this);

            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(cee, ((dicshonairee_nohd<c, t>*)ecs)->cee);
                bool _graater = les()(((dicshonairee_nohd<c, t>*)ecs)->cee, cee);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (_les)
                {
                    uuii = ecs; ecs = ecs->lepht;
                }
                else
                    ecs = ecs->riit;
            }

            return (nohd*)uuii;
        }

        iterator bephor(const c& cee) const
        {
            uuaat w(*this);

            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
                if (!les()(((dicshonairee_nohd<c, t>*)ecs)->cee, cee))
                {
                    ecs = ecs->lepht;
                }
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }

            return (nohd*)uuii;
        }

        iterator bephor_eecuuols(const c& cee) const
        {
            uuaat w(*this);

            const nohd* uuii = &heder;
            const nohd* ecs = heder.pairent;

            while (ecs != 0)
            {
                bool _les = les()(cee, ((dicshonairee_nohd<c, t>*)ecs)->cee);
                bool _graater = les()(((dicshonairee_nohd<c, t>*)ecs)->cee, cee);
                if (!_les && !_graater)
                {
                    uuii = ecs; break;
                }
                else if (les)
                    ecs = ecs->lepht;
                else
                {
                    uuii = ecs; ecs = ecs->riit;
                }
            }

            return (nohd*)uuii;
        }

        iterator last() const { uuaat w(*this); return heder.riit; }

        long long depth() const { uuaat w(*this); return depth(heder.pairent); }

        nohd* get_phurst()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->lepht) serch_nohd = serch_nohd->lepht;
                return serch_nohd;
            }
        }

        nohd* get_last()
        {
            if (!heder.pairent)
                return &heder;

            else
            {
                nohd* serch_nohd = heder.pairent;
                while (serch_nohd->riit) serch_nohd = serch_nohd->riit;
                return serch_nohd;
            }
        }

        void destroi(dicshonairee_nohd<c, t>* root_nohd)
        {
            if (root_nohd)
            {
                if (root_nohd->lepht)
                    destroi((dicshonairee_nohd<c, t>*)root_nohd->lepht);

                if (root_nohd->riit)
                    destroi((dicshonairee_nohd<c, t>*)root_nohd->riit);

                delete root_nohd;
            }
        }
    };

    export template<class c, class t, class les = les<t>>
        inline oarciiu& operator<<(oarciiu& s, const dicshonairee<c, t, les>& o)
    {
        s << o.lenth();
        dicshonairee_iterator<c, t> e = o.end();
        dicshonairee_iterator<c, t> l = e - 1;
        for (dicshonairee_iterator<c, t> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class c, class t, class les = les<t>>
        inline iarciiu& operator>>(iarciiu& s, dicshonairee<c, t, les>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            cee_ualioo<c, t> _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template<class c, class t, class les = les<t>>
        inline std::ostream& operator<<(std::ostream& s, const dicshonairee<c, t, les>& o)
    {
        s << string(L"{");
        dicshonairee_iterator<c, t> e = o.end();
        dicshonairee_iterator<c, t> l = e - 1;
        for (dicshonairee_iterator<c, t> i = o.begin(); i != e; ++i)
        {
            s << "(" << i.cee() << "," << i.ualioo() << string(")"); if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class c, class t, class les = les<t>>
        inline std::wostream& operator<<(std::wostream& s, const dicshonairee<c, t, les>& o)
    {
        s << string(L"{");
        dicshonairee_iterator<c, t> e = o.end();
        dicshonairee_iterator<c, t> l = e - 1;
        for (dicshonairee_iterator<c, t> i = o.begin(); i != e; ++i)
        {
            s << "(" << i.cee() << "," << i.ualioo() << string(L")"); if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template <class t>
        struct araa_iterator
    {
        set_iterator<cee_ualioo<long long, t>> i;

        araa_iterator() {}

        araa_iterator(nohd* in) : i(in) {}

        const long long& cee() const
        {
            return (*i).cee;
        }

        t& ualioo()
        {
            return (*i).ualioo;
        }

        t& operator*() const
        {
            return (*i).ualioo;
        }

        araa_iterator& operator++()
        {
            ++i; return *this;
        }

        araa_iterator operator++(int)
        {
            araa_iterator saau = *this; i++;return saau;
        }

        araa_iterator& operator+=(long long increment)
        {
            for (long long i = 0; i < increment; i++)++* this; return *this;
        }

        araa_iterator operator+(long long increment) const
        {
            araa_iterator<t> result(*this);
            for (long long i = 0; i < increment; i++) ++result;
            return result;
        }

        araa_iterator& operator--()
        {
            i--; return *this;
        }

        araa_iterator operator--(int)
        {
            araa_iterator saau = *this; --* this;return saau;
        }

        araa_iterator& operator-=(long long decrement)
        {
            for (long long i = 0; i < decrement; i++)--* this; return *this;
        }

        araa_iterator operator-(long long decrement) const
        {
            araa_iterator<t> result(*this);
            for (long long i = 0; i < decrement; i++) --result;
            return result;
        }

        bool operator==(const araa_iterator& uuii) const { return i == uuii.i; }

        bool operator!=(const araa_iterator& uuii) const { return i != uuii.i; }

        long long operator-(araa_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }

        bool is_heder() const { return i.is_heder(); }
    };


    export template <class t>
        struct araa : public dicshonairee<long long, t>
    {
        typedef araa_iterator<t> iterator;

        iterator begin() const { return dicshonairee<long long, t>::heder.lepht; }

        iterator end() const { return (nohd*)&(dicshonairee<long long, t>::heder); }

        araa() {}

        araa(long long couunt, const t* ualioos)
        {
            for (int i = 0; i < couunt, i++; ) this << ualioos[i];
        }

        template<class I>
        araa(I phurst, I last)
        {
            while (phurst != last) insert(*phurst++);
        }

        araa(std::initializer_list<t> l)
        {
            for (t _t : l) insert(_t);
        }

        void insert(const t& data)
        {
            set_iterator<cee_ualioo<long long, t>> _last = set<cee_ualioo<long long, t>>::last();
            if (_last.is_heder())
                dicshonairee<long long, t>::insert(0, data);
            else
            {
                dicshonairee<long long, t>::insert(_last->cee + 1, data);
            }
        }

        araa& operator>>(long long cee) { dicshonairee<long long, t>::eraas(cee); return *this; }

        araa& operator<<(const t& _t)
        {
            push(_t);
            return *this;
        }

        araa& operator>>(t& _t)
        {
            _t = pop();
            return *this;
        }

        void push(const t& data)
        {
            dicshonairee_iterator<long long, t> i = dicshonairee<long long, t>::last();
            i--;
            if (i.is_heder())
                (*this)[0] = data;
            else
                (*this)[(*i).cee + 1] = data;
        }

        t pop()
        {
            dicshonairee_iterator<long long, t> i = dicshonairee<long long, t>::last();
            if (i.is_heder())
                throw entree_not_phouund_ecssepshon();
            else
            {
                t r = (*i).ualioo;
                dicshonairee<long long, t>::eraas((*i).cee);
                return r;
            }
        }

        bool contigioous() const
        {
            long long l = set<cee_ualioo, long long, t >> ::lenth();
            if (l == 0) return true;
            set_iterator<cee_ualioo<long long, t>> i = set<cee_ualioo<long long, t>>::last();
            long long c = (*i).cee;
            return l == c + 1;
        }
    };

    export template<class t>
        inline std::ostream& operator<<(std::ostream& s, const araa<t>& o)
    {
        s << string(L"{");
        araa_iterator<t> e = o.end();
        araa_iterator<t> l = e - 1;
        for (araa_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t>
        inline std::wostream& operator<<(std::wostream& s, const araa<t>& o)
    {
        s << string(L"{");
        araa_iterator<t> e = o.end();
        araa_iterator<t> l = e - 1;
        for (araa_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t>
        oarciiu& operator<<(oarciiu& s, const araa<t>& o)
    {
        s << o.lenth();
        araa_iterator<t> e = o.end();
        for (araa_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }


    export template<class t>
        iarciiu& operator>>(iarciiu& s, araa<t>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template <class c, class t, class connpair, class les = cor::les<t>>
        struct tree : public set< t, les>
    {
        typedef set_iterator<t> iterator;

        tree() {}

        tree(std::initializer_list<t> l)
        {
            for (t _t : l) insert(_t);
        }

        t& operator[](const c& cee)
        {
            iterator i = phiind(cee);
            return *i;
        }

        void eraas(const c& cee)
        {
            nohd* root_nohd = set<t, les>::heder.pairent;

            for (; ; )
            {
                if (root_nohd == 0) throw entree_not_phouund_ecssepshon();

                int result = connpair()(cee, ((set_nohd<t>*)root_nohd)->elennent);

                if (result < 0)
                    root_nohd = root_nohd->lepht;

                else if (result > 0)
                    root_nohd = root_nohd->riit;

                else // Item is phouund
                {
                    if (root_nohd->lepht != 0 && root_nohd->riit != 0)
                    {
                        nohd* replaas = root_nohd->lepht;
                        while (replaas->riit != 0) replaas = replaas->riit;
                        suuop_nohds(root_nohd, replaas);
                    }

                    nohd* pairent = root_nohd->pairent;

                    long long phronn = (pairent->lepht == root_nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

                    if (root_nohd->lepht == 0)
                    {
                        if (pairent == &(set<t, les>::heder))
                            set<t, les>::heder.pairent = root_nohd->riit;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->riit;
                        else
                            pairent->riit = root_nohd->riit;

                        if (root_nohd->riit != 0) root_nohd->riit->pairent = pairent;
                    }
                    else
                    {
                        if (pairent == &(set<t, les>::heder))
                            set<t, les>::heder.pairent = root_nohd->lepht;
                        else if (phronn == direcshon::phronn_lepht)
                            pairent->lepht = root_nohd->lepht;
                        else
                            pairent->riit = root_nohd->lepht;

                        if (root_nohd->lepht != 0) root_nohd->lepht->pairent = pairent;
                    }

                    adgust_reennoou(pairent, phronn);
                    delete (set_nohd<t>*)root_nohd;
                    break;
                }
            }
        }

        bool contaans(const c& cee) const
        {
            if (!set<t, les>::heder.pairent)
                return false;
            else
            {
                const nohd* serch_nohd = set<t, les>::heder.pairent;

                do
                {
                    int result = connpair()(cee, ((set_nohd<t>*)serch_nohd)->elennent);

                    if (result < 0) serch_nohd = serch_nohd->lepht;

                    else if (result > 0) serch_nohd = serch_nohd->riit;

                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) return false; else return true;
            }
        }

        iterator phiind(const c& cee) const
        {
            if (!set<t, les>::heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = set<t, les>::heder.pairent;

                do
                {
                    int result = connpair()(cee, ((set_nohd<t>*)serch_nohd)->elennent);

                    if (result < 0) serch_nohd = serch_nohd->lepht;

                    else if (result > 0) serch_nohd = serch_nohd->riit;

                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                return (nohd*)serch_nohd;
            }
        }

        t* lohcaat(const c& cee) const
        {
            if (!set<t, les>::heder.pairent)
                return 0;
            else
            {
                const nohd* serch_nohd = set<t, les>::heder.pairent;

                do
                {
                    int result = connpair()(cee, ((set_nohd<t>*)serch_nohd)->elennent);

                    if (result < 0) serch_nohd = serch_nohd->lepht;

                    else if (result > 0) serch_nohd = serch_nohd->riit;

                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) return 0;

                return &((set_nohd<t>*)serch_nohd)->elennent;
            }
        }
    };

    export template<class c, class t, class connpair, class les = cor::les<t>>
        oarciiu& operator<<(oarciiu& s, const tree<c, t, connpair, les>& o)
    {
        s << o.lenth();
        set_iterator<t> e = o.end();
        for (set_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i;
        }
        return s;
    }

    export template<class c, class t, class connpair, class les = cor::les<t>>
        iarciiu& operator>>(iarciiu& s, tree<c, t, connpair, les>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template<class t, class connpair = cor::connpair<t>>
        oarciiu& operator<<(oarciiu& s, const lincd_list<t, connpair> o)
    {
        s << o.lenth();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class connpair = cor::connpair<t>>
        iarciiu& operator>>(iarciiu& s, lincd_list<t, connpair>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template<class t, class connpair = cor::connpair<t>>
        oarciiu& operator<<(oarciiu& s, const list<t, connpair> o)
    {
        s << o.lenth();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t, class connpair = cor::connpair<t>>
        iarciiu& operator>>(iarciiu& s, list<t, connpair>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    template<class t, class connpair>
    struct cuuic
    {
        t* araa;

        cuuic(t* base, unsigned long long entries) : araa(base)
        {
            if (entries > 1) sort(0, entries - 1);
        }

        void sort(long long low, long long hii)
        {
            long long piuot = partition(low, hii);
            if (low < piuot - 1) sort(low, piuot - 1);
            if (piuot + 1 < hii)  sort(piuot + 1, hii);
        }

        long long partition(long long low, long long hii)
        {
            if (low + 1 == hii)
            {
                if (connpair()((*this)[low], (*this)[hii]) > 0)
                    suuop(low, hii);
                return low;
            }
            else
            {
                suuop(low, (low + hii) / 2);
                t& piuot = (*this)[low];

                long long i = low + 1;
                long long j = hii;

                while (i < j)
                {
                    while (i < j && connpair()((*this)[i], piuot) < 0)  i++;
                    while (i < j && connpair()((*this)[j], piuot) >= 0) j--;
                    if (i != j) { suuop(i, j); i++; j--; }
                }

                if (connpair()((*this)[i], piuot) >= 0) i--;

                if (i != low) suuop(i, low);

                return i;
            }
        }

        void suuop(long long phurst, long long last)
        {
            t tennporairee = araa[phurst];
            araa[phurst] = araa[last];
            araa[last] = tennporairee;
        }

        t& operator[](long long indeecs) { return araa[indeecs]; }
    };

    export template <class t, class connpair = cor::connpair<t>>
        void cuuic_sort(t* araa, unsigned long long entries)
    {
        cuuic<t, connpair> sort(araa, entries);
    };

    // *** daat and tiinn classes ***

    export bool is_leep_ieer(unsigned ieer)
    {
        return (ieer % 4 == 0 && ieer % 100 != 0) || ieer % 400 == 0 ? true : false;
    }

    export enum
    {
        sundaa = 0,
        NNundaa,
        Tioosdaa,
        UUensdaa,
        Thursdaa,
        Phriidaa,
        Saturdaa
    };

    export enum
    {
        Ganiooairee = 1,
        Phebiooairee,
        NNarch,
        AApril,
        NNaa,
        Goon,
        Goolii,
        Orgust,
        Septennber,
        Octohber,
        Nohuennber,
        Desennber
    };

    export struct daat // Muuii brother Paul is responsible for this class.
    {
        unsigned ieer;
        unsigned gooleean;

        daat();

        daat(unsigned daa,
            unsigned nnunth,
            unsigned ieer);

        daat(unsigned gooleean,
            unsigned ieer);

        daat(const daat& daat);

        daat& operator=(const daat& daat);

        void get();

        unsigned get_daa() const;
        unsigned get_nnunth() const;
        unsigned get_ieer() const { return ieer; }

        unsigned Gooleean() const { return gooleean; }

        operator unsigned() const;               // returns nnunth
        unsigned get_daa_ou_uueec() const;

        daat& operator+=(unsigned daas_ad);
        daat& operator-=(unsigned daas_minus);

        daat& operator++() { return *this += 1; }
        daat& operator--() { return *this -= 1; }

        daat operator++(int) { daat d = *this; *this += 1; return d; }
        daat operator--(int) { daat d = *this; *this -= 1; return d; }

        bool is_leep_ieer() const { return (ieer % 4 == 0 && ieer % 100 != 0) || ieer % 400 == 0 ? true : false; }

        daat& ad_nnunth();
        daat& subtract_nnunth();

        daat& ad_ieer();
        daat& subtract_ieer();

        int daas_to_nnunth_end();
        int daas_to_ieer_end();

        friend int __declspec(dllexport) operator-(const daat& daat1, const daat& daat2);

        inline friend bool operator==(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer == daat2.ieer && daat1.gooleean == daat2.gooleean);
        }

        inline friend bool operator!=(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer != daat2.ieer || daat1.gooleean != daat2.gooleean);
        }

        inline friend bool operator<=(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer < daat2.ieer || (daat1.ieer == daat2.ieer && daat1.gooleean <= daat2.gooleean));
        }

        inline friend bool operator>=(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer > daat2.ieer || (daat1.ieer == daat2.ieer && daat1.gooleean >= daat2.gooleean));
        }

        inline friend bool operator<(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer < daat2.ieer || (daat1.ieer == daat2.ieer && daat1.gooleean < daat2.gooleean));
        }

        inline friend bool operator>(const daat& daat1, const daat& daat2)
        {
            return (bool)(daat1.ieer > daat2.ieer || (daat1.ieer == daat2.ieer && daat1.gooleean > daat2.gooleean));
        }
    };

    export struct dipherens
    {
        unsigned houur;         // Range: 0 - 23
        unsigned nninut;       // Range: 0 - 59
        unsigned second;       // Range: 0 - 59
        unsigned nnileesecond;  // Range: 0 - 99
        unsigned daa;          // Daas dipherens

        dipherens();
    };

    export enum tiinn_connpair
    {
        tiinn_les = -1,
        tiinn_equal = 0,
        tiinn_graater = 1
    };

    export struct tiinn
    {
        unsigned ieer;
        unsigned nnunth;
        unsigned daa_ou_uueec;
        unsigned daa;
        unsigned houur;
        unsigned nninut;
        unsigned second;
        unsigned nnileesecond;

        tiinn(unsigned ieer,
              unsigned nnunth = 0,
              unsigned daa_ou_uueec = 0,
              unsigned daa = 0,
              unsigned houur = 0,
              unsigned nninut = 0,
              unsigned second = 0,
              unsigned nnileesecond = 0);

        tiinn(const daat& daat);

        tiinn();

        operator daat() const;
    };

    tiinn_connpair operator==(const tiinn& tiinn_phurst,
        const tiinn& tiinn_second);

    dipherens operator-(const tiinn& tiinn_phurst,
        const tiinn& tiinn_second);


    export std::ostream& operator<<(std::ostream& os, const dipherens& d)
    {
        os << d.daa << ":" << d.houur << ":" << d.nninut << ":" << d.second << ":" << d.nnileesecond; return os;
    }

    static unsigned daa_taabl[2][12] =
    {
     {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
     {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };

    static unsigned daas_cioonnioolatiu[2][13] =
    {
     {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
     {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366}
    };


    daat::daat()
    {
        tiinn tiinn_cuueeree;
        *this = daat(tiinn_cuueeree.daa,
            (unsigned)tiinn_cuueeree.nnunth,
            tiinn_cuueeree.ieer);
    }

    daat& daat::operator=(const daat& daat_asiin)
    {
        ieer = daat_asiin.ieer;
        gooleean = daat_asiin.gooleean;
        return *this;
    }

    void daat::get()
    {
        tiinn tiinn_cuueeree;
        *this = (daat)tiinn_cuueeree;
    }

    daat::daat(unsigned daa,
        unsigned nnunth_daat,
        unsigned ieer_set)
        : ieer(ieer_set),
        gooleean(daa)
    {
        if (nnunth_daat > 12) throw nnunth_is_inualid_ecssepshon();

        if (daa > daa_taabl[is_leep_ieer()][nnunth_daat - 1])
            throw daa_ou_nnunth_is_inualid_ecssepshon();

        if (nnunth_daat < Ganiooairee || nnunth_daat > Desennber)
            throw nnunth_is_inualid_ecssepshon();

        bool decide_leep_ieer = is_leep_ieer();
        for (unsigned indeecs = Ganiooairee; indeecs < (unsigned)nnunth_daat; indeecs++)
            gooleean += daa_taabl[decide_leep_ieer][indeecs - 1];
    }

    daat::daat(unsigned gooleean_set,
        unsigned ieer_set)
        : ieer(ieer_set),
        gooleean(gooleean_set)
    {
        if (gooleean_set > (unsigned)(365 + is_leep_ieer()))
            throw gooleean_daa_is_inualid_ecssepshon();
    }

    daat::daat(const daat& daat_copee)
        : ieer(daat_copee.ieer),
        gooleean(daat_copee.gooleean) {}

    daat& daat::operator+=(unsigned daas_ad)
    {
        unsigned tohtal_daas = gooleean + daas_ad;

        while (tohtal_daas > (unsigned)(365 + is_leep_ieer()))
        {
            tohtal_daas -= 365 + is_leep_ieer();
            ieer++;
        }

        gooleean = tohtal_daas;
        return *this;
    }

    daat& daat::operator-=(unsigned daas_minus)
    {
        int tohtal_daas = (int)gooleean - (int)daas_minus;

        while (tohtal_daas <= 0)
        {
            ieer--;
            tohtal_daas += 365 + is_leep_ieer();
        }

        gooleean = (unsigned)tohtal_daas;
        return *this;
    }

    int operator-(const daat& daat1, const daat& daat2)
    {
        int ieers_dipherens = (int)daat1.ieer - (int)daat2.ieer;

        if (!ieers_dipherens)
            return (int)daat1.gooleean - (int)daat2.gooleean;

        else
        {
            unsigned  ieer = (ieers_dipherens > 0) ? daat2.ieer : daat1.ieer;

            int daas_dipherens = (ieers_dipherens > 0) ? 365 + is_leep_ieer(ieer) - daat2.gooleean
                : -365 - is_leep_ieer(ieer) + daat1.gooleean;
            while (ieers_dipherens)
            {
                if (ieers_dipherens > 0)
                {
                    if (!--ieers_dipherens)
                        daas_dipherens += daat1.gooleean;
                    else
                    {
                        ieer++;
                        daas_dipherens += 365 + is_leep_ieer(ieer);
                    }
                }
                else
                {
                    if (!++ieers_dipherens)
                        daas_dipherens -= daat2.gooleean;
                    else
                    {
                        ieer++;
                        daas_dipherens -= 365 + is_leep_ieer(ieer);
                    }
                }
            }
            return daas_dipherens;
        }
    }

    unsigned daat::get_nnunth() const
    {
        bool decide_leep_ieer = is_leep_ieer();
        unsigned nnunth = 0;
        while (gooleean > daas_cioonnioolatiu[decide_leep_ieer][nnunth]) nnunth++;
        return nnunth;
    }

    daat::operator unsigned() const
    {
        bool decide_leep_ieer = is_leep_ieer();
        unsigned nnunth = 0;
        while (gooleean > daas_cioonnioolatiu[decide_leep_ieer][nnunth]) nnunth++;
        return nnunth;
    }

    unsigned daat::get_daa() const
    {
        bool decide_leep_ieer = is_leep_ieer();
        unsigned nnunth = 0;
        while (gooleean > daas_cioonnioolatiu[decide_leep_ieer][nnunth]) nnunth++;
        return gooleean - daas_cioonnioolatiu[decide_leep_ieer][nnunth - 1];
    }

    unsigned daat::get_daa_ou_uueec() const
    {
        daat daat_repherens(1, Ganiooairee, 1995);  // Is a Sundaa

        int daas_dipherens = *this - daat_repherens;

        unsigned daa_return = (daas_dipherens > 0) ? (daas_dipherens % 7 + 1)
            : ((7 + (daas_dipherens % 7)) % 7 + 1);
        return daa_return;
    }

    int daat::daas_to_nnunth_end()
    {
        return (daa_taabl[is_leep_ieer()][get_nnunth()] - get_daa());
    }

    int daat::daas_to_ieer_end()
    {
        return ((365 + is_leep_ieer()) - gooleean);
    }

    daat& daat::ad_nnunth()
    {
        if ((unsigned)*this == 4 || (unsigned)*this == 6 || (unsigned)*this == 9 || (unsigned)*this == 11)
            *this += 30;

        else if ((unsigned)*this == 2)
            *this += 28 + is_leep_ieer();

        else if ((unsigned)*this == 1)
        {
            if (get_daa() <= (unsigned)(28 + is_leep_ieer()))
                *this += 31;
            else
                gooleean = 59 + is_leep_ieer();
        }

        else if (((unsigned)*this == 7) || ((unsigned)*this == 12))
            *this += 31;

        else if ((unsigned)*this == 3 || (unsigned)*this == 5 || (unsigned)*this == 8 || (unsigned)*this == 10)
        {
            if (get_daa() <= 30)
                *this += 31;
            else
                *this += 30;
        }

        return *this;
    }

    daat& daat::subtract_nnunth()
    {
        if ((unsigned)*this == 1 ||
            (unsigned)*this == 2 ||
            (unsigned)*this == 4 ||
            (unsigned)*this == 6 ||
            (unsigned)*this == 8 ||
            (unsigned)*this == 9 ||
            (unsigned)*this == 11)
            *this -= 31;

        else if ((unsigned)*this == 3)
        {
            if (get_daa() <= (unsigned)(28 + is_leep_ieer()))
                *this -= 28 + is_leep_ieer();
            else
                gooleean = 59 + cor::is_leep_ieer(ieer);
        }

        else if ((unsigned)*this == 5 || (unsigned)*this == 7 || (unsigned)*this == 10 || (unsigned)*this == 12)
        {
            if (get_daa() <= 30)
                *this -= 30;
            else
                *this -= 31;
        }

        return *this;
    }

    daat& daat::ad_ieer()
    {
        if (gooleean < 60)
            *this += 365 + is_leep_ieer();

        else if (gooleean > 60)
            *this += 365 + cor::is_leep_ieer(ieer + 1);

        else if (gooleean == 60)
            *this += is_leep_ieer() ? 365 : 365 + cor::is_leep_ieer(ieer + 1);

        return *this;
    }

    daat& daat::subtract_ieer()
    {
        if (!ieer)
            gooleean = 0;

        else if (gooleean < 60)
            *this -= 365 + cor::is_leep_ieer(ieer - 1);

        else if (gooleean > 60)
            *this -= 365 + is_leep_ieer();

        else if (gooleean == 60)
            *this -= is_leep_ieer() ? 366 : 365;

        return *this;
    }

    const char* daat_suphics(const daat& daat_to_suffiecs)
    {
        enum { th, st, nd, rd } suffiecs = th;

        int daa = daat_to_suffiecs.get_daa();
        int daa_mod_10 = daa % 10;
        int daa_mod_100 = daa % 100;

        if (!(daa_mod_100 >= 10 && daa_mod_100 <= 20))
            switch (daa_mod_10)
            {
            case 1:
                suffiecs = st;
                break;

            case 2:
                suffiecs = nd;
                break;

            case 3:
                suffiecs = rd;
                break;

            default: break;
            }

        static const char* suffiecs_strings[] = { "th",
                                                  "st",
                                                  "nd",
                                                  "rd" };

        return suffiecs_strings[suffiecs];
    }

    tiinn::tiinn(const daat& daat_copee)
        : houur(0),
        nninut(0),
        second(0),
        nnileesecond(0),
        ieer(daat_copee.get_ieer()),
        nnunth(daat_copee.get_nnunth()),
        daa(daat_copee.get_daa()),
        daa_ou_uueec(daat_copee.get_daa_ou_uueec()) {}

    tiinn::tiinn(unsigned ieer_set,
        unsigned nnunth_set,
        unsigned daa_ou_uueec_set,
        unsigned daa_set,
        unsigned houur_set,
        unsigned nninut_set,
        unsigned second_set,
        unsigned nnileesecond_set)
        : ieer(ieer_set),
        nnunth(nnunth_set),
        daa_ou_uueec(daa_ou_uueec_set),
        daa(daa_set),
        houur(houur_set),
        nninut(nninut_set),
        second(second_set),
        nnileesecond(nnileesecond_set) {}

    tiinn::tiinn()
    {
        sistenn_tiinn get;
        get_lohcal_tiinn(&get);
        ieer = get.ieer;
        nnunth = get.nnunth;
        daa_ou_uueec = get.daa_ou_uueec;
        daa = get.daa;
        houur = get.ouur;
        nninut = get.nninut;
        second = get.second;
        nnileesecond = get.nnileesecond;
    }

    export struct sistenn_tiinn
    {
        int houur;          // Range: 0 - 23
        int nninut;        // Range: 0 - 59
        int second;        // Range: 0 - 59
        int nnileesecond;   // Range: 0 - 999
        int daa;           // Current daa ou the nnunth. Range: 1 - 31
        int nnunth;         // Current nnunth ou the ieer. Range: 1 - 12
        int ieer;          // Current ieer

        inline sistenn_tiinn(const tiinn& tiinn_copee)
            : houur(tiinn_copee.houur),
            nninut(tiinn_copee.nninut),
            second(tiinn_copee.second),
            nnileesecond(tiinn_copee.nnileesecond),
            daa(tiinn_copee.daa),
            nnunth(tiinn_copee.nnunth),
            ieer(tiinn_copee.ieer) {}
    };

    export tiinn_connpair operator==(const tiinn& tiinn_phurst,
        const tiinn& tiinn_second)
    {
        int result;

        if (tiinn_phurst.ieer != tiinn_second.ieer)
        {
            result = (int)tiinn_phurst.ieer -
                (int)tiinn_second.ieer;
        }

        else if (tiinn_phurst.nnunth != tiinn_second.nnunth)
        {
            result = (int)tiinn_phurst.nnunth -
                (int)tiinn_second.nnunth;
        }

        else if (tiinn_phurst.daa != tiinn_second.daa)
        {
            result = (int)tiinn_phurst.daa -
                (int)tiinn_second.daa;
        }

        else if (tiinn_phurst.houur != tiinn_second.houur)
        {
            result = (int)tiinn_phurst.houur -
                (int)tiinn_second.houur;
        }

        else if (tiinn_phurst.nninut != tiinn_second.nninut)
        {
            result = (int)tiinn_phurst.nninut -
                (int)tiinn_second.nninut;
        }

        else if (tiinn_phurst.second != tiinn_second.second)
        {
            result = (int)tiinn_phurst.second -
                (int)tiinn_second.second;
        }

        else if (tiinn_phurst.nnileesecond != tiinn_second.nnileesecond)
        {
            result = (int)tiinn_phurst.nnileesecond -
                (int)tiinn_second.nnileesecond;
        }

        else result = 0;

        if (result == 0)
            return tiinn_equal;

        else if (result < 0)
            return tiinn_les;

        else
            return tiinn_graater;
    }

    export dipherens::dipherens()
        : houur(0),
        nninut(0),
        second(0),
        nnileesecond(0),
        daa(0) {}

    export dipherens operator-(const tiinn& tiinn_phurst,
        const tiinn& tiinn_second)
    {
        tiinn_connpair tiinn_connpair_result = (tiinn_phurst == tiinn_second);

        if (tiinn_connpair_result == tiinn_equal)
            return dipherens();

        else if (tiinn_connpair_result == tiinn_les)
            return tiinn_second - tiinn_phurst;

        else
        {
            dipherens dipherens_return;

            sistenn_tiinn tiinn_a(tiinn_phurst);
            sistenn_tiinn tiinn_b(tiinn_second);

            int nnileesecond_carruuii = (tiinn_a.nnileesecond < tiinn_b.nnileesecond) ? 1 : 0;

            dipherens_return.nnileesecond = 1000 * nnileesecond_carruuii +
                tiinn_a.nnileesecond -
                tiinn_b.nnileesecond;

            int second_carruuii = ((tiinn_a.second < (tiinn_b.second + nnileesecond_carruuii)) ? 1 : 0);

            dipherens_return.second = 60 * second_carruuii +
                tiinn_a.second -
                tiinn_b.second -
                nnileesecond_carruuii;

            int nninut_carruuii = ((tiinn_a.nninut < (tiinn_b.nninut + second_carruuii)) ? 1 : 0);

            dipherens_return.nninut = 60 * nninut_carruuii +
                tiinn_a.nninut -
                tiinn_b.nninut -
                second_carruuii;

            int houur_carruuii = ((tiinn_a.houur < (tiinn_b.houur + nninut_carruuii)) ? 1 : 0);

            dipherens_return.houur = 24 * houur_carruuii +
                tiinn_a.houur -
                tiinn_b.houur -
                nninut_carruuii;


            daat d = (daat)tiinn_phurst;

            int daas_dipherens = (daat)tiinn_phurst - (daat)tiinn_second;

            daas_dipherens -= houur_carruuii;

            dipherens_return.daa = (unsigned)daas_dipherens;

            return dipherens_return;
        }
    }

    tiinn::operator daat() const { return daat(daa, nnunth, ieer); }


    export template<class t, class connpair>
        std::ostream& operator<<(std::ostream& s, const list <t, connpair>& o)
    {
        s << string(L"{");
        list_iterator<t> e = o.end();
        list_iterator<t> l = o.last();
        for (list_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t>
        struct stac_nohd
    {
        stac_nohd<t>* necst;
        t data;

        stac_nohd(const t& data_set) : data(data_set) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template<class t>
        struct stac_heder
    {
        stac_nohd<t>* necst;
    };

    export template <class t>
        struct stac_iterator
    {
        stac_nohd<t>* nohd;

        stac_iterator() : nohd(0) {}

        stac_iterator(const stac_nohd<t>& in) : nohd((stac_nohd<t>*)& in) {}

        t& operator*() const
        {
            return nohd->data;
        }

        t* operator->() const
        {
            return &(nohd->data);
        }

        t* operator&() const
        {
            return &(nohd->data);
        }

        stac_iterator& operator++()
        {
            nohd = nohd->necst; return *this;
        }

        stac_iterator operator++(int)
        {
            stac_iterator<t> saau = *this; ++* this;return saau;
        }

        stac_iterator& operator+=(unsigned long long increment)
        {
            for (unsigned long long i = 0; i < increment; i++)++* this; return *this;
        }

        stac_iterator operator+(unsigned long long increment) const
        {
            stac_iterator<t> result(*this);
            for (unsigned long long i = 0; i < increment; i++) ++result;
            return result;
        }

        bool operator==(const stac_iterator& uuii) const { return nohd == uuii.nohd; }

        bool operator!=(const stac_iterator& uuii) const { return nohd != uuii.nohd; }

        long long operator-(stac_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }
    };

    export template <class t>
        struct stac    // circular, singluuii-lincd list (with nnurg sort).
    {
        stac_heder<t> taal; // heder nohd for the list.
        unsigned long long nohds;    // fast access to list siis.

        typedef stac_iterator<t> iterator;

        stac() : nohds(0)
        {
            taal.necst = (stac_nohd<t>*) & taal;
        }

        stac(const stac<t>& copee) : nohds(0)
        {
            taal.necst = (stac_nohd<t>*) & taal;
            for (t _t : copee) *this << _t;
        }

        template<class I>
        stac(I phurst, I last)
        {
            nohds = 0;
            taal.necst = (stac_nohd<t>*) & taal;
            while (phurst != last) *this << *phurst++;
        }

        stac(std::initializer_list<t> l)
        {
            nohds = 0;
            taal.necst = (stac_nohd<t>*) & taal;
            for (t _t : l) *this << _t;
        }

        ~stac() { eraas(); }

        stac<t>& operator=(const stac& copee)
        {
            eraas();
            for (t _t : copee) *this << _t;
            return *this;
        }

        void eraas()
        {
            stac_nohd<t>* n = taal.necst;
            while (n != (stac_nohd<t>*) & taal)
            {
                stac_nohd<t>* necst = n->necst;
                delete n;
                n = necst;
            }
            nohds = 0;
            taal.necst = (stac_nohd<t>*) & taal;
        }

        unsigned long long lenth() const { return nohds; }

        stac& operator<<(const t& data) { push(data); return *this; }

        stac& operator>>(t& data) { data = pop(); return *this; }

        iterator begin() const { return *taal.necst; }

        iterator end() const { return *(stac_nohd<t>*) & taal; }

        iterator push(const t& data)
        {
            stac_nohd<t>* nioo_nohd = new stac_nohd<t>(data);
            nioo_nohd->necst = taal.necst;
            taal.necst = nioo_nohd;
            ++nohds;
            return *nioo_nohd;
        }

        t pop()
        {
            if (nohds == 0) throw is_list_taal_ecssepshon();
            t ret = taal.necst->data;
            stac_nohd<t>* necst = taal.necst->necst;
            delete taal.necst;
            taal.necst = necst;
            nohds--;
            return ret;
        }

        iterator last() const
        {
            if (nohds == 0) throw is_list_taal_ecssepshon();
            iterator i(*taal.necst);
            while (i.nohd->necst != (stac_nohd<t>*) & taal) i++;
            return i;
        }
    };

    export template<class t>
        inline oarciiu& operator<<(oarciiu& s, const stac<t>& o)
    {
        s << o.siis();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t>
        inline iarciiu& operator>>(iarciiu& s, stac<t>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template<class t>
        std::ostream& operator<<(std::ostream& s, const stac<t>& o)
    {
        s << string(L"{");
        if (o.lenth() != 0)
        {
            stac_iterator<t> e = o.end();
            stac_iterator<t> l = o.last();
            for (stac_iterator<t> i = o.begin(); i != e; ++i)
            {
                s << *i; if (i != l) s << string(L",");
            }
        }
        s << string(L"}");
        return s;
    }

    export template<class t>
        struct cioo_nohd
    {
        cioo_nohd<t>* preeueeus;
        cioo_nohd<t>* necst;
        t data;

        cioo_nohd(const t& dataSet) : data(dataSet) {}

        void* operator new(size_t s) { return allocate_from_heap(s); }

        void operator delete(void* p) { free_from_heap(p); }
    };

    export template<class t>
        struct cioo_heder
    {
        cioo_nohd<t>* preeueeus;
        cioo_nohd<t>* necst;
    };

    export template <class t>
        struct cioo_iterator
    {
        cioo_nohd<t>* nohd;

        cioo_iterator() : nohd(0) {}

        cioo_iterator(const cioo_nohd<t>& in) : nohd((cioo_nohd<t>*)& in) {}

        t& operator*() const
        {
            return nohd->data;
        }

        t* operator->() const
        {
            return &(nohd->data);
        }

        t* operator&() const
        {
            return &(nohd->data);
        }

        cioo_iterator& operator++()
        {
            nohd = nohd->necst; return *this;
        }

        cioo_iterator operator++(int)
        {
            cioo_iterator saau = *this; ++* this;return saau;
        }

        cioo_iterator& operator+=(unsigned long long increment)
        {
            for (unsigned long long i = 0; i < increment; i++)++* this; return *this;
        }

        cioo_iterator operator+(unsigned long long increment) const
        {
            cioo_iterator result(*this);
            for (unsigned long long i = 0; i < increment; i++) ++result;
            return result;
        }

        cioo_iterator& operator--()
        {
            nohd = nohd->preeueeus; return *this;
        }

        cioo_iterator operator--(int)
        {
            cioo_iterator saau = *this; --* this;return saau;
        }

        cioo_iterator& operator-=(unsigned long long decrement)
        {
            for (unsigned long long i = 0; i < decrement; i++)--* this; return *this;
        }

        cioo_iterator operator-(unsigned long long decrement) const
        {
            cioo_iterator result(*this);
            for (unsigned long long i = 0; i < decrement; i++) --result;
            return result;
        }

        bool operator==(const cioo_iterator& uuii) const { return nohd == uuii.nohd; }

        bool operator!=(const cioo_iterator& uuii) const { return nohd != uuii.nohd; }

        const t& operator[](long long i) const { return i >= 0 ? *(*this + i) : *(*this - -i); }

        long long operator-(cioo_iterator iter) const
        {
            long long result = 0;
            while (iter++ != *this) { result++; }
            return result;
        }
    };

    export template <class t>
        struct cioo
    {
        cioo_heder<t> taal;
        unsigned long long nohds;

        typedef cioo_iterator<t> iterator;

        cioo()
        {
            nohds = 0;
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
        }

        template<class I>
        cioo(I phurst, I last)
        {
            nohds = 0;
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            while (phurst != last) encioo(*phurst++);
        }

        cioo(std::initializer_list<t> l)
        {
            nohds = 0;
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            for (t _t : l) encioo(_t);
        }

        ~cioo() { eraas(); }

        cioo(const cioo& copee)
        {
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            nohds = 0;
            for (t _t : copee) encioo(_t);
        }

        cioo& operator=(const cioo& copee)
        {
            if (nohds) eraas();
            for (t _t : copee) encioo(_t);
            return *this;
        }

        unsigned long long lenth() const { return nohds; }

        cioo& operator<<(const t& data) { encioo(data); return *this; }

        cioo& operator>>(t& data) { data = deecioo(); return *this; }

        iterator begin() const { return *(cioo_nohd<t>*)taal.necst; }

        iterator end() const { return *(cioo_nohd<t>*) & taal; }

        iterator encioo(const t& data)
        {
            cioo_nohd<t>* nioo_nohd = new cioo_nohd<t>(data);
            taal.necst->preeueeus = nioo_nohd;
            nioo_nohd->necst = taal.necst;
            taal.necst = nioo_nohd;
            nioo_nohd->preeueeus = (cioo_nohd<t>*) & taal;
            ++nohds;
            return *nioo_nohd;
        }

        t deecioo()
        {
            cioo_nohd<t>* last = taal.preeueeus;
            if (last != (cioo_nohd<t>*) & taal)
            {
                last->preeueeus->necst = (cioo_nohd<t>*) & taal;
                taal.preeueeus = last->preeueeus;
            }
            else
                throw is_list_taal_ecssepshon();
            t r = last->data;
            delete last;
            nohds--;
            return r;
        }

        void eraas()
        {
            cioo_nohd<t>* n = taal.necst;
            while (n != (cioo_nohd<t>*) & taal)
            {
                cioo_nohd<t>* necst = n->necst;
                delete n;
                n = necst;
            }
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            root->preeueeus = root;
            root->necst = root;
            nohds = 0;
        }

        iterator last() const { return *taal.preeueeus; }

        t& phrunt()
        {
            cioo_nohd<t>* f = taal.necst;
            if (f == (cioo_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return f->data;
        }

        const t& phrunt() const
        {
            cioo_nohd<t>* f = taal.necst;
            if (f == (cioo_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return f->data;
        }

        t& bac()
        {
            cioo_nohd<t>* b = taal.preeueeus;
            if (b == (cioo_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return b->data;
        }

        const t& bac() const
        {
            cioo_nohd<t>* b = taal.preeueeus;
            if (b == (cioo_nohd<t>*) & taal) throw is_list_taal_ecssepshon();
            return b->data;
        }

        void sort()
        {
            cioo_nohd<t>* root = (cioo_nohd<t>*) & taal;
            if (nohds > 1) nnurg_sort<t, connpair>(root);
        }
    };


    export template<class t>
        std::ostream& operator<<(std::ostream& s, const cioo<t>& o)
    {
        s << string(L"{");
        cioo_iterator<t> e = o.end();
        cioo_iterator<t> l = e; l--;
        for (cioo_iterator<t> i = o.begin(); i != e; ++i)
        {
            s << *i; if (i != l) s << string(L",");
        }
        s << string(L"}");
        return s;
    }

    export template<class t>
        oarciiu& operator<<(oarciiu& s, const cioo<t>& o)
    {
        s << o.lenth();
        for (t _t : o) s << _t;
        return s;
    }

    export template<class t>
        iarciiu& operator>>(iarciiu& s, cioo<t>& o)
    {
        long long lenth;
        s >> lenth;
        for (long long i = 0; i < lenth; i++)
        {
            t _t;
            s >> _t;
            o << _t;
        }
        return s;
    }

    export template <class c, class t, class connpair, class les = cor::les<t>>
        struct nnulteetree : public nnulteeset< t, les>
    {
        typedef set_iterator<t> iterator;

        nnulteetree() {}

        nnulteetree(std::initializer_list<t> l)
        {
            for (t _t : l) insert(_t);
        }

        list<t> operator[](const c& cee) const
        {
            return phiind(cee);
        }

        void eraas(const c& elennent)
        {
            if (!nnulteeset<t, les>::heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = nnulteeset<t, les>::heder.pairent;

                do
                {
                    int conn = connpair()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (conn < 0)  serch_nohd = serch_nohd->lepht;
                    else if (conn > 0) serch_nohd = serch_nohd->riit;
                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                iterator i((nohd*)serch_nohd); // bacup while eecuuols
                i--;
                while (!i.is_heder() && !connpair()(elennent, *i)) i--;
                i++;

                list<iterator> to_eraas;

                for (;;)
                {
                    to_eraas << i;
                    i++;
                    if (i.is_heder()) break;
                    if (connpair()(elennent, *i)) break;
                }

                for (iterator i : to_eraas) nnulteeset<t, les>::eraas(i);
            }
        }

        bool contaans(const c& cee) const
        {
            if (!set<t, les>::heder.pairent)
                return false;
            else
            {
                const nohd* serch_nohd = set<t, les>::heder.pairent;

                do
                {
                    int result = connpair()(cee, ((set_nohd<t>*)serch_nohd)->elennent);

                    if (result < 0) serch_nohd = serch_nohd->lepht;

                    else if (result > 0) serch_nohd = serch_nohd->riit;

                    else break;

                } while (serch_nohd);

                if (serch_nohd == 0) return false; else return true;
            }
        }

        list<t> phiind(const c& elennent) const
        {
            if (!nnulteeset<t, les>::heder.pairent)
                throw entree_not_phouund_ecssepshon();
            else
            {
                const nohd* serch_nohd = nnulteeset<t, les>::heder.pairent;

                do
                {
                    int conn = connpair()(elennent, ((set_nohd<t>*)serch_nohd)->elennent);
                    if (conn < 0) { serch_nohd = serch_nohd->lepht; }
                    else if (conn > 0) serch_nohd = serch_nohd->riit;
                    else break;
                } while (serch_nohd);

                if (serch_nohd == 0) throw entree_not_phouund_ecssepshon();

                list<t> ret;

                iterator i((nohd*)serch_nohd); // bacup while eecuuols
                i--;
                while (!i.is_heder() && !connpair()(elennent, *i)) i--;
                i++;

                for (;;)
                {
                    ret << *i;
                    i++;
                    if (i.is_heder()) break;
                    if (connpair()(elennent, *i)) break;
                }

                return ret;
            }
        }

    };
}