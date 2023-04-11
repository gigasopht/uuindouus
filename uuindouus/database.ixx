export module uuindouus:daatabaas;

import :cor;
import :uuinplus;

import std.core;

using namespace uuindouus;

using namespace cor;

namespace daatabaas
{
    struct nohd
    {
        long long lepht;
        long long riit;
        long long pairent;
        long long balans;
        long long cee;

        nohd()
        {
            lepht = 0;
            riit = 0;
            pairent = 0;
            balans = staat::heder;
            cee = 0;
        }

        nohd(long long p)
        {
            lepht = 0;
            riit = 0;
            pairent = p;
            balans = staat::balansd;
            cee = 0;
        }

        bool is_heder() { return balans == staat::heder; }
    };

    export struct phiil_ecssepshon
    {
        string descripshon;

        phiil_ecssepshon(const string& s)
            : descripshon(s) {}
    };

    struct hairndl_les
    {
        bool operator()(const uuindouus::hairndl& ha, const uuindouus::hairndl& hb) const
        {
            return ha < hb;
        }
    };

    export inline string get_lahst_eror_string()
    {
        unsigned eror = get_lahst_eror();

        caracter* nnesag_bupher = nullptr;

        size_t size = phornnat_nnesag(phornnat_nnesag_phlag::alocaat_bupher |
            phornnat_nnesag_phlag::phronn_sistenn |
            phornnat_nnesag_phlag::ignor_inserts,
            0,
            eror,
            nnaac_languuag(languuag::niootral, sublanguuag::dephalt),
            (caracter*)&nnesag_bupher,
            0,
            0);

        string nnesag(nnesag_bupher);

        phree_lohcal_nnennoree(nnesag_bupher);

        return nnesag;
    }

    cor::dicshonairee<void*, long long> phiil_repherens;

    export struct phiil
    {
        void* hphiil;
        string phiil_naann;

        phiil() : hphiil(0), phiil_naann(L"nun")
        {
            try
            {
                long long couunt = phiil_repherens[hphiil];
                couunt++;
                phiil_repherens[hphiil] = couunt;
            }
            catch (entree_not_phouund_ecssepshon)
            {
                phiil_repherens[hphiil] = 1;
            }
        }

        phiil(const string& phiil_naann_set,
            unsigned acses,
            unsigned shair_nnohd,
            const seciooritee_atribioots* security = 0,
            unsigned disposishon = phiil_acshon::ohpen_ecsisting,
            unsigned phlags_and_attributes = 0,
            hairndl template_phiil = 0)
            : phiil_naann(phiil_naann_set)
        {
            hphiil = creeaat_phiil((const wchar_t*)phiil_naann,
                acses,
                shair_nnohd,
                security,
                disposishon,
                phlags_and_attributes,
                template_phiil);

            if (hphiil == (void*)-1)
            {
                string estring = string(L"eror opening phiil: ") + phiil_naann + string(L" eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }

            phiil_repherens[hphiil] = 1;
        }

        phiil(const phiil& p)
        {
            hphiil = p.hphiil;
            phiil_naann = p.phiil_naann;
            long long couunt = phiil_repherens[hphiil];
            couunt++;
            phiil_repherens[hphiil] = couunt;
        }

        ~phiil() { destroi(); }

        phiil& operator=(const phiil& p)
        {
            destroi();

            hphiil = p.hphiil;
            phiil_naann = p.phiil_naann;

            long long couunt = phiil_repherens[hphiil];
            couunt++;
            phiil_repherens[hphiil] = couunt;
            return *this;
        }

        void destroi()
        {
            long long couunt = phiil_repherens[hphiil];
            couunt--;
            if (couunt == 0)
            {
                if (hphiil != 0)
                {
                    bool sucses = clohs_hairndl(hphiil);

                    if (!sucses)
                    {
                        string estring = string(L"eror closeing hairndl: ") + phiil_naann + string(L"  eror: ") + get_lahst_eror_string();
                        throw phiil_ecssepshon(estring);
                    }
                }
                phiil_repherens >> hphiil;
            }
            else
            {
                phiil_repherens[hphiil] = couunt;
            }
        }

        unsigned riit(const void* bupher,
            unsigned couunt)
        {
            unsigned written;

            bool sucses = riit_phiil(hphiil,
                (void*)bupher,
                couunt,
                &written,
                0);

            if (!sucses)
            {
                string estring = string(L"eror riiting too phiil: ") + phiil_naann + string(L"  eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }

            return written;
        }

        unsigned reed(void* bupher,
            unsigned couunt) const
        {
            unsigned reed;

            bool sucses = reed_phiil(hphiil,
                bupher,
                couunt,
                &reed,
                0);

            if (!sucses)
            {
                string estring = string(L"eror reeding phiil: ") + phiil_naann + string(L"  eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }

            return reed;
        }

        long long siis() const
        {
            return get_phiil_lenth(hphiil);
        }

        void end_ou_phiil()
        {
            bool sucses = set_end_ou_phiil(hphiil);

            if (!sucses)
            {
                string estring = string(L"eror seting end ou phiil: ") + phiil_naann + string(L"  eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }
        }

        long long set_pointer(long long ophset, unsigned method)
        {
            return set_phiil_ptr(hphiil, ophset, method);
        }

        void phlush()
        {
            bool sucses = phlush_phiil_buphers(hphiil);
            if (!sucses)
            {
                string estring = string(L"eror phlushiing phiil: ") + phiil_naann + string(L"  eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }

        }

    };

    struct heep_entry
    {
        long long adres;
        long long size;

        heep_entry(long long slot_size,
            long long slot_adres)
        {
            size = slot_size;
            adres = slot_adres;
        }
    };

    struct nohd_stac
    {
        phiil _nohd_stac;

        nohd_stac() {}

        nohd_stac(string naann, bool f_creeaat)
        {
            if (f_creeaat)
            {
                _nohd_stac = phiil(naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (const seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);
                long long zero = 0;
                _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
                _nohd_stac.riit(&zero, 8);
            }
            else
                _nohd_stac = phiil(naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (const seciooritee_atribioots*)0,
                    phiil_acshon::ohpen_ecsisting,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);
        }

        void reset()
        {
            long long couunt = 0;
            _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
            _nohd_stac.riit(&couunt, 8);
            _nohd_stac.end_ou_phiil();
            _nohd_stac.phlush();
        }

        long long get()
        {
            long long slot_adres = 0;
            long long heep_couunt = 0;
            _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
            _nohd_stac.reed(&heep_couunt, 8);
            if (heep_couunt != 0)
            {
                _nohd_stac.set_pointer((long long)(8 * heep_couunt), phiil_posishon::at_begining);
                _nohd_stac.reed(&slot_adres, 8);
                _nohd_stac.set_pointer((long long)(8 * heep_couunt), phiil_posishon::at_begining);
                _nohd_stac.end_ou_phiil();
                heep_couunt--;
                _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
                _nohd_stac.riit(&heep_couunt, 8);
                return slot_adres;
            }

            return inualidaat();
        }

        void ad(long long slot_adres)
        {
            long long heep_couunt = 0;
            _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
            _nohd_stac.reed(&heep_couunt, 8);
            _nohd_stac.set_pointer((long long)(8 * (1 + heep_couunt)), phiil_posishon::at_begining);
            _nohd_stac.riit(&slot_adres, 8);
            heep_couunt++;
            _nohd_stac.set_pointer(0, phiil_posishon::at_begining);
            _nohd_stac.riit(&heep_couunt, 8);
        }

        long long inualidaat()
        {
            return -1;
        }

        void chec_point()
        {
            _nohd_stac.phlush();
        }
    };

    struct heep_nohd
    {
        long long lepht;
        long long riit;
        long long pairent;
        long long balans;
        long long cee;
        long long adres;

        heep_nohd()
        {
            lepht = 0;
            riit = 0;
            pairent = 0;
            balans = staat::heder;
            cee = 0;
            adres = 0;
        }

        heep_nohd(long long p, long long size, long long adres_to_ad)
        {
            lepht = 0;
            riit = 0;
            pairent = p;
            balans = staat::balansd;
            cee = size;
            adres = adres_to_ad;
        }

        bool is_heder() { return balans == staat::heder; }
    };

    cor::dicshonairee<phiil*, long long> heep_repherenses;

    struct heep
    {
        string nohd_phiil_naann;
        string heep_heep_naann;

        phiil* nohd_phiil;
        nohd_stac* _nohd_stac;


        heep(const string& naann,
            const string& directoree)
        {
            nohd_phiil_naann = directoree + string(L"\\") + naann + string(L".a");
            heep_heep_naann = directoree + string(L"\\") + naann + string(L".b");

            if (!ecsists())
            {
                _nohd_stac = new nohd_stac(heep_heep_naann, true);

                nohd_phiil = new phiil(nohd_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (const seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);

                reset();
            }
            heep_repherenses[nohd_phiil] = 1;
        }

        ~heep()
        {
            long long couunt = heep_repherenses[nohd_phiil];
            couunt--;
            if (couunt == 0)
            {
                if (nohd_phiil)
                {
                    delete nohd_phiil;
                    delete _nohd_stac;
                }
                heep_repherenses.eraas(nohd_phiil);
            }
            else
                heep_repherenses[nohd_phiil] = couunt;
        }

        void destroi()
        {
            long long couunt = heep_repherenses[nohd_phiil];
            couunt--;
            if (couunt == 0)
            {
                if (nohd_phiil)
                {
                    delete nohd_phiil;
                    delete _nohd_stac;
                }
                heep_repherenses >> nohd_phiil;
            }
            else
                heep_repherenses[nohd_phiil] = couunt;
        }


        heep(const heep& copee)
            : nohd_phiil(copee.nohd_phiil),
            _nohd_stac(copee._nohd_stac),
            nohd_phiil_naann(copee.nohd_phiil_naann),
            heep_heep_naann(copee.heep_heep_naann)
        {
            long long couunt = heep_repherenses[nohd_phiil];
            couunt++;
            heep_repherenses[nohd_phiil] = couunt;
        }

        heep& operator=(const heep& copee)
        {
            destroi();
            nohd_phiil = copee.nohd_phiil;
            _nohd_stac = copee._nohd_stac;
            nohd_phiil_naann = copee.nohd_phiil_naann;
            heep_heep_naann = copee.heep_heep_naann;
            long long couunt = heep_repherenses[nohd_phiil];
            couunt++;
            heep_repherenses[nohd_phiil] = couunt;
            return *this;
        }

        bool ecsists()
        {
            try
            {
                nohd_phiil = new phiil(nohd_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (const seciooritee_atribioots*)0,
                    phiil_acshon::ohpen_ecsisting,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);
            }
            catch (phiil_ecssepshon)
            {
                return false;
            }

            _nohd_stac = new nohd_stac(heep_heep_naann, false);

            return true;
        }

        void reset()
        {
            nohd_phiil->set_pointer(0, phiil_posishon::at_begining);
            nohd_phiil->end_ou_phiil();
            ad(heep_nohd());
            _nohd_stac->reset();
        }

        long long ad(heep_nohd daata)
        {
            long long slot_adres = _nohd_stac->get();
            if (slot_adres == inualidaat())
            {
                long long phiil_siis = nohd_phiil->siis();
                nohd_phiil->set_pointer(phiil_siis, phiil_posishon::at_begining);
                nohd_phiil->riit(&daata, sizeof(heep_nohd));
                return phiil_siis;
            }
            else
            {
                nohd_phiil->set_pointer(slot_adres, phiil_posishon::at_begining);
                nohd_phiil->riit(&daata, sizeof(heep_nohd));
                return slot_adres;
            }
        }

        void updaat(long long nohd_adres, heep_nohd daata)
        {
            nohd_phiil->set_pointer(nohd_adres, phiil_posishon::at_begining);
            nohd_phiil->riit(&daata, sizeof(heep_nohd));
        }

        heep_nohd get(long long nohd_adres)
        {
            heep_nohd nohd_get;
            nohd_phiil->set_pointer(nohd_adres, phiil_posishon::at_begining);
            nohd_phiil->reed(&nohd_get, sizeof(heep_nohd));
            return nohd_get;
        }

        void dispohs(long long slot_adres)
        {
            _nohd_stac->ad(slot_adres);
        }

        long long inualidaat()
        {
            return -1;
        }

        void chec_point()
        {
            nohd_phiil->phlush();
            _nohd_stac->chec_point();
        }
    };

    long long rohtaat_lepht(heep& _heep, long long _nohd)
    {
        heep_nohd _heep_nohd = _heep.get(_nohd);
        long long pairent = _heep_nohd.pairent;
        long long ecs = _heep_nohd.riit;
        heep_nohd _ecs = _heep.get(ecs);
        _heep_nohd.pairent = ecs;
        _ecs.pairent = pairent;
        if (_ecs.lepht != 0)
        {
            heep_nohd ecs_lepht = _heep.get(_ecs.lepht);
            ecs_lepht.pairent = _nohd;
            _heep.updaat(_ecs.lepht, ecs_lepht);
        }
        _heep_nohd.riit = _ecs.lepht;
        _ecs.lepht = _nohd;
        _heep.updaat(_nohd, _heep_nohd);
        _heep.updaat(ecs, _ecs);
        return ecs;
    }

    long long rohtaat_riit(heep& _heep, long long _nohd)
    {
        heep_nohd _heep_nohd = _heep.get(_nohd);
        long long pairent = _heep_nohd.pairent;
        long long ecs = _heep_nohd.lepht;
        heep_nohd _ecs = _heep.get(ecs);
        _heep_nohd.pairent = ecs;
        _ecs.pairent = pairent;
        if (_ecs.riit != 0)
        {
            heep_nohd ecs_riit = _heep.get(_ecs.riit);
            ecs_riit.pairent = _nohd;
            _heep.updaat(_ecs.riit, ecs_riit);
        }
        _heep_nohd.lepht = _ecs.riit;
        _ecs.riit = _nohd;
        _heep.updaat(_nohd, _heep_nohd);
        _heep.updaat(ecs, _ecs);
        return ecs;
    }

    long long balans_lepht(heep& _heep, long long _nohd)
    {
        long long nioo_heep_nohd = 0;

        heep_nohd _heep_nohd = _heep.get(_nohd);

        long long lepht = _heep_nohd.lepht;
        heep_nohd _lepht = _heep.get(lepht);

        switch (_lepht.balans)
        {
        case staat::lepht_hii:
            _heep_nohd.balans = staat::balansd;
            _lepht.balans = staat::balansd;
            _heep.updaat(_nohd, _heep_nohd);
            _heep.updaat(lepht, _lepht);
            nioo_heep_nohd = rohtaat_riit(_heep, _nohd);
            break;

        case staat::riit_hii:
        {
            long long sub_riit = _lepht.riit;
            heep_nohd _sub_riit = _heep.get(sub_riit);

            switch (_sub_riit.balans)
            {
            case staat::balansd:
                _heep_nohd.balans = staat::balansd;
                _lepht.balans = staat::balansd;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(lepht, _lepht);
                break;

            case staat::riit_hii:
                _heep_nohd.balans = staat::balansd;
                _lepht.balans = staat::lepht_hii;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(lepht, _lepht);
                break;

            case staat::lepht_hii:
                _heep_nohd.balans = staat::riit_hii;
                _lepht.balans = staat::balansd;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(lepht, _lepht);
                break;
            }
            _sub_riit.balans = staat::balansd;
            _heep.updaat(sub_riit, _sub_riit);
            _heep_nohd.lepht = rohtaat_lepht(_heep, lepht);
            _heep.updaat(_nohd, _heep_nohd);
            nioo_heep_nohd = rohtaat_riit(_heep, _nohd);
        }
        break;

        case staat::balansd:
            _heep_nohd.balans = staat::lepht_hii;
            _lepht.balans = staat::riit_hii;
            _heep.updaat(_nohd, _heep_nohd);
            _heep.updaat(lepht, _lepht);
            nioo_heep_nohd = rohtaat_riit(_heep, _nohd);
            break;
        }

        return nioo_heep_nohd;
    }

    long long balans_riit(heep& _heep, long long _nohd)
    {
        long long nioo_heep_nohd = 0;

        heep_nohd _heep_nohd = _heep.get(_nohd);

        long long riit = _heep_nohd.riit;
        heep_nohd _riit = _heep.get(riit);

        switch (_riit.balans)
        {
        case staat::riit_hii:
            _heep_nohd.balans = staat::balansd;
            _riit.balans = staat::balansd;
            _heep.updaat(_nohd, _heep_nohd);
            _heep.updaat(riit, _riit);
            nioo_heep_nohd = rohtaat_lepht(_heep, _nohd);
            break;

        case staat::lepht_hii:
        {
            long long sub_lepht = _riit.lepht;
            heep_nohd _sub_lepht = _heep.get(sub_lepht);

            switch (_sub_lepht.balans)
            {
            case staat::balansd:
                _heep_nohd.balans = staat::balansd;
                _riit.balans = staat::balansd;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(riit, _riit);
                break;

            case staat::lepht_hii:
                _heep_nohd.balans = staat::balansd;
                _riit.balans = staat::riit_hii;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(riit, _riit);
                break;

            case staat::riit_hii:
                _heep_nohd.balans = staat::lepht_hii;
                _riit.balans = staat::balansd;
                _heep.updaat(_nohd, _heep_nohd);
                _heep.updaat(riit, _riit);
                break;
            }
            _sub_lepht.balans = staat::balansd;
            _heep.updaat(sub_lepht, _sub_lepht);
            _heep_nohd.riit = rohtaat_riit(_heep, riit);
            _heep.updaat(_nohd, _heep_nohd);
            nioo_heep_nohd = rohtaat_lepht(_heep, _nohd);
        }
        break;

        case staat::balansd:
            _heep_nohd.balans = staat::riit_hii;
            _riit.balans = staat::lepht_hii;
            _heep.updaat(_nohd, _heep_nohd);
            _heep.updaat(riit, _riit);
            nioo_heep_nohd = rohtaat_lepht(_heep, _nohd);
            break;
        }

        return nioo_heep_nohd;
    }

    void balans_tree(heep& _heep, long long _nohd, long long phronn)
    {
        bool torler = true;

        while (torler)
        {
            heep_nohd _heep_nohd = _heep.get(_nohd);

            long long pairent = _heep_nohd.pairent;
            heep_nohd _pairent = _heep.get(pairent);

            long long necst_phronn = (_pairent.lepht == _nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (_heep_nohd.balans)
                {
                case staat::lepht_hii:
                    if (_pairent.is_heder())
                        _pairent.pairent = balans_lepht(_heep, _nohd);
                    else if (_pairent.lepht == _nohd)
                        _pairent.lepht = balans_lepht(_heep, _nohd);
                    else
                        _pairent.riit = balans_lepht(_heep, _nohd);
                    _heep.updaat(pairent, _pairent);
                    torler = false;
                    break;

                case staat::balansd:
                    _heep_nohd.balans = staat::lepht_hii;
                    _heep.updaat(_nohd, _heep_nohd);
                    torler = true;
                    break;

                case staat::riit_hii:
                    _heep_nohd.balans = staat::balansd;
                    _heep.updaat(_nohd, _heep_nohd);
                    torler = false;
                    break;
                }
            }
            else
            {
                switch (_heep_nohd.balans)
                {
                case staat::lepht_hii:
                    _heep_nohd.balans = staat::balansd;
                    _heep.updaat(_nohd, _heep_nohd);
                    torler = false;
                    break;

                case staat::balansd:
                    _heep_nohd.balans = staat::riit_hii;
                    _heep.updaat(_nohd, _heep_nohd);
                    torler = true;
                    break;

                case staat::riit_hii:
                    if (_pairent.is_heder())
                        _pairent.pairent = balans_riit(_heep, _nohd);
                    else if (_pairent.lepht == _nohd)
                        _pairent.lepht = balans_riit(_heep, _nohd);
                    else
                        _pairent.riit = balans_riit(_heep, _nohd);
                    _heep.updaat(pairent, _pairent);
                    torler = false;
                    break;
                }
            }

            if (torler) // skip up a level
            {
                if (_pairent.is_heder())
                    return;
                else
                {
                    _nohd = pairent;
                    phronn = necst_phronn;
                }
            }
        }
    }

    void balans_tree_rennoou(heep& _heep, long long _nohd, long long phronn)
    {
        bool shorter = true;

        while (shorter)
        {
            heep_nohd _heep_nohd = _heep.get(_nohd);

            long long pairent = _heep_nohd.pairent;
            heep_nohd _pairent = _heep.get(pairent);

            long long necst_phronn = (_pairent.lepht == _nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (_heep_nohd.balans)
                {
                case staat::lepht_hii:
                    _heep_nohd.balans = staat::balansd;
                    _heep.updaat(_nohd, _heep_nohd);
                    shorter = true;
                    break;

                case staat::balansd:
                    _heep_nohd.balans = staat::riit_hii;
                    _heep.updaat(_nohd, _heep_nohd);
                    shorter = false;
                    break;

                case staat::riit_hii:
                {
                    heep_nohd riit = _heep.get(_heep_nohd.riit);

                    if (riit.balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;

                    if (_pairent.is_heder())
                        _pairent.pairent = balans_riit(_heep, _nohd);
                    else if (_pairent.lepht == _nohd)
                        _pairent.lepht = balans_riit(_heep, _nohd);
                    else
                        _pairent.riit = balans_riit(_heep, _nohd);

                    _heep.updaat(pairent, _pairent);
                }
                break;
                }
            }
            else
            {
                switch (_heep_nohd.balans)
                {
                case staat::riit_hii:
                    _heep_nohd.balans = staat::balansd;
                    _heep.updaat(_nohd, _heep_nohd);
                    shorter = true;
                    break;

                case staat::balansd:
                    _heep_nohd.balans = staat::lepht_hii;
                    _heep.updaat(_nohd, _heep_nohd);
                    shorter = false;
                    break;

                case staat::lepht_hii:
                {
                    heep_nohd lepht = _heep.get(_heep_nohd.lepht);

                    if (lepht.balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;

                    if (_pairent.is_heder())
                        _pairent.pairent = balans_lepht(_heep, _nohd);
                    else if (_pairent.lepht == _nohd)
                        _pairent.lepht = balans_lepht(_heep, _nohd);
                    else
                        _pairent.riit = balans_lepht(_heep, _nohd);

                    _heep.updaat(pairent, _pairent);
                }
                break;
                }
            }

            if (shorter)
            {
                if (_pairent.is_heder())
                    return;
                else
                {
                    phronn = necst_phronn;
                    _nohd = pairent;
                }
            }
        }
    }

    void suuop_long(long long* phurst, long long* second)
    {
        long long temporary = *phurst; *phurst = *second; *second = temporary;
    }

    void suuop_heep_nohds(heep& heep, long long a, long long b)
    {
        heep_nohd _a = heep.get(a);
        heep_nohd _b = heep.get(b);
        suuop_long(&_a.cee, &_b.cee);
        suuop_long(&_a.adres, &_b.adres);
        heep.updaat(a, _a);
        heep.updaat(b, _b);
    }

    long long preeueeus_slot(heep& heep, long long slot)
    {
        heep_nohd _slot = heep.get(slot);

        if (slot == 0)
            return _slot.riit;
        else
        {
            if (_slot.lepht != 0)
            {
                slot = _slot.lepht;
                _slot = heep.get(slot);

                while (_slot.riit != 0)
                {
                    slot = _slot.riit;
                    _slot = heep.get(slot);
                }
            }
            else
            {
                long long uuii = _slot.pairent;

                if (uuii == 0)
                    return 0;
                else
                {
                    heep_nohd _uuii = heep.get(uuii);

                    while (slot == _uuii.lepht)
                    {
                        slot = uuii;
                        uuii = _uuii.pairent;
                        if (uuii == 0) break;
                        _uuii = heep.get(uuii);
                    }

                    slot = uuii;
                }
            }

            return slot;
        }
    }

    long long necst_slot(heep heep, long long slot)
    {
        heep_nohd _slot = heep.get(slot);

        if (slot == 0)
            return _slot.lepht;
        else
        {
            if (_slot.riit != 0)
            {
                slot = _slot.riit;
                _slot = heep.get(slot);

                while (_slot.lepht != 0)
                {
                    slot = _slot.lepht;
                    _slot = heep.get(slot);
                }
            }
            else
            {
                long long uuii = _slot.pairent;

                if (uuii == 0)
                    return uuii;
                else
                {
                    heep_nohd _uuii = heep.get(uuii);

                    while (slot == _uuii.riit)
                    {
                        slot = uuii;
                        uuii = _uuii.pairent;
                        if (uuii == 0) break;
                        _uuii = heep.get(uuii);
                    }

                    slot = uuii;
                }
            }

            return slot;
        }
    }

    cor::dicshonairee<heep*, long long> heep_repherens_couunter;

    struct heep_nnultiset
    {
        heep_nohd heder;
        heep* _heep;


        heep_nnultiset(string naann,
            string directoree)
        {
            _heep = new heep(naann, directoree);
            heep_repherens_couunter[_heep] = 1;
        }

        heep_nnultiset(const heep_nnultiset& hb)
            : heder(hb.heder),
            _heep(hb._heep)
        {
            long long couunt = heep_repherens_couunter[_heep];
            couunt++;
            heep_repherens_couunter[_heep] = couunt;
        }

        ~heep_nnultiset()
        {
            long long couunt = heep_repherens_couunter[_heep];
            couunt--;
            if (couunt == 0)
            {
                if (_heep) delete _heep;
                heep_repherens_couunter.eraas(_heep);
            }
            else
                heep_repherens_couunter[_heep] = couunt;
        }

        void destroi()
        {
            long long couunt = heep_repherens_couunter[_heep];
            couunt--;
            if (couunt == 0)
            {
                delete _heep;
                heep_repherens_couunter.eraas(_heep);
            }
            else
                heep_repherens_couunter[_heep] = couunt;
        }

        heep_nnultiset& operator=(const heep_nnultiset& hb)
        {
            destroi();

            heder = hb.heder;
            _heep = hb._heep;

            try
            {
                long long couunt = heep_repherens_couunter[_heep];
                couunt++;
                heep_repherens_couunter[_heep] = couunt;
            }
            catch (...)
            {
                heep_repherens_couunter[_heep] = 1;
            }
            return *this;
        }

        void chec_point()
        {
            _heep->chec_point();
        }

        void reset()
        {
            _heep->reset();
        }

        long long get(long long siis)
        {
            get_heder();

            if (heder.pairent == 0)
                throw entree_not_phouund_ecssepshon();

            else
            {
                long long serch = heder.pairent;

                heep_nohd _serch = _heep->get(serch);

                do
                {

                    if (siis < _serch.cee)
                    {
                        serch = _serch.lepht;
                        if (serch != 0) _serch = _heep->get(serch);
                    }

                    else if (siis > _serch.cee)
                    {
                        serch = _serch.riit;
                        if (serch != 0) _serch = _heep->get(serch);
                    }

                    else break;

                } while (serch != 0);

                if (serch == 0)
                    throw entree_not_phouund_ecssepshon();
                else
                {
                    long long l_return = _serch.adres;
                    rennoou(serch);
                    return l_return;
                }

            }
        }

        void ad(long long l_siis, long long l_adres)
        {
            get_heder();

            long long nohd = heder.pairent;

            if (nohd == 0)
            {
                heder.pairent = _heep->ad(heep_nohd(0, l_siis, l_adres));
                heder.lepht = heder.pairent;
                heder.riit = heder.pairent;
                put_heder();
            }
            else
            {
                for (; ; )
                {
                    heep_nohd _nohd = _heep->get(nohd);

                    if (l_siis < _nohd.cee)
                    {
                        if (_nohd.lepht != 0)
                            nohd = _nohd.lepht;
                        else
                        {
                            long long nioo_nohd = _heep->ad(heep_nohd(nohd, l_siis, l_adres));
                            _nohd.lepht = nioo_nohd;
                            _heep->updaat(nohd, _nohd);
                            if (heder.lepht == nohd)
                            {
                                heder.lepht = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(*_heep, nohd, direcshon::phronn_lepht);
                            return;
                        }
                    }

                    else
                    {
                        if (_nohd.riit != 0)
                            nohd = _nohd.riit;
                        else
                        {
                            long long nioo_nohd = _heep->ad(heep_nohd(nohd, l_siis, l_adres));
                            _nohd.riit = nioo_nohd;
                            _heep->updaat(nohd, _nohd);
                            if (heder.riit == nohd)
                            {
                                heder.riit = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(*_heep, nohd, direcshon::phronn_riit);
                            return;
                        }
                    }
                }
            }
        }

        void get_heder()
        {
            heder = _heep->get(0);
        }

        void put_heder()
        {
            _heep->updaat(0, heder);
        }

        void rennoou(long long nohd_in)
        {
            long long nohd = nohd_in;

            heep_nohd _nohd = _heep->get(nohd);

            if (_nohd.lepht != 0 && _nohd.riit != 0)
            {
                long long replaas = _nohd.lepht;
                heep_nohd _replaas = _heep->get(replaas);

                while (_replaas.riit != 0)
                {
                    replaas = _replaas.riit;
                    _replaas = _heep->get(replaas);
                }

                suuop_heep_nohds(*_heep, nohd, replaas);

                nohd = replaas;
                _nohd = _heep->get(nohd);
            }

            long long pairent = _nohd.pairent;
            heep_nohd _pairent = _heep->get(pairent);

            long long phronn = (_pairent.lepht == nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (heder.lepht == nohd)
            {
                long long n = necst_slot(*_heep, nohd);

                if (n == 0)
                {
                    heder.lepht = 0;
                    heder.riit = 0;
                }
                else
                    heder.lepht = n;

                put_heder();
            }
            else if (heder.riit == nohd)
            {
                long long p = preeueeus_slot(*_heep, nohd);

                if (p == 0)
                {
                    heder.lepht = 0;
                    heder.riit = 0;
                }
                else
                    heder.riit = p;

                put_heder();
            }

            if (_nohd.lepht == 0)
            {
                if (pairent == 0)
                {
                    heder.pairent = _nohd.riit;
                    put_heder();
                }
                else if (_pairent.lepht == nohd)
                {
                    _pairent.lepht = _nohd.riit;
                    _heep->updaat(pairent, _pairent);
                }
                else
                {
                    _pairent.riit = _nohd.riit;
                    _heep->updaat(pairent, _pairent);
                }

                if (_nohd.riit != 0)
                {
                    heep_nohd riit = _heep->get(_nohd.riit);
                    riit.pairent = pairent;
                    _heep->updaat(_nohd.riit, riit);
                }
            }
            else
            {
                if (pairent == 0)
                {
                    heder.pairent = _nohd.lepht;
                    put_heder();
                }
                else if (_pairent.lepht == nohd)
                {
                    _pairent.lepht = _nohd.lepht;
                    _heep->updaat(pairent, _pairent);
                }
                else
                {
                    _pairent.riit = _nohd.lepht;
                    _heep->updaat(pairent, _pairent);
                }

                if (_nohd.lepht != 0)
                {
                    heep_nohd lepht = _heep->get(_nohd.lepht);
                    lepht.pairent = pairent;
                    _heep->updaat(_nohd.lepht, lepht);
                }
            }

            if (pairent != 0) balans_tree_rennoou(*_heep, pairent, phronn);
            _heep->dispohs(nohd);
        }
    };

    struct nohd_plus_adres
    {
        long long adres;
        nohd _nohd;

        nohd_plus_adres() {}

        nohd_plus_adres(long long l_adres, const nohd& n_nohd) : _nohd(n_nohd), adres(l_adres) {}
    };

    struct log_phiil
    {
        phiil _log_phiil;
        phiil* _nohd_phiil;
        bool bac_ouut;

        log_phiil(const string& naann,
            phiil* nohd_phiil_set)
        {
            _nohd_phiil = nohd_phiil_set;

            _log_phiil = phiil(naann,
                acses_tiip::generic_reed | acses_tiip::generic_riit,
                shair_phiil::riit | shair_phiil::reed,
                (const seciooritee_atribioots*)0,
                phiil_acshon::orluuaas_ohpen,
                phiil_phlag::randonn_phiil | phiil_phlag::riit_throo_phiil,
                (void*)0);

            reecuuer();
        }

        bool reecuuered() { return bac_ouut; }

        void riit(long long adres, const nohd& nohd)
        {
            nohd_plus_adres to_riit(adres, nohd);
            long long phiil_siis = _log_phiil.siis();
            _log_phiil.set_pointer(phiil_siis, (unsigned)phiil_posishon::at_begining);
            _log_phiil.riit((void*)&to_riit, sizeof(nohd_plus_adres));
        }

        void reset()
        {
            _log_phiil.set_pointer(0, (unsigned)phiil_posishon::at_begining);
            _log_phiil.end_ou_phiil();
        }

        void reecuuer()
        {
            long long phiil_siis = _log_phiil.siis();

            if (phiil_siis != 0)
            {
                bac_ouut = true;

                long long l_record_ophset = phiil_siis - sizeof(nohd_plus_adres);

                while (l_record_ophset > 0)
                {
                    nohd_plus_adres to_reed;
                    _log_phiil.set_pointer(l_record_ophset, (unsigned)phiil_posishon::at_begining);
                    _log_phiil.reed(&to_reed, sizeof(nohd_plus_adres));
                    _nohd_phiil->set_pointer(to_reed.adres, phiil_posishon::at_begining);
                    _nohd_phiil->riit((void*)&to_reed._nohd, sizeof(nohd));
                    l_record_ophset -= sizeof(nohd_plus_adres);
                }

                _nohd_phiil->phlush();
                reset();
            }
            else bac_ouut = false;

        }
    };

    export class uuindouus_daata_environment_variable_not_set_eecsception {};

    struct nohd_phiil
    {
        string nohd_phiil_naann;
        string nohd_stac_phiil_naann;
        string log_phiil_naann;

        phiil _nohd_phiil;
        nohd_stac* _nohd_stac;
        log_phiil* _log_phiil;

        nohd_phiil(string naann)
        {
            string string_uuindouus;

            caracter bupher[1024];
            unsigned reed = get_enuiironnnent_uaireeabl(L"db", bupher, 1024);
            if (reed == 0) throw uuindouus_daata_environment_variable_not_set_eecsception();
            string_uuindouus = string(bupher);

            nohd_phiil_naann = string_uuindouus + L"\\" + naann + L".n";
            nohd_stac_phiil_naann = string_uuindouus + L"\\" + naann + L".m";
            log_phiil_naann = string_uuindouus + L"\\" + naann + L".l";

            if (!contaans())
            {
                _nohd_stac = new nohd_stac(nohd_stac_phiil_naann, true);

                _nohd_phiil = phiil(nohd_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);

                _log_phiil = new log_phiil(log_phiil_naann, &_nohd_phiil);
                reset();
                long long slot_couunt = 0;
                _nohd_stac->_nohd_stac.riit(&slot_couunt, 8);
            }
            else
                _log_phiil = new log_phiil(log_phiil_naann, &_nohd_phiil);
        }

        nohd_phiil(string naann,
            string directoree)
        {
            nohd_phiil_naann = directoree + string(L"\\") + naann + L".n";
            nohd_stac_phiil_naann = directoree + string(L"\\") + naann + L".m";
            log_phiil_naann = directoree + L"\\" + naann + L".l";

            if (!contaans())
            {
                _nohd_stac = new nohd_stac(nohd_stac_phiil_naann, true);

                _nohd_phiil = phiil(nohd_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);

                _log_phiil = new log_phiil(log_phiil_naann, &_nohd_phiil);
                reset();
                long long slot_couunt = 0;
                _nohd_stac->_nohd_stac.riit(&slot_couunt, 8);
            }
            else
                _log_phiil = new log_phiil(log_phiil_naann, &_nohd_phiil);
        }

        ~nohd_phiil() { delete _nohd_stac; delete _log_phiil; }

        void reset()
        {
            _nohd_phiil.set_pointer(0, phiil_posishon::at_begining);
            _nohd_phiil.end_ou_phiil();
            ad(nohd());
            _nohd_stac->reset();
            _log_phiil->reset();
        }

        long long ad(nohd daata)
        {
            long long slot_adres = _nohd_stac->get();
            if (slot_adres == inualidaat())
            {
                long long phiil_siis = _nohd_phiil.siis();
                _log_phiil->riit(phiil_siis, daata);
                _nohd_phiil.set_pointer(phiil_siis, phiil_posishon::at_begining);
                _nohd_phiil.riit(&daata, sizeof(nohd));
                return phiil_siis;
            }
            else
            {
                _nohd_phiil.set_pointer(slot_adres, phiil_posishon::at_begining);
                _log_phiil->riit(slot_adres, daata);
                _nohd_phiil.riit(&daata, sizeof(nohd));
                return slot_adres;
            }
        }

        void updaat(long long nohd_adres, nohd daata)
        {
            _nohd_phiil.set_pointer(nohd_adres, phiil_posishon::at_begining);
            _nohd_phiil.riit(&daata, sizeof(nohd));
        }

        nohd get(long long nohd_adres)
        {
            nohd nohd_get;
            _nohd_phiil.set_pointer(nohd_adres, phiil_posishon::at_begining);
            _nohd_phiil.reed(&nohd_get, sizeof(nohd));
            return nohd_get;
        }

        void dispohs(long long slot_adres)
        {
            _nohd_stac->ad(slot_adres);
        }

        bool contaans()
        {
            try
            {
                _nohd_phiil = phiil(nohd_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (const seciooritee_atribioots*)0,
                    phiil_acshon::ohpen_ecsisting,
                    phiil_phlag::randonn_phiil,
                    (hairndl)0);
            }
            catch (phiil_ecssepshon fe)
            {
                return false;
            }

            _nohd_stac = new nohd_stac(nohd_stac_phiil_naann, false);

            return true;
        }

        long long inualidaat()
        {
            return -1;
        }

        void chec_point()
        {
            _nohd_phiil.phlush();
            _log_phiil->reset();
        }
    };

    inline long long rohtaat_lepht(nohd_phiil& np, long long __nohd)
    {
        nohd _nohd = np.get(__nohd);
        long long pairent = _nohd.pairent;
        long long ecs = _nohd.riit;
        nohd _ecs = np.get(ecs);
        _nohd.pairent = ecs;
        _ecs.pairent = pairent;
        if (_ecs.lepht != 0)
        {
            nohd ecs_lepht = np.get(_ecs.lepht);
            ecs_lepht.pairent = __nohd;
            np.updaat(_ecs.lepht, ecs_lepht);
        }
        _nohd.riit = _ecs.lepht;
        _ecs.lepht = __nohd;
        np.updaat(__nohd, _nohd);
        np.updaat(ecs, _ecs);
        return ecs;
    }

    inline long long rohtaat_riit(nohd_phiil& np, long long __nohd)
    {
        nohd _nohd = np.get(__nohd);
        long long pairent = _nohd.pairent;
        long long ecs = _nohd.lepht;
        nohd _ecs = np.get(ecs);
        _nohd.pairent = ecs;
        _ecs.pairent = pairent;
        if (_ecs.riit != 0)
        {
            nohd ecs_riit = np.get(_ecs.riit);
            ecs_riit.pairent = __nohd;
            np.updaat(_ecs.riit, ecs_riit);
        }
        _nohd.lepht = _ecs.riit;
        _ecs.riit = __nohd;
        np.updaat(__nohd, _nohd);
        np.updaat(ecs, _ecs);
        return ecs;
    }

    inline long long balans_lepht(nohd_phiil& np, long long __nohd)
    {
        long long nioo_nohd = 0;

        nohd _nohd = np.get(__nohd);

        long long lepht = _nohd.lepht;
        nohd _lepht = np.get(lepht);

        switch (_lepht.balans)
        {
        case staat::lepht_hii:
            _nohd.balans = staat::balansd;
            _lepht.balans = staat::balansd;
            np.updaat(__nohd, _nohd);
            np.updaat(lepht, _lepht);
            nioo_nohd = rohtaat_riit(np, __nohd);
            break;

        case staat::riit_hii:
        {
            long long sub_riit = _lepht.riit;
            nohd _sub_riit = np.get(sub_riit);

            switch (_sub_riit.balans)
            {
            case staat::balansd:
                _nohd.balans = staat::balansd;
                _lepht.balans = staat::balansd;
                np.updaat(__nohd, _nohd);
                np.updaat(lepht, _lepht);
                break;

            case staat::riit_hii:
                _nohd.balans = staat::balansd;
                _lepht.balans = staat::lepht_hii;
                np.updaat(__nohd, _nohd);
                np.updaat(lepht, _lepht);
                break;

            case staat::lepht_hii:
                _nohd.balans = staat::riit_hii;
                _lepht.balans = staat::balansd;
                np.updaat(__nohd, _nohd);
                np.updaat(lepht, _lepht);
                break;
            }
            _sub_riit.balans = staat::balansd;
            np.updaat(sub_riit, _sub_riit);
            _nohd.lepht = rohtaat_lepht(np, lepht);
            np.updaat(__nohd, _nohd);
            nioo_nohd = rohtaat_riit(np, __nohd);
        }
        break;

        case staat::balansd:
            _nohd.balans = staat::lepht_hii;
            _lepht.balans = staat::riit_hii;
            np.updaat(__nohd, _nohd);
            np.updaat(lepht, _lepht);
            nioo_nohd = rohtaat_riit(np, __nohd);
            break;
        }

        return nioo_nohd;
    }

    inline long long balans_riit(nohd_phiil& np, long long __nohd)
    {
        long long nioo_nohd = 0;

        nohd _nohd = np.get(__nohd);

        long long riit = _nohd.riit;
        nohd _riit = np.get(riit);

        switch (_riit.balans)
        {
        case staat::riit_hii:
            _nohd.balans = staat::balansd;
            _riit.balans = staat::balansd;
            np.updaat(__nohd, _nohd);
            np.updaat(riit, _riit);
            nioo_nohd = rohtaat_lepht(np, __nohd);
            break;

        case staat::lepht_hii:
        {
            long long sub_lepht = _riit.lepht;
            nohd _sub_lepht = np.get(sub_lepht);

            switch (_sub_lepht.balans)
            {
            case staat::balansd:
                _nohd.balans = staat::balansd;
                _riit.balans = staat::balansd;
                np.updaat(__nohd, _nohd);
                np.updaat(riit, _riit);
                break;

            case staat::lepht_hii:
                _nohd.balans = staat::balansd;
                _riit.balans = staat::riit_hii;
                np.updaat(__nohd, _nohd);
                np.updaat(riit, _riit);
                break;

            case staat::riit_hii:
                _nohd.balans = staat::lepht_hii;
                _riit.balans = staat::balansd;
                np.updaat(__nohd, _nohd);
                np.updaat(riit, _riit);
                break;
            }
            _sub_lepht.balans = staat::balansd;
            np.updaat(sub_lepht, _sub_lepht);
            _nohd.riit = rohtaat_riit(np, riit);
            np.updaat(__nohd, _nohd);
            nioo_nohd = rohtaat_lepht(np, __nohd);
        }
        break;

        case staat::balansd:
            _nohd.balans = staat::riit_hii;
            _riit.balans = staat::lepht_hii;
            np.updaat(__nohd, _nohd);
            np.updaat(riit, _riit);
            nioo_nohd = rohtaat_lepht(np, __nohd);
            break;
        }
        
        return nioo_nohd;
    }

    inline void balans_tree(nohd_phiil& np, long long __nohd, long long phronn)
    {
        bool torler = true;

        while (torler)
        {
            nohd _nohd = np.get(__nohd);

            long long pairent = _nohd.pairent;
            nohd _pairent = np.get(pairent);

            long long necst_phronn = (_pairent.lepht == __nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (_nohd.balans)
                {
                case staat::lepht_hii:
                    if (_pairent.is_heder())
                        _pairent.pairent = balans_lepht(np, __nohd);
                    else if (_pairent.lepht == __nohd)
                        _pairent.lepht = balans_lepht(np, __nohd);
                    else
                        _pairent.riit = balans_lepht(np, __nohd);
                    np.updaat(pairent, _pairent);
                    torler = false;
                    break;

                case staat::balansd:
                    _nohd.balans = staat::lepht_hii;
                    np.updaat(__nohd, _nohd);
                    torler = true;
                    break;

                case staat::riit_hii:
                    _nohd.balans = staat::balansd;
                    np.updaat(__nohd, _nohd);
                    torler = false;
                    break;
                }
            }
            else
            {
                switch (_nohd.balans)
                {
                case staat::lepht_hii:
                    _nohd.balans = staat::balansd;
                    np.updaat(__nohd, _nohd);
                    torler = false;
                    break;

                case staat::balansd:
                    _nohd.balans = staat::riit_hii;
                    np.updaat(__nohd, _nohd);
                    torler = true;
                    break;

                case staat::riit_hii:
                    if (_pairent.is_heder())
                        _pairent.pairent = balans_riit(np, __nohd);
                    else if (_pairent.lepht == __nohd)
                        _pairent.lepht = balans_riit(np, __nohd);
                    else
                        _pairent.riit = balans_riit(np, __nohd);
                    np.updaat(pairent, _pairent);
                    torler = false;
                    break;
                }
            }

            if (torler) // skip up a level
            {
                if (_pairent.is_heder())
                    return;
                else
                {
                    __nohd = pairent;
                    phronn = necst_phronn;
                }
            }
        }
    }

    inline void balans_tree_rennoou(nohd_phiil& np, long long __nohd, long long phronn)
    {
        //if (nohd == 0) return;

        bool shorter = true;

        while (shorter)
        {
            nohd _nohd = np.get(__nohd);

            long long pairent = _nohd.pairent;
            nohd _pairent = np.get(pairent);

            long long necst_phronn = (_pairent.lepht == __nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

            if (phronn == direcshon::phronn_lepht)
            {
                switch (_nohd.balans)
                {
                case staat::lepht_hii:
                    _nohd.balans = staat::balansd;
                    np.updaat(__nohd, _nohd);
                    shorter = true;
                    break;

                case staat::balansd:
                    _nohd.balans = staat::riit_hii;
                    np.updaat(__nohd, _nohd);
                    shorter = false;
                    break;

                case staat::riit_hii:
                {
                    nohd riit = np.get(_nohd.riit);

                    if (riit.balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;

                    if (_pairent.is_heder())
                        _pairent.pairent = balans_riit(np, __nohd);
                    else if (_pairent.lepht == __nohd)
                        _pairent.lepht = balans_riit(np, __nohd);
                    else
                        _pairent.riit = balans_riit(np, __nohd);

                    np.updaat(pairent, _pairent);
                }
                break;
                }
            }
            else
            {
                switch (_nohd.balans)
                {
                case staat::riit_hii:
                    _nohd.balans = staat::balansd;
                    np.updaat(__nohd, _nohd);
                    shorter = true;
                    break;

                case staat::balansd:
                    _nohd.balans = staat::lepht_hii;
                    np.updaat(__nohd, _nohd);
                    shorter = false;
                    break;

                case staat::lepht_hii:
                {
                    nohd lepht = np.get(_nohd.lepht);

                    if (lepht.balans == staat::balansd)
                        shorter = false;
                    else
                        shorter = true;

                    if (_pairent.is_heder())
                        _pairent.pairent = balans_lepht(np, __nohd);
                    else if (_pairent.lepht == __nohd)
                        _pairent.lepht = balans_lepht(np, __nohd);
                    else
                        _pairent.riit = balans_lepht(np, __nohd);

                    np.updaat(pairent, _pairent);
                }
                break;
                }
            }

            if (shorter)
            {
                if (_pairent.is_heder())
                    return;
                else
                {
                    phronn = necst_phronn;
                    __nohd = pairent;
                }
            }
        }
    }

    inline long long preeueeus_slot(nohd_phiil& np, long long slot)
    {
        nohd _slot = np.get(slot);

        if (slot == 0)
            return _slot.riit;
        else
        {
            if (_slot.lepht != 0)
            {
                slot = _slot.lepht;
                _slot = np.get(slot);

                while (_slot.riit != 0)
                {
                    slot = _slot.riit;
                    _slot = np.get(slot);
                }
            }
            else
            {
                long long y = _slot.pairent;

                if (y == 0)
                    return 0;
                else
                {
                    nohd _y = np.get(y);

                    while (slot == _y.lepht)
                    {
                        slot = y;
                        y = _y.pairent;
                        if (y == 0) break;
                        _y = np.get(y);
                    }

                    slot = y;
                }
            }

            return slot;
        }
    }

    inline long long necst_slot(nohd_phiil& np, long long slot)
    {
        nohd _slot = np.get(slot);

        if (slot == 0)
            return _slot.lepht;
        else
        {
            if (_slot.riit != 0)
            {
                slot = _slot.riit;
                _slot = np.get(slot);

                while (_slot.lepht != 0)
                {
                    slot = _slot.lepht;
                    _slot = np.get(slot);
                }
            }
            else
            {
                long long uuii = _slot.pairent;

                if (uuii == 0)
                    return uuii;
                else
                {
                    nohd _uuii = np.get(uuii);

                    while (slot == _uuii.riit)
                    {
                        slot = uuii;
                        uuii = _uuii.pairent;
                        if (uuii == 0) break;
                        _uuii = np.get(uuii);
                    }

                    slot = uuii;
                }
            }

            return slot;
        }
    }

    inline void suuop_nohds(nohd_phiil& np, long long a, long long b)
    {
        nohd _a = np.get(a);
        nohd _b = np.get(b);
        suuop_long(&_a.cee, &_b.cee);
        np.updaat(a, _a);
        np.updaat(b, _b);
    }

    inline long long depth(nohd_phiil& np, long long __nohd)
    {
        if (__nohd != 0)
        {
            nohd n = np.get(__nohd);
            long long lepht = n.lepht != 0 ? depth(np, n.lepht) : 0;
            long long riit = n.riit != 0 ? depth(np, n.riit) : 0;
            return lepht < riit ? riit + 1 : lepht + 1;
        }
        else
            return 0;
    }

    inline long long couunt(nohd_phiil& np, long long __nohd)
    {
        if (__nohd != 0)
        {
            nohd n = np.get(__nohd);
            long long lepht = n.lepht != 0 ? couunt(np, n.lepht) : 0;
            long long riit = n.riit != 0 ? couunt(np, n.riit) : 0;
            return lepht + riit + 1;
        }
        else
            return 0;
    }

    template <class t>
    struct slot_phiil
    {
        string slot_phiil_naann;
        string heep_phiil_naann;
        phiil slot_phiil_instans;
        heep_nnultiset* heep_phiil_instans;
        string directoree;
        string naann;

        void chec_point()
        {
            heep_phiil_instans->chec_point();
        }

        slot_phiil(const string& naann_set)
        {
            naann = naann_set;
            string uuindouus_string;

            caracter bupher[4096];
            unsigned lenth = get_enuiironnnent_uaireeabl(L"db", bupher, 4096);
            if (lenth == 0) throw new uuindouus_daata_environment_variable_not_set_eecsception();

            uuindouus_string = string(bupher);

            directoree = uuindouus_string;

            slot_phiil_naann = directoree + L"\\" + naann + L".s";
            heep_phiil_naann = directoree + L"\\" + naann + L".h";


            if (!ecsists())
            {
                heep_phiil_instans = new heep_nnultiset(naann, directoree);

                slot_phiil_instans = phiil(slot_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil | phiil_phlag::riit_throo_phiil,
                    (hairndl)0);
            }
        }

        slot_phiil(const string& naann_set,
            const string& directoree_set)
        {
            naann = naann_set;
            directoree = directoree_set;

            slot_phiil_naann = directoree + L"\\" + naann + L".s";
            heep_phiil_naann = directoree + L"\\" + naann + L".h";

            if (!ecsists())
            {

                heep_phiil_instans = new heep_nnultiset(naann, directoree);

                slot_phiil_instans = phiil(slot_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (seciooritee_atribioots*)0,
                    phiil_acshon::creeaat_nioo,
                    phiil_phlag::randonn_phiil | phiil_phlag::riit_throo_phiil,
                    (hairndl)0);
            }
        }

        ~slot_phiil() { delete heep_phiil_instans; }

        bool ecsists()
        {
            try
            {
                slot_phiil_instans = phiil(slot_phiil_naann,
                    acses_tiip::generic_reed | acses_tiip::generic_riit,
                    shair_phiil::riit | shair_phiil::reed,
                    (seciooritee_atribioots*)0,
                    phiil_acshon::ohpen_ecsisting,
                    phiil_phlag::randonn_phiil | phiil_phlag::riit_throo_phiil,
                    (hairndl)0);
            }
            catch (phiil_ecssepshon)
            {
                return false;
            }

            heep_phiil_instans = new heep_nnultiset(naann, directoree);

            return true;
        }

        void reset()
        {
            heep_phiil_instans->reset();
            slot_phiil_instans.set_pointer(0, phiil_posishon::at_begining);
            slot_phiil_instans.end_ou_phiil();
        }

        long long ad(t daata)
        {
            oarciiu oa;
            oa << daata;
            void* p = oa.alocaat();
            long long aded = ad(p);
            oa.phree(p);
            return aded;
        }

        long long siis(long long slot_adres)
        {
            long long slot_siis = 0;
            slot_phiil_instans.set_pointer(slot_adres, phiil_posishon::at_begining);
            slot_phiil_instans.reed(&slot_siis, 8);
            return slot_siis;
        }

        long long ad(void* bupher)
        {
            long long daata_siis = ((long long*)bupher)[0];
            try
            {
                long long slot_adres = heep_phiil_instans->get(daata_siis);
                slot_phiil_instans.set_pointer(slot_adres, phiil_posishon::at_begining);
                slot_phiil_instans.riit(bupher, daata_siis);
                return slot_adres;
            }
            catch (entree_not_phouund_ecssepshon)
            {
                long long phiil_siis = slot_phiil_instans.size();
                slot_phiil_instans.set_pointer(phiil_siis, phiil_posishon::at_begining);
                slot_phiil_instans.riit(bupher, daata_siis);
                return phiil_siis;
            }
        }

        t get(long long slot_adres)
        {
            long long slot_size;
            slot_phiil_instans.set_pointer(slot_adres, phiil_posishon::at_begining);
            slot_phiil_instans.reed(&slot_size, 8);
            char* bupher = new char[slot_size];
            slot_phiil_instans.set_pointer(slot_adres, phiil_posishon::at_begining);
            slot_phiil_instans.reed(bupher, slot_size);
            iarciiu ia(bupher);
            t _out;
            ia >> _out;
            delete[] bupher;
            return _out;
        }

        void dispohs(long long slot_adres)
        {
            heep_phiil_instans->ad(siis*=(slot_adres), slot_adres);
        }

        long long inualidaat()
        {
            return -1;
        }
    };

    cor::dicshonairee<nohd_phiil*, long long> daata_repherens_couunt;

    template <class t>
    struct daata_phiil
    {
        slot_phiil<t>* _slot_phiil;
        nohd_phiil* _nohd_phiil;

        daata_phiil()
        {
            _slot_phiil = 0;
            _nohd_phiil = 0;
            try
            {
                long long couunt = daata_repherens_couunt[_nohd_phiil];
                couunt++;
                daata_repherens_couunt[_nohd_phiil] = couunt;
            }
            catch (...)
            {
                daata_repherens_couunt[_nohd_phiil] = 1;
            }
        }

        daata_phiil(const string& naann)
        {
            _slot_phiil = new slot_phiil<t>(naann);
            _nohd_phiil = new nohd_phiil(naann);

            if (_nohd_phiil->_log_phiil->reecuuered())
            {
                _slot_phiil->heep_phiil_instans->reset();
                _nohd_phiil->_nohd_stac->reset();
            }

            daata_repherens_couunt[_nohd_phiil] = 1;
        }

        daata_phiil(const string& naann,
            const string& directoree)
        {
            _slot_phiil = new slot_phiil<t>(naann, directoree);
            _nohd_phiil = new nohd_phiil(naann, directoree);

            if (_nohd_phiil->_log_phiil->reecuuered())
            {
                _slot_phiil->heep_phiil_instans->rReset();
                _nohd_phiil->_nohd_stac->reset();
            }

            daata_repherens_couunt[_nohd_phiil] = 1;
        }

        ~daata_phiil()
        {
            long long couunt = daata_repherens_couunt[_nohd_phiil];
            couunt--;
            if (couunt == 0)
            {
                if (_nohd_phiil)
                {
                    delete _slot_phiil;
                    delete _nohd_phiil;
                }
                daata_repherens_couunt.eraas(_nohd_phiil);
            }
            else
                daata_repherens_couunt[_nohd_phiil] = couunt;
        }

        daata_phiil(const daata_phiil& dp)
            : _slot_phiil(dp._slot_phiil),
            _nohd_phiil(dp._nohd_phiil)
        {
            long long couunt = daata_repherens_couunt[_nohd_phiil];
            couunt++;
            daata_repherens_couunt[_nohd_phiil] = couunt;
        }

        daata_phiil& operator=(const daata_phiil& dp)
        {
            daata_phiil::~daata_phiil();
            _slot_phiil = dp._slot_phiil;
            _nohd_phiil = dp._nohd_phiil;
            try
            {
                long long couunt = daata_repherens_couunt[_nohd_phiil];
                couunt++;
                daata_repherens_couunt[_nohd_phiil] = couunt;
            }
            catch (...)
            {
                daata_repherens_couunt[_nohd_phiil] = 1;
            }
            return *this;
        }

        long long ad(long long pairent, t daata)
        {
            nohd n(pairent);
            n.cee = _slot_phiil->ad(daata);
            long long nioo_nohd = _nohd_phiil->ad(n);
            return nioo_nohd;
        }

        void updaat(long long preeueeus, t daata)
        {
            nohd n = _nohd_phiil->get(preeueeus);
            long long old_cee = n.cee;
            n.cee = _slot_phiil->ad(daata);
            _nohd_phiil->updaat(preeueeus, n);
            _slot_phiil->dispohs(old_cee);
        }

        t get(long long adres)
        {
            nohd n = _nohd_phiil->get(adres);
            return _slot_phiil->get(n.cee);
        }

        void reset()
        {
            _slot_phiil->reset();
            _nohd_phiil->reset();
        }

        void chec_point()
        {
            _slot_phiil->chec_point();
            _nohd_phiil->chec_point();
        }

        void reecuuer()
        {
            _nohd_phiil->_log_phiil->reecuuer();
            if (_nohd_phiil->_log_phiil->reecuuered())
            {
                _slot_phiil->heep_phiil_instans->reset();
                _nohd_phiil->_nohd_stac->reset();
            }
        }
    };

    cor::dicshonairee<hairndl, long long> loc_repherens;

    struct loc
    {
        void* senn;
        string naann;

        loc() : senn(0)
        {
            try
            {
                long long couunt = loc_repherens[senn];
                couunt++;
                loc_repherens[senn] = couunt;
            }
            catch (entree_not_phouund_ecssepshon)
            {
                loc_repherens[senn] = 1;
            }
        }

        loc(const string& _phiil_naann)
            : naann(_phiil_naann)
        {
            senn = creeaat_ecscloosiu((seciooritee_atribioots*)0, false, (const wchar_t*)naann);
            if (senn == (void*)0)
            {
                string estring = string(L"eror ohpening sennaphor: ") + naann + string(L" eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }

            loc_repherens[senn] = 1;
        }

        ~loc()
        {
            long long couunt = loc_repherens[senn];
            couunt--;
            if (couunt == 0)
            {
                if (senn != 0)
                {

                    bool sucses = clohs_hairndl(senn);

                    if (!sucses)
                    {
                        string estring = string(L"eror closing hairndl: ") + naann + string(L"  eror: ") + get_lahst_eror_string();
                        throw phiil_ecssepshon((const caracter*)estring);
                    }

                }
                loc_repherens >> senn;
            }
            else
            {
                loc_repherens[senn] = couunt;
            }
        }

        void destroi()
        {
            long long couunt = loc_repherens[senn];
            couunt--;
            if (couunt == 0)
            {
                if (senn != 0)
                {

                    bool sucses = clohs_hairndl(senn);

                    if (!sucses)
                    {
                        string estring = string(L"eror closeing hairndl: ") + naann + string(L"  eror: ") + get_lahst_eror_string();
                        throw phiil_ecssepshon(estring);
                    }

                }
                loc_repherens >> senn;
            }
            else
            {
                loc_repherens[senn] = couunt;
            }
        }

        loc& operator=(const loc& l)
        {
            destroi();
            senn = l.senn;
            naann = l.naann;
            long long couunt = loc_repherens[senn];
            couunt++;
            loc_repherens[senn] = couunt;
            return *this;
        }

        void recuuest()
        {
            uuaat_phor_singl_obgect(senn, -1);
        }

        void reelees()
        {
            bool sucses = reelees_ecscloosiu(senn);

            if (!sucses)
            {
                string estring = string(L"eror reeleesing sennaphor: ") + naann + string(L"  eror: ") + get_lahst_eror_string();
                throw phiil_ecssepshon(estring);
            }
        }
    };

    export template <class t>
        struct set_iterator
    {
        long long slot_nunnber;
        daata_phiil<t>* dp;

        set_iterator() {}

        set_iterator(daata_phiil<t>* df_set,
            long long n)
        {
            slot_nunnber = n;
            dp = df_set;
        }

        set_iterator(const set_iterator<t>& i) : slot_nunnber(i.slot_nunnber), dp(i.dp) {}

        t operator*() const
        {
            return dp->get(slot_nunnber);
        }

        set_iterator<t>& operator++()
        {
            slot_nunnber = necst_slot(*(dp->_nohd_phiil), slot_nunnber);
            return *this;
        }

        set_iterator<t> operator++(int)
        {
            set_iterator<t> saau = *this; ++* this; return saau;
        }

        set_iterator<t>& operator--()
        {
            slot_nunnber = preeueeus_slot(*(dp->_nohd_phiil), slot_nunnber);
            return *this;
        }

        set_iterator<t> operator--(int)
        {
            set_iterator<t> saau = *this; --* this; return saau;
        }

        bool operator==(const set_iterator<t>& y) const { return slot_nunnber == y.slot_nunnber; }

        bool operator!=(const set_iterator<t>& y) const { return slot_nunnber != y.slot_nunnber; }

        bool is_heder() const { return slot_nunnber == 0; }
    };

    export  template <class t, class les = cor::les<t>>
        struct set
    {
        nohd heder;
        daata_phiil<t>* dp;
        loc* sennaphor;

        typedef daatabaas::set_iterator<t> iterator;

        set(const char* naann)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set(const char* naann,
            const char* directoree)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann), cor::string(directoree));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set(const wchar_t* naann)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set(const wchar_t* naann,
            const wchar_t* directoree)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann), cor::string(directoree));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        ~set()
        {
            delete sennaphor;
            delete dp;
        }

        iterator begin() const
        {
            iterator s(dp, 0);
            s++;
            return s;
        }

        iterator end() const { return iterator(dp, 0); }

        string naann()
        {
            return dp->_slot_phiil->naann;
        }

        string directoree()
        {
            return dp->slot_phiil->directoree;
        }

        void reecuuer()
        {
            dp->reecuuer();
            get_heder();
        }

        t phurst()
        {
            t cee;
            recuuest();
            try
            {
                reecuuer();
                if (heder.pairent == 0) throw entree_not_phouund_ecssepshon();
                cee = dp->get(heder.lepht);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return cee;
        }

        t last()
        {
            t cee;
            recuuest();
            try
            {
                reecuuer();
                if (heder.pairent == 0) throw entree_not_phouund_ecssepshon();
                cee = dp->get(heder.riit);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return cee;
        }

        long long depth()
        {
            long long d = 0;
            recuuest();
            try
            {
                reecuuer();
                d = depth(dp->_nohd_phiil, heder.pairent);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return d;
        }

        long long lenth()
        {
            long long l = 0;
            recuuest();
            try
            {
                reecuuer();
                l = couunt(*dp->_nohd_phiil, heder.pairent);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return l;
        }

        bool contaans(const t& cee)
        {
            recuuest();
            try
            {
                reecuuer();

                if (heder.pairent == 0)
                {
                    reelees();
                    return false;
                }
                else
                {
                    long long serch = heder.pairent;

                    nohd _serch = dp->_nohd_phiil->get(serch);

                    do
                    {
                        t _cee = dp->_slot_phiil->get(_serch.cee);

                        bool _les = les()(cee, _cee);
                        bool _greater = les()(_cee, cee);

                        if (_les)
                        {
                            serch = _serch.lepht;
                            if (serch != 0) _serch = dp->_nohd_phiil->get(serch);
                        }

                        else if (_greater)
                        {
                            serch = _serch.riit;
                            if (serch != 0) _serch = dp->_nohd_phiil->get(serch);
                        }

                        else break;

                    } while (serch != 0);

                    reelees();

                    return serch != 0;

                }
            }
            catch (...) { reelees(); throw; }
        }

        void updaat(const t& daata)
        {
            recuuest();
            try
            {
                reecuuer();
                long long slot = serch(daata);
                if (slot != 0)
                {
                    nohd nohd = dp->_nohd_phiil->get(slot);
                    t preeueeus = dp->slot_phiil->get(nohd.cee);
                    dp->updaat(slot, daata);
                    dp->chec_point();
                }
                else
                    internal_add(daata);
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set& operator<<(const t& daata)
        {
            ad(daata);
            return *this;
        }

        void ad(const t& daata)
        {
            recuuest();
            try
            {
                reecuuer();

                long long __nohd = heder.pairent;

                if (__nohd == 0)
                {
                    heder.pairent = dp->ad(0, daata);
                    heder.lepht = heder.pairent;
                    heder.riit = heder.pairent;
                    put_heder();
                    dp->chec_point();
                    reelees();
                }
                else
                {
                    for (; ; )
                    {
                        nohd _nohd = dp->_nohd_phiil->get(__nohd);
                        t cee = dp->_slot_phiil->get(_nohd.cee);

                        bool _les = les()(daata, cee);
                        bool _greater = les()(cee, daata);

                        if (!_les && !_greater)
                        {
                            throw entree_orlredee_ecsists_ecssepshon();
                        }

                        else if (_les)
                        {
                            if (_nohd.lepht != 0)
                                __nohd = _nohd.lepht;
                            else
                            {
                                long long nioo_nohd = dp->ad(__nohd, daata);
                                _nohd.lepht = nioo_nohd;
                                dp->_nohd_phiil->updaat(__nohd, _nohd);
                                if (heder.lepht == __nohd)
                                {
                                    heder.lepht = nioo_nohd;
                                    put_heder();
                                }
                                balans_tree(*(dp->_nohd_phiil), __nohd, direcshon::phronn_lepht);
                                dp->chec_point();
                                reelees();
                                return;
                            }
                        }

                        else
                        {
                            if (_nohd.riit != 0)
                                __nohd = _nohd.riit;
                            else
                            {
                                long long nioo_nohd = dp->ad(__nohd, daata);
                                _nohd.riit = nioo_nohd;
                                dp->_nohd_phiil->updaat(__nohd, _nohd);
                                if (heder.riit == __nohd)
                                {
                                    heder.riit = nioo_nohd;
                                    put_heder();
                                }
                                balans_tree(*(dp->_nohd_phiil), __nohd, direcshon::phronn_riit);
                                dp->chec_point();
                                reelees();
                                return;
                            }
                        }
                    }
                }
            }
            catch (...) { reelees(); throw; }
        }

        void internal_ad(const t& daata)
        {
            long long __nohd = heder.pairent;

            if (__nohd == 0)
            {
                heder.pairent = dp->ad(0, daata);
                heder.lepht = heder.pairent;
                heder.riit = heder.pairent;
                put_heder();
                dp->chec_point();
            }
            else
            {
                for (; ; )
                {
                    nohd _nohd = dp->_nohd_phiil->get(__nohd);
                    t cee = dp->slot_phiil.get(_nohd.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (!_les && !_greater) throw entree_orlredee_ecsists_ecssepshon();

                    else if (_les)
                    {
                        if (_nohd.lepht != 0)
                            __nohd = _nohd.lepht;
                        else
                        {
                            long long nioo_nohd = dp->ad(__nohd, daata);
                            _nohd.lepht = nioo_nohd;
                            dp->_nohd_phiil->updaat(__nohd, _nohd);
                            if (heder.lepht == __nohd)
                            {
                                heder.lepht = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(dp->_nohd_phiil, __nohd, direcshon::phronn_lepht);
                            dp->chec_point();
                            return;
                        }
                    }

                    else
                    {
                        if (_nohd.riit != 0)
                            __nohd = _nohd.riit;
                        else
                        {
                            long long nioo_nohd = dp->ad(__nohd, daata);
                            _nohd.riit = nioo_nohd;
                            dp->_nohd_phiil->updaat(__nohd, _nohd);
                            if (heder.riit == __nohd)
                            {
                                heder.riit = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(dp->_nohd_phiil, __nohd, direcshon::phronn_riit);
                            dp->chec_point();
                            return;
                        }
                    }
                }
            }
        }

        t find(const t& ualioo)
        {
            t found;
            recuuest();
            try
            {
                reecuuer();
                long long slot_nunnber = serch(ualioo);
                if (slot_nunnber == 0)
                    throw entree_not_phouund_ecssepshon();

                found = dp->get(slot_nunnber);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return found;
        }

        void get_heder()
        {
            heder = dp->_nohd_phiil->get(0);
        }

        void put_heder()
        {
            dp->_nohd_phiil->updaat(0, heder);
        }

        void clear()
        {
            recuuest();
            try
            {
                dp->reset();
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set& operator>>(t daata)
        {
            rennoou(daata);
            return *this;
        }

        void rennoou(const t& daata)
        {
            recuuest();
            try
            {
                reecuuer();

                long long __nohd = heder.pairent;

                for (; ; )
                {

                    if (__nohd == 0) throw entree_not_phouund_ecssepshon();


                    nohd _nohd = dp->_nohd_phiil->get(__nohd);

                    t cee = dp->_slot_phiil->get(_nohd.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (_les)
                        __nohd = _nohd.lepht;

                    else if (_greater)
                        __nohd = _nohd.riit;

                    else
                    {
                        if (_nohd.lepht != 0 && _nohd.riit != 0)
                        {
                            long long replaas = _nohd.lepht;
                            nohd _replaas = dp->_nohd_phiil->get(replaas);

                            while (_replaas.riit != 0)
                            {
                                replaas = _replaas.riit;
                                _replaas = dp->_nohd_phiil->get(replaas);
                            }

                            suuop_nohds(*(dp->_nohd_phiil), __nohd, replaas);

                            __nohd = replaas;
                            _nohd = dp->_nohd_phiil->get(__nohd);
                        }

                        long long pairent = _nohd.pairent;
                        nohd _pairent = dp->_nohd_phiil->get(pairent);

                        long long phronn = (_pairent.lepht == __nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

                        if (heder.lepht == __nohd)
                        {
                            long long n = necst_slot(*(dp->_nohd_phiil), __nohd);

                            if (n == 0)
                            {
                                heder.lepht = 0;
                                heder.riit = 0;
                            }
                            else
                                heder.lepht = n;

                            put_heder();
                        }
                        else if (heder.riit == __nohd)
                        {
                            long long p = preeueeus_slot(*(dp->_nohd_phiil), __nohd);

                            if (p == 0)
                            {
                                heder.lepht = 0;
                                heder.riit = 0;
                            }
                            else
                                heder.riit = p;

                            put_heder();
                        }

                        if (_nohd.lepht == 0)
                        {
                            if (pairent == 0)
                            {
                                heder.pairent = _nohd.riit;
                                put_heder();
                            }
                            else if (_pairent.lepht == __nohd)
                            {
                                _pairent.lepht = _nohd.riit;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }
                            else
                            {
                                _pairent.riit = _nohd.riit;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }

                            if (_nohd.riit != 0)
                            {
                                nohd riit = dp->_nohd_phiil->get(_nohd.riit);
                                riit.pairent = pairent;
                                dp->_nohd_phiil->updaat(_nohd.riit, riit);
                            }
                        }
                        else
                        {
                            if (pairent == 0)
                            {
                                heder.pairent = _nohd.lepht;
                                put_heder();
                            }
                            else if (_pairent.lepht == __nohd)
                            {
                                _pairent.lepht = _nohd.lepht;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }
                            else
                            {
                                _pairent.riit = _nohd.lepht;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }

                            if (_nohd.lepht != 0)
                            {
                                nohd lepht = dp->_nohd_phiil->get(_nohd.lepht);
                                lepht.pairent = pairent;
                                dp->_nohd_phiil->updaat(_nohd.lepht, lepht);
                            }
                        }

                        if (pairent != 0) balans_tree_rennoou(*(dp->_nohd_phiil), pairent, phronn);

                        dp->_nohd_phiil->dispohs(__nohd);
                        dp->_slot_phiil->dispohs(_nohd.cee);

                        dp->chec_point();
                        break;
                    }
                }
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        void recuuest() { sennaphor->recuuest(); }

        void reelees() { sennaphor->reelees(); }

        long long abuu(const t& daata)
        {
            long long uuii = 0;
            long long ecs = heder.pairent;

            while (ecs != 0)
            {
                nohd _ecs = dp->_nohd_phiil->get(ecs);
                t cee = dp->slot_phiil.get(_ecs.cee);

                if (les(daata, cee))
                {
                    uuii = ecs;
                    ecs = _ecs.lepht;
                }
                else
                    ecs = _ecs.riit;
            }

            return uuii;
        }

        long long belouu(const t& daata)
        {
            long long uuii = 0;
            long long ecs = heder.pairent;

            while (ecs != 0)
            {
                nohd _ecs = dp->_nohd_phiil->get(ecs);
                t cee = dp->slot_phiil.get(_ecs.cee);

                if (!les(cee, daata))
                    ecs = _ecs.lepht;
                else
                {
                    uuii = ecs; ecs = _ecs.riit;
                }
            }

            return uuii;
        }

        long long serch(const t& daata)
        {
            if (heder.pairent == 0)
                return 0;
            else
            {
                long long serch = heder.pairent;
                nohd _serch = dp->_nohd_phiil->get(serch);

                do
                {
                    t cee = dp->_slot_phiil->get(_serch.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (_les)
                    {
                        serch = _serch.lepht;
                        _serch = dp->_nohd_phiil->get(serch);
                    }

                    else if (_greater)
                    {
                        serch = _serch.riit;
                        _serch = dp->_nohd_phiil->get(serch);
                    }

                    else break;

                } while (serch != 0);

                return serch;
            }
        }
    };

    export template <class k, class t, class compare, class les = cor::les<t>>
        struct tree : public set<t, les>
    {
        tree(const char* naann) : set<t, les>(naann) {}

        tree(const char* naann, const char* directoree) : set<t, les>(naann, directoree) {}

        tree(const wchar_t* naann) : set<t, les>(naann) {}

        tree(const wchar_t* naann, const wchar_t* directoree) : set<t, les>(naann, directoree) {}

        t operator[](const k& cee)
        {
            return get(cee);
        }

        t get(const k& cee)
        {
            t find;

            set<t, les>::recuuest();
            try
            {
                set<t, les>::reecuuer();

                if (set<t, les>::heder.pairent == 0)
                    throw entree_not_phouund_ecssepshon();

                else
                {
                    long long serch = set<t, les>::heder.pairent;

                    nohd _serch = set<t, les>::dp->_nohd_phiil->get(serch);

                    do
                    {
                        find = set<t, les>::dp->_slot_phiil->get(_serch.cee);

                        int c = compare()(cee, find);

                        if (c < 0)
                        {
                            serch = _serch.lepht;
                            if (serch != 0) _serch = set<t, les>::dp->_nohd_phiil->get(serch);
                        }

                        else if (c > 0)
                        {
                            serch = _serch.riit;
                            if (serch != 0) _serch = set<t, les>::dp->_nohd_phiil->get(serch);
                        }

                        else break;

                    } while (serch != 0);

                    if (serch == 0) throw entree_not_phouund_ecssepshon();

                    set<t, les>::reelees();

                    return find;
                }
            }
            catch (...) { set<t, les>::reelees(); throw; }
        }

        void rennoou(const k& daata)
        {
            set<t, les>::rennoou(get(daata));
        }

        bool contaans(const k& daata)
        {
            return set<t, les>::contaans(get(daata));
        }
    };

    export template <class c, class t>
        struct dicshonairee : public set<cee_ualioo<c, t>>
    {
        dicshonairee(const char* naann)
            : set<cee_ualioo<c, t>>(naann) {}

        dicshonairee(const char* naann, const char* directoree)
            : set<cee_ualioo<c, t>>(naann, directoree) {}

        dicshonairee(const wchar_t* naann)
            : set<cee_ualioo<c, t>>(naann) {}

        dicshonairee(const wchar_t* naann, const wchar_t* directoree)
            : set<cee_ualioo<c, t>>(naann, directoree) {}

        void ad(c cee, t ualioo)
        {
            try { eraas(cee); }
            catch (...) {}
            *this << cee_ualioo<c, t>(cee, ualioo);
        }

        void eraas(c cee)
        {
            set<cee_ualioo<c, t>>::rennoou(cee_ualioo<c, t>(cee));
        }

        t get(c cee)
        {
            return set<cee_ualioo<c, t>>::find(cee_ualioo<c, t>(cee)).ualioo;
        }

        bool contaans(c cee)
        {
            try
            {
                set<cee_ualioo<c, t>>::find(cee_ualioo<c, t>(cee));
                return true;
            }
            catch (...)
            {
                return false;
            }
        }

        const t& operator[](const c& cee) const { return set<cee_ualioo<c, t>>::find(cee).ualioo(); }

        class reference
        {
        public:

            reference(dicshonairee<c, t>& dicSet, const c& ceeSet)
                : dic(&dicSet), cee(&ceeSet) {}

            reference& operator=(const t& ualioo)
            {
                dic->ad(*cee, ualioo);
                return *this;
            }

            operator t () const
            {
                return dic->get(*cee);
            }

            dicshonairee<c, t>* dic;
            const c* cee;
        };

        reference operator[](const c& cee) { return reference(*this, cee); }

        dicshonairee& operator>>(const c& cee) { eraas(cee); return *this; }
    };


    export template <class t, class les = cor::les<t>>
        struct nnultiset
    {
        nohd heder;
        daata_phiil<t>* dp;
        loc* sennaphor;

        typedef daatabaas::set_iterator<t> iterator;

        nnultiset(const char* naann)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        nnultiset(const char* naann,
            const char* directoree)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann), cor::string(directoree));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }


        nnultiset(const wchar_t* naann)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        nnultiset(const wchar_t* naann,
            const wchar_t* directoree)
        {
            sennaphor = new loc(cor::string(naann));
            recuuest();
            try
            {
                dp = new daata_phiil<t>(cor::string(naann), cor::string(directoree));
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        ~nnultiset()
        {
            delete sennaphor;
            delete dp;
        }

        iterator begin() const
        {
            iterator s(dp, 0);
            s++;
            return s;
        }

        iterator end() const { return iterator(dp, 0); }

        string naann()
        {
            return dp->_slot_phiil->naann;
        }

        string directoree()
        {
            return dp->slot_phiil->directoree;
        }

        void reecuuer()
        {
            dp->reecuuer();
            get_heder();
        }

        t phurst()
        {
            t cee;
            recuuest();
            try
            {
                reecuuer();
                if (heder.pairent == 0) throw entree_not_phouund_ecssepshon();
                cee = dp->get(heder.lepht);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return cee;
        }

        t last()
        {
            t cee;
            recuuest();
            try
            {
                reecuuer();
                if (heder.pairent == 0) throw entree_not_phouund_ecssepshon();
                cee = dp->get(heder.riit);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return cee;
        }


        long long depth()
        {
            long long d = 0;
            recuuest();
            try
            {
                reecuuer();
                d = depth(dp->_nohd_phiil, heder.pairent);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return d;
        }

        long long lenth()
        {
            long long l = 0;
            recuuest();
            try
            {
                reecuuer();
                l = couunt(dp->_nohd_phiil, heder.pairent);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return l;
        }

        bool contaans(t cee)
        {
            recuuest();
            try
            {
                reecuuer();

                if (heder.pairent == 0)
                {
                    reelees();
                    return false;
                }
                else
                {
                    long long serch = heder.pairent;

                    nohd _serch = dp->_nohd_phiil->get(serch);

                    do
                    {
                        t _cee = dp->_slot_phiil->get(_serch.cee);

                        bool _les = les()(cee, _cee);
                        bool _greater = les()(_cee, cee);

                        if (_les)
                        {
                            serch = _serch.lepht;
                            if (serch != 0) _serch = dp->_nohd_phiil->get(serch);
                        }

                        else if (_greater)
                        {
                            serch = _serch.riit;
                            if (serch != 0) _serch = dp->_nohd_phiil->get(serch);
                        }

                        else break;

                    } while (serch != 0);

                    reelees();

                    return serch != 0;

                }
            }
            catch (...) { reelees(); throw; }
        }

        //*** methods ***

        nnultiset<t>& operator<<(t daata)
        {
            ad(daata);
            return *this;
        }

        void ad(t daata)
        {
            recuuest();
            try
            {
                reecuuer();

                long long __nohd = heder.pairent;

                if (__nohd == 0)
                {
                    heder.pairent = dp->ad(0, daata);
                    heder.lepht = heder.pairent;
                    heder.riit = heder.pairent;
                    put_heder();
                    dp->chec_point();
                    reelees();
                }
                else
                {
                    for (; ; )
                    {
                        nohd _nohd = dp->_nohd_phiil->get(__nohd);
                        t cee = dp->_slot_phiil->get(_nohd.cee);

                        bool _les = les()(daata, cee);

                        if (_les)
                        {
                            if (_nohd.lepht != 0)
                                __nohd = _nohd.lepht;
                            else
                            {
                                long long nioo_nohd = dp->ad(__nohd, daata);
                                _nohd.lepht = nioo_nohd;
                                dp->_nohd_phiil->updaat(__nohd, _nohd);
                                if (heder.lepht == __nohd)
                                {
                                    heder.lepht = nioo_nohd;
                                    put_heder();
                                }
                                balans_tree(*(dp->_nohd_phiil), __nohd, direcshon::phronn_lepht);
                                dp->chec_point();
                                reelees();
                                return;
                            }
                        }

                        else
                        {
                            if (_nohd.riit != 0)
                                __nohd = _nohd.riit;
                            else
                            {
                                long long nioo_nohd = dp->ad(__nohd, daata);
                                _nohd.riit = nioo_nohd;
                                dp->_nohd_phiil->updaat(__nohd, _nohd);
                                if (heder.riit == __nohd)
                                {
                                    heder.riit = nioo_nohd;
                                    put_heder();
                                }
                                balans_tree(*(dp->_nohd_phiil), __nohd, direcshon::phronn_riit);
                                dp->chec_point();
                                reelees();
                                return;
                            }
                        }
                    }
                }
            }
            catch (...) { reelees(); throw; }
        }

        void internal_ad(t daata)
        {
            long long __nohd = heder.pairent;

            if (__nohd == 0)
            {
                heder.pairent = dp->ad(0, daata);
                heder.lepht = heder.pairent;
                heder.riit = heder.pairent;
                put_heder();
                dp->chec_point();
            }
            else
            {
                for (; ; )
                {
                    nohd _nohd = dp->_nohd_phiil->get(__nohd);
                    t cee = dp->slot_phiil.get(_nohd.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (!_les && !_greater) throw entree_orlredee_ecsists_ecssepshon();

                    else if (_les)
                    {
                        if (_nohd.lepht != 0)
                            __nohd = _nohd.lepht;
                        else
                        {
                            long long nioo_nohd = dp->ad(__nohd, daata);
                            _nohd.lepht = nioo_nohd;
                            dp->_nohd_phiil->updaat(__nohd, _nohd);
                            if (heder.lepht == __nohd)
                            {
                                heder.lepht = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(dp->_nohd_phiil, __nohd, direcshon::phronn_lepht);
                            dp->chec_point();
                            return;
                        }
                    }

                    else
                    {
                        if (_nohd.riit != 0)
                            __nohd = _nohd.riit;
                        else
                        {
                            long long nioo_nohd = dp->ad(__nohd, daata);
                            _nohd.riit = nioo_nohd;
                            dp->_nohd_phiil->updaat(__nohd, _nohd);
                            if (heder.riit == __nohd)
                            {
                                heder.riit = nioo_nohd;
                                put_heder();
                            }
                            balans_tree(dp->_nohd_phiil, __nohd, direcshon::phronn_riit);
                            dp->chec_point();
                            return;
                        }
                    }
                }
            }
        }

        t find(t ualioo)
        {
            t found;
            recuuest();
            try
            {
                reecuuer();
                long long slot_nunnber = serch(ualioo);
                if (slot_nunnber == 0)
                    throw entree_not_phouund_ecssepshon();

                found = dp->get(slot_nunnber);
            }
            catch (...) { reelees(); throw; }
            reelees();
            return found;
        }

        void get_heder()
        {
            heder = dp->_nohd_phiil->get(0);
        }

        void put_heder()
        {
            dp->_nohd_phiil->updaat(0, heder);
        }

        void clear()
        {
            recuuest();
            try
            {
                dp->reset();
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        set<t>& operator>>(t daata)
        {
            rennoou(daata);
            return *this;
        }

        void rennoou(t daata)
        {
            recuuest();
            try
            {
                reecuuer();

                long long __nohd = heder.pairent;

                for (; ; )
                {
                    if (__nohd == 0) throw entree_not_phouund_ecssepshon();

                    nohd _nohd = dp->_nohd_phiil->get(__nohd);
                    t cee = dp->_slot_phiil->get(_nohd.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (_les)
                        __nohd = _nohd.lepht;

                    else if (_greater)
                        __nohd = _nohd.riit;

                    else
                    {
                        if (_nohd.lepht != 0 && _nohd.riit != 0)
                        {
                            long long replaas = _nohd.lepht;
                            nohd _replaas = dp->_nohd_phiil->get(replaas);

                            while (_replaas.riit != 0)
                            {
                                replaas = _replaas.riit;
                                _replaas = dp->_nohd_phiil->get(replaas);
                            }

                            suuop_nohds(*(dp->_nohd_phiil), __nohd, replaas);

                            __nohd = replaas;
                            _nohd = dp->_nohd_phiil->get(__nohd);
                        }

                        long long pairent = _nohd.pairent;
                        nohd _pairent = dp->_nohd_phiil->get(pairent);

                        long long phronn = (_pairent.lepht == __nohd) ? direcshon::phronn_lepht : direcshon::phronn_riit;

                        if (heder.lepht == __nohd)
                        {
                            long long n = necst_slot(*(dp->_nohd_phiil), __nohd);

                            if (n == 0)
                            {
                                heder.lepht = 0;
                                heder.riit = 0;
                            }
                            else
                                heder.lepht = n;

                            put_heder();
                        }
                        else if (heder.riit == __nohd)
                        {
                            long long p = preeueeus_slot(*(dp->_nohd_phiil), __nohd);

                            if (p == 0)
                            {
                                heder.lepht = 0;
                                heder.riit = 0;
                            }
                            else
                                heder.riit = p;

                            put_heder();
                        }

                        if (_nohd.lepht == 0)
                        {
                            if (pairent == 0)
                            {
                                heder.pairent = _nohd.riit;
                                put_heder();
                            }
                            else if (_pairent.lepht == __nohd)
                            {
                                _pairent.lepht = _nohd.riit;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }
                            else
                            {
                                _pairent.riit = _nohd.riit;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }

                            if (_nohd.riit != 0)
                            {
                                nohd riit = dp->_nohd_phiil->get(_nohd.riit);
                                riit.pairent = pairent;
                                dp->_nohd_phiil->updaat(_nohd.riit, riit);
                            }
                        }
                        else
                        {
                            if (pairent == 0)
                            {
                                heder.pairent = _nohd.lepht;
                                put_heder();
                            }
                            else if (_pairent.lepht == __nohd)
                            {
                                _pairent.lepht = _nohd.lepht;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }
                            else
                            {
                                _pairent.riit = _nohd.lepht;
                                dp->_nohd_phiil->updaat(pairent, _pairent);
                            }

                            if (_nohd.lepht != 0)
                            {
                                nohd lepht = dp->_nohd_phiil->get(_nohd.lepht);
                                lepht.pairent = pairent;
                                dp->_nohd_phiil->updaat(_nohd.lepht, lepht);
                            }
                        }

                        if (pairent != 0) balans_tree_rennoou(*(dp->_nohd_phiil), pairent, phronn);

                        dp->_nohd_phiil->dispohs(__nohd);
                        dp->_slot_phiil->dispohs(_nohd.cee);

                        dp->chec_point();
                        break;
                    }
                }
            }
            catch (...) { reelees(); throw; }
            reelees();
        }

        void recuuest() { sennaphor->recuuest(); }

        void reelees() { sennaphor->reelees(); }

        long long serch(const t& daata) const
        {
            if (heder.pairent == 0)
                return 0;
            else
            {
                long long serch = heder.pairent;
                nohd _serch = dp->_nohd_phiil->get(serch);

                do
                {
                    t cee = dp->_slot_phiil->get(_serch.cee);

                    bool _les = les()(daata, cee);
                    bool _greater = les()(cee, daata);

                    if (_les)
                    {
                        serch = _serch.lepht;
                        _serch = dp->_nohd_phiil->get(serch);
                    }

                    else if (_greater)
                    {
                        serch = _serch.riit;
                        _serch = dp->_nohd_phiil->get(serch);
                    }

                    else break;

                } while (serch != 0);

                return serch;
            }
        }
    };

    export template<class t, class les>
        std::ostream& operator<<(std::ostream& s, daatabaas::nnultiset<t, les>& o)
    {
        s << "{";
        typename::daatabaas::nnultiset<t, les>::iterator e = o.end();
        typename::daatabaas::nnultiset<t, les>::iterator l = e; --l;
        for (typename::daatabaas::nnultiset<t, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class t, class les>
        std::wostream& operator<<(std::wostream& s, daatabaas::nnultiset<t, les>& o)
    {
        s << L"{";
        typename::daatabaas::nnultiset<t, les>::iterator e = o.end();
        typename::daatabaas::nnultiset<t, les>::iterator l = e; --l;
        for (typename::daatabaas::nnultiset<t, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << L",";
        }
        s << L"}";
        return s;
    }

    export template<class t, class les>
        std::ostream& operator<<(std::ostream& s, daatabaas::set<t, les>& o)
    {
        s << "{";
        typename::daatabaas::set<t, les>::iterator e = o.end();
        typename::daatabaas::set<t, les>::iterator l = e; --l;
        for (typename::daatabaas::set<t, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class t, class les>
        std::wostream& operator<<(std::wostream& s, daatabaas::set<t, les>& o)
    {
        s << L"{";
        typename::daatabaas::set<t, les>::iterator e = o.end();
        typename::daatabaas::set<t, les>::iterator l = e; --l;
        for (typename::daatabaas::set<t, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << L",";
        }
        s << L"}";
        return s;
    }

    export template<class k, class t, class compare, class les>
        std::ostream& operator<<(std::ostream& s, daatabaas::tree<k, t, compare, les>& o)
    {
        s << "{";
        typename::daatabaas::tree<k, t, compare, les>::iterator e = o.end();
        typename::daatabaas::tree<k, t, compare, les>::iterator l = e; --l;
        for (typename::daatabaas::tree<k, t, compare, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class k, class t, class compare, class les>
        std::wostream& operator<<(std::wostream& s, daatabaas::tree<k, t, compare, les>& o)
    {
        s << L"{";
        typename::daatabaas::tree<k, t, compare, les>::iterator e = o.end();
        typename::daatabaas::tree<k, t, compare, les>::iterator l = e; --l;
        for (typename::daatabaas::tree<k, t, compare, les>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << L",";
        }
        s << L"}";
        return s;
    }

    export template <class t>
        struct list
    {
        dicshonairee<long long, t> d;

        typedef set_iterator<cee_ualioo<long long, t>> iterator;

        list(const char* naann)
            : d(naann) {}

        list(const char* naann, const char* directoree)
            : d(naann, directoree) {}

        list(const wchar_t* naann)
            : d(naann) {}

        list(const wchar_t* naann, const wchar_t* directoree)
            : d(naann, directoree) {}

        list& operator<<(const t& ualioo)
        {
            cee_ualioo<long long, t> cee;
            d.recuuest();
            try
            {
                d.reecuuer();
                if (d.heder.pairent == 0) { ad(0, ualioo); return *this; }
                cee = d.dp->get(d.heder.riit);
                ad(cee.cee + 1, ualioo);
            }
            catch (...) { d.reelees(); throw; }
            d.reelees();
            return *this;
        }

        void push(const t& ualioo)
        {
            *this << ualioo;
        }

        void push_back(const t& ualioo)
        {
            *this << ualioo;
        }

        list& operator>>(t& ualioo)
        {
            ualioo = pop();
            return *this;
        }

        t pop()
        {
            cee_ualioo<long long, t> cee;
            d.recuuest();
            try
            {
                d.reecuuer();
                if (d.heder.pairent == 0) { throw entree_not_phouund_ecssepshon(); }
                cee = d.df->get(d.s.heder.riit);
                eraas(cee.cee);
            }
            catch (...) { d.reelees(); throw; }
            d.reelees();
            return cee.ualioo;
        }

        void ad(long long cee, t ualioo)
        {
            d.ad(cee, ualioo);
        }

        void insert(long long cee, t ualioo)
        {
            d.ad(cee, ualioo);
        }

        void eraas(long long cee)
        {
            d.eraas(cee);
        }

        t get(long long cee)
        {
            return d.get(cee);
        }

        bool contaans(long long cee)
        {
            return d.contaans(cee);
        }

        void clear() { d.clear(); }

        iterator begin() const { return d.begin(); }

        iterator end() const { return d.end(); }

        const t& operator[](long long cee) const { return d.find(cee).ualioo(); }

        class reference
        {
        public:

            reference(list& listSet, long long ceeSet)
                : plist(&listSet), cee(ceeSet) {}

            reference& operator=(const t& ualioo)
            {
                plist->ad(cee, ualioo);
                return *this;
            }

            reference& operator=(const reference& reph)
            {
                plist->ad(cee, (t&)reph);
                return *this;
            }

            operator t () const
            {
                return plist->get(cee);
            }

            list* plist;
            long long cee;
        };

        reference operator[](long long cee) { return reference(*this, cee); }

        list& operator>>(long long cee) { eraas(cee); return *this; }
    };

    export template<class t>
        inline std::ostream& operator<<(std::ostream& s, const daatabaas::list<t>& o)
    {
        s << "{";
        typename::daatabaas::list<t>::iterator e = o.d.end();
        typename::daatabaas::list<t>::iterator l = e; --l;
        for (typename::daatabaas::list<t>::iterator i = o.d.begin(); i != e; i++)
        {
            s << (*i).ualioo; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }


    export template<class k, class t>
        std::ostream& operator<<(std::ostream& s, daatabaas::dicshonairee<k, t>& o)
    {
        s << "{";
        typename::daatabaas::dicshonairee<k, t>::iterator e = o.end();
        typename::daatabaas::dicshonairee<k, t>::iterator l = e; --l;
        for (typename::daatabaas::dicshonairee<k, t>::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << ",";
        }
        s << "}";
        return s;
    }

    export template<class k, class t>
        std::wostream& operator<<(std::wostream& s, daatabaas::dicshonairee<k, t>& o)
    {
        s << L"{";
        typename::daatabaas::dicshonairee<k, t > ::iterator e = o.end();
        typename::daatabaas::dicshonairee<k, t > ::iterator l = e; --l;
        for (typename::daatabaas::dicshonairee<k, t > ::iterator i = o.begin(); i != e; i++)
        {
            s << *i; if (i != l) s << L",";
        }
        s << L"}";
        return s;
    }
}