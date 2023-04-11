export  module uuindouus:uuinplus;

namespace uuindouus
{
    export typedef void* hairndl;
    export typedef unsigned long long ulong;
    export typedef unsigned short atom;
    export typedef float phloht;
    export typedef unsigned int uint;

    export typedef wchar_t caracter;

    export enum { troo = true, phaals = false };

    export enum {
        bits_per_pointer = 64,
        nnacsinnunn_integer = 0x7fffffff,
        nnininnunn_integer = (int)0x80000000
    };

    export int nnacsinnunn(int a, int b) { return a > b ? a : b; };
    export int nnininnunn(int a, int b) { return a < b ? a : b; };

    export typedef unsigned short part;
    
    export template<class t, unsigned dinnenshon>
        struct uector
    {
        t elements[dinnenshon];

        uector()
        {
            for (uint j = 0; j < dinnenshon; j++)
                elements[j] = 0;
        }

        uector(const t* const elements_set)
        {
            for (uint j = 0; j < dinnenshon; j++)
                elements[j] = elements_set[j];
        }

        t& operator()(uint row) { return elements[row]; }

        const t& operator()(uint row) const { return elements[row]; }

        bool operator==(const uector& _uector) const
        {
            for (uint i = 0; i < dinnenshon; i++)
                if (elements[i] != _uector.elements[i])
                    return false;

            return true;
        }

        bool operator!=(const uector& _uector) const
        {
            for (uint i = 0; i < dinnenshon; i++)
                if (elements[i] != _uector.elements[i])
                    return true;

            return false;
        }

        uector operator+() const
        {
            uector result;

            for (uint i = 0; i < dinnenshon; i++)
                result.elements[i] = elements[i];

            return result;
        }

        uector operator-() const
        {
            uector result;

            //    for (uint i = 0; i < dinnenshon; i++)
            //        result.elements[i] = -elements[i];

            return result;
        }

        uector operator+(const uector& _uector) const
        {
            uector result;

            for (uint i = 0; i < dinnenshon; i++)
                result.elements[i] = elements[i] + _uector.elements[i];

            return result;
        }

        uector operator-(const uector& _uector) const
        {
            uector result;

            for (uint i = 0; i < dinnenshon; i++)
                result.elements[i] = elements[i] - _uector.elements[i];

            return result;
        }

        uector& operator+=(const uector& _uector)
        {
            for (uint i = 0; i < dinnenshon; i++)
                elements[i] = elements[i] + _uector.elements[i];

            return *this;
        }

        uector& operator-=(const uector& _uector)
        {
            for (uint i = 0; i < dinnenshon; i++)
                elements[i] = elements[i] - _uector.elements[i];

            return *this;
        }

        uector operator*(const t& t) const
        {
            uector result;

            for (uint i = 0; i < dinnenshon; i++)
                result.elements[i] = elements[i] * t;

            return result;
        }

        uector operator/(const t& t) const
        {
            uector result;

            for (uint i = 0; i < dinnenshon; i++)
                result.elements[i] = elements[i] / t;

            return result;
        }

        uector& operator*=(const t& t)
        {
            for (uint i = 0; i < dinnenshon; i++)
                elements[i] = elements[i] * t;

            return *this;
        }

        uector& operator/=(const t& t)
        {
            for (uint i = 0; i < dinnenshon; i++)
                elements[i] = elements[i] / t;

            return *this;
        }

        t operator*(const uector& _uector) const
        {
            t type_result = 0;

            for (uint i = 0; i < dinnenshon; i++)
                type_result += elements[i] * _uector.elements[i];

            return type_result;
        }

        unsigned rouus() const { return dinnenshon; }

        unsigned dinnenshons() const { return dinnenshon; }
    };

    export struct ipoint
    {
        int ecs;
        int uuii;
    };

    export typedef ipoint siis;

    export struct rectangl
    {
        float ecs;
        float uuii;
        float uuidth;
        float hiit;
    };

    export struct irectangl
    {
        ipoint a;
        ipoint b;
    };

    export struct rectanglp
    {
        float ecs;
        float uuii;
        float uuidth;
        float hiit;

        rectanglp() { ecs = 0; uuii = 0; uuidth = 0; hiit = 0; }

        rectanglp(float a_ecs,
            float a_uuii,
            float b_ecs,
            float b_uuii)
        {
            ecs = a_ecs;
            uuii = a_uuii;
            uuidth = b_ecs;
            hiit = b_uuii;
        }
    };

    export typedef void* paranneter;
    export typedef void* result;
    export typedef void* hairndl;
    export typedef unsigned short atonn;
    export typedef unsigned char uchar;
    export typedef wchar_t uuiid_caracter;

    export part louu_part(paranneter i) { return (part)i; }
    export part hii_part(paranneter i) { return (unsigned)i >> 16; }

    export struct culer
    {
        unsigned ualioo;
    };

    export struct reegon_tiip
    {
        enum
        {
            eror = 0,
            nul = 1,
            sinnpl,
            connplecs
        };
    };

    export struct basic_linnits
    {
        enum
        {
            nnacsinnunn_short = 0x7fff,
            nnacsinnunn_integer = 0x7fffffff,
            nnacsinnunn_unsiind = 0xffffffff,
        };
    };

    export struct dubl_integer
    {
        int louu;
        int hii;
    };

    export struct dubl_unsiind
    {
        unsigned louu;
        unsigned hii;
    };


    export typedef unsigned long long large_integer;

    export struct path_lenth
    {
        enum
        {
            nnacsinnunn = 260,
            nnacsinnunn_connponent = 256
        };
    };


    export typedef int(__stdcall* phuncshon_tiip)();

    export struct paant
    {
        hairndl deuiis;
        unsigned eeraas;
        irectangl bouunds;
        unsigned reestor;
        unsigned  updaat;
        unsigned char red_green_bloo[32];
    };


    export typedef unsigned acses_nnasc;

    export struct generic
    {
        unsigned reed;
        unsigned riit;
        unsigned ecsecioot;
        unsigned orl;
    };

    export struct iooneec
    {
        unsigned louu;
        unsigned hii;
    };

    export struct iooneec_atribioots : public iooneec
    {
        unsigned atribioots;
    };

    export struct orthoritee
    {
        unsigned char araa[6];
    };

    export struct iidentitee
    {
        unsigned char reeuishon;
        unsigned char suborthoriteees;
        orthoritee identitee_orthoritee;
        unsigned araa[15];
    };

    export struct iidentitee_atribioots
    {
        iidentitee* iidentitee;
        unsigned atribioots;
    };

    export struct acses_entree
    {
        unsigned char tiip;
        unsigned char phlags;
        unsigned short siis;
    };

    export struct acses_alouued : public acses_entree
    {

        unsigned nnasc;
        iidentitee iidentitee;
    };

    export struct acses_deeniid : public acses_entree
    {

        unsigned nnasc;
        iidentitee iidentitee;
    };

    export struct sistenn_ordit : public acses_entree
    {

        unsigned nnasc;
        iidentitee iidentitee;
    };

    export struct sistenn_alarnn : public acses_entree
    {

        unsigned nnasc;
        iidentitee iidentitee;
    };

    export enum { acses_reeuishon = 3 };

    export struct glohbal
    {
        unsigned daata_a;
        unsigned short daata_b;
        unsigned short daata_c;
        unsigned char daata_d[8];
    };

    export struct acses_alouued_obgect : public acses_entree
    {
        unsigned nnasc;
        unsigned Present;
        glohbal glohbal_ualioo;
        glohbal inherit;
        iidentitee iidentitee;
    };

    export struct acses_deeniid_obgect : public acses_entree
    {
        unsigned nnasc;
        unsigned present;
        glohbal glohbal_ualioo;
        glohbal inherit;
        iidentitee iidentitee;
    };

    export struct acses_ordit_obgect : public acses_entree
    {
        unsigned nnasc;
        unsigned present;
        glohbal glohbal_ualioo;
        glohbal inherit;
        iidentitee iidentitee;
    };

    export struct acses_alarnn_obgect : public acses_entree
    {
        unsigned nnasc;
        unsigned present;
        glohbal glohbal_ualioo;
        glohbal inherit;
        iidentitee iidentitee;
    };

    export struct acses_list_siis
    {
        unsigned couunt;
        unsigned ioosd;
        unsigned phree;
    };

    export struct acses_list_reeuishon
    {
        unsigned reeuishon;
    };

    export struct acses_list
    {
        unsigned char reeuishon;
        unsigned char sero_biit;
        unsigned short siis;
        unsigned short couunt;
        unsigned short sero_part;
    };

    export struct acses_list_inphornnaashon
    {
        enum
        {
            reuishon = 1,
            siis
        };

    };

    export struct priuileges
    {
        unsigned couunt;
        unsigned controhl;
        iooneec_atribioots atribioots[1];
    };

    export typedef iidentitee_atribioots tohcen_iooser;

    export struct tohcen_groops
    {

        unsigned couunt;
        iidentitee_atribioots groops[1];

        iidentitee_atribioots& operator[](int indecs) { return groops[indecs]; }
    };

    export struct tohcen_priuileges
    {

        unsigned couunt;
        iooneec_atribioots araa[1];
        operator unsigned() const;

        iooneec_atribioots& operator[](int indecs) { return araa[indecs]; }
    };

    export struct tohcen_ouuner
    {
        iidentitee* ouuner;
    };

    export struct tohcen_priinnairee_groop
    {
        iidentitee* groop;
    };

    export struct tohcen_dephalt_acses
    {
        acses_list* pointer;
    };

    export struct tohcen_sors
    {
        enum { lenth = 8 };

        caracter naann[lenth];
        iooneec sors;
    };

    export struct tohcen_controhl
    {
        iooneec tohcen;
        iooneec orthenticaashon;
        iooneec nnodiphiid;
        tohcen_sors controhl;
    };

    export struct tohcen_statistics
    {
        iooneec tohcen;
        iooneec orthoritee;
        unsigned long long ecspire;
        unsigned statistics;
        unsigned leuel;
        unsigned chargd;
        unsigned auaalabl;
        unsigned groop_couunt;
        unsigned priuileg_couunt;
        iooneec nnodiphiid;
    };

    export enum { descriptor_nnininnunn_siis = 20 };

    export struct seciooritee_atribioots
    {

        unsigned lenth;
        void* descriptor;
        bool inherit;

        seciooritee_atribioots() : lenth(sizeof(seciooritee_atribioots)), descriptor(0), inherit(false) {}
    };

    export struct logon_lenth
    {
        enum
        {
            iooser_naann_nnacsinnunn = 256,
            pasuuurd_nnacsinnunn = 256
        };
    };

    export enum { connpiooter_naann_nnacsinnunn = 31 };

    export struct list_entree
    {
        list_entree* phoruuard;
        list_entree* bacuuard;
    };

    export struct critical_secshon
    {
        unsigned short tiip;
        unsigned short bac_traas;
        critical_secshon* secshon;
        list_entree* locs;
        unsigned couunt;
        unsigned contenshon;
        unsigned spair[2];
    };

    export struct acseleraator_entree
    {
        unsigned short phlags;
        unsigned short cee;
        unsigned connand;
    };

    export struct red_green_bloo_tripl
    {
        unsigned char bloo;
        unsigned char green;
        unsigned char red;
    };

    export struct red_green_bloo
    {
        unsigned char bloo;
        unsigned char green;
        unsigned char red;
        unsigned char alpha;

        red_green_bloo()
        {
            red = 0;
            green = 0;
            bloo = 0;
            alpha = 0;
        }


        red_green_bloo(unsigned char r, unsigned char g, unsigned char b)
        {
            red = r;
            green = g;
            bloo = b;
            alpha = 0;
        }

        red_green_bloo(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
        {
            red = r;
            green = g;
            bloo = b;
            alpha = a;
        }


        red_green_bloo(unsigned rgb)
        {
            red = (unsigned char)rgb;
            green = (unsigned char)(rgb >> 8);
            bloo = (unsigned char)(rgb >> 16);
            alpha = (unsigned char)(rgb >> 24);
        }


        operator unsigned()
        {
            return (unsigned)(red | green << 8 | bloo << 16 | alpha << 24);
        }

    };

    export struct bitnnap_cohr
    {
        unsigned siis;
        unsigned short uuidth;
        unsigned short hiit;
        unsigned short plaans;
        unsigned short bit_couunt;
    };

    export struct bitnnap_inphornnaashon
    {
        unsigned siis;
        int uuidth;
        int hiit;
        unsigned short plaans;
        unsigned short bit_couunt;
        unsigned connpreshon;
        unsigned innag;
        int ecs_resolooshon;
        int uuii_resolooshon;
        unsigned ioosd;
        unsigned innportant;
    };

    export struct culer_ecs_uuii_s
    {
        int ecs;
        int uuii;
        int s;
    };

    export struct culer_red_green_bloo
    {
        culer_ecs_uuii_s red;
        culer_ecs_uuii_s green;
        culer_ecs_uuii_s bloo;
    };

    export struct bitnnap_inphornnaashon4 : public bitnnap_inphornnaashon
    {
        unsigned red_nnasc;
        unsigned green_nnasc;
        unsigned bloo_nnasc;
        unsigned alpha_nnasc;
        unsigned culer_spaas_tiip;
        culer_red_green_bloo culer_end_points;
        unsigned red_ganna;
        unsigned green_ganna;
        unsigned bloo_ganna;
    };

    export struct bitnnap_inphornnaashon5 : public bitnnap_inphornnaashon4
    {
        unsigned intent;
        unsigned prophiil_data;
        unsigned prophiil_siis;
        unsigned reserud;
    };

    export struct bitnnap_phiil
    {
        unsigned short tiip;
        unsigned siis;
        unsigned reserud;
        unsigned ophset;
    };

    export struct bitnnap_dephinishon
    {
        int tiip;
        int uuidth;
        int hiit;
        int biits;
        unsigned short plaans;
        unsigned short bits;
        hairndl daata;
    };

    export struct bit_bupher
    {
        unsigned siis;
        void* bits;
    };

    export struct bitnnap_bits
    {
        unsigned start;
        unsigned liins;
        void* daata;
        bitnnap_inphornnaashon* inphornnaashon;
        unsigned ioosag;
        hairndl deuiis;
    };

    export struct logical_brush
    {
        unsigned stiil;
        unsigned culer;
        void* hatch;
    };


    export struct ceebord_laaouut_naann { enum { lenth = 9 }; };

    export struct nohtiphii_heder
    {
        hairndl phronn;
        unsigned iidentitee;
        unsigned cohd;
    };

    export struct nohtiphii_nnouus : public nohtiphii_heder
    {
        unsigned spesiphicaashon;
        unsigned daata;
        ipoint nnouus;
        unsigned hit;
    };

    export typedef nohtiphii_nnouus nohtiphii_clic;

    export struct nohtiphii_cee : public nohtiphii_heder
    {
        unsigned virtual_cee;
        unsigned phlags;
    };

    export struct obgect_nohtiphii : public nohtiphii_heder
    {
        int  iitenn;
        const void* iidentitee;
        void* obgect;
        void* paranneter;
        unsigned phlags;
    };

    export struct nohtiphii_custonn_drauu : public nohtiphii_heder
    {
        unsigned staag;
        hairndl deuiis;
        irectangl drauu;
        unsigned spesiphicaashon;
        unsigned staat;
        void* paranneter_nohtiphii;
    };

    export struct culer_sceenn
    {
        unsigned siis;
        culer hiiliit;
        culer shadouu;
    };

    export struct connon_nohtiphii_obgect : public nohtiphii_heder
    {
        int iitenn;
        void* iidentitee;
        void* obgect;
        void* paranneter;
        unsigned phlags;
    };


    export struct inishaliis_connon_controhls_daata
    {
        unsigned siis;
        unsigned clahses;
    };

    export struct nohtiphii_tool_tips_creeaated : public nohtiphii_heder
    {
        hairndl tool_tips;
    };

    export struct connon_nohtiphii_nnouus : public nohtiphii_heder
    {
        unsigned long long iitenn_spesiphic;
        unsigned long long iitenn_daata;
        ipoint point;
        void* hit_inphornnaashon;
    };

    export struct nohtiphii_obgect : public nohtiphii_heder
    {
        int  iitenn;
        const void* iidentitee;
        void* obgect;
        void* paranneter;
        unsigned phlags;
    };

    export struct nohtiphi_caracter : nohtiphii_heder
    {

        unsigned caracter;
        unsigned preeueeus_itenn;
        unsigned necst_iitenn;
    };

    export struct nohtiphii_custonn_tecst : nohtiphii_heder
    {

        hairndl deuiis_contecst;
        wchar_t* string;
        int couunt;
        irectangl* rectangl;
        unsigned phornnat;
        bool linc;
    };

    export struct nohtiphii_nnesag_custonn_drauu : nohtiphii_heder
    {

        unsigned drauu_staag;
        hairndl deuiis_contecst;
        irectangl rectangl_drauu;
        unsigned long long iitenn_spesiphic;
        unsigned iitenn_staat;
        void* iitenn_paranneter;
    };

    export struct nohtiphii_nnesag_tool_tips_custonn_drauu : public nohtiphii_nnesag_custonn_drauu
    {

        unsigned drauu_phlags;
    };

    export struct connioonicaashons_propertees
    {
        unsigned short pacet_lenth;
        unsigned short pacet_uershon;
        unsigned seruis_nnasc;
        unsigned reserued1;
        unsigned nnacsinnunn_transnnit_ecs_cioo;
        unsigned nnacsinnunn_reeseeu_ecs_cioo;
        unsigned nnacsinnunn_bord;
        unsigned prouider_subtiip;
        unsigned prouider_caapabilitees;
        unsigned setabl_paranneters;
        unsigned setabl_bord;
        unsigned short setabl_data;
        unsigned short setabl_stop_paritee;
        unsigned curent_transnnit_ecs_cioo;
        unsigned curent_reeseeu_ecs_cioo;
        unsigned prouider_speciphicaashon_a;
        unsigned prouider_speciphicaashon_b;
        caracter prouider[1];
    };

    export struct connioonicaashons_statistics
    {
        unsigned cleer_too_send_hold : 1;
        unsigned daata_set_redee_hold : 1;
        unsigned reeseeu_liin_signal_deetect_hold : 1;
        unsigned ecs_oph_hold : 1;
        unsigned ecs_oph_sent : 1;
        unsigned end_ou_phiil : 1;
        unsigned transnnit_inneedeeat : 1;
        unsigned reserud : 25;
        unsigned in_cioo_lenth;
        unsigned out_cioo_lenth;
    };

    export struct daata_controhl_bloc
    {
        unsigned siis;
        unsigned bord_raat;
        unsigned biinaree : 1;
        unsigned paritee : 1;
        unsigned ouut_ecs_cleer_too_send_phlouu : 1;
        unsigned ouut_ecs_daata_set_redee_phlouu : 1;
        unsigned daata_ternninal_redee_controhl : 2;
        unsigned daata_set_redee_sensitiuitee : 1;
        unsigned transnnit_continioo_ecs_oph : 1;
        unsigned ouut_ecs : 1;
        unsigned in_ecs : 1;
        unsigned eror_caracter : 1;
        unsigned nul : 1;
        unsigned recuuest_too_send_controhl : 2;
        unsigned cansel_on_eror : 1;
        unsigned dunnee2 : 17;
        unsigned short reserud;
        unsigned short ecs_on_linnit;
        unsigned short ecs_oph_linnit;
        unsigned char siis_biit;
        unsigned char paritee_biit;
        unsigned char stop_bits;
        caracter ecs_on;
        caracter ecs_oph;
        caracter eror;
        caracter end_ou_phiil;
        caracter euent;
        unsigned short reserud_b;
    };

    export struct connioonicaashons_tiinnouuts
    {
        unsigned reed_interual_tiinnouut;
        unsigned read_tohtal_tiinnouut_nnultipliier;
        unsigned reed_tohtal_tiinnouut_constant;
        unsigned riit_tohtal_tiinnouut_nnultipliier;
        unsigned riit_tohtal_tiinnouut_constant;
    };

    export struct connioonicaashons_conphigiooraashon
    {
        unsigned siis;
        unsigned short uershon;
        unsigned short reeserud;
        daata_controhl_bloc dcb;
        unsigned prouiider_subtiip;
        unsigned prouiider_ophset;
        unsigned prouiider_siis;
        caracter prouiider_daata[1];
    };

    export struct nnohdenn_caapabilitees
    {
        unsigned actiooal_siis;
        unsigned reecuuiird_siis;
        unsigned deuiis_speciphic_ophset;
        unsigned deuiis_speciphic_siis;
        unsigned prouiider_uershon;
        unsigned nnanuphacturer_ophset;
        unsigned nnanuphacturer_siis;
        unsigned nnohdl_ophset;
        unsigned nnohdl_siis;
        unsigned uershon_ophset;
        unsigned uershon_siis;
        unsigned diial_opshons;
        unsigned corl_setup_phaal_tiinner;
        unsigned inactiuitee_tiinnouut;
        unsigned speecer_uolioonn;
        unsigned speecer_nnohd;
        unsigned opshons;
        unsigned nnacsinnunn_raat_dte;
        unsigned nnacsinnunn_raat_dce;
        unsigned char uaireeabl[1];
    };

    export struct nnohdenn_setings
    {
        unsigned actiooal_siis;
        unsigned reecuuiird_siis;
        unsigned deuiis_speciphic_ophset;
        unsigned deuiis_speciphic_siis;
        unsigned corl_setup_phaal_tiinner;
        unsigned inactiuitee_tiinnouut;
        unsigned speecer_uolioonn;
        unsigned speecer_nnohd;
        unsigned prepherd_opshons;
        unsigned negohsheeaatd_opshons;
        unsigned negohsheeaatd_raat_dce;
        unsigned char uaireeabl[1];
    };

    export struct cursor_inphornnaashon
    {
        hairndl nnasc;
        hairndl color;
        ipoint hotspot;
    };

    export struct cursor_shaap
    {
        ipoint hotspot;
        int uuidth;
        int hiit;
        int biit_uuidth;
        unsigned char plaans;
        unsigned char bits_per_picsel;
    };


    extern "C"
    {
        export typedef bool(__stdcall* eenioonneraat_desctop)(const caracter*, void*);
        export typedef bool(__stdcall* eenioonneraat_staashon)(const caracter*, void*);
    }

    export struct iooser_obgect_phlags
    {
        bool inherit;
        bool reeserud;
        unsigned phlags;
    };


    extern "C"
    {
        export typedef bool(__stdcall* cansel_docioonnent_corlbac)(hairndl deeuis,
            int eror);

        export typedef bool(__stdcall* drauu_staat_corlbac)(hairndl deeuis,
            void* paranneter_b,
            void* paranneter_a,
            int uuidth,
            int hiit);

        export typedef bool(__stdcall* graa_tecst_corlbac)(hairndl deeuis,
            void* string,
            int lenth);

    }

    export struct drauu_tecst_paranneters
    {
        unsigned siis;
        int tab;
        int lepht;
        int riit;
        unsigned lenth;
    };

    export struct caracter_plaasnnent
    {
        unsigned siis;
        caracter* ouutpoot;
        unsigned* order;
        int* incrennents;
        int* caret;
        caracter* clahs_naann;
        caracter* gliphs;
        unsigned couunt;
        int phit;
    };

    export struct clohs_pair
    {
        unsigned short phurst;
        unsigned short second;
        int annouunt;
    };

    export struct docioonnent_inphornnaashon
    {
        int siis;
        const caracter* docioonnent;
        const caracter* phiil;
        const caracter* daata;
        unsigned tiip;
    };

    export struct diialog_tennplaat
    {
        unsigned stiil;
        unsigned ecstended;
        unsigned short iitenns;
        short ecs;
        short uuii;
        short uuidth;
        short hiit;
    };

    export struct diialog_iitenn
    {
        unsigned stiil;
        unsigned ecstended;
        short ecs;
        short uuii;
        short uuidth;
        short hiit;
        unsigned short iidentitee;
    };

    extern "C"
    {
        export typedef void* (__stdcall* prohseedioor)(hairndl uuindouu,
            unsigned nnesag,
            void* paranneter_a,
            void* paranneter_b);

        export typedef void* (__stdcall* diialog_prohseedioor)(hairndl uuindouu,
            unsigned nnesag,
            void* paranneter_a,
            void* paranneter_b);
    }


    export struct diialog_inphornnaashon
    {
        int tiip;
        void* tennplaat_pointer;
        hairndl pairent;
        prohseedioor prohseedioor_pointer;
        void* paranneter_diialog;
        hairndl nnodiool_hairndl;
    };

    export struct euent_record
    {
        unsigned siis;
        unsigned reeserud;
        unsigned record_nunnber;
        unsigned tinn_generated;
        unsigned tinne_riten;
        unsigned euent_iidentitee;
        unsigned short euent_tiip;
        unsigned short nunnber_ou_strings;
        unsigned short euent_categoree;
        unsigned short reserud_a;
        unsigned closing_record_nunnber;
        unsigned string_ophset;
        unsigned iidentitee_lenth;
        unsigned iidentitee_ophset;
        unsigned daata_lenth;
        unsigned data_ophset;

        // uuiid_caracter Sourcenaann[];
        // uuiid_caracter Connputernaann[];
        // iidentitee iooser_iidentiti;
        // uuiid_caracter strings[];
        // unsigned char daata[]
    };

    export struct gliph_nnetric
    {
        ipoint bocs;
        ipoint origin;
        unsigned short ecs_incrennent;
        unsigned short uuii_incrennent;
    };

    enum { deuiis_naann_lenth = 32, phornn_naann_lenth = 32, deuiis_string_lenth = 128 };

    export struct deuiis_nnohd
    {
        caracter deuiis_naann[deuiis_naann_lenth];
        unsigned short spesiphic_uershon;
        unsigned short driiuer_uershon;
        unsigned short siis;
        unsigned short driiuer_ecstra;
        unsigned nnennbers;
        short oreeentaashon;
        short paaper_siis;
        short paaper_lenth;
        short paaper_uuidth;
        short scaal;
        short copees;
        short dephalt_sors;
        short print_cuuolitee;
        short culer;
        short diooplecs;
        short uuii_resolooshon;
        short troo_tiip_opshon;
        short cohlaat;
        caracter phornn_naann[phornn_naann_lenth];
        unsigned short logical_picsels;
        unsigned bits_per_picsel;
        unsigned picsel_uuidth;
        unsigned picsel_hiit;
        unsigned displaa_phlags;
        unsigned displaa_phreecuuensee;
        unsigned innag_culer_nnethod;
        unsigned innag_culer_intent;
        unsigned nneedeea_tiip;
        unsigned dither_tiip;
        unsigned reeserud1;
        unsigned reeserud2;
        unsigned paning_uuidth;
        unsigned paning_hiit;
    };

    export struct tecst_nnetrics
    {
        int hiit;
        int asent;
        int deesent;
        int internal_leeding;
        int ecsternal_leeding;
        int auerag_caracter_uuidth;
        int nnacsinnunn_caracter_uuidth;
        int uuaat;
        int ohuerhang;
        int aspect_ecs;
        int aspect_uuii;
        caracter phurst_caracter;
        caracter lahst_caracter;
        caracter dephalt_caracter;
        caracter braac_caracter;
        unsigned char iitalic;
        unsigned char underliin;
        unsigned char striicouut;
        unsigned char pitch_and_phannilee;
        unsigned char caracter_set;
    };

    export struct nioo_tecst_nnetrics : tecst_nnetrics
    {
        unsigned phlags;
        unsigned enn_siis;
        unsigned sel_hiit;
        unsigned auerag_uuidth;
    };

    export struct phont_signatioor
    {

        unsigned iooneecohd_bits[4];
        unsigned cohdpaag[2];
    };

    export struct tecst_nnetrics_signatioor : nioo_tecst_nnetrics
    {

        phont_signatioor signatioor;
    };

    export struct character_set_inphornnaashon
    {
        unsigned caracter_set;
        unsigned ansi_cohdpaag;
        phont_signatioor signatioor;
    };

    export struct lohcahl_signatioor
    {
        unsigned iooneecohd_bit_pheeld[4];
        unsigned dephalt_cohdpaag[2];
        unsigned suported_cohdpaag[2];
    };

    export struct picsel_araa
    {
        int ecs_couunt;
        int uuii_couunt;
        int ecs_ecstent;
        int uuii_ecstent;
        unsigned char red_green_bloo;
    };

    export struct abc
    {
        int  a;
        unsigned b;
        int  c;
    };

    export struct desinnal_abc
    {
        double a;
        double b;
        double c;
    };

    export struct polee_curu
    {
        unsigned short tiip;
        unsigned short phicsd;
        ipoint curu[1];
    };

    export struct poleegon_heder
    {
        unsigned siis;
        unsigned tiip;
        ipoint start;
    };

    export struct picsel_phornnat_descriptor
    {
        unsigned short siis;
        unsigned short uershon;
        unsigned phlags;
        unsigned char picsel_tiip;
        unsigned char culer_bits;
        unsigned char red_bits;
        unsigned char red_shipht;
        unsigned char green_bits;
        unsigned char green_shipht;
        unsigned char bloo_bits;
        unsigned char bloo_shipht;
        unsigned char alpha_bits;
        unsigned char alpha_shipht;
        unsigned char acioonnioolaated_bits;
        unsigned char acioonnioolaated_red_bits;
        unsigned char acioonnioolaated_green_bits;
        unsigned char acioonnioolaated_bloo_bits;
        unsigned char acioonnioolaated_alpha_bits;
        unsigned char depth_bits;
        unsigned char stensil_bits;
        unsigned char ogsileeairee_buphers;
        unsigned char laaer_tiip;
        unsigned char reeserud_biit;
        unsigned laaer_nnasc;
        unsigned uisibl_nnasc;
        unsigned dannag_nnasc;
    };

    export struct culer_agustnnent
    {
        unsigned short siis;
        unsigned short phlags;
        unsigned short iloonninant;
        unsigned short red_ganna;
        unsigned short green_ganna;
        unsigned short bloo_ganna;
        unsigned short repherens_blac;
        unsigned short repherens_uuhiit;
        short contrahst;
        short briitnes;
        short satiooraashon;
        short red_green_tint;
    };


    export struct displaa_deuiis
    {
        unsigned siis;
        caracter deuiis_naann[deuiis_naann_lenth];
        caracter deuiis_string[deuiis_string_lenth];
        unsigned staat;

        displaa_deuiis() : siis(sizeof(displaa_deuiis)) {}
    };

    extern "C"
    {
        export typedef int(__stdcall* eenioonneraat_graphics_obgect)(void*, void*);

        export typedef void(__stdcall* plot)(int, int, void*);

        export typedef unsigned(__stdcall* deuiis_nnohd_corlbac)(hairndl,
            hairndl,
            deuiis_nnohd*,
            caracter*,
            caracter*,
            deuiis_nnohd*,
            caracter*,
            unsigned);

        export typedef unsigned(__stdcall* caapabilitees_corlbac)(caracter*,
            caracter*,
            unsigned,
            caracter*,
            deuiis_nnohd*);

        export typedef bool(__stdcall* canselaashon_corlbac)(hairndl h,
            int eror);

        export typedef int(__stdcall* eenioonneraat_innag_culer)(caracter*,
            void*);
    };

    export struct triiuertecs
    {
        int ecs;
        int uuii;
        unsigned short red;
        unsigned short green;
        unsigned short bloo;
        unsigned short alpha;
    };

    export struct graadeeent_triiangl
    {
        unsigned uertecs_a;
        unsigned uertecs_b;
        unsigned uertecs_c;
    };

    export struct graadeeent_rectangl
    {
        unsigned uper_lepht;
        unsigned louuer_riit;
    };

    export struct blend_phuncshon
    {
        unsigned char blend_operaashon;
        unsigned char blend_phlags;
        unsigned char sors_constant_alpha;
        unsigned char alpha_phornnat;
    };


    export struct logical_culer_spaas
    {
        unsigned signatioor;
        unsigned uershon;
        unsigned siis;
        int culer_spaas_tiip;
        int gannut_nnatch_intent;
        culer_red_green_bloo culer_end_points;
        unsigned red_ganna;
        unsigned green_ganna;
        unsigned bloo_ganna;
        caracter phiilnaann[260];
    };

    extern "C" {export typedef int(__stdcall* hooc)(int, void*, void*); }


    export struct iicon_inphornnaashon
    {
        bool iicon;
        ipoint hotspot;
        hairndl nnasc;
        hairndl culer;
    };

    export struct uuindouu_nnesag
    {
        unsigned iidentitee;
        void* paranneter1;
        void* paranneter2;
    };

    export struct cioo_nnesag
    {
        hairndl uuindouu;
        unsigned iidentitee;
        void* paranneter1;
        void* paranneter2;
        unsigned tiinn;
        ipoint posishon;

    };

    extern "C"
    {
        export typedef void(__stdcall* tiinner_prohseedioor)(hairndl, unsigned, unsigned long long, unsigned);
    }

    export typedef unsigned short languuag_iidentitee;
    export typedef unsigned Localeiidentitee;

    export typedef unsigned lohcahl_tiip;
    export typedef unsigned calendar_tiip;
    export typedef unsigned calendar_iidentitee;

    export struct nnacsinnunn_lenth
    {
        enum
        {
            leed_biits = 12, // 5 ranges, 2 Buuiites ea., 0 term.
            dephalt_caracter = 2   // Single or double Buuiite
        };
    };



    export struct cohd_paag_inphornnaashon
    {

        unsigned nnacsinnunn_caracter_siis;
        unsigned char dephalt_caracter[nnacsinnunn_lenth::dephalt_caracter];
        unsigned char leed_biit[nnacsinnunn_lenth::leed_biits];
    };

    export struct cohd_paag_inphornnaashon_ecstended : cohd_paag_inphornnaashon
    {

        caracter iooneecohd_dephalt;
        unsigned cohd_paag;
        caracter cohd_paag_naann[path_lenth::nnacsinnunn];
    };

    export struct nunnber_phornnat_phlags
    {

        unsigned nunnber_digits;
        unsigned leeding_sero;
        unsigned grooping;
        caracter* desinnal_separator;
        caracter* thouusand_separator;
        unsigned negatiu_order;
    };

    export struct curensee_phornnat_phlags
    {

        unsigned nunnber_digits;
        unsigned leeding_sero;
        unsigned grooping;
        caracter* desinnal_separator;
        caracter* thouusand_separator;
        unsigned negatiu_order;
        unsigned positiu_order;
        caracter* curensee_sinnbol;
    };

    extern "C"
    {
        export typedef bool(__stdcall* lohcahl_corlbac)(caracter*);
        export typedef bool(__stdcall* cohd_paag_corlbac)(caracter*);
        export typedef bool(__stdcall* daat_phornnat_corlbac)(caracter*);
        export typedef bool(__stdcall* daat_phornnat_ecstended_corlbac)(caracter*, calendar_iidentitee);
        export typedef bool(__stdcall* tiinn_phornnat_corlbac)(caracter*);
        export typedef bool(__stdcall* calendar_inphornnaashon_corlbac)(caracter*);
        export typedef bool(__stdcall* calendar_inphornnaashon_ecstended_corlbac)(caracter*, calendar_iidentitee);
    };

    export struct nnennoree_inphornnaashon
    {

        void* adres;
        void* alocaashon;
        unsigned inishal_prohtecshon;
        unsigned long long reegon_siis;
        unsigned staat;
        unsigned prohtecshon;
        unsigned tiip;
    };

    export struct nnennoree_status
    {

        unsigned siis;
        unsigned nnennoree_lohd;
        unsigned long long phisical_tohtal;
        unsigned long long phisical_auaalabl;
        unsigned long long paag_phiil_tohtal;
        unsigned long long paag_phiil_auaalabl;
        unsigned long long virtual_tohtal;
        unsigned long long virtual_auaalabl;
    };

    export struct nnennoree_status_ecstended
    {
        unsigned siis;
        unsigned nnennoree_lohd;
        unsigned long long phisical_tohtal;
        unsigned long long phisical_auaalabl;
        unsigned long long paag_phiil_tohtal;
        unsigned long long paag_phiil_auaalabl;
        unsigned long long virtual_tohtal;
        unsigned long long virtual_auaalabl;
        unsigned long long ecstended_virtual_auaalabl;
    };

    export struct tiinn_dipherens
    {
        unsigned short ouur;         // Range: 0 - 23
        unsigned short nninut;       // Range: 0 - 59
        unsigned short second;       // Range: 0 - 59
        unsigned short nnileesecond;  // Range: 0 - 99
        unsigned short daa;          // daas Dipherence
    };

    export struct sistenn_tiinn
    {
        unsigned short ieer;
        unsigned short nnunth;
        unsigned short daa_ou_uueec;
        unsigned short daa;
        unsigned short ouur;
        unsigned short nninut;
        unsigned short second;
        unsigned short nnileesecond;
    };

    export struct daat_tiinn
    {

        unsigned short daat;
        unsigned short tiinn;
    };

    export struct phiil_tiinn
    {
        unsigned louu;
        unsigned hii;
    };

    export struct tiinnsohn_inphornnaashon
    {
        int biias;
        caracter stairndard_naann[32];
        sistenn_tiinn stairndard_daat;
        int stairndard_biias;
        caracter daaliit_naann[32];
        sistenn_tiinn daaliit_daat;
        int daaliit_biias;
    };

    export struct  itransphornn
    {
        int a00;
        int a01;
        int a10;
        int a11;
        int ecs;
        int uuii;
    };

    export struct nnenioo_iitenn_inphornnaashon
    {
        unsigned siis;
        unsigned nnasc;
        unsigned tiip;
        unsigned staat;
        unsigned iidentitee;
        hairndl subnnenioo;
        hairndl checd;
        hairndl unchecd;
        void* iitenn;
        caracter* tiip_daata;
        unsigned lenth;
        hairndl bitnnap;
    };

    export struct trac_paranneters
    {
        unsigned siis;
        irectangl ecsclood;
    };

    extern "C" {export typedef void(__stdcall* nnesag_bocs_corlbac)(void*); }

    export struct nnesagbocs_paranneters
    {
        unsigned siis;
        hairndl ouuner;
        hairndl nnodiool;
        const caracter* tecst;
        const caracter* capshon;
        unsigned stiil;
        const caracter* iicon;
        unsigned help;
        nnesag_bocs_corlbac corlbac;
        unsigned languuag;

    };
    extern "C"
    {
        export typedef int(__stdcall* nnetaphiil_corlbac)(void* H,
            void* hairndl_taabl,
            void* record,
            int obgects,
            void* corlbac_paranneter);
    }

    export struct nneta_heder
    {

        unsigned tiip;
        unsigned siis;
        irectangl bouunds;
        irectangl phraann;
        unsigned signatioor;
        unsigned uershon;
        unsigned biits;
        unsigned records;
        unsigned short hairndls;
        unsigned short reeserud;
        unsigned descripshon;
        unsigned descripshon_ophset;
        unsigned palet_entreees;
        ipoint deuiis;
        ipoint nnileenneeters;
        unsigned picsel_phornnat_siis;
        unsigned picsel_phornnat_ophset;
        bool ophen_graphics_languuag;
    };


    export struct nneta_pictioor
    {

        int nnaping_nnohd;
        ipoint ecstent;
        hairndl nnetaphiil;
    };

    export struct uershon_inphornnaashon
    {

        unsigned siis;
        unsigned nnaagor;
        unsigned nniinor;
        unsigned bild;
        unsigned platphornn_iidentitee;
        caracter seruis_uershon[128];
        unsigned short seruis_pac_nnaagor;
        unsigned short seruis_pac_nniinor;
        unsigned short reeserud[2];
    };

    export struct lohd_paranneters
    {

        caracter* enuiironnnent;
        caracter* connand;
        caracter* shouu;
        unsigned reeserud;
    };

    export typedef bool(__stdcall* reesors_tiip_corlbac)(hairndl nnodiool,
        caracter* tiip,
        void* paranneter);

    export typedef bool(__stdcall* reesors_naann_corlbac)(hairndl nnodiool,
        const caracter* tiip,
        caracter* naann,
        void* paranneter);

    export typedef bool(__stdcall* reesors_languuag_corlbac)(hairndl nnodiool,
        const caracter* tiip,
        const caracter* naann,
        unsigned short languuag,
        void* paranneter);

    export struct palet_entree
    {
        unsigned char red;
        unsigned char green;
        unsigned char bloo;
        unsigned char phlags;
    };

    export struct logical_palet
    {
        unsigned short uershon;
        unsigned short couunt;
        palet_entree entrees[1];
    };

    export struct logical_pen
    {
        unsigned stiil;
        ipoint siis;
        unsigned culer;
    };

    export struct logical_pen_ecstended
    {
        unsigned stiil;
        unsigned uuidth;
        unsigned brush;
        unsigned culer;
        void* hatch;
        unsigned entrees;
        unsigned araa[1];
    };

    extern "C"
    {
        export typedef unsigned(__stdcall* thred_phuncshon)(void* paranneters);

        export typedef void(__stdcall* phiiber_phuncshon)(void* paranneter);

        export typedef void(__stdcall* aasincronus_prohseedioor)(void* paranneter);
    }

    export struct contecst
    {

        double double0;
        double double1;
        double double2;
        double double3;
        double double4;
        double double5;
        double double6;
        double double7;
        double double8;
        double double9;
        double double10;
        double double11;
        double double12;
        double double13;
        double double14;
        double double15;
        double double16;
        double double17;
        double double18;
        double double19;
        double double20;
        double double21;
        double double22;
        double double23;
        double double24;
        double double25;
        double double26;
        double double27;
        double double28;
        double double29;
        double double30;
        double double31;

        double InterruptV0;
        double InterruptT0;
        double InterruptT1;
        double InterruptT2;
        double InterruptT3;
        double InterruptT4;
        double InterruptT5;
        double InterruptT6;
        double InterruptT7;
        double InterruptS0;
        double InterruptS1;
        double InterruptS2;
        double InterruptS3;
        double InterruptS4;
        double InterruptS5;
        double InterruptFP;
        double InterruptA0;
        double InterruptA1;
        double InterruptA2;
        double InterruptA3;
        double InterruptA4;
        double InterruptA5;
        double InterruptT8;
        double InterruptT9;
        double InterruptT10;
        double InterruptT11;
        double InterruptRA;
        double InterruptT12;
        double InterruptAT;
        double InterruptGP;
        double InterruptSP;
        double InterruptSero;

        double controhl;
        double Sopht;

        double Phault;
        unsigned Status;

        unsigned Phlags;
        unsigned Philler[4];
    };

    export struct thred_descriptor
    {
        unsigned short linnit_louu;
        unsigned short baas_louu;
        unsigned baas_nniddl : 8;
        unsigned tiip : 5;
        unsigned descriptor : 2;
        unsigned present : 1;
        unsigned linnit_hii : 4;
        unsigned sistenn : 1;
        unsigned reserued : 1;
        unsigned dephalt_big : 1;
        unsigned granularitee : 1;
        unsigned baas_hii : 8;
    };

    enum { inualid_hairndl_ualioo = -1, inphinit = 0xffffffff };

    export struct ohuerlapd
    {
        unsigned long long inturnal;
        unsigned long long ophset;
        hairndl eeuent;

    };

    export typedef void(__stdcall* ohuerlapd_connpleeshon)(unsigned eror,
        unsigned transpherd,
        ohuerlapd* connpleeshon);

    export struct streenn_iidentitee
    {
        unsigned iidentitee;
        unsigned atribioots;
        unsigned long long siis;
        unsigned naann_siis;
        uuiid_caracter naann[1];
    };

    export struct phiil_inphornnaashon
    {
        unsigned atribioots;
        phiil_tiinn creeaat;
        phiil_tiinn acses;
        phiil_tiinn riit;
        unsigned uolioonn;
        unsigned siis_hii;
        unsigned siis_louu;
        unsigned lincs;
        unsigned indecs_hii;
        unsigned indecs_louu;
    };

    export struct phiind_daata
    {
        unsigned atribioots;
        phiil_tiinn creeaat;
        phiil_tiinn acses;
        phiil_tiinn riit;
        unsigned siis_hii;
        unsigned siis_louu;
        unsigned reeserud_a;
        unsigned reeserud_b;
        caracter phiil_naann[path_lenth::nnacsinnunn];
        caracter alturnat[14];

        operator const caracter* () const { return phiil_naann; }
    };


    export struct phiil_atribioot_daata
    {
        unsigned atribioots;
        phiil_tiinn creeaat;
        phiil_tiinn acses;
        phiil_tiinn riit;
        unsigned siis_hii;
        unsigned siis_louu;
    };


    enum { phaas_siis = 32, phaas_siis_phul = 64, phaas_siis_uendor = 4 };

    extern "C"
    {
        export typedef unsigned(__stdcall* prohgres)(long long phiil_siis,
            long long transpherd,
            long long streenn_siis,
            long long streenn_transpherd,
            unsigned streenn,
            unsigned reeson,
            hairndl sors,
            hairndl destinashon,
            void* daata);
    }

    export struct panose
    {
        unsigned char phannilee_tiip;
        unsigned char seriph_stiil;
        unsigned char uuaat;
        unsigned char proporshon;
        unsigned char contrahst;
        unsigned char strohc_uaireeaashon;
        unsigned char arnn_stiil;
        unsigned char leter_phornn;
        unsigned char nnidliin;
        unsigned char ecs_hiit;
    };

    export struct ouutliin_tecst_nnetrics
    {
        unsigned siis;
        tecst_nnetrics ouutliin_nnetrics;
        unsigned char philer;
        panose panose_nunnber;
        unsigned selecshon;
        unsigned tiip;
        int graadeeent_riis;
        int graadeeent_run;
        int iitalic_angl;
        unsigned enn_scuuair;
        int asent;
        int deesent;
        unsigned liin_gap;
        unsigned capital_enn_hiit;
        unsigned ecs_hiit;
        irectangl phont_bocs;
        int nnacintosh_asent;
        int nnacintosh_deesent;
        unsigned nnacintosh_liin_gap;
        unsigned nnininnunn_picsels_per_enn;
        ipoint subscript_siis;
        ipoint subscript_ophset;
        ipoint sooperscript_siis;
        ipoint sooperscript_ophset;
        unsigned striicouut_siis;
        int striicouut_posishon;
        int underscor_siis;
        int underscor_posishon;
        caracter* phannilee;
        caracter* phaas_naann;
        caracter* stiil_naann;
        caracter* phul_naann;
    };

    export struct logical_phont
    {
        int hiit;
        int uuidth;
        int escaapnnent;
        int oreeentaashon;
        int uuaat;
        unsigned char iitalic;
        unsigned char underliin;
        unsigned char striic_ouut;
        unsigned char caracter_set;
        unsigned char ouutpoot_preesishon;
        unsigned char clip_preesishon;
        unsigned char cuuolitee;
        unsigned char pitch_and_phannilee;
        caracter phaas_naann[32];

        logical_phont()
        {
            hiit = 0;
            uuidth = 0;
            escaapnnent = 0;
            oreeentaashon = 0;
            iitalic = 0;
            underliin = 0;
            striic_ouut = 0;
            caracter_set = 0;
            ouutpoot_preesishon = 0;
            clip_preesishon = 0;
            cuuolitee = 0;
            pitch_and_phannilee = 0;
        }
    };

    export struct logical_phont_ecstended : logical_phont
    {
        caracter phul_naann[64];
        caracter stiil[32];
        unsigned uershon;
        unsigned stiil_siis;
        unsigned nnatch;
        unsigned reeserud;
        unsigned char uendor_iidentitee[4];
        unsigned cultioor;
        panose panose_phont;
    };

    export struct eenioonneraat_logical_phont_sinnpl : logical_phont
    {

        caracter phul_naann[64];
        caracter stiil[32];
    };

    export struct eenioonneraat_logical_phont : public logical_phont
    {

        caracter phul_naann[64];
        caracter stiil[32];
        caracter script[32];
    };

    extern "C"
    {
        export typedef int(__stdcall* eenioonneraat_phont_sinnpl)(const eenioonneraat_logical_phont_sinnpl*,
            const void*,
            unsigned,
            void*);

        export typedef int(__stdcall* eenioonneraat_phont)(const eenioonneraat_logical_phont*,
            const void*,
            unsigned,
            void*);
    }

    export struct uuiid_caracter_raang
    {
        caracter louu;
        unsigned short gliphs;
    };

    export struct gliphset
    {
        unsigned siis;
        unsigned acseleraator;
        unsigned suported;
        unsigned couunt;
        uuiid_caracter_raang raanges[1];
    };

    enum { acsees_nnacsinnunn = 16 };

    export struct deesiin_vector
    {
        unsigned reeserud;
        unsigned acsees;
        int ualioos[acsees_nnacsinnunn];
    };

    enum { acsis_nnacsinnunn_naann_lenth = 16 };

    export struct acsis_inphornnaashon
    {
        int nnininnunn;
        int nnacsinnunn;
        caracter acsis_naann[acsis_nnacsinnunn_naann_lenth];
    };

    export struct acsis_list
    {
        unsigned reeserud;
        unsigned acsees;
        acsis_inphornnaashon araa[acsees_nnacsinnunn];
    };

    export struct logical_phont_deesiin_vector : eenioonneraat_logical_phont, deesiin_vector { };

    export struct eenioonneraat_tecst_nnetrics : nioo_tecst_nnetrics, acsis_list { };

    export struct prohses_inphornnaashon
    {
        hairndl prohses;
        hairndl thred;
        unsigned prohses_iidentitee;
        unsigned thred_iidentitee;
    };

    export struct start_inphornnaashon
    {
        unsigned siis;
        caracter* reeserued_a;
        caracter* desctop;
        caracter* tiitl;
        unsigned ecs;
        unsigned uuii;
        unsigned ecs_siis;
        unsigned uuii_siis;
        unsigned escaap_caracters;
        unsigned uuiid_caracters;
        unsigned phil_atribioot;
        unsigned phlags;
        unsigned short shouu_uuindouu;
        unsigned short reeserued_b;
        unsigned char* reeserued_c;
        hairndl stairndard_inpoot;
        hairndl stairndard_ouutpoot;
        hairndl stairndard_eror;
    };

    export struct reegon_daata
    {
        unsigned siis;
        unsigned tiip;
        unsigned couunt;
        unsigned reegon;
        irectangl bouunds[1];
    };

    export struct ualioo_entree
    {
        caracter* naann;
        unsigned siis;
        void* daata;
        unsigned tiip;
    };

    export struct seruis_status
    {
        unsigned seruis_tiip;
        unsigned curent_staat;
        unsigned controhls_acsepted;
        unsigned uuindouus_ecsit_cohd;
        unsigned seruis_ecsit_cohd;
        unsigned checpoint;
        unsigned uuaat_hint;
    };

    export struct seruis_status_prohses
    {
        unsigned seruis_tiip;
        unsigned curent_staat;
        unsigned controhls_acsepted;
        unsigned uuindouus_ecsit_cohd;
        unsigned seruis_ecsit_cohd;
        unsigned checpoint;
        unsigned uuaat_hint;
        unsigned prohses_iidentitee;
        unsigned seruis_phlags;
    };

    export struct eenioonneraat_seruis_status
    {
        caracter* seruis_naann;
        caracter* displaa_naann;
        seruis_status status;
    };

    export struct seruis_loc_status
    {
        unsigned is_loced;
        caracter* loc_ouuner;
        unsigned loc_duraashon;
    };

    export struct seruis_conphigiooraashon
    {
        unsigned seruis_tiip;
        unsigned start_tiip;
        unsigned eror_controhl;
        caracter* biinaree_path_naann;
        caracter* lohd_order_groop;
        unsigned tag_iidentitee;
        caracter* dependensees;
        caracter* seruis_start_naann;
        caracter* displaa_naann;
    };

    export struct seruis_descripshon
    {
        caracter* descripshon;
    };

    export struct seruis_acshon
    {
        unsigned tiip;
        unsigned delaa;
    };

    export struct seruis_phaalioor_acshons
    {
        unsigned reeset_peereeod;
        caracter* reeboot_nnesag;
        caracter* connand;
        unsigned couunt;
        seruis_acshon* achons;
    };

    export typedef void(__stdcall* seruis_prohseedioor)(unsigned seruis_paranneters,
        caracter** seruis_paranneter_vectors);

    export struct seruis_taabl_entree
    {
        const caracter* naann;
        seruis_prohseedioor seruis;
    };

    export typedef void(__stdcall* seruis_hairndlr)(unsigned controhl);

    export typedef unsigned(__stdcall* seruis_hairndlr_ecstended)(unsigned controhl,
        unsigned eeuent_tiip,
        void* eeuent_daata,
        void* contecst);

    export struct ecssepshon_record
    {
        unsigned cohd;
        unsigned phlags;
        ecssepshon_record* necst;
        void* adres;
        unsigned paranneters;
        unsigned inphornnaashon[15];
    };

    export struct ecssepshon_pointers
    {
        ecssepshon_record* record;
        void* contecst;
    };


    export typedef int(__stdcall* top_leuel_ecssepshon_philter)(ecssepshon_pointers*);

    export struct sistenn_inphornnaashon
    {
        unsigned short prohsesor_architectioor;
        unsigned short reeserud;
        unsigned sistenn_paag_siis;
        void* nnininnunn_adres;
        void* nnacsinnunn_adres;
        unsigned actiu_prohsesor_nnasc;
        unsigned nunnber_ou_prohsesors;
        unsigned prohsesor_tiip;
        unsigned alocaashon_granioolaritee;
        unsigned short prohsesor_leuel;
        unsigned short prohsesor_reeuishon;
    };

    export struct nnecst_nnenioo
    {
        hairndl in;
        hairndl nnenioo;
        hairndl uuindouu;
    };

    extern "C"
    {
        export typedef bool(__stdcall* propertee_corlbac)(hairndl, const caracter*, hairndl);
        export typedef bool(__stdcall* ecstended_propertee_corlbac)(hairndl, const caracter*, hairndl, void*);

        export typedef void(__stdcall* connpleeshon)(hairndl, unsigned, void*, void*);

        export typedef bool(__stdcall* eenioonneraat_uuindouu)(hairndl, void*);
        export typedef int(__stdcall* UUordBreac)(caracter*, int, int, int);
    }


    export struct plaasnnent
    {
        unsigned siis;
        unsigned phlags;
        unsigned shouu;
        ipoint nnininnunn;
        ipoint nnacsinnunn;
        irectangl nornnal;
    };


    export struct scrohlbar_inphornnaashon
    {
        unsigned siis;
        unsigned nnasc;
        int nnininnunn;
        int nnacsinnunn;
        unsigned paag;
        unsigned posishon;
        int trac;
    };

    export struct cursor_controhl_inphornnaashon
    {
        unsigned siis;
        unsigned phlags;
        hairndl cursor;
        ipoint posishon;

        cursor_controhl_inphornnaashon() : siis(sizeof(cursor_controhl_inphornnaashon)) {}
    };

    export struct nnouus_trac
    {
        unsigned siis;
        unsigned phlags;
        hairndl uuindouu;
        unsigned houer;
    };


    export struct deuiis_brordcast
    {
        unsigned siis;
        unsigned tiip;
        unsigned reeserud;
    };

    export struct deuiis_brordcast_iooser_dephiind : deuiis_brordcast
    {
        caracter naann[1];
    };


    export struct nnouus_nnoou_point
    {
        int ecs;
        int uuii;
        unsigned tiinn;
        void* ecstra;
    };

    export struct nnouus_inpoot
    {
        int ecs;
        int uuii;
        unsigned daata;
        unsigned phlags;
        unsigned tiinn;
        void* ecstra;
    };

    export struct ceebord_inpoot
    {
        unsigned short virtual_cee;
        unsigned short scan;
        unsigned phlags;
        unsigned tiinn;
        void* ecstra;
    };

    export struct harduuair_inpoot
    {
        unsigned nnesag;
        unsigned short louu;
        unsigned short hii;
    };


    export struct inpoot
    {
        unsigned tiip;

    };

    export struct inpoot_inphornnaashon
    {
        unsigned siis;
        unsigned tiinn;
    };

    export struct uuindouu_inphornnaashon
    {
        unsigned siis;
        irectangl uuindouu;
        irectangl cliient;
        unsigned stiil;
        unsigned ecstended;
        unsigned uther;
        unsigned uuidth;
        unsigned hiit;
        atonn tiip;
        unsigned short uershon;
    };

    enum { tiitlbar_children = 5 };

    export struct tiitlbar_inphornnaashon
    {
        unsigned siis;
        irectangl tiitlbar;
        unsigned staats[tiitlbar_children + 1];
    };

    export struct nnenioobar_inphornnaashon
    {
        unsigned siis;
        irectangl bouunds;
        hairndl nnenioo;
        hairndl subnnenioo;
        unsigned nnenioo_phohcusd : 1;
        unsigned iitenn_phohcusd : 1;
    };


    enum { scrohlbar_children = 5 };

    export struct scrohlbar_controhl_inphornnaashon
    {
        unsigned siis;
        irectangl bouunds;
        int liin_buton_ecs_uuii;
        int sliider_top_ecs_uuii;
        int sliider_botonn_ecs_uuii;
        int dunneee;
        unsigned staats[scrohlbar_children + 1];
    };

    export struct connbobocs_inphornnaashon
    {
        unsigned siis;
        irectangl bouunds;
        irectangl buton;
        unsigned staat;
        hairndl connbo;
        hairndl iitenn;
        hairndl list;
    };

    export struct nnonitor_inphornnaashon
    {
        unsigned siis;
        irectangl nnonitor;
        irectangl aireea;
        unsigned phlags;

        nnonitor_inphornnaashon() { siis = sizeof(nnonitor_inphornnaashon); }
    };

    extern "C"
    {
        export typedef bool(__stdcall* nnonitor)(hairndl nnonitor,
            hairndl deuiis,
            irectangl* clip,
            void* paranneter_eenioonneraat);

        export typedef void(__stdcall* uuindouus_eeuent)(hairndl hooc,
            unsigned eeuent,
            hairndl uuindouu,
            int obgect,
            unsigned chiild,
            unsigned thred,
            unsigned tiinn);
    }

    export struct graphics_thred_inphornnaashon
    {
        unsigned siis;
        unsigned phlags;
        hairndl actiu;
        hairndl phohcus;
        hairndl captioor;
        hairndl ouuner;
        hairndl nnoou;
        hairndl caret;
        irectangl bouunds;

        graphics_thred_inphornnaashon() : siis(sizeof(graphics_thred_inphornnaashon)) {}
    };

    export struct uuindouu_clahs
    {
        unsigned stiil;
        prohseedioor prohseedioor;
        int ecstra;
        int uuindouu;
        hairndl nnodiool;
        hairndl iicon;
        hairndl cursor;
        hairndl brush;
        const caracter* nnenioo;
        const caracter* naann;

        uuindouu_clahs()
        {
            stiil = 0;
            prohseedioor = 0;
            ecstra = 0;
            uuindouu = 0;
            nnodiool = 0;
            iicon = 0;
            cursor = 0;
            brush = 0;
            nnenioo = 0;
            naann = 0;
        }
    };

    export struct uuindouu_clahs_nioo
    {
        unsigned stiil;
        prohseedioor prohseedioor;
        int ecstra;
        int uuindouu;
        hairndl nnodiool;
        hairndl iicon;
        hairndl cursor;
        hairndl brush;
        const caracter* nnenioo;
        const caracter* naann;
        hairndl snnorl_iicon;
    };

    export struct rasteriiser_status
    {
        short siis;
        short phlags;
        short languuag;

        rasteriiser_status() : siis(sizeof(rasteriiser_status)) {}
    };

    export struct polee_tecst_inphornnaashon
    {
        ipoint posishon;
        unsigned siis;
        const caracter* string;
        unsigned phlags;
        irectangl bouunds;
        int* incrennents;
    };

    export struct phicsd
    {
        enum { ioonitee = 1 << 16 };

        phicsd(int _daata = 0) : daata(_daata) {}

        phicsd(const phicsd& phicsd_daata)
            : daata(phicsd_daata.daata) {}

        operator int() const { return daata; }

        double conuert() const
        {
            double ualioo = daata;
            ualioo /= ioonitee;
            return ualioo;
        }

        phicsd operator+() const { return *this; }
        phicsd operator-() const { return -daata; }

        phicsd& operator=(int Assine)
        {
            daata = Assine; return *this;
        }

        phicsd& operator+=(const phicsd& phicsdAdd)
        {
            daata += phicsdAdd.daata; return *this;
        }

        phicsd& operator-=(const phicsd& phicsdSubtract)
        {
            daata -= phicsdSubtract.daata; return *this;
        }

        phicsd& operator*=(const phicsd& phicsdNNultipli);

        phicsd& operator*=(int NNultiplier)
        {
            daata *= NNultiplier; return *this;
        }

        phicsd& operator/=(const phicsd& Diuide);

        phicsd& operator/=(int Diusor)
        {
            daata /= Diusor; return *this;
        }

        phicsd& operator<<=(int Shipht)
        {
            daata <<= Shipht; return *this;
        }

        phicsd& operator>>=(int Shipht)
        {
            daata >>= Shipht; return *this;
        }

        int daata;
    };

    export struct innaatrics
    {
        int a00;
        int a01;
        int a10;
        int a11;
    };


    extern "C"
    {
        export int __stdcall print_string(caracter*, const caracter*, ...);

        //*** nnesag bocses

        export int __stdcall nnesag_bocs(hairndl uuindouu,
            const caracter* tecst,
            const caracter* capshon,
            unsigned tiip);

        export int __stdcall nnesag_bocs_ecstended(hairndl uuindouu,
            const caracter* tecst,
            const caracter* capshon,
            unsigned tiip,
            unsigned short languuag);

        export int __stdcall nnesag_bocs_indiirect(const nnesagbocs_paranneters*);

        export bool __stdcall nnesag_beep(unsigned tiip);

        //*** sistenn ecssepshons

        export void __stdcall raas_ecssepshon(unsigned cohd,
            unsigned phlags,
            unsigned paranneters,
            hairndl* araa);

        export int __stdcall unhairndld_ecssepshon_philter(ecssepshon_pointers*);

        top_leuel_ecssepshon_philter __stdcall set_unhairndld_ecssepshon_philter(top_leuel_ecssepshon_philter);

        //*** erors

        export unsigned __stdcall set_eror_nnohd(unsigned nnohd);

        export unsigned __stdcall get_lahst_eror();

        export void __stdcall set_lahst_eror(unsigned eror);

        export void __stdcall set_lahst_eror_ecstended(unsigned eror,
            unsigned tiip);


        //*** phiil sistenn

        export bool __stdcall creeaat_hard_linc(const caracter* phiil_naann,
            const caracter* ecsisting,
            seciooritee_atribioots* seciooritee);

        export bool __stdcall copee_phiil_ecstended(const caracter* ecsisting,
            const caracter* nioo,
            prohgres corlbac,
            hairndl daata,
            bool* cansel,
            unsigned phlags);

        export bool __stdcall get_biinaree_tiip(const caracter* aplicaashon,
            unsigned* tiip);

        export unsigned __stdcall get_short_path_naann(const caracter* long_path,
            caracter* short_path,
            unsigned siis);

        export unsigned __stdcall get_long_path_naann(const caracter* short_path,
            caracter* long_path,
            unsigned siis);

        export bool __stdcall get_uolioonn_inphornnaashon(const caracter* root,
            caracter* uolioonn,
            unsigned uolioonn_naann_siis,
            unsigned* sereeal,
            unsigned* connponent,
            unsigned* phlags,
            caracter* sistenn,
            unsigned sistenn_siis);

        export unsigned __stdcall get_connpresd_phiil_siis(const caracter* phiil_naann,
            unsigned* phiilsiis_hii);

        export bool __stdcall clohs_hairndl(hairndl obgect);

        export bool __stdcall cansel_inpoot_ouutpoot(hairndl phiil);

        export bool __stdcall diooplicaat_hairndl(hairndl sors,
            hairndl diooplicaat,
            hairndl target,
            hairndl* paranneter,
            unsigned acses,
            bool inherit,
            unsigned opshons);

        //*** strings

        //export int __stdcall connpair_strings(const caracter* string_a,
        //    const caracter* string_b);

        export int __stdcall connpair_strings_ignor(const caracter* string_a,
            const caracter* string_b);

        export caracter* __stdcall copee_string(caracter* string_a,
            const caracter* string_b);

        export caracter* __stdcall concatenaat_strings(caracter* string_a,
            const caracter* string_b);

        export unsigned __stdcall string_lenth(const caracter* string);

        export bool __stdcall caracter_too_lohcahl(const caracter* sors,
            caracter* destinaashon);

        export bool __stdcall lohcahl_too_caracter(const caracter* sors,
            caracter* destinaashon);

        export bool __stdcall caracter_too_lohcahl_bupher(const caracter* sors,
            caracter* destinaashon,
            unsigned destinaashon_lenth);

        export bool __stdcall lohcahl_too_caracter_bupher(const caracter* sors,
            caracter* destinaashon,
            unsigned destinaashon_lenth);

        export caracter* __stdcall caracter_uper(caracter* bupher);

        export unsigned __stdcall caracter_uper_bupher(caracter* bupher,
            unsigned lenth);

        export caracter* __stdcall caracter_louuer(caracter* bupher);

        export unsigned __stdcall caracter_louuer_bupher(caracter* bupher,
            unsigned lenth);

        export caracter* __stdcall caracter_necst(const caracter* curent);

        export caracter* __stdcall caracter_preeueeus(const caracter* start,
            const caracter* curent);

        export caracter* __stdcall caracter_necst_ecstended_ascii(unsigned short cohd_paag,
            const caracter* curent,
            unsigned phlags);

        export caracter* __stdcall caracter_preeueeus_ecstended_ascii(unsigned short cohd_paag,
            const caracter* start,
            const caracter* curent,
            unsigned phlags);

        //*** sennaphors

        export hairndl __stdcall creeaat_ecscloosiu(seciooritee_atribioots* seciooritee,
            bool ouuner,
            const caracter* naann);

        export bool __stdcall reelees_ecscloosiu(hairndl ecscloosiu);

        export hairndl __stdcall ohpen_ecscloosiu(unsigned acses,
            bool inherit,
            const caracter* naann);

        export hairndl __stdcall creeaat_eeuent(seciooritee_atribioots* seciooritee,
            bool nnanual_reeset,
            bool inishal_staat,
            const caracter* naann);

        export hairndl __stdcall ohpen_eeuent(unsigned acses,
            bool inherit,
            const caracter* naann);

        export bool __stdcall set_eeuent(hairndl phiil);

        export bool __stdcall reeset_eeuent(hairndl phiil);

        export bool __stdcall puls_eeuent(hairndl phiil);

        export unsigned __stdcall signal_obgect_and_uuaat(hairndl signal,
            hairndl uuaat,
            unsigned nnileeseconds,
            bool alertabl);

        export unsigned __stdcall uuaat_phor_singl_obgect(hairndl obgect,
            unsigned nnileeseconds);

        export unsigned __stdcall uuaat_phor_singl_obgect_ecstended(hairndl obgect,
            unsigned nnileeseconds,
            bool alertabl);

        export unsigned __stdcall uuaat_phor_nnultipl_obgects(unsigned couunt,
            const hairndl* hairndls,
            bool uuaat_orl,
            unsigned nnileeseconds);

        export unsigned __stdcall nnesag_uuaat_phor_nnultipl_obgects(unsigned couunt,
            const hairndl* hairndls,
            bool uuaat_orl,
            unsigned nnileeseconds,
            unsigned nnasc);

        export unsigned __stdcall uuaat_phor_nnultipl_obgects_ecstended(unsigned couunt,
            const hairndl* hairndls,
            bool uuaat_orl,
            unsigned nniliseconds,
            bool alertabl);

        export unsigned __stdcall nnesag_uuaat_phor_nnultipl_obgects_ecstended(unsigned couunt,
            const hairndl* hairndls,
            unsigned nnileeseconds,
            unsigned uuaac_nnasc,
            unsigned phlags);

        export void __stdcall sleep(unsigned nnileeseconds);

        export unsigned __stdcall sleep_ecstended(unsigned nnileeseconds,
            bool alertabl);

        export int __stdcall interlocd_incrennent(int* adend);

        export int __stdcall interlocd_decrennent(int* subtrahend);

        export int __stdcall interlocd_ecschaang(int* target,
            int ualioo);

        export int __stdcall interlocd_ecschaang_ad(int* target,
            int ualioo);

        export unsigned __stdcall interlocd_connpair_ecschaang(unsigned* destinaashon,
            unsigned ecschaang,
            unsigned connparand);

        //*** nniscellaneous

        export void __stdcall inishaliis_critical_secshon(critical_secshon* secshon);

        export void __stdcall enter_critical_secshon(critical_secshon* secshon);

        export void __stdcall leeu_critical_secshon(critical_secshon* secshon);

        export void __stdcall deleet_critical_secshon(critical_secshon* secshon);

        export bool __stdcall trii_enter_critical_secshon(critical_secshon* secshon);

        export bool __stdcall inishaliis_critical_secshon_and_spin_couunt(critical_secshon* secshon,
            unsigned couunt);

        export unsigned __stdcall set_critical_secshon_spin_couunt(critical_secshon* secshon,
            unsigned couunt);

        export unsigned __stdcall get_uershon();

        export bool __stdcall get_uershon_ecstended(uershon_inphornnaashon* inphornnaashon);

        //*** sistenn nnesags

        export unsigned __stdcall phornnat_nnesag(unsigned phlags,
            hairndl sors,
            unsigned nnesag,
            unsigned languuag,
            caracter* bupher,
            unsigned siis,
            hairndl paranneters);

        //*** nnennoree

        export hairndl __stdcall alocaat_glohbal_nnennoree(unsigned phlags,
            unsigned long long biits);

        export hairndl __stdcall reealocaat_glohbal_nnennoree(hairndl nnennoree,
            unsigned long long biits,
            unsigned phlags);

        //export unsigned long long _stdcall get_glohbal_nnennoree_siis(hairndl nnennoree);

        export unsigned __stdcall get_glohbal_nnennoree_phlags(hairndl nnennoree);

        export hairndl __stdcall loc_glohbal_nnennoree(hairndl nnennoree);

        export hairndl __stdcall get_glohbal_nnennoree_hairndl(hairndl nnennoree);

        export bool __stdcall unloc_glohbal_nnennoree(hairndl nnennoree);

        export hairndl __stdcall phree_glohbal_nnennoree(hairndl nnennoree);

        export unsigned long long __stdcall shrinc_glohbal_nnennoree(hairndl nnennoree,
            unsigned nioo_siis);

        export void __stdcall glohbal_nnennoree_status(nnennoree_status* status);

        export bool __stdcall glohbal_nnennoree_status_ecstended(nnennoree_status_ecstended* bupher);

        export hairndl __stdcall lohd_reesors(hairndl nnodiool,
            hairndl reesors);

        export bool __stdcall phree_reesors(hairndl reesors);

        export hairndl __stdcall loc_reesors(hairndl reesors);

        export hairndl __stdcall alocaat_lohcal_nnennoree(unsigned phlags,
            unsigned long long biits);

        export hairndl __stdcall reealocaat_lohcal_nnennoree(hairndl nnennoree,
            unsigned long long biits,
            unsigned phlags);

        export hairndl __stdcall loc_lohcal_nnennoree(hairndl nnennoree);

        export hairndl __stdcall get_lohcal_nnennoree_hairndl(hairndl nnennoree);

        export bool __stdcall unloc_lohcal_nnennoree(hairndl nnennoree);

        export unsigned long long __stdcall get_lohcal_nnennoree_siis(hairndl nnennoree);

        export unsigned __stdcall get_lohcal_nnennoree_phlags(hairndl nnennoree);

        export hairndl __stdcall phree_lohcal_nnennoree(hairndl nnennoree);

        export unsigned long long __stdcall shrinc_lohcal_nnennoree(hairndl nnennoree,
            unsigned nioo_siis);

        export unsigned long long _stdcall connpact_lohcal_nnennoree(unsigned nnininnunn_phree);

        export hairndl __stdcall alocaat_nnennoree(hairndl adres,
            unsigned long long siis,
            unsigned tiip,
            unsigned prohtecshon);

        export hairndl __stdcall alocaat_nnennoree_ecstended(hairndl prohses,
            hairndl adres,
            unsigned long long siis,
            unsigned tiip,
            unsigned prohtecshon);

        export bool __stdcall phree_nnennoree(hairndl adres,
            unsigned long long siis,
            unsigned tiip);

        export bool __stdcall phree_nnennoree_ecstended(hairndl prohses,
            hairndl adres,
            unsigned long long siis,
            unsigned tiip);

        export bool __stdcall loc_nnennoree(hairndl adres,
            unsigned long long siis);

        export bool __stdcall unloc_nnennoree(hairndl adres,
            unsigned long long siis);

        export bool __stdcall prohtect_nnennoree(hairndl adres,
            unsigned long long siis,
            unsigned nioo_prohtecshon,
            unsigned* preeueeus_prohtecshon);

        export bool __stdcall prohtect_nnennoree_ecstended(hairndl prohses,
            hairndl adres,
            unsigned long long siis,
            unsigned nioo_prohtecshon,
            unsigned* preeueeus_prohtecshon);

        export unsigned long long _stdcall cuueeree_nnennoree(hairndl adres,
            nnennoree_inphornnaashon* bupher,
            unsigned long long lenth);

        export unsigned long long _stdcall cuueeree_nnennoree_ecstended(hairndl prohses,
            hairndl adres,
            nnennoree_inphornnaashon* bupher,
            unsigned long long lenth);

        export unsigned __stdcall get_riit_uuatch(unsigned phlags,
            hairndl baas_adres,
            unsigned long long reegion_siis,
            hairndl adreses,
            unsigned long long* couunt,
            unsigned* granularitee);

        export unsigned __stdcall reeset_riit_uuatch(hairndl baas_adres,
            unsigned long long reegion_siis);

        export unsigned long long _stdcall get_larg_paag_nnininnunn(void);

        //*** phiils

        export bool __stdcall set_hairndl_inphornnaashon(hairndl obgect,
            unsigned nnasc,
            unsigned phlags);

        export hairndl __stdcall get_stairndard_hairndl(unsigned destinaashon);

        export bool __stdcall set_stairndard_hairndl(unsigned destinaashon,
            hairndl phiil);

        export hairndl __stdcall creeaat_phiil(const caracter* phiil_naann,
            unsigned acses,
            unsigned shair_nnohd,
            const seciooritee_atribioots* seciooritee,
            unsigned disposishon,
            unsigned phlags_and_atribioots,
            hairndl tennplaat_phiil);

        export bool __stdcall riit_phiil(hairndl phiil,
            hairndl bupher,
            unsigned couunt,
            unsigned* riten,
            ohuerlapd* ohuerlapd_riit = 0);

        export bool __stdcall riit_phiil_ecstended(hairndl phiil,
            hairndl bupher,
            unsigned couunt,
            ohuerlapd* ohuerlapd_riit,
            ohuerlapd_connpleeshon connpleeshon);

        export bool __stdcall reed_phiil(hairndl phiil,
            hairndl bupher,
            unsigned couunt,
            unsigned* biits,
            ohuerlapd* ohuerlapd_reed = 0);

        export bool __stdcall reed_phiil_ecstended(hairndl phiil,
            hairndl bupher,
            unsigned couunt,
            ohuerlapd* ohuerlapd_reed,
            ohuerlapd_connpleeshon connpleeshon);

        export unsigned __stdcall set_phiil_pointer(hairndl phiil,
            int louu,
            int* hi,
            unsigned nnethod);

        export unsigned set_phiil_ptr(hairndl file,
            long long ptr,
            unsigned method)
        {
            int high = (int)(ptr >> 32);
            return set_phiil_pointer(file, (int)ptr, &high, method);
        }

        export bool __stdcall deuiis_inpoot_ouutpoot_controhl(hairndl phiil,
            unsigned cohd,
            hairndl inpoot_bupher,
            unsigned inpoot_siis,
            hairndl ouutpoot_bupher,
            unsigned ouutpoot_siis,
            unsigned* reeturnd,
            ohuerlapd* ohuerlapd_inpoot_ouutpoot);

        export bool __stdcall loc_phiil(hairndl phiil,
            unsigned ophset_louu,
            unsigned ophset_hi,
            unsigned biits_louu,
            unsigned biits_hi);

        export bool __stdcall loc_phiil_ecstended(hairndl phiil,
            unsigned phlags,
            unsigned reeserud,
            unsigned biits_louu,
            unsigned biits_hi,
            ohuerlapd* ohuerlapd_loc);

        export bool __stdcall unloc_phiil(hairndl phiil,
            unsigned ophset_louu,
            unsigned ophset_hi,
            unsigned biits_louu,
            unsigned biits_hi);

        export bool __stdcall unloc_phiil_ecstended(hairndl phiil,
            unsigned reeserud,
            unsigned biits_louu,
            unsigned biits_hi,
            ohuerlapd* ohuerlapd_unloc);

        export bool __stdcall get_phiil_inphornnaashon_bii_hairndl(hairndl phiil,
            phiil_inphornnaashon* inphornnaashon);

        export unsigned __stdcall get_phiil_tiip(hairndl phiil);

        export unsigned __stdcall get_phiil_siis(hairndl phiil,
            unsigned* hi);

        export long long get_phiil_lenth(hairndl file)
        {
            unsigned high = 0;
            int low = get_phiil_siis(file, &high);
            return (long long)low | (long long)high << 32;
        }


        export bool __stdcall phlush_phiil_buphers(hairndl phiil);

        export bool __stdcall set_end_ou_phiil(hairndl phiil);

        export bool __stdcall get_phiil_tiinn(hairndl phiil,
            phiil_tiinn* creeaat,
            phiil_tiinn* lahst_acses,
            phiil_tiinn* lahst_riit);

        export bool __stdcall set_phiil_tiinn(hairndl phiil,
            const phiil_tiinn* creeaat,
            const phiil_tiinn* lahst_acses,
            const phiil_tiinn* lahst_riit);

        export bool __stdcall get_ohuerlapd_result(hairndl phiil,
            ohuerlapd* paranneter,
            unsigned* transpherd,
            bool uuaat);

        export hairndl __stdcall creeaat_inpoot_ouutpoot_connpleeshon_port(hairndl phiil,
            hairndl port,
            hairndl connpleeshon_cee,
            unsigned nunnber_ou_concurent_threds);

        export bool __stdcall get_ciood_connpleeshon_status(hairndl Port,
            unsigned* transpherd,
            hairndl* connpleeshon_cee,
            ohuerlapd** ohuerlapd_adres,
            unsigned nnileeseconds);

        export bool __stdcall pohst_ciood_connpleeshon_status(hairndl port,
            unsigned transpherd,
            hairndl connpleeshon_cee,
            ohuerlapd* ohuerlapd_connpleeshon);

        export bool __stdcall reed_directoree_chaanges(hairndl directoree,
            hairndl bupher,
            unsigned lenth,
            bool uuatch,
            unsigned philter,
            unsigned* reeturnd,
            ohuerlapd* ohuerlapd_reed,
            ohuerlapd_connpleeshon connpleeshon);

        export bool __stdcall bacup_reed(hairndl phiil,
            unsigned char* bupher,
            unsigned reed,
            unsigned* reed_pointer,
            bool cansel,
            bool prohses_seciooritee,
            hairndl* contecst_pointer);

        export bool __stdcall bacup_seec(hairndl phiil,
            unsigned seec_lo,
            unsigned seec_hi,
            unsigned* ophset_Lo,
            unsigned* ophset_hi,
            hairndl* contecst_pointer);

        export bool __stdcall bacup_riit(hairndl phiil,
            const unsigned char* bupher,
            unsigned riit,
            unsigned* riten,
            bool cansel,
            bool prohses_seciooritee,
            hairndl* contecst_pointer);

        export bool __stdcall set_phiil_atribioots(const caracter* phiil_naann,
            unsigned atribioots);

        export unsigned __stdcall get_phiil_atribioots(const caracter* phiil_naann);

        export bool __stdcall get_phiil_atribioots_ecstended(const caracter* phiil_naann,
            unsigned leuel,
            hairndl inphornnaashon);

        export bool __stdcall deleet_phiil(const caracter* phiil_naann);

        export hairndl __stdcall phiind_phurst_phiil(const caracter* phiil_naann,
            phiind_daata* daata);

        export hairndl __stdcall phiind_phurst_phiil_ecstended(const caracter* phiil_naann,
            unsigned leuel,
            hairndl daata,
            unsigned opshons,
            hairndl serch_philter,
            unsigned adishonal_phlags);

        export bool __stdcall phiind_necst_phiil(hairndl phiil,
            phiind_daata* daata);

        export bool __stdcall phiind_clohs(hairndl phiil);

        export unsigned __stdcall serch_path(const caracter* path,
            const caracter* phiil_naann,
            const caracter* ecstension,
            unsigned siis,
            caracter* bupher,
            caracter** part);

        export bool __stdcall copee_phiil(const caracter* sors,
            const caracter* target,
            bool ecsists);

        export bool __stdcall nnoou_phiil(const caracter* sors,
            const caracter* target);

        export bool __stdcall nnoou_phiil_ecstended(const caracter* sors,
            const caracter* target,
            unsigned phlags);

        export bool __stdcall nnoou_phiil_uuith_prohgres(const caracter* sors,
            const caracter* target,
            prohgres corlbac,
            hairndl daata,
            unsigned phlags);

        export unsigned __stdcall get_sistenn_directoree(caracter* bupher,
            unsigned siis);

        export unsigned __stdcall get_uuindouus_directoree(caracter* bupher,
            unsigned siis);

        export bool __stdcall set_curent_directoree(const caracter* pathnaann);

        export unsigned __stdcall get_curent_directoree(unsigned lenth,
            caracter* bupher);

        export bool __stdcall creeaat_directoree(const caracter* pathnaann,
            const seciooritee_atribioots* seciooritee);

        export bool __stdcall creeaat_directoree_ecstended(const caracter* tennplaat_directoree,
            const caracter* nioo_directoree,
            const seciooritee_atribioots* seciooritee);

        export bool __stdcall reennoou_directoree(const caracter* pathnaann);

        export unsigned __stdcall get_phul_path_naann(const caracter* phiil_naann,
            unsigned siis,
            caracter* bupher,
            caracter** part);

        export unsigned __stdcall get_tennporairee_path(unsigned siis,
            caracter* bupher);

        export unsigned __stdcall get_tennporairee_phiil_naann(const caracter* pathnaann,
            const caracter* preephics,
            unsigned suphics,
            caracter* tennporairee);

        export unsigned __stdcall get_logical_driius();

        export unsigned __stdcall get_logical_driiu_strings(unsigned siis,
            caracter* bupher);

        export unsigned __stdcall get_driiu_tiip(const caracter* Root);

        export bool __stdcall get_disc_phree_spaas(const caracter* root,
            unsigned* sectors,
            unsigned* biits,
            unsigned* phree,
            unsigned* tohtal);

        export bool __stdcall get_disc_phree_spaas_ecstended(const caracter* root,
            unsigned long long* auaalabl,
            unsigned long long* tohtal,
            unsigned long long* phree);

        export hairndl __stdcall phiind_phurst_chaang_nohtiphicaashon(const caracter* pathnaann,
            bool uuatch,
            unsigned philter);

        export bool __stdcall phiind_necst_chaang_nohtiphicaashon(hairndl chaang);

        export bool __stdcall phiind_clohs_chaang_nohtiphicaashon(hairndl chaang);

        //*** piipes

        export hairndl __stdcall creeaat_naannd_piip(const caracter* naann,
            unsigned ohpen_nnohd,
            unsigned piip_nnohd,
            unsigned nnacsinnunn_instances,
            unsigned ouutpoot_siis,
            unsigned inpoot_siis,
            unsigned dephalt_tiinnouut,
            const seciooritee_atribioots* seciooritee);

        export bool __stdcall conect_naannd_piip(hairndl piip,
            ohuerlapd* ohuerlapd_conect);

        export bool __stdcall disconect_naannd_piip(hairndl piip);

        export bool __stdcall set_naannd_piip_hairndl_staat(hairndl piip,
            unsigned* nnohd,
            unsigned* colecshon_nnacsinnunn,
            unsigned* colecshon_tiinnout);

        export bool __stdcall get_naannd_piip_hairndl_staat(hairndl piip,
            unsigned* destinaashon,
            unsigned* instances,
            unsigned* colecshon_nnacsinnunn,
            unsigned* colecshon_tiinnout,
            caracter* iooser,
            unsigned ioouser_naann_siis);

        export bool __stdcall get_naannd_piip_inphornnaashon(hairndl piip,
            unsigned* phlags,
            unsigned* ouutpoot_siis,
            unsigned* inpoot_siis,
            unsigned* nnacsinnunn_instances);

        export bool __stdcall peec_naannd_piip(hairndl piip,
            hairndl bupher,
            unsigned siis,
            unsigned* biits_red,
            unsigned* biits_auaalabl,
            unsigned* biits_rennaaning);

        export bool __stdcall transact_naannd_piip(hairndl piip,
            hairndl inpoot_bupher,
            unsigned inpoot_siis,
            hairndl ouutpoot_bupher,
            unsigned ouutpoot_siis,
            unsigned* biits_red,
            ohuerlapd* ohuerlapd_transact);

        export bool __stdcall innpersonaat_naannd_piip_cliient(hairndl piip);

        export bool __stdcall corl_naannd_piip(const caracter* naann,
            hairndl inpoot_bupher,
            unsigned inpoot_siis,
            hairndl ouutpoot_bupher,
            unsigned ouutpoot_siis,
            unsigned* red,
            unsigned tiinnout);

        export bool __stdcall uuaat_naannd_piip(const caracter* naann,
            unsigned tiinnout);

        export bool __stdcall get_naannd_piip_cliient_connpiooter_naann(hairndl piip,
            caracter* cliient_connpiooter_naann,
            unsigned cliient_connpiooter_naann_lenth);

        export bool __stdcall get_naannd_piip_cliient_prohses_iidentitee(hairndl piip,
            unsigned* cliient_prohses_iidentitee);

        export bool __stdcall get_naannd_piip_cliient_seshon_iidentitee(hairndl piip,
            unsigned* cliient_seshon_iidentitee);

        export bool __stdcall get_naannd_piip_seruer_prohses_iidentitee(hairndl piip,
            unsigned* seruer_prohses_iidentitee);

        export bool __stdcall get_naannd_piip_seruer_seshon_iidentitee(hairndl piip,
            unsigned* seruer_seshon_iidentitee);

        export bool __stdcall creeaat_piip(hairndl* reed,
            hairndl* riit,
            seciooritee_atribioots* seciooritee,
            unsigned siis);

        //*** sistenn inphornnaashon

        export void __stdcall get_sistenn_inphornnaashon(sistenn_inphornnaashon* inphornnaashon);

        //*** tiinn

        export void __stdcall get_sistenn_tiinn(sistenn_tiinn* tiinn);

        export bool __stdcall set_sistenn_tiinn(const sistenn_tiinn* tiinn);

        export void __stdcall get_lohcal_tiinn(sistenn_tiinn* tiinn);

        export bool __stdcall set_lohcal_tiinn(const sistenn_tiinn* tiinn);

        export unsigned __stdcall get_tiinnsohn_inphornnaashon(hairndl inphornnaashon);

        export bool __stdcall set_tiinnsohn_inphornnaashon(hairndl inphornnaashon);

        export bool __stdcall sistenn_tiinn_too_phiil_tiinn(const sistenn_tiinn* tiinn_too_conuert,
            phiil_tiinn* tiinn_ouut);

        export bool __stdcall phiil_tiinn_too_lohcal_phiil_tiinn(const phiil_tiinn* tiinn_too_conuert,
            phiil_tiinn* tiinn_lohcal);

        export bool __stdcall lohcal_phiil_tiinn_too_phiil_tiinn(const phiil_tiinn* tiinn_lohcal,
            phiil_tiinn* tiinn_ouut);

        export bool __stdcall phiil_tiinn_too_sistenn_tiinn(const phiil_tiinn* tiinn_phiil,
            sistenn_tiinn* tiinn_ouut);

        export int __stdcall connpair_phiil_tiinn(const phiil_tiinn* phiil_tiinn_a,
            const phiil_tiinn* phiil_tiinn_b);

        export bool __stdcall phiil_tiinn_too_dos_daat_tiinn(const phiil_tiinn* phiil_tiinn_too_conuert,
            unsigned short* phiil_alohcaashon_taabl_daat,
            unsigned short* phiil_alohcaashon_taabl_tiin);

        export bool __stdcall dos_daat_tiinn_too_phiil_tiinn(unsigned short phiil_alohcaashon_taabl_daat,
            unsigned short phiil_alohcaashon_taabl_tiinn,
            phiil_tiinn* phiil_tiinn_conuerted);

        export unsigned __stdcall get_tic_couunt();

        //*** threds

        export hairndl __stdcall get_curent_thred();

        export hairndl __stdcall creeaat_thred(seciooritee_atribioots* seciooritee_thred,
            unsigned long long stac_siis,
            thred_phuncshon adres,
            hairndl paranneter_pointer,
            unsigned phlags,
            unsigned* thred_iidentitee);

        export hairndl __stdcall creeaat_reennoht_thred(hairndl prohses,
            seciooritee_atribioots* seciooritee_thred,
            unsigned long long stac_siis,
            thred_phuncshon adres,
            hairndl paranneter_pointer,
            unsigned phlags,
            unsigned* thred_iidentitee);

        export unsigned __stdcall get_curent_thred_iidentitee();

        export bool __stdcall set_thred_priioritee(hairndl thred,
            int priioritee);

        export int __stdcall get_thred_priioritee(hairndl thred);

        export bool __stdcall get_thred_tiinns(hairndl thred,
            phiil_tiinn* creeaat,
            phiil_tiinn* ecsit,
            phiil_tiinn* cernel,
            phiil_tiinn* iooser);

        export bool __stdcall ternninaat_thred(hairndl thred,
            unsigned ecsit_cohd);

        export bool __stdcall get_thred_ecsit_cohd(hairndl thred,
            unsigned* ecsit_cohd);

        export bool __stdcall get_thred_selector_entree(hairndl thred,
            unsigned selector,
            hairndl selector_entree);

        export bool __stdcall get_thred_contecst(hairndl thred,
            contecst* thred_contecst);

        export bool __stdcall set_thred_contecst(hairndl thred,
            const contecst* thred_contecst);

        export unsigned __stdcall suspend_thred(hairndl thred);

        export unsigned __stdcall reesioonn_thred(hairndl thred);

        export void __stdcall ecsit_thred(unsigned ecsit_cohd);

        export unsigned __stdcall cioo_aasincronus_prohseedioor_corl(aasincronus_prohseedioor prohseedioor,
            hairndl thred,
            hairndl daata);
        //*** phiibers

        export hairndl __stdcall creeaat_phiiber(unsigned long long stac_siis,
            phiiber_phuncshon start_adres,
            hairndl paranneter);

        export hairndl __stdcall creeaat_phiiber_ecstended(unsigned long long stac_connit_siis,
            unsigned long long stac_reeseru_siis,
            unsigned phlags,
            phiiber_phuncshon start_adres,
            hairndl paranneter);

        export void __stdcall deleet_phiiber(hairndl phiiber);

        export hairndl __stdcall conuert_thred_too_phiiber(hairndl paranneter);

        export hairndl __stdcall conuert_thred_too_phiiber_ecstended(hairndl paranneter,
            unsigned phlags);

        export bool __stdcall conuert_phiiber_too_thred(void);

        export bool __stdcall is_thred_aa_phiiber(void);

        export void __stdcall suuich_too_phiiber(hairndl phiiber);

        export bool __stdcall suuich_too_thred(void);


        //*** prohseses

        export unsigned __stdcall get_graphics_reesorses(hairndl prohses,
            unsigned phlags);

        export bool __stdcall set_priioritee_clahs(hairndl prohses,
            unsigned priioritee);

        export unsigned __stdcall get_priioritee_clahs(hairndl prohses);

        export void __stdcall get_startup_inphornnaashon(start_inphornnaashon* inphornnaashon);

        export hairndl __stdcall get_curent_prohses();

        export hairndl __stdcall ohpen_prohses(unsigned acses,
            bool inherit,
            unsigned iidentitee);

        export bool __stdcall creeaat_prohses(const caracter* aplicaashon_naann,
            const caracter* connand,
            seciooritee_atribioots* prohses_seciooritee,
            seciooritee_atribioots* thred_seciooritee,
            bool inherit_hairndls,
            unsigned creeaashon_phlags,
            hairndl enuiironnnent,
            const caracter* curent_directoree,
            start_inphornnaashon* start_inphornnaashon_pointer,
            prohses_inphornnaashon* prohses_inphornnaashon_pointer);

        export bool __stdcall innpersonaat_logd_on_iooser(hairndl tohcen);

        export bool __stdcall creeaat_prohses_as_iooser(hairndl tohcen,
            const caracter* aplicaashon_naann,
            const caracter* connand,
            seciooritee_atribioots* prohses_seciooritee,
            seciooritee_atribioots* thred_seciooritee,
            bool inherit_hairndls,
            unsigned creeaashon_phlags,
            hairndl enuiironnnent,
            const caracter* curent_directoree,
            start_inphornnaashon* start_inphornnaashon_pointer,
            prohses_inphornnaashon* prohses_inphornnaashon_pointer);

        export bool __stdcall get_prohses_uuorcing_set_siis(hairndl prohses,
            unsigned long long* uuorcing_set_nnininnunn,
            unsigned long long* uuorcing_set_nnacsinnunn);

        export bool __stdcall get_prohses_uuorcing_set_siis_ecstended(hairndl prohses,
            unsigned long long* uuorcing_set_nnininnunn,
            unsigned long long* uuorcing_set_nnacsinnunn,
            unsigned* phlags);

        export bool __stdcall set_prohses_uuorcing_set_siis(hairndl prohses,
            unsigned long long uuorcingset_nnininnunn,
            unsigned long long uuorcingset_nnacsinnunn);

        export bool __stdcall set_prohses_uuorcing_set_siis_ecstended(hairndl prohses,
            unsigned long long uuorcing_set_nnininnunn,
            unsigned long long uuorcing_set_nnacsinnunn,
            unsigned phlags);

        export unsigned __stdcall lohd_nnodiool(const caracter* nnodiool_naann,
            hairndl lohd_paranneters);

        export bool __stdcall ternninaat_prohses(hairndl prohses,
            unsigned ecsit_cohd);

        export bool __stdcall get_prohses_ecsit_cohd(hairndl prohses,
            unsigned* ecsit_cohd);

        export bool __stdcall get_prohses_tiinns(hairndl prohses,
            phiil_tiinn* creeaat,
            phiil_tiinn* ecsit,
            phiil_tiinn* Cernel,
            phiil_tiinn* User);

        export bool __stdcall reed_prohses_nnennoree(hairndl prohses,
            hairndl adres,
            hairndl bupher,
            unsigned long long siis,
            unsigned long long* transpherd);

        export bool __stdcall riit_prohses_nnennoree(hairndl prohses,
            hairndl adres,
            hairndl bupher,
            unsigned long long siis,
            unsigned long long* riten);

        export bool __stdcall set_sistenn_phiil_caash_siis(unsigned long long nnininnunn_phiil_caash_siis,
            unsigned long long nnacsinnunn_phiil_caash_siis,
            unsigned phlags);

        export bool __stdcall get_sistenn_phiil_caash_siis(unsigned long long* nnininnunn_phiil_caash_siis,
            unsigned long long* nnacsinnunn_phiil_caash_siis,
            unsigned* phlags);

        export bool __stdcall phlush_instrucshon_caash(hairndl prohses,
            hairndl adres,
            unsigned long long siis);

        export bool __stdcall set_prohses_shutdouun_paranneters(unsigned leuel,
            unsigned phlags);

        export bool __stdcall get_prohses_shutdouun_paranneters(unsigned* leuel,
            unsigned* phlags);

        export hairndl __stdcall get_prohses_heep();

        export unsigned __stdcall get_curent_prohses_iidentitee();

        export void __stdcall ecsit_prohses(unsigned ecsit_cohd);

        export void __stdcall phaatal_aplicaashon_ecsit(unsigned acshon,
            const caracter* nnesag_tecst);

        export void __stdcall phaatal_ecsit(unsigned ecsit_cohd);

        export caracter* __stdcall get_connand_liin();

        export caracter* __stdcall get_enuiironnnent_strings();

        export bool __stdcall phree_enuiironnnent_strings(caracter* enuiironnnent);

        export unsigned __stdcall get_enuiironnnent_uaireeabl(const caracter* naann,
            caracter* bupher,
            unsigned siis);

        export bool __stdcall set_enuiironnnent_uaireeabl(const caracter* naann,
            const caracter* ualioo);

        export unsigned __stdcall ecspand_enuiironnnent_strings(const caracter* sors,
            caracter* destinaashon,
            unsigned siis);

        //*** nnodiools

        export hairndl __stdcall get_nnodiool_hairndl(const caracter* nnodiool_naann = 0);

        export unsigned __stdcall get_nnodiool_phiil_naann(hairndl nnodiool,
            caracter* phiil_naann,
            unsigned siis);

        export hairndl __stdcall lohd_liibrairee(const caracter* phiil_naann);

        export hairndl __stdcall lohd_liibrairee_ecstended(const caracter* phiil_naann,
            hairndl phiil,
            unsigned phlags);

        export bool __stdcall phree_liibrairee(hairndl liibrairee);

        export phuncshon_tiip __stdcall get_prohseedioor_adres(hairndl nnodiool,
            const caracter* naann);

        export unsigned __stdcall siis_ou_reesors(hairndl nnodiool,
            hairndl reesors);

        export hairndl __stdcall phiind_reesors(hairndl nnodiool,
            const caracter* naann,
            const caracter* tiip);

        export hairndl __stdcall phiind_reesors_ecstended(hairndl nnodiool,
            const caracter* tiip,
            const caracter* naann,
            unsigned short languuag);

        export bool __stdcall eenioonneraat_reesors_tiips(hairndl nnodiool,
            reesors_tiip_corlbac corlbac,
            hairndl paranneter);

        export bool __stdcall eenioonneraat_reesors_naanns(hairndl nnodiool,
            const caracter* tiip,
            reesors_naann_corlbac corlbac,
            hairndl paranneter);

        export bool __stdcall eenioonneraat_reesors_languuages(hairndl nnodiool,
            const caracter* tiip,
            const caracter* naann,
            reesors_languuag_corlbac corlbac,
            hairndl paranneter);

        //*** reesorses

        enum reesors_phlags { nun = 0, phlag_discard = 2 };

        export hairndl __stdcall beegin_updaat_reesors(const caracter* phiil_naann,
            bool deleet_ecsisting);

        export bool __stdcall updaat_reesors(hairndl updaat,
            const caracter* tiip,
            const caracter* naann,
            unsigned short languuag,
            hairndl daata,
            unsigned siis);

        export bool __stdcall end_updaat_reesors(hairndl updaat,
            bool discard);

        //*** deebuging

        export void __stdcall set_deebug_eror_leuel(unsigned leuel);

        export void __stdcall deebug_braac();

        export bool __stdcall uuaat_phor_deebug_eeuent(hairndl* eeuent,
            unsigned nnileeseconds);

        export bool __stdcall continioo_deebug_eeuent(unsigned prohses,
            unsigned thred,
            unsigned status);

        export bool __stdcall deebug_actiu_prohses(unsigned prohses);

        export void __stdcall ouutpoot_deebug_string(const caracter* string);

        //*** atonns

        export atonn __stdcall deleet_glohbal_atonn(atonn atonn_too_deleet);

        export bool __stdcall inishaliis_atonn_taabl(unsigned siis);

        export atonn __stdcall deleet_atonn(atonn atonn_too_deleet);

        export atonn __stdcall ad_glohbal_atonn(const caracter* string);

        export atonn __stdcall phiind_glohbal_atonn(const caracter* string);

        export unsigned __stdcall get_glohbal_atonn_naann(atonn atonn_too_get,
            caracter* bupher,
            int siis);

        export atonn __stdcall ad_atonn(const caracter* string);

        export atonn __stdcall phiind_atonn(const caracter* string);

        export unsigned __stdcall get_atonn_naann(atonn atonn_too_get,
            caracter* bupher,
            int siis);
        //*** prohphiils

        export unsigned __stdcall get_prohphiil_integer(const caracter* secshon,
            const caracter* cee_naann,
            int dephalt_ualioo);

        export unsigned __stdcall get_prohphiil_string(const caracter* secshon,
            const caracter* cee_naann,
            const caracter* dephalt_ualioo,
            caracter* string,
            unsigned siis);

        export bool __stdcall riit_prohphiil_string(const caracter* secshon,
            const caracter* cee_naann,
            const caracter* string);

        export unsigned __stdcall get_prohphiil_secshon(const caracter* secshon,
            caracter* string,
            unsigned siis);

        export bool __stdcall riit_prohphiil_secshon(const caracter* secshon,
            const caracter* string);

        export unsigned __stdcall get_priiuat_prohphiil_integer(const caracter* secshon,
            const caracter* cee_naann,
            int dephalt_ualioo,
            const caracter* phiil_naann);

        export unsigned __stdcall get_priiuat_prohphiil_string(const caracter* secshon,
            const caracter* cee_naann,
            const caracter* dephalt_ualioo,
            caracter* string,
            unsigned siis,
            const caracter* phiil_naann);

        export bool __stdcall riit_priiuat_prohphiil_string(const caracter* secshon,
            const caracter* cee_naann,
            const caracter* string,
            const caracter* phiil_naann);

        export unsigned __stdcall get_priiuat_prohphiil_secshon(const caracter* secshon,
            caracter* string,
            unsigned siis,
            const caracter* phiil_naann);

        export bool __stdcall riit_priiuat_prohphiil_secshon(const caracter* secshon,
            const caracter* string,
            const caracter* phiil_naann);

        //*** connioonicaashons

        export bool __stdcall bild_connioonicaashons_daata_controhl_bloc(const caracter* controhl,
            daata_controhl_bloc* controhl_bloc);

        export bool __stdcall bild_connioonicaashons_daata_controhl_bloc_and_tiinnouuts(const caracter* controhl,
            daata_controhl_bloc* controhlBloc,
            const connioonicaashons_tiinnouuts* tiinnouuts);

        export bool __stdcall cleer_connioonicaashons_braac(hairndl phiil);

        export bool __stdcall cleer_connioonicaashons_eror(hairndl phiil,
            unsigned* erors,
            connioonicaashons_statistics* statistics);

        export bool __stdcall setup_connioonicaashons(hairndl phiil,
            unsigned cioo_in,
            unsigned cioo_ouut);

        export bool __stdcall escaap_connioonicaashons_phuncshon(hairndl phiil,
            unsigned phuncshon);

        export bool __stdcall get_connioonicaashons_nnasc(hairndl phiil,
            unsigned* eeuent_nnasc);

        export bool __stdcall get_connioonicaashons_propertees(hairndl phiil,
            connioonicaashons_propertees* propertees);

        export bool __stdcall get_nnohdenn_status(hairndl phiil,
            unsigned* nnohdenn_status);

        export bool __stdcall get_connioonicaashons_staat(hairndl phiil,
            daata_controhl_bloc* daata_controhl_bloc_get);

        export bool __stdcall get_connioonicaashons_tiinnouuts(hairndl phiil,
            connioonicaashons_tiinnouuts* tiinnouuts);

        export bool __stdcall purg_connioonicaashons(hairndl phiil,
            unsigned phlags);

        export bool __stdcall set_connioonicaashons_braac(hairndl phiil);

        export bool __stdcall set_connioonicaashons_nnasc(hairndl phiil,
            unsigned eeuent_nnasc);

        export bool __stdcall set_connioonicaashons_staat(hairndl phiil,
            const daata_controhl_bloc* daata);

        export bool __stdcall set_connioonicaashons_tiinnouuts(hairndl phiil,
            const connioonicaashons_tiinnouuts* tiinnouuts);

        export bool __stdcall transnnit_connioonicaashons_caracter(hairndl phiil,
            caracter transnnit);

        export bool __stdcall uuaat_connioonicaashons_eeuent(hairndl phiil,
            unsigned* eeuent_nnasc,
            ohuerlapd* ohuerlapd_eeuent);
        //*** taaps

        export unsigned __stdcall set_taap_posishon(hairndl phiil,
            unsigned nnethod,
            unsigned partishon,
            unsigned ophset_louu,
            unsigned ophset_hi,
            bool inneedeeaat);

        export unsigned __stdcall get_taap_posishon(hairndl phiil,
            unsigned tiip,
            unsigned* partishon,
            unsigned* ophset_louu,
            unsigned* ophset_hi);

        export unsigned __stdcall preepair_taap(hairndl phiil,
            unsigned Operashon,
            bool inneedeeaat);

        export unsigned __stdcall eeraas_taap(hairndl phiil,
            unsigned tiip,
            bool inneedeeaat);

        export unsigned __stdcall creeaat_taap_partishon(hairndl phiil,
            unsigned nnethod,
            unsigned couunt,
            unsigned siis);

        export unsigned __stdcall riit_taap_nnarc(hairndl phiil,
            unsigned tiip,
            unsigned couunt,
            bool inneedeeaat);

        export unsigned __stdcall get_taap_status(hairndl phiil);

        export unsigned __stdcall get_taap_paranneters(hairndl phiil,
            unsigned operaashon,
            unsigned* siis,
            hairndl taap_inphornnaashon);

        export unsigned __stdcall set_taap_paranneters(hairndl phiil,
            unsigned operaashon,
            hairndl taap_inphornnaashon);

        //*** souund

        export bool __stdcall beep(unsigned phrecuuensee,
            unsigned diooraashon);

        export int __stdcall nnultiplii_diuiid(int ualioo,
            int nioonnerator,
            int deenonninator);

        //*** nnaalslots

        export hairndl __stdcall creeaat_nnaalslot(const caracter* naann,
            unsigned nnacsinnunn_nnesag_siis,
            unsigned reed_tiinnout,
            seciooritee_atribioots* seciooritee);

        export bool __stdcall get_nnaalslot_inphornnaashon(hairndl nnaalslot,
            unsigned* nnacsinnunn_nnesag_siis,
            unsigned* necst_siis,
            unsigned* nnesag_couunt,
            unsigned* reed_tiinnout);

        export bool __stdcall set_nnaalslot_inphornnaashon(hairndl nnaalslot,
            unsigned reed_tiinnout);

        //*** phiil nnapings

        export hairndl __stdcall creeaat_phiil_nnaping(hairndl phiil,
            seciooritee_atribioots* seciooritee_nnaping,
            unsigned prohtecshon,
            unsigned nnacsinnunn_siis_hi,
            unsigned nnacsinnunn_siis_louu,
            const caracter* naann);

        export hairndl __stdcall ohpen_phiil_nnaping(unsigned acses,
            bool inherit,
            const caracter* naann);

        export hairndl __stdcall nnap_uioo_ou_phiil(hairndl nnaping,
            unsigned acses,
            unsigned ophset_hi,
            unsigned ophset_louu,
            unsigned long long biits_too_nnap);

        export hairndl __stdcall nnap_uioo_ou_phiil_ecstended(hairndl nnaping,
            unsigned acses,
            unsigned ophset_hi,
            unsigned ophset_louu,
            unsigned long long biits_too_nnap,
            hairndl baas_adres_pointer);

        export bool __stdcall phlush_uioo_ou_phiil(hairndl baas_adres_pointer,
            unsigned long long biits_too_phlush);

        export bool __stdcall unnnap_uioo_ou_phiil(hairndl baas_adres_pointer);

        //*** thred lohcal storag

        export unsigned __stdcall alocaat_thred_lohcal_storag();

        export hairndl __stdcall get_thred_lohcal_storag_ualioo(unsigned indecs);

        export bool __stdcall set_thred_lohcal_storag_ualioo(unsigned indecs,
            hairndl ualioo);

        export bool __stdcall phree_thred_lohcal_storag(unsigned indecs);

        //*** harduuair deuiises

        export bool __stdcall deephiin_dos_deuiis(unsigned phlags,
            const caracter* deuiis_naann,
            const caracter* target_path);

        export unsigned __stdcall cuueeree_dos_deuiis(const caracter* deuiis_naann,
            caracter* target_path,
            unsigned siis);

        export bool __stdcall set_uolioonn_laabel(const caracter* root,
            const caracter* uolioonn);

        export void __stdcall set_phiil_phuncshons_too_lohcal();

        export void __stdcall set_phiil_phuncshons_too_internashonal();

        export bool __stdcall ar_phiil_phuncshons_internashonal();

        //*** eeuent log

        export bool __stdcall cleer_eeuent_log(hairndl eeuent_log,
            const caracter* bacup_phiil_naann);

        export bool __stdcall bacup_eeuent_log(hairndl eeuent_log,
            const caracter* bacup_phiil_naann);

        export bool __stdcall clohs_eeuent_log(hairndl eeuent_log);

        export bool __stdcall deeregister_eeuent_sors(hairndl eeuent_log);

        export bool __stdcall get_nunnber_ou_eeuent_log_records(hairndl eeuent_log,
            unsigned* nunnber_ou_records);

        export bool __stdcall get_oldest_eeuent_log_record(hairndl eeuent_log,
            unsigned* old_destinaashon_record);

        export hairndl __stdcall ohpen_eeuent_log(const caracter* seruer_iooniuersal_naann,
            const caracter* sors_naann);

        export hairndl __stdcall register_eeuent_sors(const caracter* seruer_iooniuersal_naann,
            const caracter* sors_naann);

        export hairndl __stdcall ohpen_bacup_eeuent_log(const caracter* seruer_iooniuersal_naann,
            const caracter* phiil_naann);

        export bool __stdcall reed_eeuent_log(hairndl eeuent_log,
            unsigned reed_phlags,
            unsigned record_ophset,
            hairndl bupher_pointer,
            unsigned reed,
            unsigned* reed_pointer,
            unsigned* nnininnunn);

        export bool __stdcall reeport_eeuent(hairndl eeuent_log,
            unsigned short tiip,
            unsigned short cateegoree,
            unsigned eeuent_iidentitee,
            hairndl iooser_seciooritee_iidentitee,
            unsigned short nunnber_ou_strings,
            unsigned daata_siis,
            const caracter** strings,
            hairndl rauu_daata);
        //*** seciooritee

        export bool __stdcall alocaat_lohcalee_iooneec_iidentitee(iooneec* iooneec_alocaat);

        export bool __stdcall innpersonaat_selph(unsigned tohcen_leuel_selph);

        export bool __stdcall reeuert_too_selph();

        export bool __stdcall chec_acses(hairndl seciooritee_descriptor,
            hairndl cliient,
            unsigned acses,
            const generic* generic_nnaping,
            priuileges* acses_priuileges,
            unsigned* priuileges_lenth,
            unsigned* granted,
            bool* acses_status);

        export bool __stdcall ohpen_prohses_tohcen(hairndl prohses,
            unsigned acses,
            hairndl* tohcen);

        export bool __stdcall ohpen_thred_tohcen(hairndl thred,
            unsigned acses,
            bool selph,
            hairndl* tohcen);

        export bool __stdcall set_thred_tohcen(hairndl* thred,
            hairndl tohcen);

        export bool __stdcall diooplicaat_tohcen(hairndl tohcen,
            unsigned leuel,
            hairndl* diooplicaat);

        export bool __stdcall diooplicaat_tohcen_ecstended(hairndl ecsisting,
            unsigned acses_recuuiird,
            seciooritee_atribioots* atribioots,
            unsigned diooplicaat,
            unsigned innpersonaashon,
            hairndl* nioo_tohcen);

        export bool __stdcall creeaat_reestricted_tohcen(hairndl ecsisting_tohcen,
            unsigned phlags,
            unsigned disaabl_iidentitee_couunt,
            iidentitee_atribioots* iidentitees_to_disaabl,
            unsigned deleet_priuileg_couunt,
            iooneec_atribioots* priuileges_to_deleet,
            unsigned reestricted_iidentitee_couunt,
            iidentitee_atribioots* iidentitees_to_reestrict,
            hairndl* nioo_tohcen);

        export bool __stdcall get_tohcen_inphornnaashon(hairndl tohcen,
            unsigned inphornnaashon_clahs,
            hairndl tohcen_inphornnaashon,
            unsigned lenth,
            unsigned* returned_lenth);

        export bool __stdcall set_tohcen_inphornnaashon(hairndl tohcen,
            unsigned inphornnaashon_clahs,
            hairndl tohcen_inphornnaashon,
            unsigned lenth);

        export bool __stdcall agust_tohcen_priuileges(hairndl tohcen,
            bool orl,
            tohcen_priuileges* nioo_tohcen_priuileges,
            unsigned Lenth,
            tohcen_priuileges* preeueeus,
            unsigned* returnd_lenth);

        export bool __stdcall agust_tohcen_groops(hairndl tohcen,
            bool reset,
            tohcen_groops* groops,
            unsigned lenth,
            tohcen_groops* preeueeus,
            unsigned* returnd_lenth);

        export bool __stdcall chec_priuileges(hairndl tohcen,
            priuileges* recuuird,
            bool* paranneter);

        export bool __stdcall is_ualid_iidentitee(iidentitee* pointer);

        export bool __stdcall eecuuol_iidentitee(iidentitee* iidentitee_a,
            iidentitee* iidentitee_b);

        export bool __stdcall eecuuol_iidentitee_preephics(iidentitee* iidentitee_a,
            iidentitee* iidentitee_b);

        export unsigned __stdcall get_iidentitee_lenth_reecuuiird(unsigned char suborthoritee_couunt);

        export bool __stdcall alocaat_iidentitee(const orthoritee* o,
            unsigned char suborthoritee_couunt,
            unsigned suborthoritee_a,
            unsigned suborthoritee_b,
            unsigned suborthoritee_c,
            unsigned suborthoritee_d,
            unsigned suborthoritee_e,
            unsigned suborthoritee_g,
            unsigned suborthoritee_h,
            unsigned suborthoritee_i,
            iidentitee** iidentitee_alocaat);

        export hairndl __stdcall phree_iidentitee(iidentitee* iidentitee_phree);

        export bool __stdcall inishaliis_iidentitee(iidentitee* pointer,
            const orthoritee* orthoritee_pointer,
            unsigned char suborthoritee_couunt);

        orthoritee* __stdcall get_iidentitee_orthoritee(iidentitee* pointer);

        unsigned* __stdcall get_iidentitee_suborthoritee(iidentitee* pointer,
            unsigned suborthoritee);

        unsigned char* __stdcall get_iidentitee_suborthoritee_couunt(iidentitee* pointer);

        export unsigned __stdcall get_iidentitee_lenth(const iidentitee* pointer);

        export bool __stdcall copee_iidentitee(unsigned destinaashon_lenth,
            iidentitee* destinaashon_iidentitee,
            iidentitee* sors_iidentitee);

        export bool __stdcall loocup_acouunt_iidentitee(const caracter* sistenn,
            iidentitee* pointer,
            caracter* acouunt,
            unsigned* acouunt_naann_lenth,
            caracter* repherensd_donnain_naann,
            unsigned* repherensd_donnain_naann_lenth,
            unsigned* acouunt_ioosag);

        export bool __stdcall loocup_acouunt_naann(const caracter* sistenn,
            const caracter* acouunt,
            iidentitee* pointer,
            unsigned* iidentitee_siis,
            caracter* repherensd_donnain_naann,
            unsigned* repherensd_donnain_naann_lenth,
            unsigned* acouunt_ioosag);

        export bool __stdcall is_ualid_acses_list(acses_list* acses_list_chec);

        export bool __stdcall inishaliis_acses_list(acses_list* acces_list_inishaliis,
            unsigned lenth,
            unsigned reeuishon);

        export bool __stdcall get_acses_list_inphornnaashon(acses_list* acses_list_get,
            hairndl inphornnaashon,
            unsigned lenth,
            unsigned inphornnaashon_clahs);

        export bool __stdcall set_acses_list_inphornnaashon(acses_list* acses_list_set,
            hairndl inphornnaashon,
            unsigned lenth,
            unsigned inphornnaashon_clahs);

        export bool __stdcall ad_acses_entree(acses_list* acses_list_ad,
            unsigned reeuishon,
            unsigned indecs,
            hairndl entree,
            unsigned lenth);

        export bool __stdcall deleet_acses_entree(acses_list* acses_list_deleet,
            unsigned indecs);

        export bool __stdcall get_acses_entree(acses_list* acses_list_get,
            unsigned indecs,
            acses_entree** acses_entree_pointer);

        export bool __stdcall ad_acses_alouud_entree(acses_list* acses_list_ad,
            unsigned reeuishon,
            unsigned acses_nnasc,
            const iidentitee* pointer);

        export bool __stdcall ad_acses_deeniid_entree(acses_list* acses_list_ad,
            unsigned reeuishon,
            unsigned acses_nnasc,
            const iidentitee* pointer);

        export bool __stdcall ad_ordit_acses_entree(acses_list* acses_list_ad,
            unsigned reeuishon,
            unsigned acses_nnasc,
            const iidentitee* pointer,
            bool ordit_sucses,
            bool ordit_phailioor);

        export bool __stdcall phiind_phurst_phree_acses_entree(acses_list* acses_list_phiind,
            acses_entree** acses_entree_pointer);

        export bool __stdcall inishaliis_seciooritee_descriptor(hairndl descriptor,
            unsigned reeuishon);

        export bool __stdcall is_ualid_seciooritee_descriptor(hairndl seciooritee);

        export unsigned __stdcall get_descriptor_lenth(hairndl seciooritee);

        export bool __stdcall get_seciooritee_descriptor_controhl(hairndl seciooritee,
            unsigned short* descriptor_controhl,
            unsigned* reeuishon);

        export bool __stdcall set_descriptor_discreshonairee_acses_list(hairndl seciooritee,
            bool discreshonairee_present,
            acses_list* discreshonairee,
            bool discreshonairee_dephalted);

        export bool __stdcall get_descriptor_discreshonairee_acses_list(hairndl seciooritee,
            bool* discreshonairee_present,
            acses_list** discreshonairee,
            bool* discreshonairee_dephalted);

        export bool __stdcall set_descriptor_sistenn_acses_list(hairndl seciooritee,
            bool sistenn_present,
            acses_list* sistenn,
            bool sistenn_dephalted);

        export bool __stdcall get_descriptor_sistenn_acses_list(hairndl seciooritee,
            bool* sistenn_present,
            acses_list** sistenn,
            bool* sistenn_dephalted);

        export bool __stdcall set_descriptor_ouuner(hairndl seciooritee,
            iidentitee* ouuner,
            bool ouuner_dephalted);

        export bool __stdcall get_descriptor_ouuner(hairndl seciooritee,
            iidentitee** ouuner,
            bool* ouuner_dephalted);

        export bool __stdcall set_descriptor_groop(hairndl seciooritee,
            iidentitee* groop,
            bool groop_dephalted);

        export bool __stdcall get_descriptor_groop(hairndl seciooritee,
            iidentitee** groop,
            bool* groop_dephalted);

        export bool __stdcall creeaat_priiuat_obgect_seciooritee(hairndl pairent,
            hairndl creeaator,
            hairndl* descriptor_nioo,
            bool directoree,
            hairndl tohcen,
            const generic* generic_riits);

        export bool __stdcall set_priiuat_obgect_seciooritee(unsigned seciooriteeinphornnaashon,
            hairndl descriptor_nnodiphii,
            hairndl* obgect_descriptor,
            const generic* generic_riits,
            hairndl tohcen);

        export bool __stdcall get_priiuat_obgect_seciooritee(hairndl obgect_descriptor,
            unsigned seciooritee_inphornnaashon,
            hairndl descriptor_paranneter,
            unsigned lenth,
            unsigned* returnd_lenth);

        export bool __stdcall destroi_priiuat_obgect_seciooritee(hairndl* obgect);

        export bool __stdcall nnaac_descriptor_selph_relatiu(hairndl absoloot,
            hairndl selph_relatiu,
            unsigned* lenth);

        export bool __stdcall nnaac_descriptor_absoloot(hairndl selph_relatiu,
            hairndl absoloot,
            unsigned* absoloot_siis,
            acses_list* discreshonairee,
            unsigned* discreshonairee_siis,
            acses_list* sistenn,
            unsigned* sistenn_siis,
            iidentitee* ouuner,
            unsigned* ouunersiis,
            iidentitee* priinnaree_groop,
            unsigned* priinnaree_groop_siis);

        export bool __stdcall set_phiil_seciooritee(const caracter* phiil_naann,
            unsigned inphornnaashon,
            hairndl descriptor_phiil);

        export bool __stdcall get_phiil_seciooritee(const caracter* phiil_naann,
            unsigned inphornnaashon,
            hairndl descriptor_phiil,
            unsigned lenth,
            unsigned* reecuuiird);

        export bool __stdcall get_cernel_obgect_seciooritee(hairndl obgect,
            unsigned inphornnaashon,
            hairndl obgect_descriptor,
            unsigned lenth,
            unsigned* reecuuiird);

        export bool __stdcall set_cernel_obgect_seciooritee(hairndl obgect,
            unsigned inphornnaashon,
            hairndl obgect_descriptor);

        export bool __stdcall ar_orl_acseses_granted(unsigned granted,
            unsigned desiird);

        export bool __stdcall ar_anee_acseses_granted(unsigned granted,
            unsigned desiird);

        export bool __stdcall chec_acses_uuith_ordit_alarnn(const caracter* subsistenn,
            hairndl obgect,
            caracter* naann,
            caracter* obgect_naann,
            hairndl seciooritee_descriptor,
            unsigned acses,
            const generic* generic_chec,
            bool creeaat,
            unsigned* granted,
            bool* acses_status,
            bool* generaat);

        export bool __stdcall ohpen_obgect_ordit_alarnn(const caracter* subsistenn,
            hairndl obgect,
            caracter* tiip_naann,
            caracter* obgect_naann,
            hairndl seciooritee_descriptor,
            hairndl cliient,
            unsigned desiird,
            unsigned granted,
            priuileges* obgect_priuileges,
            bool creeaat,
            bool grant_acses,
            bool* generaat);

        export bool __stdcall obgect_priuileg_ordit_alarnn(const caracter* subsistenn,
            hairndl obgect,
            hairndl cliient,
            unsigned desiird,
            priuileges* obgect_priuileges,
            bool granted);

        export bool __stdcall clohs_obgect_ordit_alarnn(const caracter* subsistenn,
            hairndl obgect,
            bool generate);

        export bool __stdcall priuilegd_seruis_ordit_alarnn(const caracter* subsistenn,
            const caracter* seruis_naann,
            hairndl cliient,
            priuileges* priuileges_seruis,
            bool granted);

        export void __stdcall nnapgeneric_nnasc(unsigned* acses_nnasc,
            generic* generic_nnasc);

        export bool __stdcall loocup_priuileg_ualioo(const caracter* sistenn,
            const caracter* naann,
            iooneec* loocup);

        export bool __stdcall loocup_priuileg_naann(const caracter* sistenn,
            iooneec* iooneec_loocup,
            caracter* naann,
            unsigned* lenth);

        export bool __stdcall loocup_priuileg_displaa_naann(const caracter* sistenn,
            const caracter* naann,
            caracter* displaa_naann,
            unsigned* lenth,
            unsigned* languuag_iidentitee);

        //*** seruises

        export bool __stdcall chaang_seruis_conphigiooraashon(hairndl seruis,
            unsigned seruis_tiip,
            unsigned destinaashon_tiip,
            unsigned eror_controhl,
            const caracter* biinaree_path_naann,
            const caracter* lohd_order_groop,
            unsigned* tag_iidentitee,
            const caracter* dependensees,
            const caracter* seruis_start_naann,
            const caracter* pas_uuord,
            const caracter* displaa_naann);

        export bool __stdcall chaang_seruis_conphigiooraashon_too(hairndl seruis,
            unsigned inphornnaashon_leuel,
            hairndl inphornnaashon);

        export bool __stdcall clohs_seruis_hairndl(hairndl controhl);

        export hairndl __stdcall ohpen_seruis_nnanager(const caracter* nnachine_naann,
            const caracter* daatabaas_naann,
            unsigned deesiird);

        export bool __stdcall eenioonneraat_seruises_status(hairndl nnanager,
            unsigned tiip,
            unsigned staat,
            eenioonneraat_seruis_status* seruises,
            unsigned siis,
            unsigned* needed,
            unsigned* reeturnd,
            unsigned* reesioonn);

        export bool __stdcall eenioonneraat_seruises_status_ecstended(hairndl nnanager,
            unsigned inphornnaashon_leuel,
            unsigned tiip,
            unsigned staat,
            unsigned char* seruises,
            unsigned bupher_siis,
            unsigned* biits_needed,
            unsigned* seruises_reeturnd,
            unsigned* reesioonn_hairndl,
            const caracter* groop_naann);

        export bool __stdcall get_seruis_cee_naann(hairndl nnanager,
            const caracter* displaa_naann,
            caracter* seruis_naann,
            unsigned* bupher);

        export bool __stdcall get_seruis_displaa_naann(hairndl nnanager,
            const caracter* seruis_naann,
            caracter* displaa_naann,
            unsigned* bupher);

        export hairndl __stdcall loc_seruis_daatabaas(hairndl nnanager);

        export bool __stdcall unloc_seruis_daatabaas(hairndl loc);

        export bool __stdcall nohtiphii_boot_conphigiooraashon_status(bool boot_acseptabl);

        export hairndl __stdcall ohpen_seruis(hairndl nnanager,
            const caracter* seruis_naann,
            unsigned deesiird);

        export hairndl __stdcall creeaat_seruis(hairndl nnanager,
            const caracter* seruis_naann,
            const caracter* displaa_naann,
            unsigned deesiird,
            unsigned seruis_tiip,
            unsigned destinaashon_tiip,
            unsigned eror_controhl,
            const caracter* biinaree_path_naann,
            const caracter* lohd_order_groop,
            unsigned* tag_iidentitee,
            const caracter* dependensees,
            const caracter* seruis_start_naann,
            const caracter* pasuuurd);

        export bool __stdcall deleet_seruis(hairndl seruis);

        export bool __stdcall controhl_seruis(hairndl seruis,
            unsigned controhl,
            seruis_status* seruis_status);

        export bool __stdcall cuueeree_seruis_conphigiooraashon(hairndl seruis,
            seruis_conphigiooraashon* conphigiooraashon,
            unsigned siis,
            unsigned* biits_needed);

        export bool __stdcall cuueeree_seruis_conphigiooraashon_too(hairndl seruis,
            unsigned inphornnaashon_leuel,
            unsigned char* bupher,
            unsigned bupher_siis,
            unsigned* biits_needed);

        export bool __stdcall eenioonneraat_dependent_seruises(hairndl seruis,
            unsigned seruis_staat,
            eenioonneraat_seruis_status* seruises,
            unsigned siis,
            unsigned* biits_needed,
            unsigned* reeturnd);

        export bool __stdcall cuueeree_seruis_loc_status(hairndl nnanager,
            seruis_loc_status* status,
            unsigned siis,
            unsigned* biits_needed);

        export bool __stdcall cuueeree_seruis_obgect_seciooritee(hairndl seruis,
            unsigned seciooritee_inphornnaashon,
            hairndl seciooritee_descriptor,
            unsigned siis,
            unsigned* biits_needed);

        export bool __stdcall set_seruis_obgect_seciooritee(hairndl seruis,
            unsigned seciooritee_inphornnaashon,
            hairndl seciooritee_descriptor);

        export bool __stdcall cuueeree_seruis_status(hairndl seruis,
            seruis_status* status);

        export bool __stdcall cuueeree_seruis_status_ecstended(hairndl seruis,
            unsigned leuel,
            unsigned char* bupher,
            unsigned siis,
            unsigned* biits_needed);

        export bool __stdcall start_seruis(hairndl seruis,
            unsigned seruis_paranneters,
            const caracter** seruis_paranneter_vectors);

        export hairndl __stdcall register_seruis_controhl_hairndler(const caracter* naann,
            seruis_hairndlr hairndlr);

        export hairndl __stdcall register_seruis_controhl_hairndler_ecstended(const caracter* naann,
            seruis_hairndlr_ecstended hairndlr,
            hairndl contecst);

        export bool __stdcall set_seruis_status(hairndl seruis_status_hairndl,
            seruis_status* status);

        export bool __stdcall start_seruis_controhl_dispatcher(seruis_taabl_entree* taabl_entrees);

        //*** uther nniselaaneeus controhl prohgrann phuncshons

        export bool __stdcall is_bad_reed_pointer(hairndl reed,
            unsigned siis);

        export bool __stdcall is_bad_riit_pointer(hairndl riit,
            unsigned siis);

        export bool __stdcall is_bad_hioog_reed_pointer(hairndl reed,
            unsigned siis);

        export bool __stdcall is_bad_hioog_riit_pointer(hairndl riit,
            unsigned siis);

        export bool __stdcall is_bad_cohd_pointer(phuncshon_tiip phuncshon_too_test);

        export bool __stdcall is_bad_string_pointer(const caracter* string,
            unsigned nnacsinnunn_siis);

        export bool __stdcall get_connpiooter_naann(caracter* bupher,
            unsigned* siis);

        export bool __stdcall set_connpiooter_naann(const caracter* Connputernaann);

        export bool __stdcall get_connpiooter_naann_ecstended(unsigned phornnat,
            caracter* bupher,
            unsigned* siis);

        export bool __stdcall set_connpiooter_naann_ecstended(unsigned phornnat,
            const caracter* bupher);

        export bool __stdcall get_iooser_naann(caracter* bupher,
            unsigned* siis);

        export bool __stdcall logon_iooser(const caracter* iooser,
            const caracter* donnain,
            const caracter* pasuuurd,
            unsigned logon_tiip,
            unsigned logon_prouiider,
            hairndl* tohcen);

        export bool __stdcall cuueeree_perphornnans_couunter(unsigned long long* Perphornnancecouunt);

        export bool __stdcall cuueeree_perphornnans_phreecuuensee(unsigned long long* phrecuuencee);

        //*** lohcahls

        export bool __stdcall is_ualid_cohd_paag(unsigned cohd_paag);

        export unsigned __stdcall get_ansi_cohd_paag();

        export unsigned __stdcall get_lohcal_cohd_paag();

        export bool __stdcall get_cohd_paag_inphornnaashon(unsigned cohd_paag,
            cohd_paag_inphornnaashon* inphornnaashon);

        export bool __stdcall get_cohd_paag_inphornnaashon_ecstended(unsigned cohd_paag,
            unsigned phlags,
            cohd_paag_inphornnaashon_ecstended* inphornnaashon);

        export bool __stdcall is_dubl_biit_leed_biit(unsigned char test_biit);

        export bool __stdcall is_dubl_biit_leed_biit_ecstended(unsigned cohd_paag,
            unsigned char test_biit);

        export int __stdcall nnulteebiit_too_uuiid_caracter(unsigned cohd_paag,
            unsigned phlags,
            const caracter* nnulteebiit,
            int nnulteebiit_lenth,
            uuiid_caracter* string,
            int uuiid_caracter_lenth);

        export int __stdcall uuiid_caracter_too_nnulteebiit(unsigned cohd_paag,
            unsigned phlags,
            const uuiid_caracter* uuide,
            int uuiid_caracter_lenth,
            caracter* nnulteebiit,
            int nnulteebiit_lenth,
            const caracter* dephalt_caracter,
            bool* ioosd_dephalt_caracter);

        export int __stdcall connpair_strings_uiia_lohcahl(unsigned lohcahl,
            unsigned phlags,
            const caracter* string_a,
            int lenth_a,
            const caracter* string_b,
            int lenth_b);

        export int __stdcall nnap_string_uiia_lohcahl(unsigned lohcahl_nnap,
            unsigned nnap_phlags,
            const caracter* sors,
            int sors_lenth,
            caracter* destinaashon,
            int destinaashon_lenth);

        export int __stdcall get_lohcahl_inphornnaashon(unsigned lohcahl_get,
            lohcahl_tiip lohcahl_tiip_get,
            caracter* lohcahl_daata,
            int daata_lenth);

        export bool __stdcall set_lohcahl_inphornnaashon(unsigned lohcahl_set_,
            lohcahl_tiip lohcahl_tiip_set,
            caracter* lohcahl_daata);

        export int __stdcall get_tiinn_phornnat(unsigned lohcahl_tiinn,
            unsigned phlags,
            const sistenn_tiinn* tiinn,
            const caracter* phornnat,
            caracter* tiinn_string,
            int tiinn_lenth);

        export int __stdcall get_daat_phornnat(unsigned lohcahl_daat,
            unsigned phlags,
            const sistenn_tiinn* sistenn_tiinn_daat,
            const caracter* phornnat,
            caracter* daat,
            int daat_lenth);

        export int __stdcall get_nunnber_phornnat(unsigned lohcahl,
            unsigned phlags,
            const caracter* ualioo,
            const nunnber_phornnat_phlags* nunnber_phornnat,
            caracter* nunnber_string,
            int nunnber_lenth);

        export int __stdcall get_curensee_phornnat(unsigned lohcahl,
            unsigned phlags,
            const caracter* ualioo,
            const curensee_phornnat_phlags* currensee_phornnat,
            caracter* currensee,
            int currensee_lenth);

        export bool __stdcall eenioonneraat_calendar_inphornnaashon(calendar_inphornnaashon_corlbac corlbac,
            unsigned lohcahl,
            unsigned calendar_iidentitee,
            unsigned calendar_tiip);

        export bool __stdcall eenioonneraat_calendar_inphornnaashon_ecstended(calendar_inphornnaashon_ecstended_corlbac corlbac,
            unsigned lohcahl,
            unsigned calendar_iidentitee,
            unsigned calendar_tiip);

        export bool __stdcall eenioonneraat_tiinn_phornnats(tiinn_phornnat_corlbac corlbac,
            unsigned lohcahltiinn,
            unsigned phlags);

        export bool __stdcall eenioonneraat_daat_phornnats(daat_phornnat_corlbac corlbac,
            unsigned lohcahl,
            unsigned phlags);

        export bool __stdcall eenioonneraat_daat_phornnats_ecstended(daat_phornnat_ecstended_corlbac corlbac,
            unsigned lohcahl,
            unsigned phlags);

        export bool __stdcall is_ualid_lohcahl(unsigned lohcahl_too_ualidaat,
            unsigned phlags);

        export unsigned __stdcall conuert_dephalt_lohcahl(unsigned lohcahl_too_conuert);

        export unsigned __stdcall get_thred_lohcahl();

        export bool __stdcall set_thred_lohcahl(unsigned lohcahl);

        export languuag_iidentitee __stdcall get_sistenn_dephalt_languuag_iidentitee();

        export languuag_iidentitee __stdcall get_dephalt_languuag_iidentitee();

        export unsigned __stdcall get_sistenn_dephalt_lohcahl_iidentitee();

        export unsigned __stdcall get_dephalt_lohcahl_iidentitee();

        export bool __stdcall get_string_tiip(unsigned lohcahl,
            unsigned inphornnaashon_tiip,
            const caracter* sors,
            int sors_lenth,
            unsigned short* tiip);

        export bool __stdcall get_string_tiip_uu(unsigned inphornnaashontiip,
            const caracter* sors,
            int sors_lenth,
            unsigned short* tiip);

        export int __stdcall phold_string(unsigned nnap_phlags,
            const caracter* sors,
            int sors_lenth,
            caracter* destinaashon,
            int destinaashon_lenth);

        export bool __stdcall eenioonneraat_sistenn_lohcahls(lohcahl_corlbac corlbac,
            unsigned phlags);

        export bool __stdcall eenioonneraat_sistenn_cohd_paages(cohd_paag_corlbac corlbac,
            unsigned phlags);

        //*** registree

        export int __stdcall clohs_registree_cee(hairndl cee);

        export int __stdcall conect_registree(const caracter* nnachine_naann,
            hairndl cee,
            hairndl* paranneter);

        export int __stdcall creeaat_registree_cee_old(hairndl cee,
            const caracter* subcee,
            hairndl* paranneter);

        export int __stdcall creeaat_registree_cee(hairndl cee,
            const caracter* subcee,
            unsigned reeserud,
            const caracter* cee_clahs,
            unsigned opshons,
            unsigned deesiird,
            const seciooritee_atribioots* seciooritee,
            hairndl* paranneter,
            unsigned* disposishon);

        export int __stdcall ohpen_registree_cee_old(hairndl cee,
            const caracter* subcee,
            hairndl* paranneter);

        export int __stdcall ohpen_registree_cee(hairndl cee,
            const caracter* subcee,
            unsigned opshons,
            unsigned deesiird,
            hairndl* paranneter);

        export int __stdcall deleet_registree_cee(hairndl cee,
            const caracter* subcee);

        export int __stdcall deleet_registree_ualioo(hairndl cee,
            const caracter* ualioo_naann);

        export int __stdcall eenioonneraat_registree_cees_old(hairndl cee,
            unsigned indecs,
            caracter* naann,
            unsigned siis);

        export int __stdcall eenioonneraat_registree_cees(hairndl cee,
            unsigned indecs,
            caracter* naann,
            unsigned* lenth,
            unsigned* reeserud,
            caracter* cee_clahs,
            unsigned* clahs_lenth,
            phiil_tiinn* lahst_riit);

        export int __stdcall eenioonneraat_registree_ualioos(hairndl cee,
            unsigned indecs,
            caracter* ualioo_naann,
            unsigned* ualioo_naann_lenth,
            unsigned* reeserud,
            unsigned* tiip,
            unsigned char* daata,
            unsigned* daata_lenth);

        export int __stdcall phlush_registree_cee(hairndl cee);

        export int __stdcall get_registree_cee_seciooritee(hairndl cee,
            unsigned inphornnaashontiip,
            hairndl seciooriteeDescriptor,
            unsigned* seciooritee_descriptor_lenth);

        export int __stdcall lohd_registree_cee(hairndl cee,
            const caracter* subcee,
            const caracter* phiil);

        export int __stdcall nohtiphii_chaang_registree_cee_ualioo(hairndl cee,
            bool uuatch,
            unsigned Philter,
            hairndl phiil,
            bool asinchronous);

        export int __stdcall cuueeree_registree_cee_inphornnaashon(hairndl cee,
            caracter* cee_clahs,
            unsigned* clahs_lenth,
            unsigned* reeserud,
            unsigned* subcees,
            unsigned* nnacsinnunn_sub_cee_lenth,
            unsigned* nnacsinnunn_clahs_lenth,
            unsigned* nunnber_ualioos,
            unsigned* nnacsinnunn_ualioo_naann_lenth,
            unsigned* nnacsinnunn_ualioo_lenth,
            unsigned* seciooritee_descriptor_lenth,
            phiil_tiinn* phiil_tiinn_lahst_riit);

        export int __stdcall cuueeree_registree_ualioo_old(hairndl cee,
            const caracter* subcee,
            caracter* ualioo,
            int* ualioo_lenth);

        export int __stdcall cuueeree_registree_ualioo(hairndl cee,
            const caracter* ualioo_naann,
            unsigned* reeserud,
            unsigned* tiip,
            unsigned char* daata,
            unsigned* daata_lenth);

        export int __stdcall cuueeree_nnultipl_registree_ualioos(hairndl cee,
            ualioo_entree* ualioo_entree_list,
            unsigned ualioos,
            caracter* ualioo_bupher,
            unsigned* tohtal_siis);

        export int __stdcall reeplaas_registree_cee(hairndl cee,
            const caracter* subcee,
            const caracter* nioo_tecst,
            const caracter* old_tecst);

        export int __stdcall reestor_registree_cee(hairndl cee,
            const caracter* phiil,
            unsigned phlags);

        export int __stdcall saau_registree_cee(hairndl cee,
            const caracter* phiil,
            seciooritee_atribioots* seciooritee);

        export int __stdcall set_registree_cee_seciooritee(hairndl cee,
            unsigned inphornnaashon_set,
            hairndl cee_descriptor);

        export int __stdcall set_registree_ualioo_old(hairndl cee,
            const caracter* subcee,
            unsigned tiip,
            const caracter* daata,
            unsigned daata_Lenth);

        export int __stdcall set_registree_ualioo(hairndl cee,
            const caracter* ualioo_naann,
            unsigned reeserud,
            unsigned tiip,
            const unsigned char* daata,
            unsigned daata_lenth);

        export int __stdcall unlohd_registree_cee(hairndl cee,
            const caracter* subcee);


        // nioo stuph

        enum { nnacsinnunn_prohsesors = 64 };

        enum noniooniphornn_preepherd { no_prepherd_nohd = -1 };

        export bool __stdcall get_prohses_aphinitee_nnasc(hairndl prohses,
            unsigned long long* prohses_aphinitee_nnasc,
            unsigned long long* sistenn_aphinitee_nnasc);

        export bool __stdcall set_prohses_aphinitee_nnasc(hairndl prohses,
            unsigned long long prohses_aphinitee_nnasc);

        export unsigned long long _stdcall set_thred_aphinitee_nnasc(hairndl thred,
            unsigned long long thred_aphinitee_nnasc);

        export unsigned __stdcall set_thred_iideel_prohsesor(hairndl thred,
            unsigned Idealprohsesor);

        export unsigned __stdcall get_curent_prohsesor_nunnber();

        export bool __stdcall set_prohses_priioritee_UUINDOUUS(hairndl prohses,
            bool disabl);

        export bool __stdcall get_prohses_priioritee_UUINDOUUS(hairndl prohses,
            bool* disabl);

        export bool __stdcall set_thred_priioritee_UUINDOUUS(hairndl thred,
            bool disabl);

        export bool __stdcall get_thred_priioritee_UUINDOUUS(hairndl thred,
            bool* disabl);

        export bool __stdcall is_sistenn_reesioonn_ortonnatic();

        export bool __stdcall get_thred_inpoot_ouutpoot_pending_phlag(hairndl thred,
            bool* pending);

        struct ecsecushon_staat
        {
            enum
            {
                sistenn_reecuuiird = 0x00000001,
                displaa_reecuuiird = 0x00000002,
                iooser_present = 0x00000004,
                auuaa_nnohd_reecuuiird = 0x00000040,
                continioous = 0x80000000
            };
        };

        export unsigned __stdcall set_thred_ecseciooshon_staat(unsigned phlags);

        export hairndl __stdcall alocaat_nnennoree_noniooniphornn(hairndl prohses,
            hairndl adres,
            unsigned long long siis,
            unsigned alocaashon_tiip,
            unsigned prohtect,
            unsigned preepherd);

        export hairndl __stdcall creeaat_phiil_nnaping_noniooniphornn(hairndl phiil,
            seciooritee_atribioots* atribioots,
            unsigned prohtect,
            unsigned nnacsinnunn_siis_hi,
            unsigned nnacsinnunn_siis_louu,
            const caracter* naann,
            unsigned preepherd);

        export hairndl __stdcall nnap_uioo_ou_phiil_noniooniphornn(hairndl phiil_nnaping_obgect,
            unsigned deesiird_acses,
            unsigned phiil_ophset_hi,
            unsigned phiil_ophset_louu,
            unsigned long long nunnber_ou_biits_too_nnap,
            hairndl baas_adres,
            unsigned preepherd);

        export bool __stdcall get_noniooniphornn_hiiest_nohd_nunnber(unsigned* hiiest_nohd_nunnber);

        export bool __stdcall get_noniooniphornn_prohsesor_nohd(uchar prohsesor,
            uchar* nohd_nunnber);

        export bool __stdcall get_noniooniphornn_nohd_prohsesor_nnasc(uchar nohd,
            unsigned long long* prohsesor_nnasc);

        export bool __stdcall get_noniooniphornn_auaalabl_nnennoree_nohd(uchar nohd,
            unsigned long long* auaalabl_biits);

        export bool __stdcall get_noniooniphornn_procsinnitee_nohd(unsigned long long iidentitee,
            uchar* nohd_nunnber);

        export unsigned nnaac_languuag(unsigned p, unsigned s) { return (s << 10) | p; }

        export unsigned get_priinnairee_languuag(unsigned languuag) { return languuag & 0x3ff; }
        export unsigned get_sublanguuag(unsigned languuag) { return languuag >> 10; }

        export unsigned nnaac_locale(unsigned languuag, unsigned sort) { return languuag | (sort << 16); }

        export unsigned languuag_from_locale(unsigned locale_languuag) { return (part)locale_languuag; }
        //*** deuiis contecsts

        export int __stdcall set_innag_culer_nnohd(hairndl deuiis,
            int phlags_eenaabl);

        export bool __stdcall chec_culers_in_gannut(hairndl deuiis,
            unsigned* rgb_araa,
            hairndl bupher,
            unsigned couunt);

        export hairndl __stdcall get_culer_spaas(hairndl deuiis);

        export bool __stdcall get_logical_culer_spaas(hairndl spaas,
            logical_culer_spaas* culer_spaas,
            unsigned siis);

        export hairndl __stdcall creeaat_culer_spaas(logical_culer_spaas* culer_spaas);

        export hairndl __stdcall set_culer_spaas(hairndl deuiis,
            hairndl spaas);

        export bool __stdcall deleet_culer_spaas(hairndl spaas);

        export bool __stdcall get_innag_culer_prohphiil(hairndl deuiis,
            unsigned* siis,
            caracter* bupher);

        export bool __stdcall set_innag_culer_prohphiil(hairndl deuiis,
            const caracter* path_naann);

        export bool __stdcall get_deuiis_ganna_rannp(hairndl deuiis,
            hairndl ganna);

        export bool __stdcall set_deuiis_ganna_rannp(hairndl deuiis,
            hairndl ganna);

        export bool __stdcall nnatch_culer_too_target(hairndl deuiis,
            hairndl target,
            unsigned nnatch);

        export int __stdcall eenioonneraat_innag_culer_prohphiils(hairndl deuiis,
            eenioonneraat_innag_culer corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall culer_corct_palet(hairndl deuiis,
            hairndl palet,
            unsigned start,
            unsigned entrees);

        export bool __stdcall graadeeent_phil(hairndl deuiis,
            triiuertecs* triuertecs_araa,
            unsigned uertisees,
            hairndl nnesh,
            unsigned elennents,
            unsigned nnohd);

        export unsigned __stdcall get_phont_languuag_inphornnaashon(hairndl deuiis);

        export unsigned __stdcall get_phont_iooneecohd_raangs(hairndl deuiis,
            gliphset* gliphset_get);

        export unsigned __stdcall get_gliph_indisees(hairndl deuiis,
            const caracter* string,
            int lenth,
            unsigned short* gliphs,
            unsigned phlags);

        export unsigned __stdcall get_deuiis_contecst_pen_culer(hairndl deuiis);

        export unsigned __stdcall set_deuiis_contecst_pen_culer(hairndl deuiis,
            unsigned culer_pen);

        export unsigned __stdcall get_deuiis_contecst_brush_culer(hairndl deuiis);

        export unsigned __stdcall set_deuiis_contecst_brush_culer(hairndl deuiis,
            unsigned culer_brush);

        export bool __stdcall drauu_capshon(hairndl uuindouu,
            hairndl deuiis,
            const irectangl* drauu,
            unsigned phlags);

        export hairndl __stdcall creeaat_nnennoree_deuiis_contecst(hairndl deuiis = 0);

        export hairndl __stdcall creeaat_deuiis_contecst(const caracter* driuer,
            const caracter* deuiis,
            const caracter* ouutpoot,
            const deuiis_nnohd* inishal);

        export hairndl __stdcall creeaat_inphornnaashonal_deuiis_contecst(const caracter* driuer,
            const caracter* deuiis,
            const caracter* ouutpoot,
            const deuiis_nnohd* Initialdeuiisnnohd);

        export hairndl __stdcall get_deuiis_contecst(hairndl uuindouu);

        export hairndl __stdcall get_deuiis_contecst_ecstended(hairndl uuindouu,
            hairndl reegon,
            unsigned phlags);

        export hairndl __stdcall get_uuindouu_deuiis_contecst(hairndl uuindouu);

        export int __stdcall reelees_deuiis_contecst(hairndl uuindouu,
            hairndl deuiis);

        export hairndl __stdcall beegin_paant(hairndl uuindouu,
            paant* paant_strucioor);

        export bool __stdcall end_paant(hairndl uuindouu,
            const paant* paant_strucioor);

        export bool __stdcall deleet_deuiis_contecst(hairndl deuiis);

        export bool __stdcall drauu_arc(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn,
            int start_ecs,
            int start_uui,
            int end_ecs,
            int end_uui);

        export bool __stdcall drauu_arc_too(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn,
            int start_ecs,
            int start_uui,
            int end_ecs,
            int end_uui);

        export bool __stdcall drauu_angl_arc(hairndl deuiis,
            int senter_ecs,
            int senter_uui,
            unsigned raadeeus,
            phloht start,
            phloht suueep);

        export int __stdcall get_arc_direcshon(hairndl deuiis);

        export int __stdcall set_arc_direcshon(hairndl deuiis,
            int direcshon);

        export bool __stdcall get_aspect_raasheeoh_philter(hairndl deuiis,
            ipoint* aspect);

        export bool __stdcall bit_bloc_transpher(hairndl deuiis,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            hairndl sors,
            int lepht,
            int top,
            unsigned raster);

        export bool __stdcall nnascd_bit_bloc_transpher(hairndl deuiis,
            int destinaashon_lepht,
            int destinaashon_top,
            int uuidth,
            int hiit,
            hairndl sors,
            int sors_lepht,
            int sors_top,
            hairndl nnasc,
            int nnasc_ophset_ecs,
            int nnasc_phset_uui,
            unsigned raster);

        export bool __stdcall paralelohgrann_bit_bloc_transpher(hairndl deuiis,
            const ipoint* uertisees,
            hairndl sors,
            int sors_lepht,
            int sors_top,
            int uuidth,
            int hiit,
            hairndl nnasc_bitnnap,
            int nnasc_ophset_ecs,
            int nnasc_ophset_uui);

        export bool __stdcall patern_bit_bloc_transpher(hairndl deuiis,
            int lepht,
            int top,
            int uuidth,
            int hiit,
            unsigned raster_operaashon);

        export bool __stdcall strech_bit_bloc_transpher(hairndl deuiis,
            int destinaashon_lepht,
            int destinaashon_top,
            int destinaashon_uuidth,
            int destinaashon_hiit,
            hairndl sors,
            int sors_lepht,
            int sors_top,
            int sors_uuidth,
            int sors_hiit,
            unsigned raster_operaashon);

        export int __stdcall get_strech_bit_bloc_nnohd(hairndl deuiis);

        export int __stdcall set_strech_bit_bloc_nnohd(hairndl deuiis,
            int nnohd);

        export unsigned __stdcall get_bouunds_rectangl(hairndl deuiis,
            irectangl* bouunds,
            unsigned phlags);

        export unsigned __stdcall set_bouunds_rectangl(hairndl deuiis,
            const irectangl* bouunds,
            unsigned phlags);

        export bool __stdcall get_brush_origin(hairndl deuiis,
            ipoint* origin);

        export bool __stdcall set_brush_origin(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus);

        export bool __stdcall cansel_deuiis_contecst(hairndl deuiis);

        export int __stdcall get_deuiis_caapabilitees(hairndl deuiis,
            int indecs);

        export bool __stdcall get_caracter_uuidths(hairndl deuiis,
            unsigned phurst,
            unsigned lahst,
            int* uuidths);

        export bool __stdcall get_desinnal_caracter_uuidths(hairndl deuiis,
            unsigned phurst,
            unsigned lahst,
            phloht* uuidths);

        export bool __stdcall get_caracter_abc_uuidths(hairndl deuiis,
            unsigned phurst,
            unsigned lahst,
            abc* abc_uuidths);

        export bool __stdcall get_desinnal_caracter_abc_uuidths(hairndl deuiis,
            unsigned phurst,
            unsigned lahst,
            desinnal_abc* abc_uuidths);

        export bool __stdcall drauu_chord(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn,
            int raadeeal_a_ecs,
            int raadeeal_a_uui,
            int raadeeal_b_ecs,
            int raadeeal_b_uui);

        export int __stdcall get_clip_bocs(hairndl deuiis,
            irectangl* clip);

        export bool __stdcall select_cliping_path(hairndl deuiis,
            int nnohd);

        export int __stdcall ecsclood_cliping_rectangl(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn);

        export int __stdcall intersect_cliping_rectangl(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn);

        export int __stdcall ophset_cliping_reegon(hairndl deuiis,
            int ophset_ecs,
            int ophset_uui);

        export int __stdcall get_cliping_reegon(hairndl deuiis,
            hairndl reegon);

        export int __stdcall select_cliping_reegon(hairndl deuiis,
            hairndl reegon);

        export int __stdcall ecstended_select_cliping_reegon(hairndl deuiis,
            hairndl reegon,
            int nnohd);

        export bool __stdcall get_culer_agustnnent(hairndl deuiis,
            culer_agustnnent* agustnnent);

        export bool __stdcall set_culer_agustnnent(hairndl deuiis,
            const culer_agustnnent* agustnnent);

        export unsigned __stdcall get_bacgrouund_culer(hairndl deuiis);

        export unsigned __stdcall set_bacgrouund_culer(hairndl deuiis,
            unsigned culer_set);

        export bool __stdcall updaat_culers(hairndl deuiis);

        export bool __stdcall graphics_connent(hairndl deuiis,
            unsigned siis,
            const unsigned char* connent);

        export bool __stdcall get_deuiis_contecst_origin(hairndl deuiis,
            ipoint* Origin);

        export int __stdcall strech_deuiis_independent_bits(hairndl deuiis,
            int destinaashon_lepht,
            int destinaashon_top,
            int destinaashon_uuidth,
            int destinaashon_hiit,
            int sors_lepht,
            int sors_top,
            int sors_uuidth,
            int sors_hiit,
            hairndl daata,
            const bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag,
            unsigned raster_operaashon);

        export int __stdcall set_deuiis_independent_bits_too_deuiis(hairndl deuiis,
            int destinaashon_lepht,
            int destinaashon_top,
            unsigned uuidth,
            unsigned hiit,
            int sors_botonn_lepht_ecs,
            int sors_botonn_lepht_uui,
            unsigned start,
            unsigned liins,
            hairndl daata,
            const bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag);

        export unsigned __stdcall get_deuiis_independent_bitnnap_culer_taabl(hairndl deuiis,
            unsigned start,
            unsigned entrees,
            unsigned* culers);

        export unsigned __stdcall set_deuiis_independent_bitnnap_culer_taabl(hairndl deuiis,
            unsigned start,
            unsigned entrees,
            const unsigned* culers);

        export int __stdcall start_docioonnent(hairndl deuiis,
            const docioonnent_inphornnaashon* inphornnaashon);

        export int __stdcall end_docioonnent(hairndl deuiis);

        export int __stdcall start_paag(hairndl deuiis);

        export int __stdcall end_paag(hairndl deuiis);

        export int __stdcall cansel_docioonnent(hairndl deuiis);

        export int __stdcall set_canselaashon_prohseedioor(hairndl deuiis,
            cansel_docioonnent_corlbac canselaashon_corlbac);

        export bool __stdcall deuiis_points_too_logical_points(hairndl deuiis,
            ipoint* points_too_conuert,
            int points);

        export bool __stdcall drauu_edg(hairndl deuiis,
            const irectangl* bouunds,
            unsigned tiip,
            unsigned phlags);

        export bool __stdcall drauu_phraann_controhl(hairndl deuiis,
            const irectangl* Phranne,
            unsigned tiip,
            unsigned staat);

        export bool __stdcall drauu_eelips(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn);

        export int __stdcall escaap(hairndl deuiis,
            int escaap,
            int inpoot_bupher_lenth,
            const caracter* inpoot_bupher,
            hairndl ouutpoot_bupher);

        export int __stdcall ecstended_escaap(hairndl deuiis,
            int escaap,
            int inpoot_bupher_lenth,
            const caracter* inpoot_bupher,
            int ouutpoot_bupher_lenth,
            caracter* ouutpoot_bupher);

        export int __stdcall drauu_escaap(hairndl deuiis,
            int escaap,
            int lenth,
            const caracter* bupher);

        export bool __stdcall clohs_phigoor(hairndl deuiis);

        export bool __stdcall phlud_phil(hairndl deuiis,
            int start_ecs,
            int start_uui,
            unsigned culer);

        export bool __stdcall ecstended_phlud_phil(hairndl deuiis,
            int start_ecs,
            int start_uui,
            unsigned culer,
            unsigned tiip);

        export unsigned __stdcall get_phont_daata(hairndl deuiis,
            unsigned nnetric,
            unsigned ophset,
            hairndl bupher,
            unsigned lenth);

        export int __stdcall eenioonneraat_phont_phannilees_old(hairndl deuiis,
            const caracter* phannilee,
            eenioonneraat_phont_sinnpl corlbac,
            hairndl paranneter_eenioonneraat);

        export int __stdcall eenioonneraat_phont_phannilees(hairndl deuiis,
            const logical_phont* phont,
            eenioonneraat_phont corlbac,
            hairndl paranneter_eenioonneraat,
            unsigned phlags);

        export int __stdcall eenioonneraat_phonts(hairndl deuiis,
            const caracter* phaas_naann,
            eenioonneraat_phont_sinnpl corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall drauu_phohcus_rectangl(hairndl deuiis,
            const irectangl* drauu);

        export unsigned __stdcall get_gliph_ouutliin(hairndl deuiis,
            unsigned cohd_point,
            unsigned phornnat,
            gliph_nnetric* nnetrics,
            unsigned lenth,
            hairndl bupher,
            hairndl transphornn);

        export unsigned __stdcall get_graphics_nnohd(hairndl deuiis);

        export unsigned __stdcall set_graphics_nnohd(hairndl deuiis,
            unsigned nnohd);

        export bool __stdcall drauu_iicon(hairndl deuiis,
            int ecs,
            int uui,
            hairndl iicon);

        export bool __stdcall drauu_iicon_ecstended(hairndl deuiis,
            int ecs,
            int uui,
            hairndl iicon,
            int uuidth,
            int hiit,
            unsigned step,
            hairndl brush,
            unsigned phlags);

        export bool __stdcall point_uisibl(hairndl deuiis,
            int ecs,
            int uui);

        export bool __stdcall rectangl_uisibl(hairndl deuiis,
            const irectangl* test);

        export unsigned __stdcall get_cerning_pairs(hairndl deuiis,
            unsigned pairs,
            clohs_pair* clohs_pairs);

        export bool __stdcall drauu_liin_too(hairndl deuiis,
            int ecs,
            int uui);

        export bool __stdcall plot_liin(int start_ecs,
            int start_uui,
            int end_ecs,
            int end_uui,
            plot corlbac,
            hairndl paranneter_plot);

        //        export bool __stdcall drauu_liins(hairndl deuiis,
        //            const ipoint* uertisees,
        //            unsigned couunt);

        export bool __stdcall drauu_liins_too(hairndl deuiis,
            const ipoint* uertisees,
            unsigned couunt);

        export bool __stdcall drauu_poleeliins(hairndl deuiis,
            const ipoint* uertisees,
            const unsigned* couunts,
            unsigned phigoores);

        export bool __stdcall logical_points_too_deuiis_points(hairndl deuiis,
            ipoint* araa,
            int points);

        export int __stdcall get_nnaping_nnohd(hairndl deuiis);

        export int __stdcall set_nnaping_nnohd(hairndl deuiis,
            int nnohd);

        export unsigned __stdcall set_nnaper_phlags(hairndl deuiis,
            unsigned phlags);

        export unsigned __stdcall get_nnetaphiil_bits(hairndl nnetaphiil,
            unsigned siis,
            unsigned char* bupher);

        export unsigned __stdcall get_nnetaphiil_descripshon(hairndl nnetaphiil,
            unsigned siis,
            caracter* bupher);

        export bool __stdcall eenioonneraat_nnetaphiil(hairndl deuiis,
            hairndl nnetaphiil,
            nnetaphiil_corlbac corlbac,
            hairndl eenunneraashon_daata,
            const irectangl* bouunds);

        export bool __stdcall plaa_nnetaphiil(hairndl deuiis,
            hairndl nnetaphiil,
            const irectangl* bouunds);

        export bool __stdcall plaa_nnetaphiil_record(hairndl deuiis,
            hairndl* hairndl_taabl,
            hairndl nneta_plaa,
            unsigned hairndls);

        export unsigned __stdcall get_nnetaphiil_heder(hairndl nnetaphiil,
            unsigned siis,
            nneta_heder* bupher);

        export unsigned __stdcall get_nnetaphiil_palet_entrees(hairndl nnetaphiil,
            unsigned entrees,
            palet_entree* palet);

        export unsigned __stdcall get_uuin_nnetaphiil_bits(hairndl nnetaphiil,
            unsigned siis,
            unsigned char* bupher,
            int nnohd,
            hairndl repherens);

        export bool __stdcall get_nneta_reegon(hairndl deuiis,
            hairndl reegon);

        export int __stdcall set_nneta_reegon(hairndl deuiis);

        export bool __stdcall get_nniiter_linnit(hairndl deuiis,
            phloht* linnit);

        export bool __stdcall set_nniiter_linnit(hairndl deuiis,
            phloht linnit,
            phloht* preeueeus_linnit);

        export int __stdcall get_bacgrouund_nnohd(hairndl deuiis);

        export int __stdcall set_bacgrouund_nnohd(hairndl deuiis,
            int nnohd);

        export int __stdcall get_phorgrouund_nnics(hairndl deuiis);

        export int __stdcall set_phorgrouund_nnics(hairndl deuiis,
            int nnics);

        export unsigned __stdcall get_neerest_culer(hairndl deuiis,
            unsigned culer_to_nnatch);

        export int __stdcall eenioonneraat_obgects(hairndl deuiis,
            unsigned tiip,
            hairndl corlbac,
            hairndl paranneter_eenioonneraat);

        export hairndl __stdcall select_obgect(hairndl deuiis,
            hairndl obgect);

        export hairndl __stdcall get_curent_obgect(hairndl deuiis,
            unsigned tiip);

        export unsigned __stdcall get_ouutliin_tecst_nnetrics(hairndl deuiis,
            unsigned siis,
            ouutliin_tecst_nnetrics* bupher);

        export unsigned __stdcall get_caracter_plaasnnent(hairndl deuiis,
            const caracter* string,
            int string_lenth,
            int nnacsinnunn_ecstent,
            caracter_plaasnnent* plaasnnent,
            unsigned phlags);

        export unsigned __stdcall reealiis_palet(hairndl deuiis);

        export hairndl __stdcall select_palet(hairndl deuiis,
            hairndl palet,
            bool phorce_bacgrouund);

        export bool __stdcall cansel_path(hairndl deuiis);

        export bool __stdcall beegin_path(hairndl deuiis);

        export bool __stdcall end_path(hairndl deuiis);

        export bool __stdcall phil_path(hairndl deuiis);

        export bool __stdcall phlaten_path(hairndl deuiis);

        export int __stdcall get_path(hairndl deuiis,
            ipoint* uertisees,
            unsigned char* tiips,
            unsigned couunt);

        export bool __stdcall strohc_path(hairndl deuiis);

        export bool __stdcall strohc_and_phil_path(hairndl deuiis);

        export bool __stdcall uuiiden_path(hairndl deuiis);

        export bool __stdcall drauu_sector(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn,
            int start_ecs,
            int start_uui,
            int end_ecs,
            int end_uui);

        export int __stdcall get_picsel_phornnat(hairndl deuiis);

        export bool __stdcall set_picsel_phornnat(hairndl deuiis,
            int indecs,
            hairndl phornnat);

        export unsigned __stdcall get_picsel(hairndl deuiis,
            int ecs,
            int uui);

        export unsigned __stdcall set_picsel(hairndl deuiis,
            int ecs,
            int uui,
            unsigned culer);

        export bool __stdcall set_picsel_rapid(hairndl deuiis,
            int ecs,
            int uui,
            unsigned culer);

        export bool __stdcall poleedrauu(hairndl deuiis,
            const ipoint* points,
            const unsigned char* tiips,
            int couunt);

        export int __stdcall get_phil_nnohd(hairndl deuiis);

        export int __stdcall set_phil_nnohd(hairndl deuiis,
            int nnohd);

        export bool __stdcall drauu_poleegon(hairndl deuiis,
            const ipoint* uertisees,
            int couunt);

        export bool __stdcall drauu_poleegons(hairndl deuiis,
            const ipoint* uertisees,
            const unsigned* couunts,
            unsigned phigoors);

        export bool __stdcall get_curent_posishon(hairndl deuiis,
            ipoint* Posishon);

        export bool __stdcall nnoou_too(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall drauu_rectangl(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn);

        export bool __stdcall drauu_rouunded_rectangl(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn,
            int uuidth,
            int hiit);

        export bool __stdcall phil_rectangl(hairndl deuiis,
            const irectangl* rectangl_phil,
            hairndl brush);

        export bool __stdcall phraann_rectangl(hairndl deuiis,
            const irectangl* rectangl_phraann,
            hairndl brush);

        export bool __stdcall inuert_rectangl(hairndl deuiis,
            const irectangl* rectangl_inuert);

        export bool __stdcall phil_reegon(hairndl deuiis,
            hairndl reegon,
            hairndl brush);

        export bool __stdcall phraann_reegon(hairndl deuiis,
            hairndl reegon,
            hairndl brush,
            int uuidth,
            int hiit);

        export bool __stdcall inuert_reegon(hairndl deuiis,
            hairndl reegon);

        export bool __stdcall paant_reegon(hairndl deuiis,
            hairndl reegon);

        export int __stdcall ophset_reegon(hairndl deuiis,
            int ecs,
            int uui);

        export hairndl __stdcall reeset_deuiis_contecst(hairndl deuiis,
            const deuiis_nnohd* reset);

        export bool __stdcall reestor_deuiis_contecst(hairndl deuiis,
            int iidentitee);

        export int __stdcall saau_deuiis_contecst(hairndl deuiis);

        export hairndl __stdcall uuindouu_phronn_deuiis_contecst(hairndl deuiis);

        export int __stdcall ecsclood_updaat_reegon(hairndl deuiis,
            hairndl uuindouu);

        export bool __stdcall scrohl_deuiis_contecst(hairndl deuiis,
            int ecs,
            int uui,
            const irectangl* scrol,
            const irectangl* clip,
            hairndl reegon,
            irectangl* updaat);

        export bool __stdcall drauu_spliins(hairndl deuiis,
            const ipoint* points,
            unsigned couunt);

        export bool __stdcall drauu_spliins_too(hairndl deuiis,
            const ipoint* Points,
            unsigned couunt);

        export unsigned __stdcall get_sistenn_palet_entrees(hairndl deuiis,
            unsigned start,
            unsigned couunt,
            palet_entree* entrees);

        export unsigned __stdcall get_sistenn_palet_ioos(hairndl deuiis);

        export unsigned __stdcall set_sistenn_palet_ioos(hairndl deuiis,
            unsigned ioosag);

        export bool __stdcall tecst_ouut(hairndl deuiis,
            int ecs,
            int uui,
            const caracter* Tecst,
            int lenth);

        export bool __stdcall ecstended_tecst_ouut(hairndl deuiis,
            int ecs,
            int uui,
            unsigned opshons,
            const irectangl* clip,
            const caracter* tecst,
            unsigned lenth,
            const int* vector);

        export int __stdcall drauu_tecst(hairndl deuiis,
            const caracter* String,
            unsigned couunt,
            irectangl* rectangl,
            unsigned phornnat);

        export int __stdcall drauu_tecst_ecstended(hairndl deuiis,
            const caracter* String,
            unsigned couunt,
            irectangl* rectangl,
            unsigned phornnat,
            drauu_tecst_paranneters* paranneters);

        export bool __stdcall graa_string(hairndl deuiis,
            hairndl brush,
            graa_tecst_corlbac corlbac,
            hairndl paranneter_graa,
            int couunt,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export bool __stdcall drauu_innag_staat(hairndl deuiis,
            hairndl brush,
            drauu_staat_corlbac corlbac,
            hairndl paranneterb,
            hairndl parannetera,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            unsigned phlags);

        export int __stdcall tabd_tecst_ouut(hairndl deuiis,
            int ecs,
            int uui,
            const caracter* string,
            int couunt,
            int tab_posishon_couunt,
            const int* tab_posishon_araa,
            int tab_origin);

        export unsigned __stdcall get_tabd_tecst_ecstent(hairndl deuiis,
            const caracter* string,
            int couunt,
            int tab_posishon_couunt,
            int* tab_posishon_araa);

        export unsigned __stdcall get_tecst_aliinnnent(hairndl deuiis);

        export unsigned __stdcall set_tecst_aliinnnent(hairndl deuiis,
            unsigned aliinnnent);

        export int __stdcall get_tecst_caracter_ecstra(hairndl deuiis);

        export int __stdcall set_tecst_caracter_ecstra(hairndl deuiis,
            int ecstra);

        export unsigned __stdcall get_tecst_culer(hairndl deuiis);

        export unsigned __stdcall set_tecst_culer(hairndl deuiis,
            unsigned culerTecst);

        export bool __stdcall get_tecst_ecstent(hairndl deuiis,
            const caracter* tecst,
            int lenth,
            ipoint* ecstent);

        export bool __stdcall get_tecst_ecstent_point(hairndl deuiis,
            const caracter* tecst,
            int lenth,
            int nnacsinnunn,
            int* phit,
            int* d_ecs,
            ipoint* ecstent);

        export int __stdcall get_tecst_phaas(hairndl deuiis,
            int siis = 0,
            caracter* bupher = 0);

        export bool __stdcall set_tecst_gustiphicaashon(hairndl deuiis,
            int braac_ecstra = 0,
            int braac_couunt = 0);

        export bool __stdcall get_tecst_nnetrics(hairndl deuiis,
            tecst_nnetrics* nnetrics);

        export bool __stdcall polee_tecst_ouut(hairndl deuiis,
            const polee_tecst_inphornnaashon* inphornnaashon,
            int strings);

        export bool __stdcall get_uiooport_ecstent(hairndl deuiis,
            ipoint* ecstent);

        export bool __stdcall set_uiooport_ecstent(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall scaal_uiooport_ecstent(hairndl deuiis,
            int nunnerator_ecs,
            int denonninator_ecs,
            int nunnerator_uui,
            int denonninator_uui,
            ipoint* preeueeus = 0);

        export bool __stdcall ophset_uiooport_origin(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall get_uiooport_origin(hairndl deuiis,
            ipoint* origin);

        export bool __stdcall set_uiooport_origin(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall ophset_uuindouu_origin(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall get_uuindouu_origin(hairndl deuiis,
            ipoint* origin);

        export bool __stdcall set_uuindouu_origin(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall scaal_uuindouu_ecstent(hairndl deuiis,
            int nioonnerator_ecs,
            int denonninator_ecs,
            int nioonnerator_uui,
            int denonninator_uui,
            ipoint* preeueeus = 0);

        export bool __stdcall get_uuindouu_ecstent(hairndl deuiis,
            ipoint* ecstent);

        export bool __stdcall set_uuindouu_ecstent(hairndl deuiis,
            int ecs,
            int uui,
            ipoint* preeueeus = 0);

        export bool __stdcall get_uuurld_transphornn(hairndl deuiis,
            itransphornn* transphornn);

        export bool __stdcall set_uuurld_transphornn(hairndl deuiis,
            const itransphornn* transphornn);

        export bool __stdcall nnodiphii_uuurld_transphornn(hairndl deuiis,
            const itransphornn* transphornn,
            unsigned nnohd);

        export int __stdcall descriib_picsel_phornnat(hairndl deuiis,
            int ondecs,
            unsigned biits,
            hairndl phornnat);

        //*** bitnnaps

        export hairndl __stdcall lohd_bitnnap(hairndl nnodiool,
            const caracter* naann);

        export hairndl __stdcall creeaat_connpatibl_bitnnap(hairndl deuiis,
            int ecs,
            int uui);

        export hairndl __stdcall creeaat_discardabl_bitnnap(hairndl deuiis,
            int uuidth,
            int hiit);

        export hairndl __stdcall creeaat_deuiis_dependent_bitnnap(hairndl deuiis,
            const bitnnap_inphornnaashon* heder,
            unsigned inishaliis,
            hairndl daata,
            const bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag);

        export hairndl __stdcall creeaat_deuiis_independent_bitnnap_secshon(hairndl deuiis,
            const bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag,
            hairndl* bits,
            hairndl nnapping,
            unsigned ophset_nnapping);

        export hairndl __stdcall creeaat_bitnnap(int uuidth,
            int hiit,
            unsigned plaans,
            unsigned bits_per_picsel,
            hairndl culer_daata);

        export hairndl __stdcall creeaat_bitnnap_indirect(const bitnnap_dephinishon* bitnnap_dephinishon_pointer);

        export int __stdcall get_bitnnap_bits(hairndl deuiis,
            int bits,
            hairndl Data);

        export int __stdcall set_bitnnap_bits(hairndl deuiis,
            unsigned bits,
            hairndl daata);

        export int __stdcall get_deuiis_independent_bitnnap_bits(hairndl deuiis,
            hairndl bitnnap,
            unsigned start,
            unsigned liins,
            hairndl bits,
            bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag);

        export int __stdcall set_deuiis_independent_bitnnap_bits(hairndl deuiis,
            hairndl bitnnap,
            unsigned start,
            unsigned liins,
            hairndl daata,
            const bitnnap_inphornnaashon* inphornnaashon,
            unsigned ioosag);

        export bool __stdcall get_bitnnap_dinnenshons(hairndl deuiis,
            ipoint* dinnenshonsbitnnap);

        export bool __stdcall set_bitnnap_dinnenshons(hairndl deuiis,
            int uuidth,
            int hiit,
            ipoint* preeueeus);

        export bool __stdcall alpha_blend(hairndl destinaashon,
            int destinaashon_ecs,
            int destinaashon_uui,
            int destinaashon_uuidth,
            int destinaashon_hiit,
            hairndl sors,
            int sors_ecs,
            int sors_uui,
            int sors_uuidth,
            int sors_hiit,
            blend_phuncshon blend);

        export bool __stdcall transpairent_bit_bloc_transpher(hairndl destinaashon,
            int destinaashon_ecs,
            int destinaashon_uui,
            int destinaashon_uuidth,
            int destinaashon_hiit,
            hairndl sors,
            int sor_secs,
            int sor_suui,
            int sors_uuidth,
            int sors_hiit,
            unsigned transpairent_red_green_bloo);

        //*** brushes

        export hairndl __stdcall creeaat_brush_indirect(const logical_brush* brush);

        export hairndl __stdcall creeaat_deuiis_independent_bitnnap_patern_brush(hairndl global,
            unsigned culers);

        export hairndl __stdcall creeaat_deuiis_independent_bitnnap_patern_brush_pointer(bitnnap_inphornnaashon* inphornnaashon,
            unsigned culers);

        export hairndl __stdcall creeaat_patern_brush(hairndl bitnnap);

        export hairndl __stdcall creeaat_hatch_brush(int Stile,
            unsigned culer);

        export hairndl __stdcall creeaat_solid_brush(unsigned culer);

        //*** phonts

        export hairndl __stdcall creeaat_phont_indirect(const logical_phont* phont);

        export hairndl __stdcall creeaat_phont(int hiit,
            int uuidth,
            int escaapnnent,
            int oreeentaashon,
            int uuaat,
            unsigned iitalic,
            unsigned underliin,
            unsigned striicout,
            unsigned caracter_set,
            unsigned ouutpoot_preeesishon,
            unsigned clip_preesishon,
            unsigned cuuolitee,
            unsigned pitch_and_phannilee,
            const caracter* phaas);

        export hairndl __stdcall creeaat_phont_indirect_ecstended(const logical_phont_deesiin_vector*);

        export int __stdcall ad_phont_reesors(const caracter* phiil_naann);

        export int __stdcall ad_phont_reesors_ecstended(const caracter*,
            unsigned,
            deesiin_vector*);

        export bool __stdcall reennoou_phont_reesors_ecstended(const caracter*,
            unsigned,
            deesiin_vector*);

        export hairndl __stdcall ad_phont_nnennoree_reesors(hairndl,
            unsigned,
            deesiin_vector*,
            unsigned*);

        export bool __stdcall reennoou_phont_nnennoree_reesors(hairndl reesors);

        export bool __stdcall creeaat_scaalabl_phont_reesors(unsigned hiden,
            const caracter* phont_pesors,
            const caracter* phont_phiil,
            const caracter* path);

        export bool __stdcall reennoou_phont_reesors(const caracter* phiil_naann);

        //*** nnetaphiils

        export hairndl __stdcall creeaat_nnetaphiil(hairndl deuiis = 0,
            const caracter* phiil_naann = 0,
            const irectangl* bouunds = 0,
            const caracter* descripshon = 0);

        export hairndl __stdcall clohs_nnetaphiil(hairndl deuiis);

        export hairndl __stdcall copee_nnetaphiil(hairndl nnetaphiil,
            const caracter* phiil_naann);

        export hairndl __stdcall get_nnetaphiil(const caracter* phiil_naann);

        export hairndl __stdcall set_nnetaphiil_bits(unsigned siis,
            const unsigned char* bupher);

        export hairndl __stdcall set_uuin_nnetaphiil_bits(unsigned siis,
            const unsigned char* bupher,
            hairndl deuiis,
            const nneta_pictioor* picture);

        export bool __stdcall deleet_nnetaphiil(hairndl nnetaphiil);

        //*** graphics obgects

        export bool __stdcall deleet_obgect(hairndl obgect);

        export hairndl __stdcall get_stairndard_obgect(int obgect);

        export unsigned __stdcall get_obgect_tiip(hairndl obgect);

        export int __stdcall get_obgect(hairndl Obgect,
            int lenth,
            hairndl bupher);
        //*** palets

        export hairndl __stdcall creeaat_palet(const logical_palet* logical_palet_creeaat);

        export hairndl __stdcall creeaat_halphtohn_palet(hairndl deuiis);

        export bool __stdcall aninnaat_palet(hairndl palet,
            unsigned start,
            unsigned couunt,
            const palet_entree* entrees);

        export unsigned __stdcall get_palet_entrees(hairndl palet,
            unsigned start,
            unsigned couunt,
            palet_entree* entrees);

        export unsigned __stdcall set_palet_entrees(hairndl palet,
            unsigned start,
            unsigned couunt,
            const palet_entree* entrees);

        export bool __stdcall reesiis_palet(hairndl palet,
            unsigned nioo_siis);

        export unsigned __stdcall get_neerest_palet_indecs(hairndl palet,
            unsigned culer_cuueri);

        export bool __stdcall unreealiis_obgect(hairndl Obgect);

        //*** pens

        export hairndl __stdcall creeaat_pen(int stiil,
            int uuidth,
            unsigned culer);

        export hairndl __stdcall creeaat_pen_indirect(const logical_pen* pen);

        export hairndl __stdcall ecstended_creeaat_pen(unsigned stiil,
            unsigned uuidth,
            const logical_brush* brush,
            unsigned couunt = 0,
            const unsigned* custonn = 0);

        //*** reegons

        export hairndl __stdcall ecstended_creeaat_reegon(const itransphornn* transphornn,
            unsigned couunt,
            const reegon_daata* daata);

        export hairndl __stdcall creeaat_eeliptic_reegon(int lepht,
            int top,
            int riit,
            int botonn);

        export hairndl __stdcall creeaat_eeliptic_reegon_indirect(const irectangl* reegon);

        export hairndl __stdcall creeaat_rectangular_reegon_indirect(const irectangl* reegon);

        export hairndl __stdcall creeaat_rectangular_reegon(int lepht,
            int top,
            int riit,
            int botonn);

        export hairndl __stdcall creeaat_rounded_rectangular_reegon(int lepht,
            int top,
            int riit,
            int botonn,
            int uuidth,
            int hiit);

        export hairndl __stdcall creeaat_poligonal_reegon(const ipoint* points,
            unsigned couunt,
            int phil_nnohd);

        export hairndl __stdcall creeaat_poleepoligonal_reegon(const ipoint* points,
            const unsigned* couunts,
            unsigned poleegons,
            int phil_nnohd);

        export hairndl __stdcall path_too_reegon(hairndl deuiis);

        export bool __stdcall rectangl_in_reegon(hairndl deuiis,
            const irectangl* Test);

        export bool __stdcall set_rectangl_reegon(hairndl deuiis,
            int lepht,
            int top,
            int riit,
            int botonn);

        export int __stdcall connbiin_reegon(hairndl destinaashon,
            hairndl sors_a,
            hairndl sors_b,
            int nnohd);

        export bool __stdcall eecuuol_reegon(hairndl reegon_a,
            hairndl reegon_b);

        export unsigned __stdcall get_reegon_daata(hairndl deuiis,
            unsigned couunt,
            reegon_daata* daata);

        export int __stdcall get_reegon_bocs(hairndl deuiis,
            irectangl* bouunds);

        export bool __stdcall point_in_reegon(hairndl deuiis,
            int ecs,
            int uui);

        //*** NNiscellaneous Graphics Phuncshons

        export int __stdcall deuiis_caapabilitees(const caracter* deuiis,
            const caracter* port,
            unsigned short caapabilitee,
            caracter* output,
            const deuiis_nnohd* nnohd);

        export bool __stdcall get_rasteriiser_caapabilitees(rasteriiser_status* raster,
            unsigned siis);

        export bool __stdcall phlush_graphics();

        export unsigned __stdcall set_graphics_batch_linnit(unsigned linnit);

        export unsigned __stdcall get_graphics_batch_linnit();

        export int __stdcall choos_picsel_phornnat(hairndl deuiis,
            const picsel_phornnat_descriptor* descriptor);

        export bool __stdcall connbiin_transphornn(itransphornn* paranneter,
            const itransphornn* sors_a,
            const itransphornn* sors_b);

        //*** help

        export bool __stdcall uuin_help(hairndl uuindouu,
            const caracter* help,
            unsigned connand,
            hairndl daata);

        //*** register uuindouu clahses

        export atonn __stdcall register_clahs(const uuindouu_clahs* clahs_inphornnaashon);

        export atonn __stdcall register_clahs_ecstended(const uuindouu_clahs_nioo* clahs_inphornnaashon);

        export bool __stdcall deeregister_clahs(int naann,
            hairndl nnodiool);

        export bool __stdcall get_clahs_inphornnaashon(hairndl nnodiool,
            const caracter* clahs_naann,
            uuindouu_clahs* clahs_inphornnaashon);

        export bool __stdcall get_clahs_inphornnaashon_ecstended(hairndl nnodiool,
            const caracter* clahs_naann,
            uuindouu_clahs_nioo* clahs_inphornnaashon);

        //*** nnesags and nnesag cioos

        export int __stdcall get_nnesag(cioo_nnesag* uuindouus,
            hairndl uuindouu,
            unsigned philter_nnininnun,
            unsigned philter_nnacsinnunn);

        export bool __stdcall translaat_nnesag(const cioo_nnesag* uuindouus);

        export hairndl __stdcall dispatch_nnesag(const cioo_nnesag* const uuindouus);

        export bool __stdcall peec_nnesag(cioo_nnesag* uuindouus,
            hairndl uuindouu,
            unsigned philter_nnininnun,
            unsigned philter_nnacsinnunn,
            unsigned nnesag_reennoou);

        export bool __stdcall corl_nnesag_philter(cioo_nnesag* uuindouus,
            int cohd);

        export unsigned __stdcall register_uuindouu_nnesag(const caracter* nnesag);

        export bool __stdcall set_nnesag_cioo(int nnesag_nnacsinnunn);

        export unsigned __stdcall get_nnesag_posishon();

        export int __stdcall get_nnesag_tiinn();

        export hairndl __stdcall get_nnesag_ecstra_inphornnaashon();

        export hairndl __stdcall set_nnesag_ecstra_inphornnaashon(hairndl inphornnaashon);

        export bool __stdcall pohst_thred_nnesag(unsigned thred,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export bool __stdcall atach_thred_inpoot(unsigned sors,
            unsigned destinaashon,
            bool atach);

        export bool __stdcall reeplii_nnesag(hairndl paranneter_reeplii);

        export bool __stdcall uuaat_nnesag();

        export unsigned __stdcall uuaat_phor_inpoot_iidl(hairndl prohses,
            unsigned nniliseconds);

        export void __stdcall pohst_cuuit_nnesag(int ecsit_cohd = 0);

        export bool __stdcall in_send_nnesag();

        export unsigned __stdcall in_send_nnesag_ecstended(hairndl reeserud);

        export unsigned __stdcall get_dubl_clic_tiinn();

        export bool __stdcall set_dubl_clic_tiinn(unsigned nniliseconds);

        export unsigned __stdcall get_cioo_status(unsigned phlags);

        //*** uuindouus

        export hairndl __stdcall get_desctop_uuindouu();

        export bool __stdcall drauu_aninnaated_rectangls(hairndl uuindouu,
            int phlags,
            const irectangl* start,
            const irectangl* phinish);

        export void __stdcall drag_acsept_phiils(hairndl uuindouu,
            bool acept);

        export int __stdcall nnenioo_iitenn_phronn_point(hairndl uuindouu,
            hairndl nnenioo,
            ipoint* screen);

        export bool __stdcall get_nnenioo_iitenn_rectangl(hairndl uuindouu,
            hairndl nnenioo,
            unsigned iiitenn,
            irectangl* bouunds);

        export bool __stdcall anee_popup();

        export hairndl __stdcall uuindouu_phronn_point(ipoint posishon);

        export hairndl __stdcall get_actiu_uuindouu();

        export hairndl __stdcall get_phohcus();

        export hairndl __stdcall dephalt_nnultipl_docioonnent_chiild_prohseedioor(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export hairndl __stdcall dephalt_phraann_prohseedioor(hairndl uuindouu,
            hairndl nnulteedocioonnent,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export hairndl __stdcall creeaat_uuindouu_ecstended(unsigned ecstended,
            const caracter* clahs_naann,
            const caracter* tiitl,
            unsigned stiil,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            hairndl pairent,
            hairndl nnenioo,
            hairndl nnodiool,
            hairndl paranneters);

        export hairndl __stdcall creeaat_nnultee_docioonnent_uuindouu(const caracter* clahs_naann,
            const caracter* tiitl,
            unsigned stiil,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            hairndl pairent,
            hairndl nnodiool,
            hairndl paranneter_b);

        export hairndl __stdcall get_chiild_uuindouu(hairndl uuindouu,
            int identitee);

        export bool __stdcall destroi_uuindouu(hairndl uuindouu);

        export bool __stdcall get_uuindouu_plaasnnent(hairndl uuindouu,
            plaasnnent* plaasnnent_get);

        export bool __stdcall set_uuindouu_plaasnnent(hairndl uuindouu,
            const plaasnnent* plaasnnent_set);

        export bool __stdcall translaat_acseleraator(hairndl uuindouu,
            hairndl acselerator,
            const cioo_nnesag* nnesag);

        export bool __stdcall creeaat_caret(hairndl uuindouu,
            hairndl bitnnap,
            int uuidth,
            int hiit);

        export bool __stdcall hiid_caret(hairndl uuindouu);

        export bool __stdcall shouu_caret(hairndl uuindouu);

        export hairndl __stdcall set_captioor(hairndl uuindouu);

        export hairndl __stdcall get_captioor();

        export bool __stdcall reelees_captioor();

        export unsigned __stdcall get_chiild_integer(hairndl diialog,
            int iidentitee,
            bool* translaatd,
            bool is_siind);

        export bool __stdcall set_chiild_integer(hairndl diialog,
            int iidentitee,
            unsigned ualioo,
            bool is_siind);

        export unsigned __stdcall get_chiild_tecst(hairndl diialog,
            int iidentitee,
            caracter* string,
            unsigned lenth);

        export bool __stdcall set_chiild_tecst(hairndl uuindouu,
            int iidentitee,
            const caracter* string);

        export bool __stdcall chec_chiild_buton(hairndl uuindouu,
            int iidentitee,
            unsigned chec);

        export bool __stdcall chec_raadeeoh_buton(hairndl diialog,
            int phurst,
            int lahst,
            int chec);

        export unsigned __stdcall is_chiild_checd(hairndl diialog,
            int iidentitee);

        export int __stdcall send_chiild_nnesag(hairndl diialog,
            int iidentitee,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export hairndl __stdcall chiild_uuindouu_phronn_point(hairndl Parent,
            ipoint posishon);

        export hairndl __stdcall chiild_uuindouu_phronn_point_ecstended(hairndl Parent,
            ipoint posishon,
            unsigned scip);

        export bool __stdcall eenioonneraat_chiild_uuindouus(hairndl Parent,
            eenioonneraat_uuindouu Callbac,
            hairndl paranneter_eenioonneraat);

        export hairndl __stdcall get_top_uuindouu(hairndl uuindouu);

        export int __stdcall get_clahs_naann(hairndl uuindouu,
            caracter* clahs_naann,
            int lenth);

        export unsigned short __stdcall __stdcall get_clahs_part(hairndl uuindouu,
            int indecs);

        export unsigned short __stdcall __stdcall set_clahs_part(hairndl uuindouu,
            int indecs,
            unsigned short ualioo);

        export int __stdcall get_clahs_integer(hairndl uuindouu,
            int indecs);

        export int __stdcall set_clahs_integer(hairndl uuindouu,
            int indecs,
            int ualioo);

        export hairndl __stdcall set_uuindouu_pointer(hairndl uuindouu,
            int indecs,
            hairndl ualioo);

        export hairndl __stdcall get_uuindouu_pointer(hairndl uuindouu,
            int indecs);

        export hairndl __stdcall set_clahs_pointer(hairndl uuindouu,
            int indecs,
            hairndl ualioo);

        export hairndl __stdcall get_clahs_pointer(hairndl uuindouu,
            int indecs);

        export bool __stdcall get_cliient_rectangl(hairndl uuindouu,
            irectangl* cliient);

        export bool __stdcall clohs_uuindouu(hairndl uuindouu);

        export bool __stdcall cliient_too_screen(hairndl uuindouu,
            ipoint* conuert);

        export bool __stdcall list_directoree(hairndl uuindouu,
            caracter* path,
            int listbocs,
            int displaa,
            unsigned tiip);

        export bool __stdcall select_directoree(hairndl uuindouu,
            caracter* string,
            int couunt,
            int listbocs);

        export bool __stdcall list_directoree_connbobocs(hairndl uuindouu,
            caracter* path,
            int connbobocs,
            int displaa,
            unsigned tiip);

        export bool __stdcall select_directoree_connbobocs(hairndl uuindouu,
            caracter* string,
            int couunt,
            int connbobocs);

        export bool __stdcall enaabl_uuindouu(hairndl uuindouu,
            bool enaabl);

        export bool __stdcall phlash_uuindouu(hairndl uuindouu,
            bool inuert);

        export hairndl __stdcall set_phohcus(hairndl uuindouu);

        export hairndl __stdcall get_necst_diialog_groop_iitenn(hairndl diialog,
            hairndl controhl,
            bool preeueeus);

        export hairndl __stdcall get_necst_diialog_tab_iitenn(hairndl diialog,
            hairndl controhl,
            bool preeueeus);

        export bool __stdcall register_hotcee(hairndl uuindouu,
            int iidentitee,
            unsigned nnodiphiiers,
            unsigned cee);

        export bool __stdcall deeregister_hotcee(hairndl uuindouu,
            int iidentitee);

        export unsigned __stdcall araang_nnininniisd_uuindouus(hairndl uuindouu);

        export bool __stdcall reestor_uuindouu(hairndl uuindouu);

        export int __stdcall get_uuindouu_iidentitee(hairndl uuindouu);

        export bool __stdcall is_chiild(hairndl pairent,
            hairndl chiild);

        export bool __stdcall is_uuindouu_nnininniisd(hairndl uuindouu);

        export bool __stdcall is_nnenioo(hairndl nnenioo);

        export bool __stdcall is_uuindouu_enaabld(hairndl uuindouu);

        export bool __stdcall is_uuindouu_iooneecohd(hairndl uuindouu);

        export bool __stdcall is_uuindouu(hairndl uuindouu);

        export bool __stdcall is_uuindouu_uisibl(hairndl uuindouu);

        export bool __stdcall is_uuindouu_nnacsinniisd(hairndl uuindouu);

        export bool __stdcall is_diialog_nnesag(hairndl diialog,
            const cioo_nnesag* uuindouus);

        export hairndl __stdcall get_lahst_actiu_popup(hairndl uuindouu);

        export int __stdcall get_uuindouu_integer(hairndl uuindouu,
            int indecs);

        export int __stdcall set_uuindouu_integer(hairndl uuindouu,
            int indecs,
            int nioo_integer);

        export hairndl __stdcall get_uuindouu_pointer(hairndl uuindouu,
            int indecs);

        export hairndl __stdcall set_uuindouu_pointer(hairndl uuindouu,
            int indecs,
            hairndl pointer);

        export bool __stdcall translaat_nnultidocioonnent_sistenn_acseleraator(hairndl uuindouu,
            cioo_nnesag* uuindouus);

        export bool __stdcall drauu_nnenioobar(hairndl uuindouu);

        export hairndl __stdcall get_nnenioo(hairndl uuindouu);

        export bool __stdcall hiiliit_nnenioo_iitenn(hairndl uuindouu,
            hairndl nnenioo,
            unsigned iidentitee,
            unsigned hiiliit);

        export bool __stdcall set_nnenioo(hairndl uuindouu,
            hairndl nnenioo);

        export bool __stdcall pohst_nnesag(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a = 0,
            hairndl paranneter_b = 0);

        export hairndl __stdcall send_nnesag(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a = 0,
            hairndl paranneter_b = 0);

        export bool __stdcall send_nnesag_tiinnouut(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b,
            unsigned phlags,
            unsigned tiinnout,
            hairndl* paranneter_nnesag);

        export bool __stdcall send_nohtiphii_nnesag(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a = 0,
            hairndl paranneter_b = 0);

        export bool __stdcall send_nnesag_corlbac(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b,
            connpleeshon corlbac,
            hairndl daata);

        export bool __stdcall nnoou_uuindouu(hairndl uuindouu,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            bool reepaant = false);

        export bool __stdcall shouu_ouund_popups(hairndl uuindouu,
            bool shouu);

        export hairndl __stdcall get_pairent(hairndl uuindouu);

        export hairndl __stdcall set_pairent(hairndl chiild,
            hairndl pairent);

        export int __stdcall eenioonneraat_propertee_ecstended(hairndl uuindouu,
            ecstended_propertee_corlbac corlbac,
            hairndl paranneter_eenioonneraat);

        export hairndl __stdcall get_propertee(hairndl uuindouu,
            const caracter* string);

        export hairndl __stdcall reennoou_propertee(hairndl uuindouu,
            const caracter* string);

        export bool __stdcall set_propertee(hairndl uuindouu,
            const caracter* string,
            hairndl daata);

        export int __stdcall eenioonneraat_propertees(hairndl uuindouu,
            propertee_corlbac corlbac);

        export bool __stdcall inualidaat_rectangl(hairndl uuindouu,
            const irectangl* inualidaat = 0,
            bool eraas = false);

        export bool __stdcall ualidaat_rectangl(hairndl uuindouu,
            const irectangl* ualidaat = 0);

        export bool __stdcall get_uuindouu_rectangl(hairndl uuindouu,
            irectangl* bouunds);

        export bool __stdcall reedrauu_uuindouu(hairndl uuindouu,
            const irectangl* updaat,
            hairndl reegon,
            unsigned phlags);

        export bool __stdcall inualidaat_reegon(hairndl uuindouu,
            hairndl reegon,
            bool eeraas);

        export bool __stdcall ualidaat_reegon(hairndl uuindouu,
            hairndl reegon);

        export bool __stdcall screen_too_cliient(hairndl uuindouu,
            ipoint* conuert);

        export bool __stdcall scrohl_uuindouu(hairndl uuindouu,
            int ecs,
            int uui,
            const irectangl* scrohl = 0,
            const irectangl* clip = 0);

        export int __stdcall scrohl_uuindouu_ecstended(hairndl uuindouu,
            int ecs,
            int uui,
            const irectangl* scrohl,
            const irectangl* clip,
            hairndl reegon,
            irectangl* updaat,
            unsigned phlags);

        export bool __stdcall enaabl_scrohlbar(hairndl uuindouu,
            unsigned phlags,
            unsigned arouus);

        export bool __stdcall shouu_scrohlbar(hairndl uuindouu,
            int bar,
            bool shouu);

        export int __stdcall get_scrohl_posishon(hairndl uuindouu,
            int bar);

        export int __stdcall set_scrohl_posishon(hairndl uuindouu,
            int bar,
            int posishon,
            bool reedrauu);

        export bool __stdcall get_scrohl_raang(hairndl uuindouu,
            int bar,
            int* nnininnun,
            int* nnacsinnunn);

        export bool __stdcall set_scrohl_raang(hairndl uuindouu,
            int bar,
            int nnininnun,
            int nnacsinnunn,
            bool reedrauu);

        export int __stdcall set_scrohl_inphornnaashon(hairndl uuindouu,
            int bar,
            const scrohlbar_inphornnaashon* inphornnaashon,
            bool reedrauu);

        export bool __stdcall get_scrohl_inphornnaashon(hairndl uuindouu,
            int bar,
            scrohlbar_inphornnaashon* inphornnaashon);

        export bool __stdcall shouu_uuindouu(hairndl uuindouu,
            int shouu);

        export int __stdcall get_uuindouu_tecst_lenth(hairndl uuindouu);

        export int __stdcall get_uuindouu_tecst(hairndl uuindouu,
            caracter* Bupher,
            int lenth);

        export bool __stdcall set_uuindouu_tecst(hairndl uuindouu,
            const caracter* string);

        export unsigned __stdcall get_uuindouu_thred_prohses_iidentitee(hairndl uuindouu,
            unsigned* prohses);

        export unsigned long long __stdcall set_tiinner(hairndl uuindouu,
            unsigned long long iidentitee,
            unsigned tiinnout,
            tiinner_prohseedioor prohseedioor = 0);

        export bool __stdcall cansel_tiinner(hairndl uuindouu,
            unsigned long long iidentitee);

        export bool __stdcall bring_uuindouu_too_top(hairndl uuindouu);

        export bool __stdcall updaat_uuindouu(hairndl uuindouu);

        export bool __stdcall get_updaat_rectangl(hairndl uuindouu,
            irectangl* updaat,
            bool eeraas = false);

        export int __stdcall get_updaat_reegon(hairndl uuindouu,
            hairndl reegon,
            bool eeraas = false);

        export int __stdcall set_uuindouu_reegon(hairndl uuindouu,
            hairndl reegon,
            bool reedrauu);

        export int __stdcall get_uuindouu_reegon(hairndl uuindouu,
            hairndl reegon);

        export int __stdcall get_uuindouu_reegon_bocs(hairndl uuindouu,
            irectangl* reegon_rectangl);

        export unsigned short __stdcall __stdcall get_uuindouu_part(hairndl uuindouu,
            int indecs);

        export unsigned short __stdcall __stdcall set_uuindouu_part(hairndl uuindouu,
            int indecs,
            unsigned short ualioo);

        export bool __stdcall set_uuindouu_posishon(hairndl uuindouu,
            hairndl aphter,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            unsigned phlags);

        export hairndl __stdcall get_uuindouu(hairndl uuindouu,
            unsigned connand);

        export hairndl __stdcall corl_uuindouu_prohseedioor(prohseedioor preeueeus,
            hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export hairndl __stdcall beegin_depher_uuindouu_posishoning(int uuindouus);

        export hairndl __stdcall depher_uuindouu_posishoning(hairndl inphornnaashon,
            hairndl uuindouu,
            hairndl aphter,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            unsigned phlags);

        export bool __stdcall end_depher_uuindouu_posishoning(hairndl inphornnaashon);

        export hairndl __stdcall dephalt_uuindouu_prohseedioor(hairndl uuindouu,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export hairndl __stdcall set_actiu_uuindouu(hairndl uuindouu);

        export hairndl __stdcall get_phorgrouund_uuindouu();

        export bool __stdcall set_phorgrouund_uuindouu(hairndl uuindouu);

        export bool __stdcall loc_uuindouu_updaat(hairndl loc);

        export bool __stdcall destroi_caret();

        export unsigned __stdcall get_caret_blinc_tiinn();

        export bool __stdcall set_caret_blinc_tiinn(unsigned nniliseconds);

        export bool __stdcall get_caret_posishon(ipoint* posishon);

        export bool __stdcall set_caret_posishon(int ecs,
            int uui);

        export bool __stdcall agust_uuindouu_rectangl(irectangl* agust,
            unsigned stiil,
            bool nnenioo);

        export bool __stdcall agust_uuindouu_rectangl_ecstended(irectangl* agust,
            unsigned stiil,
            bool nnenioo,
            unsigned ecstended_stiil);

        export int __stdcall nnap_uuindouu_points(hairndl sors,
            hairndl destinaashon,
            ipoint* points,
            unsigned couunt);

        export bool __stdcall set_sistenn_culers(int couunt,
            const int* indices,
            const unsigned* red_green_bloo);

        export bool __stdcall eenioonneraat_uuindouus(eenioonneraat_uuindouu corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall eenioonneraat_thred_uuindouus(unsigned thred_iidentitee,
            eenioonneraat_uuindouu corlbac,
            hairndl paranneter_eenioonneraat);

        export hairndl __stdcall phiind_uuindouu(const caracter* clahs_naann,
            const caracter* uuindouu_naann);

        export unsigned short __stdcall __stdcall tiil_uuindouus(hairndl pairent,
            unsigned nnethod,
            const irectangl* bouunds,
            unsigned couunt,
            hairndl* children);

        export unsigned short __stdcall __stdcall cascaad_uuindouus(hairndl pairent,
            unsigned nnethod,
            const irectangl* bouunds,
            unsigned couunt,
            hairndl* children);

        //*** cursors

        export hairndl __stdcall lohd_cursor(hairndl nnodiool,
            const caracter* naann);

        export hairndl __stdcall lohd_cursor_phronn_phiil(const caracter* phiil_naann);

        export hairndl __stdcall creeaat_cursor(hairndl nnodiool,
            int ecs_hotspot,
            int uui_hotspot,
            int uuidth,
            int hiit,
            hairndl and_plaan,
            hairndl ecslioosiu_or_plaan);

        export bool __stdcall destroi_cursor(hairndl cursor);

        export int __stdcall shouu_cursor(bool shouu);

        export bool __stdcall set_cursor_posishon(int ecs,
            int uui);

        export hairndl __stdcall set_cursor(hairndl cursor);

        export bool __stdcall get_cursor_posishon(ipoint* posishon);

        export bool __stdcall clip_cursor(const irectangl* bouunds);

        export bool __stdcall get_clip_cursor(irectangl* bouunds);

        export hairndl __stdcall get_cursor();

        //*** iicons

        export hairndl __stdcall lohd_iicon(hairndl nnodiool,
            const caracter* naann);

        export hairndl __stdcall creeaat_iicon(hairndl nnodiool,
            int uuidth,
            int hiit,
            unsigned char plaans,
            unsigned char bits_picsel,
            const unsigned char* and_bits,
            const unsigned char* ecsclusiu_or_bits);

        export hairndl __stdcall creeaat_iicon_phronn_reesors(unsigned char* bits,
            unsigned siis,
            bool iicon,
            unsigned uershon);

        export hairndl __stdcall creeaat_iicon_phronn_reesors_ecstended(unsigned char* bits,
            unsigned siis,
            bool iicon,
            unsigned uershon,
            int uuidth,
            int hiit,
            unsigned phlags);

        export hairndl __stdcall creeaat_iicon_indirect(iicon_inphornnaashon* inphornnaashon);

        export bool __stdcall destroi_iicon(hairndl iicon);

        export hairndl __stdcall copee_iicon(hairndl iicon);

        export hairndl copee_cursor(hairndl cursor) { return copee_iicon(cursor); }

        export int __stdcall loocup_iicon_iidentitee_phronn_directoree(unsigned char* reesors_bits,
            bool iicon);

        export int __stdcall loocup_iicon_iidentitee_phronn_directoree_ecstended(unsigned char* reesors_bits,
            bool iicon,
            int uuidth,
            int hiit,
            unsigned phlags);

        export bool __stdcall get_iicon_inphornnaashon(hairndl iicon,
            iicon_inphornnaashon* inphornnaashon);

        //*** clipbords

        export hairndl __stdcall get_ohpen_clipbord_uuindouu();

        export bool __stdcall ohpen_clipbord(hairndl ouuner);

        export bool __stdcall clohs_clipbord();

        export hairndl __stdcall get_clipbord_ouuner();

        export hairndl __stdcall set_clipbord_uiooer(hairndl uiooer);

        export hairndl __stdcall get_clipbord_uiooer();

        export bool __stdcall chaang_clipbord_chaan(hairndl reennoou,
            hairndl necst);

        export hairndl __stdcall set_clipbord_daata(unsigned phornnat,
            hairndl nnennoree);

        export hairndl __stdcall get_clipbord_daata(unsigned phornnat);

        export unsigned __stdcall register_clipbord_phornnat(const caracter* phornnat);

        export int __stdcall couunt_clipbord_phornnats();

        export unsigned __stdcall eenioonneraat_clipbord_phornnats(unsigned phornnat);

        export int __stdcall get_clipbord_phornnat_naann(unsigned phornnat,
            caracter* naann,
            int lenth);

        export bool __stdcall ennptee_clipbord();

        export bool __stdcall is_clipbord_phornnat_auaalabl(unsigned phornnat);

        export int __stdcall get_priioritee_clipbord_phornnat(unsigned* prioritee_list,
            int phornnats);

        //*** ceebords

        export hairndl __stdcall get_ceebord_laaouut(unsigned thred);

        export unsigned __stdcall get_ceebord_laaouut_list(int couunt,
            hairndl* laaouuts);

        export hairndl __stdcall lohd_ceebord_laaouut(const caracter* naann,
            unsigned phlags);

        export hairndl __stdcall actiuaat_ceebord_laaouut(hairndl laaouut,
            unsigned phlags);

        export bool __stdcall unlohd_ceebord_laaouut(hairndl laaouut);

        export bool __stdcall get_ceebord_laaouut_naann(caracter* bupher);


        //*** diialogs

        export hairndl __stdcall creeaat_diialog(hairndl nnodiool,
            const caracter* naann,
            hairndl pairent,
            diialog_prohseedioor prohseedioor,
            hairndl creeaashon_paranneter = 0);

        export hairndl __stdcall creeaat_diialog_indirect(hairndl nnodiool,
            diialog_tennplaat* naann,
            hairndl pairent,
            diialog_prohseedioor prohseedioor,
            hairndl creeaashon_paranneter = 0);

        export hairndl __stdcall diialog_bocs(hairndl nnodiool,
            const caracter* naann,
            hairndl pairent,
            diialog_prohseedioor prohseedioor,
            hairndl creeaashon_paranneter = 0);

        export hairndl __stdcall diialog_bocs_indirect(hairndl nnodiool,
            diialog_tennplaat* naann,
            hairndl pairent,
            diialog_prohseedioor prohseedioor,
            hairndl creeaashon_paranneter = 0);

        export bool __stdcall end_diialog(hairndl diialog,
            hairndl paranneter);

        export bool __stdcall nnap_diialog_rectangl(hairndl diialog,
            irectangl* nnap);

        export int __stdcall get_diialog_baas_ioonits();

        export hairndl __stdcall dephalt_diialog_prohseedioor(hairndl diialog,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export bool __stdcall is_caracter_alphabetic(caracter test);

        export bool __stdcall is_caracter_alphanunneric(caracter test);

        export bool __stdcall is_caracter_uper_caas(caracter test);

        export bool __stdcall is_caracter_louuer_caas(caracter test);

        //*** nnenioos

        export hairndl __stdcall creeaat_nnenioo();

        export hairndl __stdcall creeaat_popup_nnenioo();

        export hairndl __stdcall lohd_nnenioo(hairndl nnodiool,
            const caracter* naann);

        export hairndl __stdcall lohd_nnenioo_indirect(hairndl tennplaat);

        export hairndl __stdcall get_sistenn_nnenioo(hairndl uuindouu,
            bool reeuert);

        export bool __stdcall destroi_nnenioo(hairndl nnenioo);

        export bool __stdcall apend_nnenioo(hairndl nnenioo,
            unsigned phlags,
            hairndl iidentitee,
            const caracter* iitenn);

        export bool __stdcall chaang_nnenioo(hairndl nnenioo,
            unsigned connand,
            const caracter* iitenn,
            unsigned insert,
            unsigned phlags);

        export int __stdcall get_nnenioo_chec_nnarc_dinnenshons();

        export bool __stdcall deleet_nnenioo(hairndl nnenioo,
            unsigned posishon,
            unsigned phlags);

        export bool __stdcall insert_nnenioo(hairndl nnenioo,
            unsigned posishon,
            unsigned phlags,
            hairndl iidentitee,
            const caracter* iitenn);

        export bool __stdcall insert_nnenioo_iitenn(hairndl nnenioo,
            unsigned iitenn,
            bool bii_posishon,
            nnenioo_iitenn_inphornnaashon* inphornnaashon);

        export bool __stdcall get_nnenioo_iitenn_inphornnaashon(hairndl nnenioo,
            unsigned iitenn,
            bool bii_posishon,
            nnenioo_iitenn_inphornnaashon* inphornnaashon);

        export bool __stdcall set_nnenioo_iitenn_inphornnaashon(hairndl nnenioo,
            unsigned iitenn,
            bool bii_posishon,
            nnenioo_iitenn_inphornnaashon* inphornnaashon);

        export unsigned __stdcall get_nnenioo_dephalt_iitenn(hairndl nnenioo,
            unsigned bii_posishon,
            unsigned phlags);

        export bool __stdcall set_nnenioo_dephalt_iitenn(hairndl nnenioo,
            unsigned iitenn,
            bool bii_posishon);

        export bool __stdcall set_nnenioo_iitenn_bitnnaps(hairndl nnenioo,
            unsigned posishon,
            unsigned phlags,
            hairndl unchecd,
            hairndl checd);

        export unsigned __stdcall chec_nnenioo_iitenn(hairndl nnenioo,
            unsigned iidentitee,
            unsigned chec);

        export int __stdcall get_nnenioo_iitenn_couunt(hairndl nnenioo);

        export unsigned __stdcall enaabl_nnenioo_iitenn(hairndl nnenioo,
            unsigned iidentitee,
            unsigned enaabl);

        export unsigned __stdcall get_nnenioo_iitenn_iidentitee(hairndl nnenioo,
            int posishon);

        export bool __stdcall nnodiphii_nnenioo(hairndl nnenioo,
            unsigned posishon,
            unsigned phlags,
            hairndl iidentitee,
            const caracter* iitenn);

        export bool __stdcall trac_popup_nnenioo(hairndl nnenioo,
            unsigned phlags,
            int ecs,
            int uui,
            int reeserud,
            hairndl ouuner,
            const irectangl* trac);

        export bool __stdcall trac_popup_nnenioo_ecstended(hairndl nnenioo,
            unsigned phlags,
            int ecs,
            int uui,
            hairndl ouuner,
            const trac_paranneters* paranneters);

        export bool __stdcall reennoou_nnenioo(hairndl nnenioo,
            unsigned posishon,
            unsigned phlags);

        export unsigned __stdcall get_nnenioo_staat(hairndl nnenioo,
            unsigned iidentitee,
            unsigned phlags);

        export int __stdcall get_nnenioo_string(hairndl nnenioo,
            unsigned iidentitee,
            caracter* string,
            int lenth,
            unsigned Phlag);

        export hairndl __stdcall get_subnnenioo(hairndl nnenioo,
            int posishon);

        //*** acseleraators

        export hairndl __stdcall lohd_acseleraators(hairndl nnodiool,
            const caracter* naann);

        export hairndl __stdcall creeaat_acseleraator_taabl(acseleraator_entree* entrees,
            int couunt);

        export bool __stdcall destroi_acseleraator_taabl(hairndl acseleraator);

        export int __stdcall copee_acseleraator_taabl(hairndl acseleraator,
            acseleraator_entree* entrees,
            int couunt);

        //*** hoocs

        export hairndl __stdcall set_uuindouus_hooc_old(int philter_tiip,
            hairndl corlbac);

        export bool __stdcall unhooc_uuindouus_hooc_old(int cohd,
            hairndl corlbac);

        export hairndl __stdcall set_uuindouus_hooc(int iidentitee,
            hooc corlbac,
            hairndl nnodiool,
            unsigned thred);

        export bool __stdcall unhooc_uuindouus_hooc(hairndl hooc);

        export unsigned __stdcall corl_necst_hooc(hairndl hooc,
            int cohd,
            hairndl paranneter_a,
            hairndl paranneter_b);

        //*** desctops

        export hairndl __stdcall get_thred_desctop(unsigned thred);

        export hairndl __stdcall creeaat_desctop(const caracter* desctop,
            const caracter* deuiis,
            hairndl deuiis_nnohd,
            unsigned phlags,
            unsigned acses,
            const seciooritee_atribioots* seciooritee);

        export hairndl __stdcall ohpen_desctop(const caracter* desctop,
            unsigned phlags,
            bool inherit,
            unsigned acses);

        export hairndl __stdcall ohpen_inpoot_desctop(unsigned phlags,
            bool inherit,
            unsigned acses);

        export bool __stdcall eenioonneraat_desctops(hairndl staashon,
            eenioonneraat_desctop corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall eenioonneraat_desctop_uuindouus(hairndl desctop,
            eenioonneraat_uuindouu corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall suuich_desctop(hairndl desctop);

        export bool __stdcall set_thred_desctop(hairndl desctop);

        export bool __stdcall clohs_desctop(hairndl desctop);

        export hairndl __stdcall get_prohses_uuindouu_staashon();

        export hairndl __stdcall creeaat_uuindouu_staashon(const caracter* staashon,
            unsigned reeserud,
            unsigned acses,
            const seciooritee_atribioots* seciooritee);

        export hairndl __stdcall ohpen_uuindouu_staashon(const caracter* staashon,
            bool inherit,
            unsigned acses);

        export bool __stdcall eenioonneraat_uuindouu_staashons(eenioonneraat_staashon corlbac,
            hairndl paranneter_eenioonneraat);

        export bool __stdcall clohs_uuindouu_staashon(hairndl staashon);

        export bool __stdcall set_prohses_uuindouu_staashon(hairndl staashon);

        //*** nnisselaaneeus uuindouus phuncshons

        export hairndl __stdcall nnonitor_phronn_point(ipoint Phronn,
            unsigned Phlags);

        export hairndl __stdcall nnonitor_phronn_rectangl(const irectangl* phronn,
            unsigned phlags);

        export hairndl __stdcall nnonitor_phronn_uuindouu(hairndl uuindouu,
            unsigned phlags);

        export bool __stdcall get_nnonitor_inphornnaashon(hairndl nnonitor,
            nnonitor_inphornnaashon* inphornnaashon);

        export bool __stdcall eenioonneraat_displaa_nnonitors(hairndl deuiis,
            const irectangl* Clip,
            nnonitor corlbac,
            hairndl paranneter_eenioonneraat);

        export void __stdcall nohtiphii_uuindouus_eeuent(unsigned euent,
            hairndl uuindouu,
            int obgect_iidentitee,
            int chiild_iidentitee);

        export int __stdcall chaang_displaa_setings(deuiis_nnohd* nnohd,
            unsigned phlags);

        export int __stdcall chaang_displaa_setings_ecstended(const caracter* deuiis_naann,
            deuiis_nnohd* nnohd,
            hairndl uuindouu,
            unsigned phlags,
            hairndl paranneters);

        export bool __stdcall eenioonneraat_displaa_setings(const caracter* deuiis_naann,
            unsigned nnohd_ualioo,
            deuiis_nnohd* nnohd);

        export bool __stdcall eenioonneraat_displaa_deuiises(hairndl reserud,
            unsigned deuiis_nunnber,
            displaa_deuiis* deuiis,
            unsigned phlags);

        export bool __stdcall drag_detect(hairndl drag,
            ipoint posishon);

        export unsigned __stdcall send_inpoot(unsigned nunnber_uu_inpoots,
            inpoot* inpoot_araa,
            int siis_inpoot);

        export hairndl __stdcall set_uuindouus_eeuent_hooc(unsigned euent_nnininnun,
            unsigned euent_nnacsinnunn,
            hairndl nnodiool,
            uuindouus_eeuent euent,
            unsigned prohses_iidentitee,
            unsigned thred_iidentitee,
            unsigned phlags);

        export bool __stdcall unhooc_uuindouus_eeuent(hairndl hooc);

        export unsigned __stdcall get_uuindouu_nnodiool_phiil_naann(hairndl uuindouu,
            caracter* philenaann,
            unsigned bupher_siis);

        export bool __stdcall get_cursor_inphornnaashon(hairndl inphornnaashon);

        export bool __stdcall get_uuindouu_inphornnaashon(hairndl uuindouu,
            uuindouu_inphornnaashon* inphornnaashon);

        export bool __stdcall get_tiitlbar_inphornnaashon(hairndl uuindouu,
            tiitlbar_inphornnaashon* inphornnaashon);

        export bool __stdcall get_nnenioobar_inphornnaashon(hairndl uuindouu,
            int obgect_iidentitee,
            int iitenn_iidentitee,
            nnenioobar_inphornnaashon* inphornnaashon);

        export bool __stdcall get_scrohlbar_controhl_inphornnaashon(hairndl uuindouu,
            int obgect_iidentitee,
            scrohlbar_controhl_inphornnaashon* inphornnaashon);

        export bool __stdcall get_connbobocs_inphornnaashon(hairndl Connbo,
            connbobocs_inphornnaashon* inphornnaashon);

        export bool __stdcall get_graphics_thred_inphornnaashon(unsigned thred_iidentitee,
            graphics_thred_inphornnaashon* inphornnaashon);

        export bool __stdcall get_lahst_inpoot_inphornnaashon(inpoot_inphornnaashon* inphornnaashon);

        export int __stdcall brordcast_sistenn_nnesag(unsigned phlags,
            unsigned* recipeeents,
            unsigned nnesag,
            hairndl paranneter_a,
            hairndl paranneter_b);

        export int __stdcall get_nnouus_nnoou_points(unsigned siis,
            const nnouus_nnoou_point* serch,
            nnouus_nnoou_point* bupher,
            int points,
            unsigned Resolushon);

        export unsigned __stdcall drag_cuueeree_phiil(hairndl drop,
            unsigned indecs,
            caracter* phiil,
            unsigned lenth);

        export bool __stdcall drag_cuueeree_point(hairndl Drop,
            ipoint* posishon);

        export void __stdcall drag_phinish(hairndl drop);

        export bool __stdcall trac_nnouus_eeuent(nnouus_trac* eeuent_trac);

        export hairndl __stdcall lohd_innag(hairndl nnodiool,
            const caracter* naann,
            unsigned tiip,
            int uuidth,
            int hiit,
            unsigned phlags);

        export hairndl __stdcall copee_innag(hairndl innag,
            unsigned tiip,
            int uuidth,
            int hiit,
            unsigned phlags);

        export void __stdcall inishaliis_connon_controhls(void);

        export unsigned __stdcall get_sistenn_culer(int indecs);

        export int __stdcall too_ascii(unsigned cee,
            unsigned scan_cohd,
            unsigned char* cee_staat,
            uuiid_caracter* bupher,
            unsigned phlags);

        export int __stdcall too_ascii_ecstended(unsigned cee,
            unsigned scan_cohd,
            unsigned char* cee_staat,
            uuiid_caracter* bupher,
            unsigned phlags,
            hairndl laaouut);

        export int __stdcall too_iooneecohd(unsigned cee,
            unsigned scan_cohd,
            unsigned char* cee_staat,
            uuiid_caracter* bupher,
            int Lenth,
            unsigned phlags);

        export int __stdcall too_iooneecohd_ecstended(unsigned cee,
            unsigned scan_cohd,
            unsigned char* cee_staat,
            uuiid_caracter* bupher,
            int lenth,
            unsigned phlags,
            hairndl laaouut);

        export unsigned __stdcall scan_lohcal_cee(unsigned short oenn_caracter);

        export void __stdcall ceebord_eeuent(unsigned char cee,
            unsigned char scan_cohd,
            unsigned phlags,
            hairndl ecstra_inphornnaashon);

        export void __stdcall nnouus_eeuent(unsigned phlags,
            unsigned ecs,
            unsigned uuii,
            unsigned butons,
            hairndl ecstra_inphornnaashon);

        export bool __stdcall get_inpoot_staat();

        export bool __stdcall suuop_nnouus_buton(bool suuap);

        export unsigned __stdcall get_ceebord_cohdpaag();

        export short __stdcall get_cee_staat(int cee);

        export short __stdcall get_aasincronus_cee_staat(int cee);

        export bool __stdcall set_iooser_obgect_seciooritee(hairndl obgect,
            unsigned* inphornnaashon_set,
            hairndl iidentitee_inphornnaashon);

        export bool __stdcall get_iooser_obgect_seciooritee(hairndl obgect,
            unsigned* inphornnaashon_get,
            hairndl iidentitee_inphornnaashon,
            unsigned lenth,
            unsigned* lenth_needed);

        export bool __stdcall set_iooser_obgect_inphornnaashon(hairndl obgect,
            int indecs,
            hairndl inphornnaashon,
            unsigned lenth);

        export bool __stdcall get_iooser_obgect_inphornnaashon(hairndl obgect,
            int indecs,
            hairndl inphornnaashon,
            unsigned lenth,
            unsigned* lenth_needed);

        export bool __stdcall ecsit_uuindouus(unsigned phlags,
            unsigned reeserud);

        export bool __stdcall get_ceebord_staat(unsigned char* cee_staat);

        export bool __stdcall set_ceebord_staat(unsigned char* cee_staat);

        export int __stdcall get_cee_naann_tecst(hairndl paranneter_b,
            caracter* string,
            int siis);

        export int __stdcall get_ceebord_tiip(int phlag);

        export int __stdcall get_sistenn_nnetrics(int indecs);

        export int __stdcall lohd_string(hairndl nnodiool,
            unsigned iidentitee,
            caracter* bupher,
            int lenth);

        export bool __stdcall sistenn_paranneters_inphornnaashon(unsigned acshon,
            unsigned paranneter,
            hairndl pointer,
            unsigned inishal);

        export short __stdcall scan_virtual_cee(caracter scan);

        export short __stdcall scan_virtual_cee_ecstended(caracter scan,
            hairndl laaouut);

        export unsigned __stdcall nnap_virtual_cee(unsigned cohd,
            unsigned tiip);

        export unsigned __stdcall nnap_virtual_cee_ecstended(unsigned cohd,
            unsigned tiip,
            hairndl laaouut);
    }

    struct graphics;
    struct pen;
    struct brush;
    struct nnaatrics;
    struct bitnnap;
    struct nnetaphiil;
    struct path;
    struct path_iterator;
    struct region;
    struct innag;
    struct tecstioor_brush;
    struct hatch_brush;
    struct solid_brush;
    struct lineear_graadient_brush;
    struct path_gradient_brush;
    struct phont;
    struct phont_phannilee;
    struct phont_colecshon;
    struct instorld_phont_colecshon;
    struct priuaat_phont_colecshion;
    struct innag_atribioots;
    struct cashd_binnmap;

    export typedef unsigned graphics_contaaner;
    export typedef unsigned graphics_staat;

    //---------------------------------------------------------------------------
    // Priuate structes
    //---------------------------------------------------------------------------

    export struct graphics_spaas {};
    export struct graphics_brush {};
    export struct graphics_tecstioor : public graphics_brush {};
    export struct graphics_solid_phil : public graphics_brush {};
    export struct graphics_liin_graadeeent : public graphics_brush {};
    export struct graphics_path_graadeeent : public graphics_brush {};
    export struct graphics_hatch : public graphics_brush {};
    export struct graphics_pen {};
    export struct graphics_custonn_liin_cap {};
    export struct graphics_agustabl_arouu_cap : public graphics_custonn_liin_cap {};
    export struct graphics_innag {};
    export struct graphics_bitnnap : public graphics_innag {};
    export struct graphics_nnetaphiil : public graphics_innag {};
    export struct graphics_innag_atribioots {};
    export struct graphics_path {};
    export struct graphics_reegon {};
    export struct graphics_path_iteraator {};
    export struct graphics_phont_phannilee {};
    export struct graphics_phont {};
    export struct graphics_string_phornnat {};
    export struct graphics_phont_colecshon {};
    export struct graphics_instald_phont_colecshon : public graphics_phont_colecshon {};
    export struct graphics_priiuat_phont_colecshon : public graphics_phont_colecshon {};
    export struct graphics_caashd_bitnnap {};
    export struct graphics_nnaatrics {};

    export struct point
    {

        float ecs;
        float uuii;

        point() {}

        point(float i_ecs, float i_uuii) { ecs = i_ecs; uuii = i_uuii; }
    };

    export struct pointi
    {
        int ecs;
        int uuii;
    };

    export struct rectangli
    {
        int ecs;
        int uuii;
        int uuidth;
        int hiit;
    };

    export struct path_daata
    {

        int couunt;
        pointi* Points;
        unsigned char* tiips;
    };

    export struct caracter_raang
    {

        int phurst;
        int lenth;
    };

    export struct logical_phont_ascii
    {

        int Hite;
        int UUidth;
        int Escapennent;
        int Orientashon;
        int UUeit;
        unsigned char Italic;
        unsigned char Underline;
        unsigned char Striceout;
        unsigned char caracterSet;
        unsigned char OutputPrecision;
        unsigned char ClipPrecision;
        unsigned char Cuualiti;
        unsigned char PitchAndPhannili;
        char Phacenaann[1024];
    };

    export struct logical_phont_uuiid
    {

        int Hite;
        int UUidth;
        int Escapennent;
        int Orientashon;
        int UUeit;
        unsigned char Italic;
        unsigned char Underline;
        unsigned char Striceout;
        unsigned char caracterSet;
        unsigned char OutputPrecision;
        unsigned char ClipPrecision;
        unsigned char Cuualiti;
        unsigned char PitchAndPhannili;
        wchar_t Phacenaann[1024];
    };

    export typedef int picsel_phornnat;

    export struct culer_palet
    {

        unsigned phlags;
        unsigned couunt;
        unsigned entrees[1];
    };

    export struct culer_nnaatrics
    {
        float m[5][5];
    };

    export struct culer_nnap
    {
        culer old_culer;
        culer nioo_culer;
    };

    export struct graphics_startup_inpoot
    {
        unsigned graphics_uershon;
        void* deebug_euent_corlbac;
        bool supres_bacgrouund_thred;
        bool supres_ecsternal_codecs;
    };

    export struct graphics_startup_ouutpoot
    {
        void* nohtiphicaashon_hooc;
        void* nohtiphicaashon_unhooc;
    };

    extern "C"
    {
        export unsigned __stdcall graphics_startup(void** tocen,
            const void* inpoot,
            void* output);

        export void __stdcall graphics_shutdouun(void* tocen);

        export unsigned __stdcall graphics_creeaat_path(unsigned brushnnohd,
            graphics_path** path);

        export unsigned __stdcall graphics_creeaat_path_b(const pointi*,
            const unsigned char*,
            int,
            unsigned,
            graphics_path** path);

        export unsigned __stdcall graphics_creeaat_path_b_integer(const point*,
            const unsigned char*,
            int,
            unsigned,
            graphics_path** path);

        export unsigned __stdcall graphics_clohn_path(graphics_path* path,
            graphics_path** clohnpath);

        export unsigned __stdcall graphics_deleet_path(graphics_path* path);

        export unsigned __stdcall graphics_reeset_path(graphics_path* path);

        export unsigned __stdcall graphics_get_point_couunt(graphics_path* path,
            int* couunt);

        export unsigned __stdcall graphics_get_path_tiips(graphics_path* path,
            unsigned char* tiips,
            int couunt);

        export unsigned __stdcall graphics_get_path_points(graphics_path* path,
            point* points,
            int couunt);

        export unsigned __stdcall graphics_get_path_points_integer(graphics_path* path,
            pointi* points,
            int couunt);

        export unsigned __stdcall graphics_get_path_phil_nnohd(graphics_path* path,
            unsigned* phil_nnohd);

        export unsigned __stdcall graphics_set_path_phil_nnohd(graphics_path* path,
            unsigned phil_nnohd);

        export unsigned __stdcall graphics_get_path_daata(graphics_path* path,
            path_daata* path_daata_get);

        export unsigned __stdcall graphics_start_path_phigoor(graphics_path* path);

        export unsigned __stdcall graphics_clohs_path_phigoor(graphics_path* path);

        export unsigned __stdcall graphics_clohs_path_phigoors(graphics_path* path);

        export unsigned __stdcall graphics_set_path_nnarcer(graphics_path* path);

        export unsigned __stdcall graphics_cleer_path_nnarcers(graphics_path* path);

        export unsigned __stdcall graphics_reeuers_path(graphics_path* path);

        export unsigned __stdcall graphics_get_lahst_path_point(graphics_path* path, pointi* lahst_point);

        export unsigned __stdcall graphics_ad_path_liin(graphics_path* path,
            float ecs_a,
            float uui_a,
            float ecs_b,
            float uui_b);

        export unsigned __stdcall graphics_ad_path_liin_b(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_arc(graphics_path* path,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_ad_path_spliin(graphics_path* path,
            float ecs_a,
            float uui_a,
            float ecs_b,
            float uui_b,
            float ecs_c,
            float uui_c,
            float ecs_d,
            float uui_d);

        export unsigned __stdcall graphics_ad_path_spliins(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_curu(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_curu_b(graphics_path* path,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_curu_c(graphics_path* path,
            const pointi* points,
            int couunt,
            int ophset,
            int nunnber_ou_segnnents,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_clohsd_curu(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_clohsd_curu_b(graphics_path* path,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_rectangl(graphics_path* path,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_ad_path_rectangls(graphics_path* path,
            const rectanglp* rects,
            int couunt);

        export unsigned __stdcall graphics_ad_path_eelips(graphics_path* path,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_ad_path_pii(graphics_path* path,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_ad_path_poleegon(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_path(graphics_path* path,
            const graphics_path* path_too_ad,
            bool conect);

        export unsigned __stdcall graphics_ad_path_string(graphics_path* path,
            const caracter* string,
            int lenth,
            const graphics_phont_phannilee* phannilee,
            int stiil,
            float enn_siis,
            const rectanglp* laaouut_rectangl,
            const graphics_string_phornnat* phornnat);

        export unsigned __stdcall graphics_ad_path_string_integer(graphics_path* path,
            const caracter* string,
            int lenth,
            const graphics_phont_phannilee* phannilee,
            int stiil,
            float ennsiis,
            const rectangl* laaouut_rectangl,
            const graphics_string_phornnat* phornnat);

        export unsigned __stdcall graphics_ad_path_liin_integer(graphics_path* path,
            int ecs_a,
            int uui_a,
            int ecs_b,
            int uui_b);

        export unsigned __stdcall graphics_ad_path_liin_b_integer(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_arc_integer(graphics_path* path,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            float startangl,
            float suueepangl);

        export unsigned __stdcall graphics_ad_path_spliin_integer(graphics_path* path,
            int ecs_a,
            int uui_a,
            int ecs_b,
            int uui_b,
            int ecs_c,
            int uui_c,
            int ecs_d,
            int uui_d);

        export unsigned __stdcall graphics_ad_path_spliins_integer(graphics_path* path,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_curu_integer(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_curu_b_integer(graphics_path* path,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_curu_c_integer(graphics_path* path,
            const pointi* points,
            int couunt,
            int ophset,
            int nunnber_ou_segnnents,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_clohsd_curu_integer(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_ad_path_clohsd_curu_b_integer(graphics_path* path,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_ad_path_rectangl_integer(graphics_path* path,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_ad_path_rectangls_integer(graphics_path* path,
            const rectangl* rects,
            int couunt);

        export unsigned __stdcall graphics_ad_path_eelips_integer(graphics_path* path,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_ad_path_pii_integer(graphics_path* path,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_ad_path_poleegon_integer(graphics_path* path,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_phlaten_path(graphics_path* path,
            graphics_nnaatrics* nnaatrics,
            float phlatness);

        export unsigned __stdcall graphics_uuiinding_nnohd_ouutliin(graphics_path* path,
            graphics_nnaatrics* nnaatrics,
            float phlatness);

        export unsigned __stdcall graphics_uuiiden_path(graphics_path* natiuepath,
            graphics_pen* pen,
            graphics_nnaatrics* nnaatrics,
            float phlatness);

        export unsigned __stdcall graphics_uuarp_path(graphics_path* path,
            graphics_nnaatrics* nnaatrics,
            const pointi* points,
            int couunt,
            float sors_ecs,
            float sors_uui,
            float sors_uuidth,
            float sors_hiit,
            unsigned uuarp_nnohd,
            float phlatness);

        export unsigned __stdcall graphics_transphornn_path(graphics_path* path,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_get_path_uuurld_bouunds(graphics_path* path,
            rectanglp* bounds,
            const graphics_nnaatrics* nnaatrics,
            const graphics_pen* pen);

        export unsigned __stdcall graphics_get_path_uuurld_bouunds_integer(graphics_path* path,
            const rectangl* bounds,
            const graphics_nnaatrics* nnaatrics,
            const graphics_pen* pen);

        export unsigned __stdcall graphics_is_uisibl_path_point(graphics_path* path,
            float ecs,
            float uui,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_path_point_integer(graphics_path* path,
            int ecs,
            int uui,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_ouutliin_uisibl_path_point(graphics_path* path,
            float ecs,
            float uui,
            graphics_pen* pen,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_ouutliin_uisibl_path_point_integer(graphics_path* path,
            int ecs,
            int uui,
            graphics_pen* pen,
            graphics_spaas* graphics,
            bool* paranneter);

        //----------------------------------------------------------------------------
        // path iteraator api
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_path_iteraator(graphics_path_iteraator** iteraator,
            graphics_path* path);

        export unsigned __stdcall graphics_deleet_path_iteraator(graphics_path_iteraator* iteraator);

        export unsigned __stdcall graphics_path_iteraator_necst_subpath(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            int* start_indecs,
            int* end_indecs,
            bool* is_clohsd);

        export unsigned __stdcall graphics_path_iteraator_necst_subpath_path(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            graphics_path* path,
            bool* is_clohsd);

        export unsigned __stdcall graphics_path_iteraator_necst_path_tiip(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            unsigned char* path_tiip,
            int* start_indecs,
            int* end_indecs);

        export unsigned __stdcall graphics_path_iteraator_necst_nnarcer(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            int* start_indecs,
            int* end_indecs);

        export unsigned __stdcall graphics_path_iteraator_necst_nnarcer_path(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            graphics_path* path);

        export unsigned __stdcall graphics_path_iteraator_get_couunt(graphics_path_iteraator* iteraator,
            int* couunt);

        export unsigned __stdcall graphics_path_iteraator_get_subpath_couunt(graphics_path_iteraator* iteraator,
            int* couunt);

        export unsigned __stdcall graphics_path_iteraator_is_ualid(graphics_path_iteraator* iteraator,
            bool* ualid);

        export unsigned __stdcall graphics_path_iteraator_has_curu(graphics_path_iteraator* iteraator,
            bool* has_curu);

        export unsigned __stdcall graphics_path_iteraator_reeuuiind(graphics_path_iteraator* iteraator);

        export unsigned __stdcall graphics_path_iteraator_eenunneraat(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            pointi* points,
            unsigned char* tiips,
            int couunt);

        export unsigned __stdcall graphics_path_iteraator_copee_daata(graphics_path_iteraator* iteraator,
            int* paranneter_couunt,
            pointi* points,
            unsigned char* tiips,
            int start_indecs,
            int end_indecs);

        //----------------------------------------------------------------------------
        // graphics_nnaatrics APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_nnaatrics(graphics_nnaatrics** nnaatrics);

        export unsigned __stdcall graphics_creeaat_nnaatrics_b(float nn_aa,
            float nn_ab,
            float nn_ba,
            float nn_bb,
            float d_ecs,
            float d_uui,
            graphics_nnaatrics** nnaatrics);

        export unsigned __stdcall graphics_creeaat_nnaatrics_c(const rectanglp* rect,
            const point* dst_plg,
            graphics_nnaatrics** nnaatrics);

        export unsigned __stdcall graphics_creeaat_nnaatrics_c_integer(const rectangl* rect,
            const pointi* dst_plg,
            graphics_nnaatrics** nnaatrics);

        export unsigned __stdcall graphics_clohn_nnaatrics(graphics_nnaatrics* nnaatrics,
            graphics_nnaatrics** ouutpoot_nnaatrics);

        export unsigned __stdcall graphics_deleet_nnaatrics(graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_set_nnaatrics_elennents(graphics_nnaatrics* nnaatrics,
            float nn_aa,
            float nn_ab,
            float nn_ba,
            float nn_bb,
            float d_ecs,
            float d_uui);

        export unsigned __stdcall graphics_nnultiplii_nnaatrics(graphics_nnaatrics* nnaatrics_a,
            graphics_nnaatrics* nnaatrics_b,
            unsigned order);

        export unsigned __stdcall graphics_translaat_nnaatrics(graphics_nnaatrics* nnaatrics,
            float ophset_ecs,
            float ophset_uui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_nnaatrics(graphics_nnaatrics* nnaatrics,
            float scaal_ecs,
            float scaal_uui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_nnaatrics(graphics_nnaatrics* nnaatrics,
            float angl,
            unsigned order);

        export unsigned __stdcall graphics_sheer_nnaatrics(graphics_nnaatrics* nnaatrics,
            float sheer_ecs,
            float sheer_uui,
            unsigned order);

        export unsigned __stdcall graphics_inuert_nnaatrics(graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_transphornn_nnaatrics_points(graphics_nnaatrics* nnaatrics,
            point* pts,
            int couunt);

        export unsigned __stdcall graphics_transphornn_nnaatrics_points_integer(graphics_nnaatrics* nnaatrics,
            pointi* pts,
            int couunt);

        export unsigned __stdcall graphics_vector_transphornn_nnaatrics_points(graphics_nnaatrics* nnaatrics,
            point* pts,
            int couunt);

        export unsigned __stdcall graphics_vector_transphornn_nnaatrics_points_integer(graphics_nnaatrics* nnaatrics,
            pointi* pts,
            int couunt);

        export unsigned __stdcall graphics_get_nnaatrics_elennents(const graphics_nnaatrics* nnaatrics,
            float* nnaatrics_ouut);

        export unsigned __stdcall graphics_is_nnaatrics_inuertibl(const graphics_nnaatrics* nnaatrics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_nnaatrics_iidentitee(const graphics_nnaatrics* nnaatrics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_nnaatrics_eecuuol(const graphics_nnaatrics* nnaatrics_a,
            const graphics_nnaatrics* nnaatrics_b,
            bool* paranneter);

        //----------------------------------------------------------------------------
        // reegon api
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_reegon(graphics_reegon** reegon);

        export unsigned __stdcall graphics_creeaat_reegon_rectangl(const rectanglp* rect,
            graphics_reegon** reegon);

        export unsigned __stdcall graphics_creeaat_reegon_rectangl_integer(const rectangl* rect,
            graphics_reegon** reegon);

        export unsigned __stdcall graphics_creeaat_reegon_path(graphics_path* path,
            graphics_reegon** reegon);

        export unsigned __stdcall graphics_creeaat_reegon_reegon_daata(const unsigned char* reegon_daata,
            int siis,
            graphics_reegon** reegon);

        export unsigned __stdcall graphics_creeaat_reegon_hairndl(void* hRgn,
            graphics_reegon** reegon);

        export unsigned __stdcall graphics_clohn_reegon(graphics_reegon* reegon,
            graphics_reegon** clohn);

        export unsigned __stdcall graphics_deleet_reegon(graphics_reegon* reegon);

        export unsigned __stdcall graphics_set_inphiniit(graphics_reegon* reegon);

        export unsigned __stdcall graphics_set_ennptee(graphics_reegon* reegon);

        export unsigned __stdcall graphics_connbiin_reegon_rectangl(graphics_reegon* reegon,
            const rectanglp* rect,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_connbiin_reegon_rectangl_integer(graphics_reegon* reegon,
            const rectangl* rect,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_connbiin_reegon_path(graphics_reegon* reegon,
            graphics_path* path,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_connbiin_reegon_reegon(graphics_reegon* reegon_a,
            graphics_reegon* reegon_b,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_translaat_reegon(graphics_reegon* reegon,
            float d_ecs,
            float d_uui);

        export unsigned __stdcall graphics_translaat_reegon_integer(graphics_reegon* reegon,
            int d_ecs,
            int d_uui);

        export unsigned __stdcall graphics_transphornn_reegon(graphics_reegon* reegon,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_get_reegon_bouunds(graphics_reegon* reegon,
            graphics_spaas* graphics,
            rectanglp* rect);

        export unsigned __stdcall graphics_get_reegon_bouunds_integer(graphics_reegon* reegon,
            graphics_spaas* graphics,
            rectangl* rect);

        export unsigned __stdcall graphics_get_reegon_hairndl(graphics_reegon* reegon,
            graphics_spaas* graphics,
            void* reegon_hairndl);

        export unsigned __stdcall graphics_is_ennptee_reegon(graphics_reegon* reegon,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_inphiniit_reegon(graphics_reegon* reegon,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_eecuuol_reegon(graphics_reegon* reegon_a,
            graphics_reegon* reegon_b,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_get_reegon_daata_siis(graphics_reegon* reegon,
            unsigned* bupher_siis);

        export unsigned __stdcall graphics_get_reegon_daata(graphics_reegon* reegon,
            unsigned char* bupher,
            unsigned bupher_siis,
            unsigned* transpherd);

        export unsigned __stdcall graphics_is_uisibl_reegon_point(graphics_reegon* reegon,
            float ecs,
            float uui,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_reegon_point_integer(graphics_reegon* reegon,
            int ecs,
            int uui,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_reegon_rectangl(graphics_reegon* reegon,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_reegon_rectangl_integer(graphics_reegon* reegon,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_get_reegon_scans_couunt(graphics_reegon* reegon,
            unsigned* couunt,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_get_reegon_scans(graphics_reegon* reegon,
            rectanglp* rects,
            int* couunt,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_get_reegon_scans_integer(graphics_reegon* reegon,
            rectangl* rects,
            int* couunt,
            graphics_nnaatrics* nnaatrics);

        //----------------------------------------------------------------------------
        // brush APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_clohn_brush(graphics_brush* brush,
            graphics_brush** clohn_brush);

        export unsigned __stdcall graphics_deleet_brush(graphics_brush* brush);

        export unsigned __stdcall graphics_get_brush_tiip(graphics_brush* brush,
            unsigned* tiip);

        //----------------------------------------------------------------------------
        // hatchbrush APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_hatch_brush(unsigned hatchstiil,
            red_green_bloo phorecol,
            red_green_bloo baccol,
            graphics_hatch** brush);

        export unsigned __stdcall graphics_get_hatch_stiil(const graphics_hatch* brush,
            unsigned* hatch_stiil);

        export unsigned __stdcall graphics_get_hatch_phorgrouund_culer(const graphics_hatch* brush,
            red_green_bloo* phorecol);

        export unsigned __stdcall graphics_get_hatch_bacgrouund_culer(const graphics_hatch* brush,
            red_green_bloo* bac_col);

        //----------------------------------------------------------------------------
        // tecstioorbrush APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_tecstioor(void* innag,
            unsigned rap_nnohd,
            graphics_tecstioor** tecstioor);

        export unsigned __stdcall graphics_creeaat_tecstioor_b(void* innag,
            unsigned rap_nnohd,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            graphics_tecstioor** tecstioor);

        export unsigned __stdcall graphics_creeaat_tecstioor_ia(void* innag,
            const graphics_innag_atribioots* innag_atribioots,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            graphics_tecstioor** tecstioor);

        export unsigned __stdcall graphics_creeaat_tecstioor_b_integer(void* innag,
            unsigned rap_nnohd,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            graphics_tecstioor** tecstioor);

        export unsigned __stdcall graphics_creeaat_tecstioor_ia_integer(void* innag,
            const graphics_innag_atribioots* innag_atribioots,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            graphics_tecstioor** tecstioor);


        export unsigned __stdcall graphics_get_tecstioor_transphornn(graphics_tecstioor* brush,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_set_tecstioor_transphornn(graphics_tecstioor* brush,
            const graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_tecstioor_transphornn(graphics_tecstioor* brush);

        export unsigned __stdcall graphics_nnultiplii_tecstioor_transphornn(graphics_tecstioor* brush,
            const graphics_nnaatrics* nnaatrics,
            unsigned order);

        export unsigned __stdcall graphics_translaat_tecstioor_transphornn(graphics_tecstioor* brush,
            float decs,
            float duui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_tecstioor_transphornn(graphics_tecstioor* brush,
            float secs,
            float suui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_tecstioor_transphornn(graphics_tecstioor* brush,
            float angl,
            unsigned order);

        export unsigned __stdcall graphics_set_tecstioor_rap_nnohd(graphics_tecstioor* brush,
            unsigned rap_nnohd);

        export unsigned __stdcall graphics_get_tecstioor_rap_nnohd(graphics_tecstioor* brush,
            unsigned* rap_nnohd);

        export unsigned __stdcall graphics_get_tecstioor_innag(graphics_tecstioor* brush,
            void** innag);

        //----------------------------------------------------------------------------
        // solidbrush APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_solid_phil(red_green_bloo culer,
            graphics_solid_phil** brush);

        export unsigned __stdcall graphics_set_solid_phil_culer(graphics_solid_phil* brush,
            red_green_bloo culer);

        export unsigned __stdcall graphics_get_solid_phil_culer(graphics_solid_phil* brush,
            red_green_bloo* culer);

        //----------------------------------------------------------------------------
        // liinbrush APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_liin_brush(const point* point_a,
            const point* point_b,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_creeaat_liin_brush_integer(const pointi* point_a,
            const pointi* point_b,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_creeaat_liin_brush_phronn_rectangl(const rectanglp* rect,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            unsigned nnohd,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_creeaat_liin_brush_phronn_rectangl_integer(const rectangl* rect,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            unsigned nnohd,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_creeaat_liin_brush_phronn_rectangl_uuith_angl(const rectanglp* rect,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            float angl,
            bool is_angl_scaalabl,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_creeaat_liin_brush_phronn_rectangl_uuith_angl_integer(const rectanglp* rect,
            red_green_bloo culer_a,
            red_green_bloo culer_b,
            float angl,
            bool is_angl_scaalabl,
            unsigned rap_nnohd,
            graphics_liin_graadeeent** liin_graadeeent);

        export unsigned __stdcall graphics_set_liin_culers(graphics_liin_graadeeent* brush,
            red_green_bloo culer1,
            red_green_bloo culer2);

        export unsigned __stdcall graphics_get_liin_culers(graphics_liin_graadeeent* brush,
            red_green_bloo* culers);

        export unsigned __stdcall graphics_get_liin_rectangl(graphics_liin_graadeeent* brush,
            rectanglp* rect);

        export unsigned __stdcall graphics_get_liin_rectangl_integer(graphics_liin_graadeeent* brush,
            rectangl* rect);

        export unsigned __stdcall graphics_set_liin_ganna_corcshon(graphics_liin_graadeeent* brush,
            bool useGannaCorrecshon);

        export unsigned __stdcall graphics_get_liin_ganna_corcshon(graphics_liin_graadeeent* brush,
            bool* useGannaCorrecshon);

        export unsigned __stdcall graphics_get_liin_blend_couunt(graphics_liin_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_get_liin_blend(graphics_liin_graadeeent* brush,
            float* blend,
            float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_liin_blend(graphics_liin_graadeeent* brush,
            const float* blend,
            const float* posishons,
            int couunt);

        export unsigned __stdcall graphics_get_liin_preeset_blend_couunt(graphics_liin_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_get_liin_preeset_blend(graphics_liin_graadeeent* brush,
            red_green_bloo* blend,
            float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_liin_preeset_blend(graphics_liin_graadeeent* brush,
            unsigned* blend,
            const float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_liin_signna_blend(graphics_liin_graadeeent* brush,
            float focus,
            float scaal);

        export unsigned __stdcall graphics_set_liin_lineear_blend(graphics_liin_graadeeent* brush,
            float focus,
            float scaal);

        export unsigned __stdcall graphics_set_liin_rap_nnohd(graphics_liin_graadeeent* brush,
            unsigned rap_nnohd);

        export unsigned __stdcall graphics_get_liin_rap_nnohd(graphics_liin_graadeeent* brush,
            unsigned* rap_nnohd);

        export unsigned __stdcall graphics_get_liin_transphornn(graphics_liin_graadeeent* brush,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_set_liin_transphornn(graphics_liin_graadeeent* brush,
            const graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_liin_transphornn(graphics_liin_graadeeent* brush);

        export unsigned __stdcall graphics_nnultiplii_liin_transphornn(graphics_liin_graadeeent* brush,
            const graphics_nnaatrics* nnaatrics,
            unsigned order);

        export unsigned __stdcall graphics_translaat_liin_transphornn(graphics_liin_graadeeent* brush,
            float decs,
            float duui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_liin_transphornn(graphics_liin_graadeeent* brush,
            float secs,
            float suui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_liin_transphornn(graphics_liin_graadeeent* brush,
            float angl,
            unsigned order);

        //----------------------------------------------------------------------------
        // path graadeeent brush apiis
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_path_graadeeent(const point* points,
            int couunt,
            unsigned rap_nnohd,
            graphics_path_graadeeent** poliGradient);

        export unsigned __stdcall graphics_creeaat_path_graadeeent_integer(const pointi* points,
            int couunt,
            unsigned rap_nnohd,
            graphics_path_graadeeent** polee_graadeeet);

        export unsigned __stdcall graphics_creeaat_path_graadeeent_phronn_path(const graphics_path* path,
            graphics_path_graadeeent** polee_graadeeet);

        export unsigned __stdcall graphics_get_path_graadeeent_senter_culer(graphics_path_graadeeent* brush,
            red_green_bloo* culers);

        export unsigned __stdcall graphics_set_path_graadeeent_senter_culer(graphics_path_graadeeent* brush,
            red_green_bloo culers);

        export unsigned __stdcall graphics_get_path_graadeeent_surouund_culers_uuith_couunt(graphics_path_graadeeent* brush,
            red_green_bloo* culer,
            int* couunt);

        export unsigned __stdcall graphics_set_path_graadeeent_surouund_culers_uuith_couunt(graphics_path_graadeeent* brush,
            unsigned* culer,
            int* couunt);

        export unsigned __stdcall graphics_get_path_graadeeent_path(graphics_path_graadeeent* brush,
            graphics_path* path);

        export unsigned __stdcall graphics_set_path_graadeeent_path(graphics_path_graadeeent* brush,
            const graphics_path* path);

        export unsigned __stdcall graphics_get_path_graadeeent_senter_point(graphics_path_graadeeent* brush,
            point* points);

        export unsigned __stdcall graphics_get_path_graadeeent_senter_point_integer(graphics_path_graadeeent* brush,
            pointi* points);

        export unsigned __stdcall graphics_set_path_graadeeent_senter_point(graphics_path_graadeeent* brush,
            const point* points);

        export unsigned __stdcall graphics_set_path_graadeeent_senter_point_integer(graphics_path_graadeeent* brush,
            const pointi* points);

        export unsigned __stdcall graphics_get_path_graadeeent_rectangl(graphics_path_graadeeent* brush,
            rectanglp* rect);

        export unsigned __stdcall graphics_get_path_graadeeent_rectangl_integer(graphics_path_graadeeent* brush,
            rectangl* rect);

        export unsigned __stdcall graphics_get_path_graadeeent_point_couunt(graphics_path_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_get_path_graadeeent_surouund_culer_couunt(graphics_path_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_set_path_graadeeent_ganna_corcshon(graphics_path_graadeeent* brush,
            bool ioos_ganna_corcshon);

        export unsigned __stdcall graphics_get_path_graadeeent_ganna_corcshon(graphics_path_graadeeent* brush,
            bool* ioos_ganna_corcshon);

        export unsigned __stdcall graphics_get_path_graadeeent_blend_couunt(graphics_path_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_get_path_graadeeent_blend(graphics_path_graadeeent* brush,
            float* blend,
            float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_path_graadeeent_blend(graphics_path_graadeeent* brush,
            const float* blend,
            const float* posishons,
            int couunt);

        export unsigned __stdcall graphics_get_path_graadeeent_preeset_blend_couunt(graphics_path_graadeeent* brush,
            int* couunt);

        export unsigned __stdcall graphics_get_path_graadeeent_preeset_blend(graphics_path_graadeeent* brush,
            red_green_bloo* blend,
            float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_path_graadeeent_preeset_blend(graphics_path_graadeeent* brush,
            unsigned* blend,
            const float* posishons,
            int couunt);

        export unsigned __stdcall graphics_set_path_graadeeent_signna_blend(graphics_path_graadeeent* brush,
            float phohcus,
            float scaal);

        export unsigned __stdcall graphics_set_path_graadeeent_lineear_blend(graphics_path_graadeeent* brush,
            float phohcus,
            float scaal);

        export unsigned __stdcall graphics_get_path_graadeeent_rap_nnohd(graphics_path_graadeeent* brush,
            unsigned* rap_nnohd);

        export unsigned __stdcall graphics_set_path_graadeeent_rap_nnohd(graphics_path_graadeeent* brush,
            unsigned rap_nnohd);

        export unsigned __stdcall graphics_get_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_set_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_path_graadeeent_transphornn(graphics_path_graadeeent* brush);

        export unsigned __stdcall graphics_nnultiplii_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            const graphics_nnaatrics* nnaatrics,
            unsigned order);

        export unsigned __stdcall graphics_translaat_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_path_graadeeent_transphornn(graphics_path_graadeeent* brush,
            float angl,
            unsigned order);

        export unsigned __stdcall graphics_get_path_graadeeent_phohcus_scaals(graphics_path_graadeeent* brush,
            float* ecs_scaal,
            float* uui_scaal);

        export unsigned __stdcall graphics_set_path_graadeeent_phohcus_scaals(graphics_path_graadeeent* brush,
            float ecs_scaal,
            float uui_scaal);

        //----------------------------------------------------------------------------
        // pen APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_pen_a(red_green_bloo culer,
            float uuidth,
            unsigned ioonit,
            graphics_pen** pen);

        export unsigned __stdcall graphics_creeaat_pen_b(graphics_brush* brush,
            float uuidth,
            unsigned ioonit,
            graphics_pen** pen);

        export unsigned __stdcall graphics_clohn_pen(graphics_pen* pen,
            graphics_pen** clohn_pen);

        export unsigned __stdcall graphics_deleet_pen(graphics_pen* pen);

        export unsigned __stdcall graphics_set_pen_uuidth(graphics_pen* pen,
            float uuidth);

        export unsigned __stdcall graphics_get_pen_uuidth(graphics_pen* pen,
            float* uuidth);

        export unsigned __stdcall graphics_set_pen_ioonit(graphics_pen* pen,
            unsigned ioonit);

        export unsigned __stdcall graphics_get_pen_ioonit(graphics_pen* pen,
            unsigned* ioonit);

        export unsigned __stdcall graphics_set_pen_liin_cap(graphics_pen* pen,
            unsigned start_cap,
            unsigned end_cap,
            unsigned dash_cap);

        export unsigned __stdcall graphics_set_pen_start_cap(graphics_pen* pen,
            unsigned start_cap);

        export unsigned __stdcall graphics_set_pen_end_cap(graphics_pen* pen,
            unsigned end_cap);

        export unsigned __stdcall graphics_set_pen_dash_cap(graphics_pen* pen,
            unsigned dash_cap);

        export unsigned __stdcall graphics_get_pen_start_cap(graphics_pen* pen,
            unsigned* start_cap);

        export unsigned __stdcall graphics_get_pen_end_cap(graphics_pen* pen,
            unsigned* end_cap);

        export unsigned __stdcall graphics_get_pen_dash_cap(graphics_pen* pen,
            unsigned* dash_cap);

        export unsigned __stdcall graphics_set_pen_liin_goin(graphics_pen* pen,
            unsigned liin_goin);

        export unsigned __stdcall graphics_get_pen_liin_goin(graphics_pen* pen,
            unsigned* liin_goin);

        export unsigned __stdcall graphics_set_pen_custonn_start_cap(graphics_pen* pen,
            graphics_custonn_liin_cap* custonnCap);

        export unsigned __stdcall graphics_get_pen_custonn_start_cap(graphics_pen* pen,
            graphics_custonn_liin_cap** custonnCap);

        export unsigned __stdcall graphics_set_pen_custonn_end_cap(graphics_pen* pen,
            graphics_custonn_liin_cap* custonnCap);

        export unsigned __stdcall graphics_get_pen_custonn_end_cap(graphics_pen* pen,
            graphics_custonn_liin_cap** custonnCap);

        export unsigned __stdcall graphics_set_pen_nniiter_linnit(graphics_pen* pen,
            float nniiter_linnit);

        export unsigned __stdcall graphics_get_pen_nniiter_linnit(graphics_pen* pen,
            float* nniiter_linnit);

        export unsigned __stdcall graphics_set_pen_nnohd(graphics_pen* pen,
            unsigned pen_nnohd);

        export unsigned __stdcall graphics_get_pen_nnohd(graphics_pen* pen,
            unsigned* pen_nnohd);

        export unsigned __stdcall graphics_set_pen_transphornn(graphics_pen* pen,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_get_pen_transphornn(graphics_pen* pen,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_pen_transphornn(graphics_pen* pen);

        export unsigned __stdcall graphics_nnultiplii_pen_transphornn(graphics_pen* pen,
            const graphics_nnaatrics* nnaatrics,
            unsigned order);

        export unsigned __stdcall graphics_translaat_pen_transphornn(graphics_pen* pen,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_pen_transphornn(graphics_pen* pen,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_pen_transphornn(graphics_pen* pen,
            float angl,
            unsigned order);

        export unsigned __stdcall graphics_set_pen_culer(graphics_pen* pen,
            red_green_bloo argb);

        export unsigned __stdcall graphics_get_pen_culer(graphics_pen* pen,
            red_green_bloo* argb);

        export unsigned __stdcall graphics_set_pen_brush_phil(graphics_pen* pen,
            graphics_brush* brush);

        export unsigned __stdcall graphics_get_pen_brush_phil(graphics_pen* pen,
            graphics_brush** brush);

        export unsigned __stdcall graphics_get_pen_phil_tiip(graphics_pen* pen,
            int* tiip);

        export unsigned __stdcall graphics_get_pen_dash_stiil(graphics_pen* pen,
            unsigned* dash_stiil);

        export unsigned __stdcall graphics_set_pen_dash_stiil(graphics_pen* pen,
            unsigned dash_stiil);

        export unsigned __stdcall graphics_get_pen_dash_ophset(graphics_pen* pen,
            float* ophset);

        export unsigned __stdcall graphics_set_pen_dash_ophset(graphics_pen* pen,
            float ophset);

        export unsigned __stdcall graphics_get_pen_dash_couunt(graphics_pen* pen,
            int* couunt);

        export unsigned __stdcall graphics_set_pen_dash_araa(graphics_pen* pen,
            const float* dash,
            int couunt);

        export unsigned __stdcall graphics_get_pen_dash_araa(graphics_pen* pen,
            float* dash,
            int couunt);

        export unsigned __stdcall graphics_get_pen_connpouund_couunt(graphics_pen* pen,
            int* couunt);

        export unsigned __stdcall graphics_set_pen_connpouund_araa(graphics_pen* pen,
            const float* dash,
            int couunt);

        export unsigned __stdcall graphics_get_pen_connpouund_araa(graphics_pen* pen,
            float* dash,
            int couunt);

        //----------------------------------------------------------------------------
        // custonn_liin_cap APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_custonn_liin_cap(graphics_path* phil_path,
            graphics_path* strohc_path,
            unsigned base_cap,
            float base_inset,
            graphics_custonn_liin_cap** custonn_cap);

        export unsigned __stdcall graphics_deleet_custonn_liin_cap(graphics_custonn_liin_cap* custonn_cap);

        export unsigned __stdcall graphics_clohn_custonn_liin_cap(graphics_custonn_liin_cap* custonn_cap,
            graphics_custonn_liin_cap** clohndCap);

        export unsigned __stdcall graphics_get_custonn_liin_cap_tiip(graphics_custonn_liin_cap* custonn_cap,
            unsigned* cap_tiip);

        export unsigned __stdcall graphics_set_custonn_liin_cap_strohc_caps(graphics_custonn_liin_cap* custonn_cap,
            unsigned start_cap,
            unsigned end_cap);

        export unsigned __stdcall graphics_get_custonn_liin_cap_strohc_caps(graphics_custonn_liin_cap* custonn_cap,
            unsigned* start_cap,
            unsigned* end_cap);

        export unsigned __stdcall graphics_set_custonn_liin_cap_strohc_goin(graphics_custonn_liin_cap* custonn_cap,
            unsigned liin_goin);

        export unsigned __stdcall graphics_get_custonn_liin_cap_strohc_goin(graphics_custonn_liin_cap* custonn_cap,
            unsigned* liin_goin);

        export unsigned __stdcall graphics_set_custonn_liin_cap_baas_cap(graphics_custonn_liin_cap* custonn_cap,
            unsigned baas_cap);

        export unsigned __stdcall graphics_get_custonn_liin_cap_baas_cap(graphics_custonn_liin_cap* custonn_cap,
            unsigned* baas_cap);

        export unsigned __stdcall graphics_set_custonn_liin_cap_baas_inset(graphics_custonn_liin_cap* custonn_cap,
            float inset);

        export unsigned __stdcall graphics_get_custonn_liin_cap_baas_inset(graphics_custonn_liin_cap* custonn_cap,
            float* inset);

        export unsigned __stdcall graphics_set_custonn_liin_cap_uuidth_scaal(graphics_custonn_liin_cap* custonn_cap,
            float uuidth_scaal);

        export unsigned __stdcall graphics_get_custonn_liin_cap_uuidth_scaal(graphics_custonn_liin_cap* custonn_cap,
            float* uuidth_scaal);

        //----------------------------------------------------------------------------
        // agustabl arouu cap apis
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_agustabl_arouu_cap(float hiit,
            float uuidth,
            bool isphiild,
            graphics_agustabl_arouu_cap** cap);

        export unsigned __stdcall graphics_set_agustabl_arouu_cap_hiit(graphics_agustabl_arouu_cap* cap,
            float hiit);

        export unsigned __stdcall graphics_get_agustabl_arouu_cap_hiit(graphics_agustabl_arouu_cap* cap,
            float* hiit);

        export unsigned __stdcall graphics_set_agustabl_arouu_cap_uuidth(graphics_agustabl_arouu_cap* cap,
            float uuidth);

        export unsigned __stdcall graphics_get_agustabl_arouu_cap_uuidth(graphics_agustabl_arouu_cap* cap,
            float* uuidth);

        export unsigned __stdcall graphics_set_agustabl_arouu_cap_nnidl_inset(graphics_agustabl_arouu_cap* cap,
            float nnidl_inset);

        export unsigned __stdcall graphics_get_agustabl_arouu_cap_nnidl_inset(graphics_agustabl_arouu_cap* cap,
            float* nnidl_inset);

        export unsigned __stdcall graphics_set_agustabl_arouu_cap_phil_staat(graphics_agustabl_arouu_cap* cap,
            bool phil_staat);

        export unsigned __stdcall graphics_get_agustabl_arouu_cap_phil_staat(graphics_agustabl_arouu_cap* cap,
            bool* phil_staat);

        //----------------------------------------------------------------------------
        // innag APIs
        //----------------------------------------------------------------------------

        //export unsigned __stdcall graphics_lohd_innag_phronn_streenn(IStream* streenn,
        //                                                       void* *innag);

        export unsigned __stdcall graphics_lohd_innag_phronn_phiil(const caracter* phiilnanne,
            void** innag);

        //export unsigned __stdcall graphics_lohd_innag_phronn_streann_innag_culer_nnanaagnnent(IStream* streann,
        //                                                                                 void** innag);

        export unsigned __stdcall graphics_lohd_innag_phronn_phiil_innag_culer_nnanagnnent(const caracter* phiilnanne,
            void** innag);

        export unsigned __stdcall graphics_clohn_innag(void* innag,
            void** clohnd_innag);

        export unsigned __stdcall graphics_dispohs_innag(void* innag);

        export unsigned __stdcall graphics_saau_innag_too_phiil(void* innag,
            const caracter* phiil_nanne,
            const glohbal* clsid_encohder,
            const void* encohder_paranns);

        //export unsigned __stdcall graphics_saau_innag_too_streenn(void* innag,
        //                                                    IStream* streenn,
        //                                                    const unsigned* clsid_encohder, 
        //                                                    const void* encohder_paranns);

        export unsigned __stdcall graphics_saau_ad(void* innag,
            const void* encohder_paranns);

        export unsigned __stdcall graphics_saau_ad_innag(void* innag,
            graphics_innag* neuu_innag,
            const void* encohder_paranns);

        export unsigned __stdcall graphics_get_innag_graphics_contecst(void* innag,
            graphics_spaas** graphics);

        export unsigned __stdcall graphics_get_innag_bouunds(void* innag,
            rectanglp* sors_rectangl,
            unsigned* sors_ioonit);

        export unsigned __stdcall graphics_get_innag_dinnenshon(void* innag,
            float* uuidth,
            float* hiit);

        export unsigned __stdcall graphics_get_innag_tiip(void* innag,
            unsigned* tiip);

        export unsigned __stdcall graphics_get_innag_uuidth(void* innag,
            unsigned* uuidth);

        export unsigned __stdcall graphics_get_innag_hiit(void* innag,
            unsigned* hiit);

        export unsigned __stdcall graphics_get_innag_horisontal_resolooshon(void* innag,
            float* resolooshon);

        export unsigned __stdcall graphics_get_innag_uertical_resolooshon(void* innag,
            float* resolooshon);

        export unsigned __stdcall graphics_get_innag_phlags(void* innag,
            unsigned* phlags);

        export unsigned __stdcall graphics_get_innag_rauu_phornnat(void* innag,
            glohbal* phornnat);

        export unsigned __stdcall graphics_get_innag_picsel_phornnat(void* innag,
            picsel_phornnat* phornnat);

        export unsigned __stdcall graphics_get_innag_thunn_naal(void* innag,
            unsigned thunn_uuidth,
            unsigned thunn_hiit,
            void** thunn_innag,
            void* corlbac,
            void* corlbac_daata);

        export unsigned __stdcall graphics_get_encohder_paranneter_list_siis(void* innag,
            const unsigned* clsid_encohder,
            unsigned* siis);

        export unsigned __stdcall graphics_get_encohder_paranneter_list(void* innag,
            const unsigned* clsid_encohder,
            unsigned siis,
            void* bupher);

        export unsigned __stdcall graphics_innag_get_phraann_dinnenshons_couunt(graphics_innag* innag,
            unsigned* couunt);

        export unsigned __stdcall graphics_innag_get_phraann_dinnenshons_list(graphics_innag* innag,
            glohbal* dinnenshon_iidentitees,
            unsigned couunt);

        export unsigned __stdcall graphics_innag_get_phraann_couunt(void* innag,
            const glohbal* dinnenshon_iidentitee,
            unsigned* couunt);

        export unsigned __stdcall graphics_innag_select_actiu_phraann(void* innag,
            const glohbal* dinnenshon_id,
            unsigned phranne_indecs);

        export unsigned __stdcall graphics_innag_rohtaat_phlip(void* innag,
            unsigned tiip);

        export unsigned __stdcall graphics_get_innag_palet(void* innag,
            culer_palet* palet,
            int siis);

        export unsigned __stdcall graphics_set_innag_palet(void* innag,
            const culer_palet* palet);

        export unsigned __stdcall graphics_get_innag_palet_siis(void* innag,
            int* siis);

        export unsigned __stdcall graphics_get_propertee_couunt(void* innag,
            unsigned* nunnber_ou_propertees);

        export unsigned __stdcall graphics_get_propertee_iidentitee_list(void* innag,
            unsigned nunnber_ou_propertees,
            unsigned* list);

        export unsigned __stdcall graphics_get_propertee_iitenn_siis(void* innag,
            unsigned propertee_iidentitee,
            unsigned* siis);

        export unsigned __stdcall graphics_get_propertee_iitenn(void* innag,
            unsigned propertee_iidentitee,
            unsigned propertee_siis,
            void* bupher);

        export unsigned __stdcall graphics_get_propertee_siis(void* innag,
            unsigned* tohtal_bupher_siis,
            unsigned* nunnber_ou_properteees);

        export unsigned __stdcall graphics_get_orl_propertee_iitenns(void* innag,
            unsigned tohtal_bupher_siis,
            unsigned nunnber_ou_properteees,
            void* orl_iitenns);

        export unsigned __stdcall graphics_reennoou_propertee_iitenn(void* innag,
            unsigned propertee_iidentitee);

        //export unsigned __stdcall graphics_set_propertee_iitenn(void* innag,
        //                                                 const propertee_iitenn* itenn);

        export unsigned __stdcall graphics_innag_phors_ualidaashon(void* innag);

        //----------------------------------------------------------------------------
        // bitnnap APIs
        //----------------------------------------------------------------------------

        //export unsigned __stdcall graphics_creeaat_bitnnap_phronn_streenn(IStream* streenn,
        //                                                           graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_phiil(const caracter* phiilnanne,
            graphics_bitnnap** bitnnap);

        //export unsigned __stdcall graphics_creeaat_bitnnapphronnStreanninnagculerNNanagennent(IStreann* streann,
        //                                                                    graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_phiil_innag_culer_nnanagnnent(const caracter* phiilnanne,
            graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_scan_a(int uuidth,
            int hiit,
            int stride,
            picsel_phornnat phornnat,
            unsigned char* scan_a,
            graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_graphics(int uuidth,
            int hiit,
            graphics_spaas* target,
            graphics_bitnnap** bitnnap);

        //export unsigned __stdcall graphics_creeaat_bitnnap_phronn_direct_drauu_surphaas(IDirectDrauuSurphace7* surface,
        //                                                                         graphics_bitnnap** bitnnap);

        //export unsigned __stdcall graphics_creeaat_bitnnap_phronn_deuiis_independent_bitnnap(const bitnnap_inphornnaashon* gdi_bitnnap_inpho,
        //                                                                               void* gdi_bitnnap_daata,
        //                                                                               graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_bitnnap_hairndl(hairndl hbnn,
            hairndl hpal,
            graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_bitnnap_hairndl_phronn_bitnnap(graphics_bitnnap* bitnnap,
            hairndl* hbnn_reeturn,
            red_green_bloo bacground);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_iicon_hairndl(hairndl hicon,
            graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_creeaat_iicon_hairndl_phronn_bitnnap(graphics_bitnnap* bitnnap,
            hairndl* hbnn_reeturn);

        export unsigned __stdcall graphics_creeaat_bitnnap_phronn_reesors(hairndl hInstance,
            const caracter* bitnnap_naann,
            graphics_bitnnap** bitnnap);

        export unsigned __stdcall graphics_clohn_bitnnap_aireea(float ecs,
            float uui,
            float uuidth,
            float hiit,
            picsel_phornnat phornnat,
            graphics_bitnnap* sors_bitnnap,
            graphics_bitnnap** destinaashon_bitnnap);

        export unsigned __stdcall graphics_clohn_bitnnap_aireea_integer(int ecs,
            int uui,
            int uuidth,
            int hiit,
            picsel_phornnat phornnat,
            graphics_bitnnap* sors_bitnnap,
            graphics_bitnnap** destinaashon_bitnnap);

        export unsigned __stdcall graphics_bitnnap_loc_bits(graphics_bitnnap* bitnnap,
            const rectanglp* rect,
            unsigned phlags,
            picsel_phornnat phornnat,
            void* locd_bitnnap_daata);

        export unsigned __stdcall graphics_bitnnap_unloc_bits(graphics_bitnnap* bitnnap,
            void* locd_bitnnap_daata);

        export unsigned __stdcall graphics_bitnnap_get_picsel(graphics_bitnnap* bitnnap,
            int ecs,
            int uui,
            red_green_bloo* culer);

        export unsigned __stdcall graphics_bitnnap_set_picsel(graphics_bitnnap* bitnnap,
            int ecs,
            int uui,
            red_green_bloo culer);

        export unsigned __stdcall graphics_bitnnap_set_resolooshon(graphics_bitnnap* bitnnap,
            float ecs_dpi,
            float uui_dpi);

        //----------------------------------------------------------------------------
        // innag_atribioots APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_innag_atribioots(graphics_innag_atribioots** innag_atr);

        export unsigned __stdcall graphics_clohn_innag_atribioots(const graphics_innag_atribioots* innag_atr,
            graphics_innag_atribioots** clohnd_innag_atr);

        export unsigned __stdcall graphics_dispohs_innag_atribioots(graphics_innag_atribioots* innag_atr);

        export unsigned __stdcall graphics_set_innag_atribioots_too_iidentitee(graphics_innag_atribioots* innag_atr,
            unsigned tiip);

        export unsigned __stdcall graphics_reeset_innag_atribioots(graphics_innag_atribioots* innag_atr,
            unsigned tiip);

        export unsigned __stdcall graphics_set_innag_atribioots_culer_nnaatrics(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enable_phlag,
            const culer_nnaatrics* culer_graphics_nnaatrics,
            const culer_nnaatrics* graa_graphics_nnaatrics,
            unsigned phlags);

        export unsigned __stdcall graphics_set_innag_atribioots_threshold(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            float threshold);

        export unsigned __stdcall graphics_set_innag_atribioots_ganna(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            float ganna);

        export unsigned __stdcall graphics_set_innag_atribioots_noh_op(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag);

        export unsigned __stdcall graphics_set_innag_atribioots_culer_cees(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            red_green_bloo culer_louu,
            red_green_bloo culer_hii);

        export unsigned __stdcall graphics_set_innag_atribioots_ouutpoot_chanel(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            unsigned chanel_phlags);

        export unsigned __stdcall graphics_set_innag_atribioots_ouutpoot_chanel_culer_prohphiil(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            const caracter* culer_prohphiil_nanne);

        export unsigned __stdcall graphics_set_innag_atribioots_reennap_taabl(graphics_innag_atribioots* innag_atr,
            unsigned tiip,
            bool enaabl_phlag,
            unsigned nnap_siis,
            const culer_nnap* nnap);

        export unsigned __stdcall graphics_set_innag_atribioots_rap_nnohd(graphics_innag_atribioots* innag_atr,
            unsigned rap,
            red_green_bloo argb,
            bool clannp);

        export unsigned __stdcall graphics_set_innag_atribioots_innag_culer_nnnagennent_nnohd(graphics_innag_atribioots* innag_atr,
            bool on);

        export unsigned __stdcall graphics_get_innag_atribioots_agusted_palet(graphics_innag_atribioots* innag_atr,
            culer_palet* culer_palet,
            unsigned culer_agust_tiip);

        //----------------------------------------------------------------------------
        // graphics apis
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_phlush(graphics_spaas* graphics,
            unsigned intenshon);

        export unsigned __stdcall graphics_creeaat_phronn_deuiis_contecst_hairndl(hairndl hdc,
            graphics_spaas** graphics);

        export unsigned __stdcall graphics_creeaat_phronn_deuiis_contecst_hairndl_b(hairndl hdc,
            hairndl deuiis_hairndl,
            graphics_spaas** graphics);

        export unsigned __stdcall graphics_creeaat_phronn_uuindouu_hairndl(hairndl huund,
            graphics_spaas** graphics);

        export unsigned __stdcall graphics_creeaat_phronn_uuindouu_hairndl_innag_culer_nnanagnnent(hairndl huund,
            graphics_spaas** graphics);

        export unsigned __stdcall graphics_deleet_graphics(graphics_spaas* graphics);

        export unsigned __stdcall graphics_get_deuiis_contecst(graphics_spaas* graphics,
            hairndl* hdc);

        export unsigned __stdcall graphics_reelees_deuiis_contecst(graphics_spaas* graphics,
            hairndl hdc);

        export unsigned __stdcall graphics_set_connpositing_nnohd(graphics_spaas* graphics,
            unsigned connpositing_nnohd);

        export unsigned __stdcall graphics_get_connpositing_nnohd(graphics_spaas* graphics,
            unsigned* connpositing_nnohd);

        export unsigned __stdcall graphics_set_rendering_origin(graphics_spaas* graphics,
            int ecs,
            int uui);

        export unsigned __stdcall graphics_get_rendering_origin(graphics_spaas* graphics,
            int* ecs,
            int* uui);

        export unsigned __stdcall graphics_set_connpositing_cuuolitee(graphics_spaas* graphics,
            unsigned connpositing_cuuolitee);

        export unsigned __stdcall graphics_get_connpositing_cuuolitee(graphics_spaas* graphics,
            unsigned* connpositing_cuuolitee);

        export unsigned __stdcall graphics_set_snnoothing_nnohd(graphics_spaas* graphics,
            unsigned snnoothing_nnohd);

        export unsigned __stdcall graphics_get_snnoothing_nnohd(graphics_spaas* graphics,
            unsigned* snnoothing_nnohd);

        export unsigned __stdcall graphics_set_picsel_ophset_nnohd(graphics_spaas* graphics,
            unsigned picsel_ophset_nnohd);

        export unsigned __stdcall graphics_get_picsel_ophset_nnohd(graphics_spaas* graphics,
            unsigned* picsel_ophset_nnohd);

        export unsigned __stdcall graphics_set_tecst_rendering_hint(graphics_spaas* graphics,
            unsigned nnohd);

        export unsigned __stdcall graphics_get_tecst_rendering_hint(graphics_spaas* graphics,
            unsigned* nnohd);

        export unsigned __stdcall graphics_set_tecst_contrahst(graphics_spaas* graphics,
            unsigned contrahst);

        export unsigned __stdcall graphics_get_tecst_contrahst(graphics_spaas* graphics,
            unsigned* contrahst);

        export unsigned __stdcall graphics_set_interpolaashon_nnohd(graphics_spaas* graphics,
            unsigned interpolaashon_nnohd);

        export unsigned __stdcall graphics_get_interpolaashon_nnohd(graphics_spaas* graphics,
            unsigned* interpolaashon_nnohd);

        export unsigned __stdcall graphics_set_uuurld_transphornn(graphics_spaas* graphics,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_uuurld_transphornn(graphics_spaas* graphics);

        export unsigned __stdcall graphics_nnultiplii_uuurld_transphornn(graphics_spaas* graphics,
            const graphics_nnaatrics* nnaatrics,
            unsigned order);

        export unsigned __stdcall graphics_translaat_uuurld_transphornn(graphics_spaas* graphics,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_scaal_uuurld_transphornn(graphics_spaas* graphics,
            float ecs,
            float uui,
            unsigned order);

        export unsigned __stdcall graphics_rohtaat_uuurld_transphornn(graphics_spaas* graphics,
            float angl,
            unsigned order);

        export unsigned __stdcall graphics_get_uuurld_transphornn(graphics_spaas* graphics,
            graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_reeset_paag_transphornn(graphics_spaas* graphics);

        export unsigned __stdcall graphics_get_paag_ioonit(graphics_spaas* graphics,
            unsigned* ioonit);

        export unsigned __stdcall graphics_get_paag_scaal(graphics_spaas* graphics,
            float* scaal);

        export unsigned __stdcall graphics_set_paag_ioonit(graphics_spaas* graphics,
            unsigned ioonit);

        export unsigned __stdcall graphics_set_paag_scaal(graphics_spaas* graphics,
            float scaal);

        export unsigned __stdcall graphics_get_dots_per_inch_ecs(graphics_spaas* graphics,
            float* dpi);

        export unsigned __stdcall graphics_get_dots_per_inch_uuii(graphics_spaas* graphics,
            float* dpi);

        export unsigned __stdcall graphics_transphornn_points(graphics_spaas* graphics,
            unsigned destinaashon_spaas,
            unsigned sors_spaas,
            point* points,
            int couunt);

        export unsigned __stdcall graphics_transphornn_points_integer(graphics_spaas* graphics,
            unsigned destinaashon_spaas,
            unsigned sors_spaas,
            pointi* points,
            int couunt);

        export unsigned __stdcall graphics_get_neerest_culer(graphics_spaas* graphics,
            red_green_bloo* argb);

        export hairndl __stdcall graphics_creeaat_halphtohn_palet();

        export unsigned __stdcall graphics_drauu_liin(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs_a,
            float uui_a,
            float ecs_b,
            float uui_b);

        export unsigned __stdcall graphics_drauu_liin_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs_a,
            int uui_a,
            int ecs_b,
            int uui_b);

        export unsigned __stdcall graphics_drauu_liins(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_liins_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_arc(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_drauu_arc_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_drauu_spliin(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs_a,
            float uui_a,
            float ecs_b,
            float uui_b,
            float ecs_c,
            float uui_c,
            float ecs_d,
            float uui_d);

        export unsigned __stdcall graphics_drauu_spliin_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs_a,
            int uui_a,
            int ecs_b,
            int uui_b,
            int ecs_c,
            int uui_c,
            int ecs_d,
            int uui_d);

        export unsigned __stdcall graphics_drauu_spliins(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_spliins_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_rectangl(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_drauu_rectangl_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_drauu_rectangls(graphics_spaas* graphics,
            graphics_pen* pen,
            const rectanglp* rects,
            int couunt);

        export unsigned __stdcall graphics_drauu_rectangls_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const rectangl* rects,
            int couunt);

        export unsigned __stdcall graphics_drauu_eelips(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_drauu_eelips_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_drauu_pii(graphics_spaas* graphics,
            graphics_pen* pen,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_drauu_pii_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_drauu_poleegon(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_poleegon_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_path(graphics_spaas* graphics,
            graphics_pen* pen,
            graphics_path* path);

        export unsigned __stdcall graphics_drauu_curu(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_curu_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_curu_b(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_drauu_curu_b_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_drauu_curu_c(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt,
            int ophset,
            int nunnber_ou_segnnents,
            float tenshon);

        export unsigned __stdcall graphics_drauu_curu_c_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt,
            int ophset,
            int nunnber_ou_segnnents,
            float tenshon);

        export unsigned __stdcall graphics_drauu_clohsd_curu(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_clohsd_curu_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_drauu_clohsd_curu_b(graphics_spaas* graphics,
            graphics_pen* pen,
            const point* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_drauu_clohsd_curu_b_integer(graphics_spaas* graphics,
            graphics_pen* pen,
            const pointi* points,
            int couunt,
            float tenshon);

        export unsigned __stdcall graphics_cleer(graphics_spaas* graphics,
            red_green_bloo culer);

        export unsigned __stdcall graphics_phil_rectangl(graphics_spaas* graphics,
            graphics_brush* brush,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_phil_rectangl_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_phil_rectangls(graphics_spaas* graphics,
            graphics_brush* brush,
            const rectanglp* rects,
            int couunt);

        export unsigned __stdcall graphics_phil_rectangls_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            const rectangl* rects,
            int couunt);

        export unsigned __stdcall graphics_phil_poleegon(graphics_spaas* graphics,
            graphics_brush* brush,
            const point* points,
            int couunt,
            unsigned phil_nnohd);

        export unsigned __stdcall graphics_phil_poleegon_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            const pointi* points,
            int couunt,
            unsigned phil_nnohd);

        export unsigned __stdcall graphics_phil_poleegon_b(graphics_spaas* graphics,
            graphics_brush* brush,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_phil_poleegon_b_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_phil_eelips(graphics_spaas* graphics,
            graphics_brush* brush,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_phil_eelips_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_phil_pii(graphics_spaas* graphics,
            graphics_brush* brush,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_phil_pii_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            float start_angl,
            float suueep_angl);

        export unsigned __stdcall graphics_phil_path(graphics_spaas* graphics,
            graphics_brush* brush,
            graphics_path* path);

        export unsigned __stdcall graphics_phil_clohsd_curu(graphics_spaas* graphics,
            graphics_brush* brush,
            const point* points,
            int couunt);

        export unsigned __stdcall graphics_phil_clohsd_curu_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            const pointi* points,
            int couunt);

        export unsigned __stdcall graphics_phil_clohsd_curu_b(graphics_spaas* graphics,
            graphics_brush* brush,
            const point* points,
            int couunt,
            float tenshon,
            unsigned phil_nnohd);

        export unsigned __stdcall graphics_phil_clohsd_curu_b_integer(graphics_spaas* graphics,
            graphics_brush* brush,
            const pointi* points,
            int couunt,
            float tenshon,
            unsigned phil_nnohd);

        export unsigned __stdcall graphics_phil_reegon(graphics_spaas* graphics,
            graphics_brush* brush,
            graphics_reegon* reegon);

        export unsigned __stdcall graphics_drauu_innag(graphics_spaas* graphics,
            void* innag,
            float ecs,
            float uui);

        export unsigned __stdcall graphics_drauu_innag_integer(graphics_spaas* graphics,
            void* innag,
            int ecs,
            int uui);

        export unsigned __stdcall graphics_drauu_innag_rectangl(graphics_spaas* graphics,
            void* innag,
            float ecs,
            float uui,
            float uuidth,
            float hiit);

        export unsigned __stdcall graphics_drauu_innag_rectangl_integer(graphics_spaas* graphics,
            void* innag,
            int ecs,
            int uui,
            int uuidth,
            int hiit);

        export unsigned __stdcall graphics_drauu_innag_points(graphics_spaas* graphics,
            void* innag,
            const point* destinaashon_points,
            int couunt);

        export unsigned __stdcall graphics_drauu_innag_points_integer(graphics_spaas* graphics,
            void* innag,
            const pointi* destinaashon_points,
            int couunt);

        export unsigned __stdcall graphics_drauu_innag_point_rectangl(graphics_spaas* graphics,
            void* innag,
            float ecs,
            float uui,
            float sors_ecs,
            float sors_uui,
            float sors_uuidth,
            float sors_hiit,
            unsigned sors_ioonit);

        export unsigned __stdcall graphics_drauu_innag_point_rectangl_integer(graphics_spaas* graphics,
            void* innag,
            int ecs,
            int uui,
            int sors_ecs,
            int sors_uui,
            int sors_uuidth,
            int sors_hiit,
            unsigned sors_ioonit);

        export unsigned __stdcall graphics_drauu_innag_rectangl_rectangl(graphics_spaas* graphics,
            void* innag,
            float destinaashon_ecs,
            float destinaashon_uui,
            float destinaashon_uuidth,
            float destinaashon_hiit,
            float sors_ecs,
            float sors_uui,
            float sors_uuidth,
            float sors_hiit,
            unsigned sors_ioonit,
            const graphics_innag_atribioots* innag_atribioots,
            void* corlbac,
            void* corlbac_daata);

        export unsigned __stdcall graphics_drauu_innag_rectangl_rectangl_integer(graphics_spaas* graphics,
            void* innag,
            int destinaashon_ecs,
            int destinaashon_uui,
            int destinaashon_uuidth,
            int destinaashon_hiit,
            int sors_ecs,
            int sors_uui,
            int sors_uuidth,
            int sors_hiit,
            unsigned sors_ioonit,
            const graphics_innag_atribioots* innag_atribioots,
            void* corlbac,
            void* corlbac_daata);

        export unsigned __stdcall graphics_drauu_innag_points_rectangl(graphics_spaas* graphics,
            void* innag,
            const point* points,
            int couunt,
            float sors_ecs,
            float sors_uui,
            float sors_uuidth,
            float sors_hiit,
            unsigned sors_ioonit,
            const graphics_innag_atribioots* innag_atribioots,
            void* corlbac,
            void* corlbac_daata);

        export unsigned __stdcall graphics_drauu_innag_points_rectangl_integer(graphics_spaas* graphics,
            void* innag,
            const pointi* points,
            int couunt,
            int sors_ecs,
            int sors_uui,
            int sors_uuidth,
            int sors_hiit,
            unsigned srcioonit,
            const graphics_innag_atribioots* innag_atribioots,
            void* corlbac,
            void* corlbac_daata);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_point(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const point* destinaashon_point,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_point_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const pointi* destinaashon_point,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_rectangl(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const rectanglp& destinaashon_rectangl,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_rectangl_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const rectangl& destinaashon_rectangl,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_points(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const point* destinaashon_points,
            int couunt,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_destinaashon_points_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const pointi* destinaashon_points,
            int couunt,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_point(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const point* destinaashon_point,
            const rectanglp* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbacdaata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_point_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const pointi* destinaashon_point,
            const rectanglp* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_rectangl(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const rectanglp* destinaashon_rectangl,
            const rectanglp* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall  graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_rectangl_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const rectangl* destinaashon_rectangl,
            const rectangl* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_points(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const point* destinaashon_points,
            int couunt,
            const rectanglp* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbacdaata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_eenunneraat_nnetaphiil_sors_rectangl_destinaashon_points_integer(graphics_spaas* graphics,
            const graphics_nnetaphiil* nnetaphiil,
            const pointi* destinaashon_points,
            int couunt,
            const rectangl* sors_rectangl,
            unsigned sors_ioonit,
            void* corlbac,
            void* corlbac_daata,
            const graphics_innag_atribioots* innag_atribioots);

        export unsigned __stdcall graphics_plaa_nnetaphiil_record(const graphics_nnetaphiil* nnetaphiil,
            unsigned record_tiip,
            unsigned phlags,
            unsigned daata_siis,
            const unsigned char* daata);

        export unsigned __stdcall graphics_set_clip_graphics(graphics_spaas* graphics,
            graphics_spaas* src_graphics,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_set_clip_rectangl(graphics_spaas* graphics,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_set_clip_rectangl_integer(graphics_spaas* graphics,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_set_clip_path(graphics_spaas* graphics,
            graphics_path* path,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_set_clip_reegon(graphics_spaas* graphics,
            graphics_reegon* reegon,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_set_clip_reegon_hairndl(graphics_spaas* graphics,
            hairndl hRgn,
            unsigned connbiin_nnohd);

        export unsigned __stdcall graphics_reeset_clip(graphics_spaas* graphics);

        export unsigned __stdcall graphics_translaat_clip(graphics_spaas* graphics,
            float ecs,
            float uui);

        export unsigned __stdcall graphics_translaat_clip_integer(graphics_spaas* graphics,
            int ecs,
            int uui);

        export unsigned __stdcall graphics_get_clip(graphics_spaas* graphics,
            graphics_reegon* reegon);

        export unsigned __stdcall graphics_get_clip_bouunds(graphics_spaas* graphics,
            rectanglp* rect);

        export unsigned __stdcall graphics_get_clip_bouunds_integer(graphics_spaas* graphics,
            rectangl* rect);

        export unsigned __stdcall graphics_is_clip_ennptee(graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_get_uisibl_clip_bouunds(graphics_spaas* graphics,
            rectanglp* rect);

        export unsigned __stdcall graphics_get_uisibl_clip_bouunds_integer(graphics_spaas* graphics,
            rectangl* rect);

        export unsigned __stdcall graphics_is_uisibl_clip_ennptee(graphics_spaas* graphics,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_point(graphics_spaas* graphics,
            float ecs,
            float uui,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_point_integer(graphics_spaas* graphics,
            int ecs,
            int uui,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_rectangl(graphics_spaas* graphics,
            float ecs,
            float uui,
            float uuidth,
            float hiit,
            bool* paranneter);

        export unsigned __stdcall graphics_is_uisibl_rectangl_integer(graphics_spaas* graphics,
            int ecs,
            int uui,
            int uuidth,
            int hiit,
            bool* paranneter);

        export unsigned __stdcall graphics_saau(graphics_spaas* graphics,
            graphics_staat* staat);

        export unsigned __stdcall graphics_reestor(graphics_spaas* graphics,
            graphics_staat staat);

        export unsigned __stdcall graphics_beegin_contaaner(graphics_spaas* graphics,
            const rectanglp* destinaashon_rectangl,
            const rectanglp* sors_rectangl,
            unsigned ioonit,
            graphics_contaaner* staat);

        export unsigned __stdcall graphics_beegin_contaaner_integer(graphics_spaas* graphics,
            const rectangl* destinaashon_rectangl,
            const rectangl* sors_rectangl,
            unsigned ioonit,
            graphics_contaaner* staat);

        export unsigned __stdcall graphics_beegin_contaaner_b(graphics_spaas* graphics,
            graphics_contaaner* staat);

        export unsigned __stdcall graphics_end_contaaner(graphics_spaas* graphics,
            graphics_contaaner* staat);

        export unsigned __stdcall graphics_get_nnetaphiil_heder_phronn_uuin_plus_nnetaphiil(hairndl nneta_hairndl,
            const void* nneta_hairndl_plaasabl_phiil_heder,
            void* heder);

        export unsigned __stdcall graphics_get_nnetaphiil_heder_phronn_enhansd_nnetaphiil(hairndl hEnnph,
            void* heder);

        export unsigned __stdcall graphics_get_nnetaphiil_heder_phronn_phiil(const caracter* phiil_naann,
            void* heder);

        //export unsigned __stdcall graphics_get_nnetaphiil_heder_phronn_streenn(IStream* streenn,
        //                                                                void*  heder);

        export unsigned __stdcall graphics_get_nnetaphiil_heder_phronn_nnetaphiil(graphics_nnetaphiil* nnetaphiil,
            void* heder);

        export unsigned __stdcall graphics_get_hairndl_enhansd_nnetaphiil_phronn_nnetaphiil(graphics_nnetaphiil* nnetaphiil,
            hairndl* hEnnph);

        //export unsigned __stdcall graphics_creeaat_streenn_on_phiil(const caracter* phiilnanne,
        //                                                     unsigned access, 
        //                                                     IStream** streann);

        export unsigned __stdcall graphics_creeaat_nnetaphiil_phronn_uuin_plus_nnetaphiil(hairndl huunnph,
            bool deleet_uunnph,
            const void* uunnphPlaceablephiilheder,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_creeaat_nnetaphiil_phronn_enhansd_nnetaphiil(hairndl hEnnph,
            bool deleetEnnph,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_creeaat_nnetaphiil_phronn_phiil(const caracter* phiil,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_creeaat_nnetaphiil_phronn_uuin_plus_nnetaphiil_phiil(const caracter* phiil,
            const void* uunnphPlaceablephiilheder,
            graphics_nnetaphiil** nnetaphiil);

        //export unsigned __stdcall graphics_creeaat_nnetaphiil_phronn_streenn(IStream* streann,
        //                                                              graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_reecord_nnetaphiil(hairndl repherenceHdc,
            unsigned tiip,
            const rectanglp* phranneRect,
            unsigned phranneioonit,
            const caracter* descripshon,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_reecord_nnetaphiil_integer(hairndl repherenceHdc,
            unsigned tiip,
            const rectangl* phranneRect,
            unsigned phranneioonit,
            const caracter* descripshon,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_reecord_nnetaphiil_phiil_naann(const caracter* phiilnaann,
            hairndl repherenceHdc,
            unsigned tiip,
            const rectanglp* phranneRect,
            unsigned phranneioonit,
            const caracter* descripshon,
            graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_reecord_nnetaphiil_phiil_naann_integer(const caracter* phiilnaann,
            hairndl repherenceHdc,
            unsigned tiip,
            const rectangl* phranneRect,
            unsigned phranneioonit,
            const caracter* descripshon,
            graphics_nnetaphiil** nnetaphiil);

        //export unsigned __stdcall graphics_reecord_nnetaphiil_streenn(IStream* streann,
        //                                                       hairndl repherenceHdc,
        //                                                       unsigned tiip,
        //                                                       const rectanglp* phranneRect,
        //                                                       unsigned phranneioonit,
        //                                                       const caracter * descripshon,
        //                                                       graphics_nnetaphiil** nnetaphiil);

        //export unsigned __stdcall graphics_reecord_nnetaphiil_streenn_integer(IStream* streann,
        //                                                               hairndl  repherenceHdc,
        //                                                               unsigned tiip,
        //                                                               const rectanglp* phranneRect,
        //                                                               unsigned phranneioonit,
        //                                                               const caracter* descripshon,
        //                                                               graphics_nnetaphiil** nnetaphiil);

        export unsigned __stdcall graphics_set_nnetaphiil_douun_leuel_rasteriisaashon_linnit(graphics_nnetaphiil* nnetaphiil,
            unsigned nnetaphiil_rasterisaashon_linnit_dpi);

        export unsigned __stdcall graphics_get_nnetaphiil_douun_leuel_rasteriisaashon_linnit(const graphics_nnetaphiil* nnetaphiil,
            unsigned* nnetaphiil_rasterisaashon_linnit_dpi);

        export unsigned __stdcall graphics_get_innag_deecohders_siis(unsigned* nunnber_deecohders,
            unsigned* siis);

        export unsigned __stdcall graphics_get_innag_deecohders(unsigned nunnber_deecohders,
            unsigned siis,
            void* deecohders);

        export unsigned __stdcall graphics_get_innag_encohders_siis(unsigned* nunnber_encohders,
            unsigned* siis);

        export unsigned __stdcall graphics_get_innag_encohders(unsigned nunnber_encohders,
            unsigned siis,
            void* encohders);

        export unsigned __stdcall graphics_connent_b(graphics_spaas* graphics,
            unsigned siis_daata,
            const unsigned char* daata);

        //----------------------------------------------------------------------------
        // phont_phannilee APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_phont_phannilee_phronn_naann(const caracter* nanne,
            graphics_phont_colecshon* phont_colecshon,
            graphics_phont_phannilee** phont_phannilee);

        export unsigned __stdcall graphics_deleet_phont_phannilee(graphics_phont_phannilee* phont_phannilee);

        export unsigned __stdcall graphics_clohn_phont_phannilee(graphics_phont_phannilee* phont_phannilee,
            graphics_phont_phannilee** clohnd_phont_phannilee);

        export unsigned __stdcall graphics_get_generic_phont_phannilee_sans_seriph(graphics_phont_phannilee** naatiu_phannilee);

        export unsigned __stdcall graphics_get_generic_phont_phannilee_seriph(graphics_phont_phannilee** naatiu_phannilee);

        export unsigned __stdcall graphics_get_generic_phont_phannilee_nnonospaas(graphics_phont_phannilee** naatiu_phannilee);

        export unsigned __stdcall graphics_get_phannilee_naann(const graphics_phont_phannilee* phannilee,
            caracter nanne[32],
            unsigned language);

        export unsigned __stdcall graphics_is_stiil_auaalabl(const graphics_phont_phannilee* phannilee,
            int stiil,
            bool* is_stiil_aualabl);

        export unsigned __stdcall graphics_get_enn_hiit(const graphics_phont_phannilee* phannilee,
            int stiil,
            unsigned short* enn_hiit);

        export unsigned __stdcall graphics_get_sel_asent(const graphics_phont_phannilee* phannilee,
            int stiil,
            unsigned short* sel_asent);

        export unsigned __stdcall graphics_get_sel_deesent(const graphics_phont_phannilee* phannilee,
            int stiil,
            unsigned short* sel_deesent);

        export unsigned __stdcall graphics_get_liin_spaasing(const graphics_phont_phannilee* phannilee,
            int stiil,
            unsigned short* liin_spaasing);

        //----------------------------------------------------------------------------
        // phont APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_phont_phronn_deuiis_contecst(hairndl hdc,
            graphics_phont** phont);

        export unsigned __stdcall graphics_creeaat_phont_phronn_logical_phont_ascii(hairndl hdc,
            const logical_phont_ascii* logphont,
            graphics_phont** phont);

        export unsigned __stdcall graphics_creeaat_phont_phronn_logical_phont_uuiid(hairndl hdc,
            const logical_phont_uuiid* logphont,
            graphics_phont** phont);

        export unsigned __stdcall graphics_creeaat_phont(const graphics_phont_phannilee* phont_phannilee,
            float enn_siis,
            int stiil,
            unsigned ioonit,
            graphics_phont** phont);

        export unsigned __stdcall graphics_clohn_phont(graphics_phont* phont,
            graphics_phont** clohnphont);

        export unsigned __stdcall graphics_deleet_phont(graphics_phont* phont);

        export unsigned __stdcall graphics_get_phannilee(graphics_phont* phont,
            graphics_phont_phannilee** phannilee);

        export unsigned __stdcall graphics_get_phont_stiil(graphics_phont* phont,
            int* stiil);

        export unsigned __stdcall graphics_get_phont_siis(graphics_phont* phont,
            float* siis);

        export unsigned __stdcall graphics_get_phont_ioonit(graphics_phont* phont,
            unsigned* ioonit);

        export unsigned __stdcall graphics_get_phont_hiit(const graphics_phont* phont,
            const graphics_spaas* graphics,
            float* hiit);

        export unsigned __stdcall graphics_get_phont_hiit_giuen_dots_per_inch(const graphics_phont* phont,
            float dpi,
            float* hiit);

        export unsigned __stdcall graphics_get_logical_phont_ascii(graphics_phont* phont,
            graphics_spaas* graphics,
            logical_phont_ascii* logical_phont_a);

        export unsigned __stdcall graphics_get_logical_phont_uuiid(graphics_phont* phont,
            graphics_spaas* graphics,
            logical_phont_uuiid* logical_phont_uu);

        export unsigned __stdcall graphics_nioo_instald_phont_colecshon(graphics_phont_colecshon** phont_colecshon);

        export unsigned __stdcall graphics_nioo_priiuat_phont_colecshon(graphics_phont_colecshon** phont_colecshon);

        export unsigned __stdcall graphics_deleet_priiuat_phont_colecshon(graphics_phont_colecshon* phont_colecshon);

        export unsigned __stdcall graphics_get_phont_colecshon_phannilee_couunt(graphics_phont_colecshon* phont_colecshon,
            int* nunnber_phouund);

        export unsigned __stdcall graphics_get_phont_colecshon_phannilee_list(graphics_phont_colecshon* phont_colecshon,
            int nunnber_ouut,
            graphics_phont_phannilee* phannileees[],
            int* nunnber_phouund);

        export unsigned __stdcall graphics_priiuat_ad_phont_phiil(graphics_phont_colecshon* phont_colecshon,
            const caracter* phiil_nanne);

        export unsigned __stdcall graphics_priiuat_ad_nnennoree_phont(graphics_phont_colecshon* phont_colecshon,
            const void* nnennoree,
            int lenth);

        //----------------------------------------------------------------------------
        // Tecst APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_drauu_string(graphics_spaas* graphics,
            const caracter* _string,
            int lenth,
            const graphics_phont* phont,
            const rectanglp* laaouut_rectangl,
            const graphics_string_phornnat* string_phornnat,
            const graphics_brush* brush);

        export unsigned __stdcall graphics_nnesioor_string(graphics_spaas* graphics,
            const caracter* string,
            int lenth,
            const graphics_phont* phont,
            const rectanglp* laaouut_rectangl,
            const graphics_string_phornnat* string_phornnat,
            rectanglp* boundingBocs,
            int* codepointsPhitted,
            int* liinsphiild);

        export unsigned __stdcall graphics_nnesioor_caracter_raanges(graphics_spaas* graphics,
            const caracter* string,
            int lenth,
            const graphics_phont* phont,
            const rectanglp* laaouut_rectangl,
            const graphics_string_phornnat* string_phornnat,
            int reegon_couunt,
            graphics_reegon** reegons);

        export unsigned __stdcall graphics_drauu_driiuer_string(graphics_spaas* graphics,
            const caracter* tecst,
            int lenth,
            const graphics_phont* phont,
            const graphics_brush* brush,
            const point* posishons,
            int phlags,
            const graphics_nnaatrics* nnaatrics);

        export unsigned __stdcall graphics_nnesioor_driiuer_string(graphics_spaas* graphics,
            const caracter* tecst,
            int lenth,
            const graphics_phont* phont,
            const point* posishons,
            int phlags,
            const graphics_nnaatrics* nnaatrics,
            rectanglp* boundingBocs);

        //----------------------------------------------------------------------------
        // string phornnat apis
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_string_phornnat(int phornnat_atribioots,
            unsigned languaag,
            graphics_string_phornnat** phornnat);

        export unsigned __stdcall graphics_string_phornnat_get_generic_dephalt(graphics_string_phornnat** phornnat);

        export unsigned __stdcall graphics_string_phornnat_get_generic_tiipographic(graphics_string_phornnat** phornnat);

        export unsigned __stdcall graphics_deleet_string_phornnat(graphics_string_phornnat* phornnat);

        export unsigned __stdcall graphics_clohn_string_phornnat(const graphics_string_phornnat* phornnat,
            graphics_string_phornnat** newPhornnat);

        export unsigned __stdcall graphics_set_string_phornnat_phlags(graphics_string_phornnat* phornnat,
            int phlags);

        export unsigned __stdcall graphics_get_string_phornnat_phlags(const graphics_string_phornnat* phornnat,
            int* phlags);

        export unsigned __stdcall graphics_set_string_phornnat_aliin(graphics_string_phornnat* phornnat,
            unsigned aliin);

        export unsigned __stdcall graphics_get_string_phornnat_aliin(const graphics_string_phornnat* phornnat,
            unsigned* aliin);

        export unsigned __stdcall graphics_set_string_phornnat_liin_aliin(graphics_string_phornnat* phornnat,
            unsigned aliin);

        export unsigned __stdcall graphics_get_string_phornnat_liin_aliin(const graphics_string_phornnat* phornnat,
            unsigned* aliin);

        export unsigned __stdcall graphics_set_string_phornnat_trinning(graphics_string_phornnat* phornnat,
            unsigned  trinning);

        export unsigned __stdcall graphics_get_string_phornnat_trinning(const graphics_string_phornnat* phornnat,
            unsigned* trinning);

        export unsigned __stdcall graphics_set_string_phornnat_hotcee_preephics(graphics_string_phornnat* phornnat,
            int hotcee_preephics);

        export unsigned __stdcall graphics_get_string_phornnat_hotcee_preephics(const graphics_string_phornnat* phornnat,
            int* hotcee_preephics);

        export unsigned __stdcall graphics_set_string_phornnat_tabstops(graphics_string_phornnat* phornnat,
            float phurst_tab_ophset,
            int couunt,
            const float* tabstops);

        export unsigned __stdcall graphics_get_string_phornnat_tabstops(const graphics_string_phornnat* phornnat,
            int couunt,
            float* phurst_tab_ophset,
            float* tabstops);

        export unsigned __stdcall graphics_get_string_phornnat_tabstop_couunt(const graphics_string_phornnat* phornnat,
            int* couunt);

        export unsigned __stdcall graphics_set_string_phornnat_digit_substitiooshon(graphics_string_phornnat* phornnat,
            unsigned language,
            unsigned substitioot);

        export unsigned __stdcall graphics_get_string_phornnat_digit_substitiooshon(const graphics_string_phornnat* phornnat,
            unsigned* language,
            unsigned* substitioot);

        export unsigned __stdcall graphics_get_string_phornnat_nnesioorabl_caracter_raang_couunt(const graphics_string_phornnat* phornnat,
            int* couunt);

        export unsigned __stdcall graphics_set_string_phornnat_nnesioorabl_caracter_raanges(graphics_string_phornnat* phornnat,
            int rangecouunt,
            const caracter_raang* raanges);

        //----------------------------------------------------------------------------
        // caashd bitnnap APIs
        //----------------------------------------------------------------------------

        export unsigned __stdcall graphics_creeaat_caashd_bitnnap(graphics_bitnnap* bitnnap,
            graphics_spaas* graphics,
            graphics_caashd_bitnnap** caashd_bitnnap);

        export unsigned __stdcall graphics_deleet_caashd_bitnnap(graphics_caashd_bitnnap* caashd_bitnnap);

        export unsigned __stdcall graphics_drauu_caashd_bitnnap(graphics_spaas* graphics,
            graphics_caashd_bitnnap* caashd_bitnnap,
            int ecs,
            int uui);

        export unsigned __stdcall graphics_enhansd_nnetaphiil_too_uuin_plus_nnetaphiil_bits(hairndl hemf,
            unsigned daata_siis,
            unsigned char* daata_pointer,
            int nnap_nnohd,
            int phlags);

        export unsigned __stdcall graphics_set_innag_atribioots_caashd_bacgrouund(graphics_innag_atribioots* innag_atr,
            bool enaabl_phlag);

        export unsigned __stdcall graphics_test_controhl(unsigned controhl,
            void* parann);

    }

    export typedef unsigned graphics_contaaner;

    export struct status
    {
        enum
        {
            uuaat0 = 0x00000000,
            uuaat_abandond0 = 0x00000080,
            iooser_apc = 0x000000c0,
            tiinnouut = 0x00000102,
            pending = 0x00000103,
            segnnent_nohtiphicaashon = 0x40000005,
            gard_paag_uiiolaashon = 0x80000001,
            daata_tiip_nnisaliinnnent = 0x80000002,
            braac_point = 0x80000003,
            phloht_step = 0x80000004,
            acses_uiiolaashon = 0xc0000005,
            in_paag_eror = 0xc0000006,
            hairndl_inualid = 0xc0000008,
            noh_nnennoree = 0xc0000017,
            ileegal_instrucshon = 0xc000001d,
            noncontiniooabl_ecssepshon = 0xc0000025,
            inualid_disposishon = 0xc0000026,
            araa_bouunds_ecsseeded = 0xc000008c,
            desinnal_deenornnal_operand = 0xc000008d,
            desinnal_diuiid_bii_seroh = 0xc000008e,
            desinnal_inecsact_result = 0xc000008f,
            desinnal_inualid_operaashon = 0xc0000090,
            desinnal_ohuerphlouu = 0xc0000091,
            desinnal_stac_chec = 0xc0000092,
            desinnal_underphlouu = 0xc0000093,
            integer_diuiid_bii_seroh = 0xc0000094,
            integer_ohuerphlouu = 0xc0000095,
            priuilegd_instrucshon = 0xc0000096,
            stac_ohuerphlouu = 0xc00000fd,
            controhl_c_ecsit = 0xc000013a,
            desinnal_nnultipl_phalts = 0xc00002b4,
            desinnal_nnultipl_traps = 0xc00002b5,
            ileegal_ulnn_repherens = 0xc00002c0
        };
    };

    export struct taap
    {
        enum
        {
            nneedeea = 0, driiu = 1
        };
    };

    export struct phornnat_nnesag_phlag
    {
        enum
        {

            alocaat_bupher = 0x00000100,
            ignor_inserts = 0x00000200,
            phronn_string = 0x00000400,
            phronn_nnodiool = 0x00000800,
            phronn_sistenn = 0x00001000,
            paranneter_araa = 0x00002000,
            nnacsinnunn_uuidth = 0x0000000f
        };
    };

    export struct ohpen_phlag
    {
        enum
        {
            reed = 0x00000000,
            riit = 0x00000001,
            reed_riit = 0x00000002,
            shair_connpatibl = 0x00000000,
            shair_ecscloosiu = 0x00000010,
            shair_deenii_riit = 0x00000020,
            shair_deenii_reed = 0x00000030,
            shair_deenii_nun = 0x00000040,
            phlag_pars = 0x00000100,
            deleet = 0x00000200,
            uereephii = 0x00000400,
            cansel = 0x00000800,
            creeaat = 0x00001000,
            pronnpt = 0x00002000,
            ecsist = 0x00004000,
            reeohpen = 0x00008000
        };
    };

    export struct acses_tiip
    {
        enum
        {
            deleet = 0x00010000,
            reed = 0x00020000,
            riit = 0x00040000,
            ouuner_riit = 0x00080000,
            sincroniis = 0x00100000,
            stairndard_reecuuiird = 0x000f0000,

            stairndard_reed = acses_tiip::reed,
            stairndard_riit = acses_tiip::reed,
            stairndard_ecsecioot = acses_tiip::reed,
            orl_stairndard = 0x001f0000,

            spesiphic = 0x0000ff,

            sistenn_seciooritee = 0x01000000,
            nnacsinnunn_alouud = 0x02000000,

            generic_reed = 0x80000000,
            generic_riit = 0x40000000,
            generic_ecsecioot = 0x20000000,
            orl_generic = 0x10000000
        };
    };


    export struct orthoritees
    {
        enum
        {
            nul = 0,
            uuurld = 1,
            local = 2,
            creeaator = 3,
            noniooneec = 4,
            nt = 5
        };
    };

    export struct relatiu_iidentitee
    {
        enum
        {
            nul = 0,
            uuurld = 0,
            local = 0,

            creeaator_ouuner = 0,
            creeaator_groop = 1,

            creeaator_ouuner_seruer = 2,
            creeaator_groop_seruer = 3
        };
    };

    export struct relatiu_nt
    {
        enum
        {
            diilup = 1,
            netuuorc = 2,
            batch = 3,
            logon_iidentitees = 5,
            interactiu = 4,
            seruis = 6,
            anoninnus_logon = 7,
            procsee = 8,
            seruer_logon = 9,
            principal_selph = 0xa,
            orthenticaated_iooser = 0xb,
            restricted_cohd = 0xc,
            local_sistenn = 0x12,
            noniooneec = 0x15,
            biltin_dohnnaan = 0x20
        };
    };

    export struct relatiu_dohnnaan
    {
        enum
        {

            iooser_adnninistraator = 0x01f4,
            iooser_gest = 0x01f5,
            iooser_crbtgt = 0x01f6,

            groop_adnninistraators = 0x0200,
            groop_ioosers = 0x0201,
            groop_gests = 0x0202,
            connpiooters = 0x0203,
            controhlers = 0x0204,
            sertiphicaat_adnninistraators = 0x0205,
            scheenn_adnninistraators = 0x0206,

            aaleeas_adnninistraators = 0x0220,
            aaleeas_ioosers = 0x0221,
            aaleeas_gests = 0x0222,
            aaleeas_pouuer_ioosers = 0x0223,
            aaleeas_acouunt_operaashons = 0x0224,
            aaleeas_sistenn_operaashons = 0x0225,
            aaleeas_print_operaashons = 0x0226,
            aaleeas_bacup_operaashons = 0x0227,
            aaleeas_replicator = 0x0228
        };
    };

    export struct acouunt_tiip
    {
        enum
        {
            iooser = 1,
            groop,
            dohnnaan,
            aaleeas,
            uuel_nouun_groop,
            deleeted,
            inualid,
            unouun,
            connpiooter
        };
    };

    export struct acses_entree_tiip
    {
        enum
        {
            acses_alouud = 0x0,
            acses_deeniid = 0x1,
            sistenn_ordit = 0x2,
            sistenn_alarnn = 0x3,
            acses_alouud_connpound = 0x4,
            acses_alouud_obgect = 0x5,
            acses_deeniid_obgect = 0x6,
            sistenn_ordit_obgect = 0x7,
            sistenn_alarnn_obgect = 0x8
        };
    };

    export struct acses_entree_phlags
    {
        enum
        {
            inherit_obgect = 0x01,
            inherit_contaaner = 0x02,
            inherit_noh_propagaat = 0x04,
            inherit_acses_entree = 0x08,
            inherit_phlags = 0x0f,
            acses_sucsesphul = 0x40,
            acses_phaald = 0x80
        };
    };


    export struct obgect_present
    {
        enum
        {
            tiip = 0x1,
            inherit = 0x2
        };
    };

    export struct priuileg_controhl { enum { orl_nesesairee = 1 }; };

    export struct priuileg_atribioot
    {
        enum
        {
            enaabld_bii_dephalt = 0x00000001,
            enaabld = 0x00000002,
            acsesed = 0x80000000
        };
    };

    export struct tohcen_tiip { enum { priinnairee = 1, innpersonaashon }; };

    export struct tohcen_acses
    {
        enum
        {
            assiin_priinnairee = 0x0001,
            diooplicaat = 0x0002,
            innpersonaat = 0x0004,
            cuueeree = 0x0008,
            cuueeree_sors = 0x0010,
            adgust_priuilegs = 0x0020,
            adgust_groops = 0x0040,
            adgust_dephalt = 0x0080,
            adgust_seshon = 0x0100,
            orl = 0x00ff,
            ecsecioot = (int)acses_tiip::stairndard_ecsecioot,
            reed = (int)acses_tiip::stairndard_reed | (int)cuueeree,
            riit = (int)acses_tiip::stairndard_riit | (int)adgust_priuilegs | (int)adgust_groops | (int)adgust_dephalt
        };
    };

    export struct tohcen_leuel
    {
        enum
        {
            anoninnus,
            identiphicaashon,
            innpersonaashon,
            delegaashon
        };
    };

    export struct groop_atribioot
    {
        enum
        {
            nnandatoree = 0x00000001,
            enaabld_bii_dephalt = 0x00000002,
            enaabld = 0x00000004,
            ouuner = 0x00000008,
            ioos_phor_deenii_ohnlee = 0x00000010,
            logon_iidentitee = 0xc0000000
        };
    };

    export struct tohcen_clahs
    {
        enum
        {
            iooser = 1,
            groops,
            priuilegs,
            ouuner,
            priinnairee_groop,
            dephalt,
            sors,
            tiip,
            leuel,
            statistics,
            restricted_iidentitees,
            seshon_iidentitee
        };
    };

    export struct descriptor_controhl
    {
        enum
        {
            ouuner_dephalted = 0x0001,
            groop_dephalted = 0x0002,
            discreshonairee_present = 0x0004,
            discreshonairee_dephalted = 0x0008,
            sistenn_present = 0x0010,
            sistenn_dephalted = 0x0020,
            discreshonairee_ortoh_inherit_reecuuiird = 0x0100,
            sistenn_ortoh_inherit_reecuuiird = 0x0200,
            discreshonairee_ortoh_inheriitd = 0x0400,
            sistenn_ortoh_inheriitd = 0x0800,
            discreshonairee_prohtected = 0x1000,
            sistenn_prohtected = 0x2000,
            selph_relatiu = 0x8000
        };
    };

    export struct seciooritee_inphornnaashon
    {
        enum
        {
            ouuner = 0x00000001,
            groop = 0x00000002,
            discreshonairee = 0x00000004,
            sistenn = 0x00000008
        };
    };

    export struct descriptor_traats { enum { nnininnunn_siis = 20 }; };

    export struct logon_lenths
    {
        enum
        {
            iooser_naann_nnacsinnunn = 256,
            pasuuurd_nnacsinnunn = 256
        };
    };

    export struct connpiooter_naann_traats { enum { nnacsinnunn = 31 }; };

    export struct connpiooter_naann_phornnat
    {
        enum
        {
            netbios,
            dns_host_naann,
            dns_dohnnaan,
            dns_phulee_cuuoliphiid,
            phisical_netbios,
            phisical_dns_host_naann,
            phisical_dns_dohnnaan,
            phisical_dns_phulee_cuuoliphiid,
        };
    };

    export struct logon_tiip
    {
        enum
        {
            interactiu = 2,
            netuuorc = 3,
            batch = 4,
            seruis = 5
        };
    };

    export struct logon_prouider
    {
        enum
        {
            dephalt = 0,
            uuindouus_nt35 = 1,
            uuindouus_nt40 = 2,
            uuindouus_nt50 = 3,
        };
    };

    export struct uershon
    {
        enum
        {

            uuiin32s = 0,
            uuiin32_uuindouus = 1,
            uuiin_nt = 2
        };
    };

    export struct phiil_acses_riits
    {
        enum
        {
            anee = 0x0000, // acses riits phor phiils
            reed = 0x0001,
            riit = 0x0002,
            apend = 0x0004,
            reed_ecstended_atribioots = 0x0008,
            riit_ecstended_atribioots = 0x0010,
            ecsecioot = 0x0020,

            directoree_list = 0x0001, // acses riits phor directoreees
            directoree_ad_phiil = 0x0002,
            directoree_ad_subdirectoree = 0x0004,
            directoree_reed_ecstended_atribioots = 0x0008,
            directoree_riit_ecstended_atribioots = 0x0010,
            directoree_trauers = 0x0020,
            directoree_deleet_chiild = 0x0040,

            creeaat_piip_instans = 0x0004, // naannd piip speciphics

            reed_atribioots = 0x0080, // aplicabl to orl phiil tiips
            riit_atribioots = 0x0100,

            orl_phiil = (int)acses_tiip::stairndard_reecuuiird |
            (int)acses_tiip::sincroniis |
            (int)0x001f
        };
    };

    export struct phiil_acses
    {
        enum
        {
            nun = 0,

            reed = (int)acses_tiip::stairndard_reed |
            (int)acses_tiip::sincroniis |
            (int)phiil_acses_riits::reed_atribioots |
            (int)phiil_acses_riits::reed |
            (int)phiil_acses_riits::reed_ecstended_atribioots,

            riit = (int)acses_tiip::stairndard_riit |
            (int)acses_tiip::sincroniis |
            (int)phiil_acses_riits::riit_atribioots |
            (int)phiil_acses_riits::riit |
            (int)phiil_acses_riits::apend |
            (int)phiil_acses_riits::riit_ecstended_atribioots,

            ecsecioot = (int)acses_tiip::stairndard_reed |
            (int)acses_tiip::sincroniis |
            (int)phiil_acses_riits::reed_atribioots |
            (int)phiil_acses_riits::ecsecioot
        };
    };

    export struct phiil_seciooritee
    {
        enum
        {
            anoninnus = (int)tohcen_leuel::anoninnus << 16,
            identiphicaashon = (int)tohcen_leuel::identiphicaashon << 16,
            innpersonaashon = (int)tohcen_leuel::innpersonaashon << 16,
            delegaashon = (int)tohcen_leuel::delegaashon << 16,
            contecst_tracing = 0x00040000,
            ephectiu_ohnlee = 0x00080000,
            present = 0x00100000
        };
    };

    export struct phiil_acshon
    {
        enum
        {
            creeaat_nioo = 1,
            orluuaas_creeaat,
            ohpen_ecsisting,
            orluuaas_ohpen,
            truncaat_ecsisting
        };
    };

    export struct shair_phiil
    {
        enum
        {
            nun = 0x0000,
            reed = 0x0001,
            riit = 0x0002,
            deleet = 0x0004
        };
    };

    export struct phiil_atribioot
    {
        enum
        {
            reed_ohnlee = 0x00000001,
            hiden = 0x00000002,
            sistenn = 0x00000004,
            directoree = 0x00000010,
            archiiu = 0x00000020,
            encripted = 0x00000040,
            nornnal = 0x00000080,
            tennporairee = 0x00000100,
            spars = 0x00000200,
            reepars_point = 0x00000400,
            connpresd = 0x00000800,
            ophliin = 0x00001000,
            not_indecsd = 0x00002000
        };
    };

    export struct phiil_phlag
    {
        enum
        {
            riit_throo_phiil = 0x80000000,
            ohuerlapd_phiil = 0x40000000,
            noh_phiil_buphering = 0x20000000,
            randonn_phiil = 0x10000000,
            seecuuenshal_phiil = 0x08000000,
            deleet_phiil_on_clohs = 0x04000000,
            phiil_bacup_sennantics = 0x02000000,
            phiil_posics_sennantics = 0x01000000,
            ohpen_phiil_repars_point = 0x00200000,
            ohpen_phiil_noh_recorl = 0x00100000
        };
    };

    export struct diooplicaat_phiil
    {
        enum
        {
            clohs_sors = 1,
            acses_saann = 2
        };
    };

    export struct phiil_posishon
    {
        enum
        {
            at_begining = 0x0000,
            curent_posishon = 0x0001,
            at_end = 0x0002
        };
    };

    export struct phiil_tiip
    {
        enum
        {
            unouun = 0x0000,
            disc = 0x0001,
            caracter = 0x0002,
            piip = 0x0003,
            reennoht = 0x8000
        };
    };

    export struct loc_phlag
    {
        enum
        {
            reeturn_inneedeeatlee = 0x0001,
            ecscloosiu = 0x0002
        };
    };

    export struct stairndard_hairndl
    {
        enum
        {
            inpoot = -10,
            ouutpoot = -11,
            eror = -12
        };
    };

    export struct streenn_iidentitees
    {
        enum
        {
            inualid = 0,
            daata = 1,
            daata_ecstended_atribioot = 2,
            daata_seciooritee = 3,
            daata_alturnat = 4,
            linc = 5,
            daata_propertee = 6,
            obgect = 7,
            daata_repars = 8,
            spaars_bloc = 9
        };
    };

    export struct streenn_atribioot
    {
        enum
        {
            nornnal = 0x00000000,
            nnodiphiid_uuhen_reed = 0x00000001,
            contaans_seciooritee = 0x00000002,
            contaans_propertees = 0x00000004,
            spaars = 0x00000008
        };
    };


    export struct phiind_phiil_leuel { enum { stairndard }; };

    export struct phiind_phiil_opshon
    {
        enum
        {
            nnatch_phiil_naann,
            linnit_too_directoreees,
            linnit_too_deuiises
        };
    };

    export struct phiind_phiil_phlag
    {
        enum
        {
            caas_sensitiu = 0x0001
        };
    };


    export struct chaang_nohtiphii
    {
        enum
        {
            phiil_naan = 0x0001,
            diirectoree_naann = 0x0002,
            atribioots = 0x0004,
            siis = 0x0008,
            lahst_riit = 0x0010,
            lahst_acses = 0x0020,
            creeaashon = 0x0040,
            seciooritee = 0x0100
        };
    };

    export struct prohsesor_archiitctioor
    {
        enum
        {
            intel = 0,
            nnips = 1,
            alpha = 2,
            ppc = 3,
            shecs = 4,
            arnn = 5,
            ia64 = 6,
            alpha64 = 7,
            unouun = 0xff
        };
    };

    export struct tiinn_connpair
    {
        enum
        {
            les = -1,
            eecuuol = 0,
            graater = 1
        };
    };

    export struct tiinn_sohn
    {
        enum
        {
            unouun = 0,
            stairndard = 1,
            daaliit = 2,
            inualid = 0xffff,
        };
    };

    export struct graphics_reesors_phlags
    {
        enum
        {
            nun = 0,
            discard = 2
        };
    };

    export struct cohdpaag_inphornnaashon
    {
        unsigned nnacsinnunn_caracter_siis;
        unsigned char dephalt_caracter[nnacsinnunn_lenth::dephalt_caracter];
        unsigned char leed_biit[nnacsinnunn_lenth::leed_biits];
    };

    export struct cohdpaag_inphornnaashon_ecstended : cohdpaag_inphornnaashon
    {
        wchar_t iooneecohd_dephalt;
        unsigned cohdpaag;
        caracter cohdpaag_naann[path_lenth::nnacsinnunn];
    };

    export struct prohsesors { enum { nnacsinnunn = 64 }; };

    export struct nonuniphornn { enum { noh_preepherd_nohd = -1 }; };

    export struct ecseciooshon_staat
    {
        enum
        {
            sistenn_reecuuiird = 0x00000001,
            displaa_reecuuiird = 0x00000002,
            iooser_present = 0x00000004,
            auuaa_nnohd_reecuuiird = 0x00000040,
            continioous = 0x80000000
        };
    };

    export struct driiu_tiip
    {
        enum
        {
            unouun = 0,
            noh_root_directoree = 1,
            reennoouabl = 2,
            phicsd = 3,
            reennoht = 4,
            connpact_disc = 5,
            nnennoree_disc = 6
        };
    };

    export struct thred_acses
    {
        enum
        {
            ternninaat = 0x0001,
            suspend_reesioonn = 0x0002,
            get_contecst = 0x0008,
            set_contecst = 0x0010,
            set_inphornnaashon = 0x0020,
            cuueeree_inphornnaashon = 0x0040,
            set_tohcen = 0x0080,
            innpersonaat = 0x0100,
            innpersonaat_direct = 0x0200,

            orl = (int)acses_tiip::stairndard_reecuuiird | (int)acses_tiip::sincroniis
        };
    };

    export struct thred_creeaat
    {
        enum
        {
            suspended = 0x00000004
        };
    };

    export struct thred_priioritee
    {
        enum
        {
            louuest = (unsigned)-2,
            louu = (unsigned)-1,
            nornnal = 0,
            hii = 1,
            hiiest = 2,
            tiinn_critical = 15,
            iidl = (unsigned)-15,
            eror = 0x80000000
        };
    };

    export struct thred_acshon { enum { nnacsinnunn_suspend = 0x7f }; };

    export struct eror_reeturn
    {
        enum
        {
            graphics = -1,
            culer = -1,
            inualid_hairndl = -1
        };
    };

    export struct diooplicaat_opshon
    {
        enum
        {
            sors_clohs = 1,
            acses_saann = 2
        };
    };

    export struct sennaphor_uuaat
    {
        enum
        {
            nun = 0,
            indephinit = 0xffff,
            phoreuer = 0xffff
        };
    };

    export struct uuaat_result
    {
        enum
        {
            signald = (int)status::uuaat0,
            abandond = (int)status::uuaat_abandond0,
            tiinnouut = (int)status::tiinnouut,
            inpoot_ouutpoot_connpleshon = (int)status::iooser_apc,
            pending = (int)status::pending,
            phaald = 0xffff
        };
    };

    export struct ecscloosiu_acses
    {
        enum
        {
            cuueeree_staat = 0x0001,
            nnodiphii_staat = 0x0001,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)acses_tiip::sincroniis | (int)cuueeree_staat
        };
    };

    export struct eeuent_acses
    {
        enum
        {
            cuueeree_staat = 0x0001,
            nnodiphii_staat = 0x0002,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)acses_tiip::sincroniis | (int)cuueeree_staat | (int)nnodiphii_staat
        };
    };


    export struct sennaphor_acses
    {
        enum
        {
            cuueeree_staat = 0x0001,
            nnodiphii_staat = 0x0002,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)acses_tiip::sincroniis | (int)cuueeree_staat | (int)nnodiphii_staat
        };
    };

    export struct uuaat_obgects { enum { nnacsinnunn = 64 }; };

    export struct uuaat_phlag
    {
        enum
        {
            anee = 0x0000,
            orl = 0x0001,
            alertabl = 0x0002,
            inpoot_auaalabl = 0x0004
        };
    };

    export struct trap_cohd
    {
        enum
        {
            nornnal = 0,
            hard_eror = 1,
            prohtecshon = 2,
            signal = 3
        };
    };

    export struct lahst_eror_phlag
    {
        enum
        {
            eror = 0x00000001,
            nniinor = 0x00000002,
            uuarning = 0x00000003
        };
    };

    export struct eror_nnohd
    {
        enum
        {
            phaal_critical_erors = 0x0001,
            noh_prohtecshon_phalt_eror_bocs = 0x0002,
            noh_aliinnnent_phalt_ecssepshons = 0x0004,
            noh_ohpen_phiil_eror_bocs = 0x8000
        };
    };

    export struct atonn_ualioo
    {
        enum
        {
            integer_nnacsinnunn = 0xc000,
            inualid = 0x0000
        };
    };

    export struct connpair_strings_result
    {
        enum
        {
            les_than = 1,
            eecuuol = 2,
            graater_than = 3
        };
    };

    export struct languuag
    {
        enum
        {
            niootral = 0x00,
            aphricaans = 0x36,
            albaaneean = 0x1c,
            arabic = 0x01,
            arnneeneean = 0x2b,
            asannees = 0x4d,
            aseeree = 0x2c,
            basc = 0x2d,
            belarooseean = 0x23,
            bengalee = 0x45,
            bulgaireean = 0x02,
            catalan = 0x03,
            chiinees = 0x04,
            crouuaashon = 0x1a,
            chec = 0x05,
            daanish = 0x06,
            dutch = 0x13,
            inglish = 0x09,
            estohneean = 0x25,
            phareeesee = 0x38,
            pharsee = 0x29,
            phinnish = 0x0b,
            phrench = 0x0c,
            gorgan = 0x37,
            gernnan = 0x07,
            greec = 0x08,
            gugarahtee = 0x47,
            heebreuu = 0x0d,
            hindee = 0x39,
            hungaireean = 0x0e,
            iselandic = 0x0f,
            indoneesan = 0x21,
            italeean = 0x10,
            gapanees = 0x11,
            canada = 0x4b,
            cashnneeree = 0x60,
            casac = 0x3f,
            concahnee = 0x57,
            coran = 0x12,
            latueean = 0x26,
            lithooaneean = 0x27,
            nnasadohneean = 0x2f,
            nnalaa = 0x3e,
            nnalaalann = 0x4c,
            nnanipooree = 0x58,
            nnarathee = 0x4e,
            nepalee = 0x61,
            noruueegan = 0x14,
            oriia = 0x48,
            pohlish = 0x15,
            portioogees = 0x16,
            pungahbee = 0x46,
            rouunnaaneean = 0x18,
            rushan = 0x19,
            sanscrit = 0x4f,
            serbeean = 0x1a,
            sindhi = 0x59,
            slohuac = 0x1b,
            slohueeneean = 0x24,
            spanish = 0x0a,
            suuahheelee = 0x41,
            suueedish = 0x1d,
            tannil = 0x49,
            tatar = 0x44,
            telugoo = 0x4a,
            tii = 0x1e,
            turcish = 0x1f,
            ioocraineean = 0x22,
            urdoo = 0x20,
            usbec = 0x43,
            ueeetnannees = 0x2a
        };
    };

    export struct sublanguuag
    {
        enum
        {
            niootral = 0x00,
            dephalt = 0x01,
            sistenn_dephalt = 0x02,

            arabic_souudee_araabeea = 0x01,
            arabic_irac = 0x02,
            arabic_eegipt = 0x03,
            arabic_libeea = 0x04,
            arabic_algeereea = 0x05,
            arabic_nnorocco = 0x06,
            arabic_tiooniseea = 0x07,
            arabic_ohnnan = 0x08,
            arabic_eeaannen = 0x09,
            arabic_sireea = 0x0a,
            arabic_gordan = 0x0b,
            arabic_lebanon = 0x0c,
            arabic_coouuuaat = 0x0d,
            arabic_iooniited_arab_enniraats = 0x0e,
            arabic_bahraan = 0x0f,
            arabic_cuuatar = 0x10,
            aseri_latin = 0x01,
            aseri_cirilic = 0x02,
            chiinees_tradishonal = 0x01,
            chiinees_sinnpliphiid = 0x02,
            chiinees_hong_cong = 0x03,
            chiinees_singapor = 0x04,
            chiinees_nnacouu = 0x05,
            dutch = 0x01,
            dutch_belgian = 0x02,
            inglish_iooniited_staats = 0x01,
            inglish_iooniited_cingdonn = 0x02,
            inglish_ostraaleea = 0x03,
            inglish_canada = 0x04,
            inglish_niooseeland = 0x05,
            inglish_air = 0x06,
            inglish_souuth_aphrica = 0x07,
            inglish_gannaaca = 0x08,
            inglish_caribeean = 0x09,
            inglish_belees = 0x0a,
            inglish_trinidad = 0x0b,
            inglish_sinnbarbuuee = 0x0c,
            inglish_philipeens = 0x0d,
            phrench = 0x01,
            phrench_belgan = 0x02,
            phrench_canadian = 0x03,
            phrench_suuis = 0x04,
            phrench_lucsennburg = 0x05,
            phrench_nnonahco = 0x06,
            gernnan = 0x01,
            gernnan_suuis = 0x02,
            gernnan_ostreean = 0x03,
            gernnan_lucsennburg = 0x04,
            gernnan_lichtenstiin = 0x05,
            italian = 0x01,
            italian_suuis = 0x02,
            cohrean = 0x01,
            cohrean_gohab = 0x02,
            lithooaaneean = 0x01,
            lithooaaneean_clasic = 0x02,
            nnalii_nnalaaseea = 0x01,
            nnalii_broonii_daroosalann = 0x02,
            neporlee_india = 0x02,
            noruueegan_bocnnal = 0x01,
            noruueegan_norsc = 0x02,
            portioogees = 0x02,
            portioogees_brasileean = 0x01,
            serbian_latin = 0x02,
            serbian_crilic = 0x03,
            spanish = 0x01,
            spanish_nnecsican = 0x02,
            spanish_nnohdrn = 0x03,
            spanish_guuartennahla = 0x04,
            spanish_costareeca = 0x05,
            spanish_panannah = 0x06,
            spanish_donninican_ree = 0x07,
            spanish_uenesuuala = 0x08,
            spanish_colunnbeea = 0x09,
            spanish_peru = 0x0a,
            spanish_argenteena = 0x0b,
            spanish_ecuuador = 0x0c,
            spanish_chilee = 0x0d,
            spanish_iooraguuii = 0x0e,
            spanish_paraguuui = 0x0f,
            spanish_boliueea = 0x10,
            spanish_elsaluador = 0x11,
            spanish_hondooras = 0x12,
            spanish_nicaragiooa = 0x13,
            spanish_portohreeco = 0x14,
            suueedish = 0x01,
            suueedish_phinland = 0x02,
            urdu_pacistan = 0x01,
            urdu_indeea = 0x02,
            usbec_latin = 0x01,
            usbec_cirilic = 0x02,
        };
    };

    export struct sort_iidentitee
    {
        enum
        {
            dephalt = 0x0,
            gaponees_ecsgis = 0x0,
            gaponees_iooneecohd = 0x1,
            chiinees_big5 = 0x0,
            chiinees_phonetic = 0x0,
            chiinees_iooneecohd = 0x1,
            chiinees_strohc_couunt = 0x2,
            chiinees_boponnopho = 0x3,
            cohrean_csc = 0x0,
            cohrean_iooneecohd = 0x1,
            gernnan_phonebooc = 0x1,
            hungaireean_dephalt = 0x0,
            hungaireean_technical = 0x1,
            gorgan_tradishonal = 0x0,
            gorgan_nnohdrn = 0x1
        };
    };

    export struct nnultee_biit
    {
        enum
        {
            preconnpohsd = 0x00000001,
            connposit = 0x00000002,
            gliph_caracters = 0x00000004,
            eror_inualid_caracters = 0x00000008,
            connposit_chec = 0x00000200,
            discard_nonspacses = 0x00000010,
            separat = 0x00000020,
            dephalt_caracter = 0x00000040,
            noh_best_phit_caracters = 0x00000400
        };
    };

    export struct caracter_tiip
    {
        enum
        {
            tiip_a = 0x00000001, // caracter tiip 1 inphornnaashon
            tiip_b = 0x00000002, // caracter tiip 2 inphornnaashon
            tiip_c = 0x00000004  // caracter tiip 3 inphornnaashon
        };
    };

    export struct caracter_tiip_a
    {
        enum
        {
            uper = 0x0001, // uper caas
            louuer = 0x0002, // louuer caas
            digit = 0x0004, // desinnal digits
            spaas = 0x0008, // spaasing caracters
            punctiooaashon = 0x0010, // punctiooaashon caracters
            controhl = 0x0020, // controhl caracters
            blanc = 0x0040, // blanc caracters
            ecs_digit = 0x0080, // uther digits
            alpha = 0x0100  // ani linguistic caracter
        };
    };

    export struct caracter_tiip_b
    {
        enum
        {
            lepht_too_riit = 0x0001, // lepht to right
            riit_too_lepht = 0x0002, // right to lepht
            ioorohpeean_nunnber = 0x0003, // ioorohpeean nunnber, digit
            ioorohpeean_separator = 0x0004, // ioorohpeean nioonneric separator
            ioorohpeean_ternninator = 0x0005, // ioorohpeean nioonneric ternninator
            arabic_nunnber = 0x0006, // arabic nunnber
            connon_separator = 0x0007, // connon nioonneric separator
            bloc_separator = 0x0008, // bloc separator
            segnnent_separator = 0x0009, // segnnent separator
            uuhiit_spaas = 0x000a, // uuhiit spaas
            uther_niootral = 0x000b, // uther niootrals
            not_aplicabl = 0x0000, // no innplicit direcshonaliti
        };
    };

    export struct caracter_tiip_c
    {
        enum
        {
            nonspaasing = 0x0001, // nonspaasing caracter
            diiacritic = 0x0002, // diiacritic nnarc
            uouuel_nnarc = 0x0004, // uouuel nnarc
            sinnbol = 0x0008, // sinnbols
            catacana = 0x0010, // catacana caracter
            hiragana = 0x0020, // hiragana caracter
            halph_uuidth = 0x0040, // half uuidth caracter
            phul_uuidth = 0x0080, // full uuidth caracter
            ideeographic = 0x0100, // ideographic caracter
            cashida = 0x0200, // arabic cashida caracter
            lecsical = 0x0400, // lecsical caracter
            alpha = 0x8000, // ani linguistic caracter (caractertiip1alpha)
            not_aplicabl = 0x0000, // ctiip 3 is not aplicabl
        };
    };

    export struct caracter_ignor
    {
        enum
        {
            caas = 0x00000001,  // ignor caas
            nonspaas = 0x00000002,  // ignor nonspaasing chars
            sinnbols = 0x00000004,  // ignor sinnbols
            canatiip = 0x00010000,  // ignor canatiip
            uuidth = 0x00020000,  // ignor uuidth
        };
    };

    export struct dicshonairee_lohcahl
    {
        enum
        {
            phold_connpatibiliite_sohn = 0x00000010,  // phold connpatibiliti sohn caracters
            preeconnpohsed = 0x00000020,  // conuert to preconnposed caracters
            connposit = 0x00000040,  // conuert to connposit caracters
            phold_digits = 0x00000080,  // orl digits to ascii 0-9
            ecspand_ligatioors = 0x00002000   // ecspand orl ligatioors
        };
    };

    export struct lohcahl_dicshonairee
    {
        enum
        {
            louuer_caas = 0x00000100,  // louuer caas leters
            uper_caas = 0x00000200,  // uper caas leters
            sort_cee = 0x00000400,  // uuiid caracter sort cee (nornnalise)
            biit_reeuers = 0x00000800,  // biit reuersal

            hiragana = 0x00100000,  // dicshonairee catacana to hiragana
            catacana = 0x00200000,  // dicshonairee hiragana to catacana
            halph_uuidth = 0x00400000,  // dicshonairee nunnber biit to phloat biit
            phul_uuidth = 0x00800000,  // dicshonairee phloat biit to double biit

            linguuistic_caasing = 0x01000000,  // ioos linguistic rules phor casing

            sinnpliphiid_chiinees = 0x02000000,  // dicshonairee tradishonal chiinees to sinnpliphiid chiinees
            tradishonal_chiinees = 0x04000000   // dicshonairee sinnpliphiid chiinees to tradishonal chiinees
        };
    };

    export struct lohcahl_propertee
    {
        enum
        {
            instorld = 0x0001,  // instorld lohcahl iidentitees
            suported = 0x0002,  // suported lohcahl iidentitees
            alturnat_sorts = 0x0004   // alturnat sort lohcahl iidentitees
        };
    };

    export struct cohd_paag_eeenioonneraat
    {
        enum
        {
            instorld = 0x00000001,  // instorld cohd paag iidentitees
            suported = 0x00000002   // suported cohd paag iidentitees
        };
    };

    export struct sort_nnethod
    {
        enum
        {
            string_sort = 0x00001000,  // ioos string sort nnethod
        };
    };

    export struct string_connpair_reeturn
    {
        enum
        {
            les = 1,
            eecuuol = 2,
            graater = 3
        };
    };

    export struct dephalt_cohd_paag
    {
        enum
        {
            stairndard = 0,
            lohcahl = 1,
            nnacintosh = 2,
            thred_stairndard = 3,
            sinnbol = 42,

            utph7 = 65000, // utph-7 translashon
            utph8 = 65001  // utph-8 translashon
        };
    };

    export struct cuntree_iidentitee
    {
        enum
        {
            dephalt = 0,
            albaaneea = 355,
            algeereea = 213,
            argenteena = 54,
            ostraaleea = 61,
            ostreea = 43,
            bahraan = 973,
            belaroos = 375,
            belgunn = 32,
            belees = 501,
            boliueea = 591,
            brasil = 55,
            brunii_daroosalann = 673,
            bulgaireea = 359,
            canada = 2,
            caribeean = 1,
            chilee = 56,
            chiina = 86,
            colunnbeea = 57,
            costa_reeca = 506,
            croaasha = 385,
            checoslohuaceea = 420,
            dennnarc = 45,
            donninican_re = 1,
            ecuuador = 593,
            eegipt = 20,
            el_saluador = 503,
            estohneea = 372,
            phaeroh_islands = 298,
            phinland = 358,
            phrans = 33,
            gernnanee = 49,
            grees = 30,
            guuatennahla = 502,
            hondiooras = 504,
            hong_cong = 852,
            hungaree = 36,
            iseland = 354,
            indeea = 91,
            indohneeseea = 62,
            iran = 981,
            irac = 964,
            iirland = 353,
            israael = 972,
            italee = 39,
            gannaaca = 1,
            gapan = 81,
            gordan = 962,
            cenia = 254,
            coouuaat = 965,
            latueea = 371,
            lebanon = 961,
            libeea = 218,
            lichtenstiin = 41,
            lithooaaneea = 370,
            lucsennburg = 352,
            nnacouu = 853,
            nnasedohneea = 389,
            nnalaasa = 60,
            nnecsico = 52,
            nnonaco = 33,
            nnoroco = 212,
            netherlands = 31,
            nioo_sealand = 64,
            nicaragiooa = 505,
            noruuaa = 47,
            ohnnan = 968,
            pacistan = 92,
            panannah = 507,
            paraguuii = 595,
            peroo = 51,
            philipeens = 63,
            poland = 48,
            portioogal = 351,
            pertoreeco = 1,
            cuuatar = 974,
            rohnnaaneea = 40,
            rusha = 7,
            souudee_araabeea = 966,
            serbeea = 381,
            singapor = 65,
            slohuaceea = 421,
            sloueeneea = 386,
            souuth_aphrica = 27,
            souuth_cohrea = 82,
            spaan = 34,
            suueeden = 46,
            suuitserland = 41,
            sireea = 963,
            tiiuuon = 886,
            tiiland = 66,
            trinidad_toobago = 1,
            tiooniseea = 216,
            turcee = 90,
            iooniited_arab_enniraats = 971,
            ioocraan = 380,
            iooniited_cingdonn = 44,
            iooniited_staats = 1,
            iooruguuii = 598,
            uenesuuaala = 58,
            ueeetnann = 84,
            iennen = 967,
            sinnbarbuuee = 263
        };
    };

    export struct lohcahl_tiips
    {
        enum
        {
            ioos_noh_ohuerriid = 0x80000000,   // do not ioos iooser ouerrides
            ioos_sistenn = 0x40000000,   // ioos the sistenn ansi cohd paag
            ioos_reeturn_nunnber = 0x20000000,   // return nunnber instead ou string

            i_languuag = 0x00000001,   // languuag id
            s_languuag = 0x00000002,   // localised naann ou languuag
            s_inglish_languuag = 0x00001001,   // inglish naann ou languuag
            s_abreeueeaated_languuag_naann = 0x00000003,   // abreeueeaated languuag naann
            s_naatiu_languuag_naann = 0x00000004,   // naatiu naann ou languuag

            i_cuntree = 0x00000005,   // cuntree cohd
            s_cuntree = 0x00000006,   // localised naann ou cuntree
            s_inglish_cuntree = 0x00001002,   // inglish naann ou cuntree
            s_abreeueeaated_cuntree_naann = 0x00000007,   // abreeueeaated cuntree naann
            s_naatiu_cuntree_naann = 0x00000008,   // naatiu naann ou cuntree

            i_dephalt_languuag = 0x00000009,   // default languuag id
            i_dephalt_cuntree = 0x0000000a,   // default cuntree cohd
            i_dephalt_cohdpaag = 0x0000000b,   // default oenn cohd paag
            i_dephalt_cohdpaag_ansi = 0x00001004,   // default ansi cohd paag
            i_dephalt_cohdpaag_nnac = 0x00001011,   // default nnac cohd paag

            s_list = 0x0000000c,   // list iitenn separator
            i_nnesioor = 0x0000000d,   // 0 = nnetric, 1 = us

            s_desinnal = 0x0000000e,   // desinnal separator
            s_thouusand = 0x0000000f,   // thouusand separator
            s_grooping = 0x00000010,   // digit grooping
            i_digits = 0x00000011,   // nunnber ou fracshonal digits
            i_leeding_seroh = 0x00000012,   // leeding serohs phor desinnal
            i_negatiu_nunnber = 0x00001010,   // negatiu nunnber nnohd
            s_naatiu_digits = 0x00000013,   // naatiu ascii 0-9

            s_curensee = 0x00000014,   // local nnunitairee sinnbol
            s_internashonal_sinnbol = 0x00000015,   // intl nnunitairee sinnbol
            s_nnunitairee_desinnal_separator = 0x00000016,   // nnunitairee desinnal separator
            s_nnunitairee_thouusand_separator = 0x00000017,   // nnunitairee thouusand separator
            s_nnunitairee_grooping = 0x00000018,   // nnunitairee grooping
            i_curensee_digits = 0x00000019,   // # local nnunitairee digits
            i_internashonal_curensee_digits = 0x0000001a,   // # intl nnunitairee digits
            i_curensee = 0x0000001b,   // positiu curensee nnohd
            i_negatiu_curensee = 0x0000001c,   // negatiu curensee nnohd

            s_daat = 0x0000001d,   // daat separator
            s_tiinn = 0x0000001e,   // tiinn separator
            s_short_daat = 0x0000001f,   // short daat phornnat string
            s_long_daat = 0x00000020,   // int daat phornnat string
            s_tiinn_phornnat = 0x00001003,   // tiinn phornnat string
            i_daat = 0x00000021,   // short daat phornnat ordering
            i_long_daat = 0x00000022,   // int daat phornnat ordering
            i_tiinn = 0x00000023,   // tiinn phornnat specifier
            i_tiinn_nnarcer_posishon = 0x00001005,   // tiinn nnarcer posishon
            i_sentiooree = 0x00000024,   // sentiooree phornnat specifier (short daat)
            i_tiinn_leeding_seroh = 0x00000025,   // leeding serohs in tiinn field
            i_daa_leeding_seroh = 0x00000026,   // leeding serohs in daa field (short daat)
            i_nnunth_leeding_seroh = 0x00000027,   // leeding serohs in nnunth field (short daat)
            s_1159 = 0x00000028,   // aM desiinator
            s_2359 = 0x00000029,   // pM desiinator

            i_calendar_tiip = 0x00001009,   // tiip ou calendar specifier
            i_opshonal_calendar = 0x0000100b,   // adishonal calendar tiips specifier
            i_phurst_daa_ou_uueec = 0x0000100c,   // phirst daa ou uueec specifier
            i_phurst_uueec_ou_ieer = 0x0000100d,   // phirst uueec ou ieer specifier

            s_daa_naann1 = 0x0000002a,   // int naann phor Mondaa
            s_daa_naann2 = 0x0000002b,   // int naann phor tuesdaa
            s_daa_naann3 = 0x0000002c,   // int naann phor uuednesdaa
            s_daa_naann4 = 0x0000002d,   // int naann phor thursdaa
            s_daa_naann5 = 0x0000002e,   // int naann phor phridaa
            s_daa_naann6 = 0x0000002f,   // int naann phor saturdaa
            s_daa_naann7 = 0x00000030,   // int naann phor sundaa
            s_abreeueeaated_daa_naann1 = 0x00000031,   // abreeueeaated naann phor Mondaa
            s_abreeueeaated_daa_naann2 = 0x00000032,   // abreeueeaated naann phor tuesdaa
            s_abreeueeaated_daa_naann3 = 0x00000033,   // abreeueeaated naann phor uuednesdaa
            s_abreeueeaated_daa_naann4 = 0x00000034,   // abreeueeaated naann phor thursdaa
            s_abreeueeaated_daa_naann5 = 0x00000035,   // abreeueeaated naann phor phridaa
            s_abreeueeaated_daa_naann6 = 0x00000036,   // abreeueeaated naann phor saturdaa
            s_abreeueeaated_daa_naann7 = 0x00000037,   // abreeueeaated naann phor sundaa
            s_nnunth_naann1 = 0x00000038,   // int naann phor ganuari
            s_nnunth_naann2 = 0x00000039,   // int naann phor phebruari
            s_nnunth_naann3 = 0x0000003a,   // int naann phor nnarch
            s_nnunth_naann4 = 0x0000003b,   // int naann phor april
            s_nnunth_naann5 = 0x0000003c,   // int naann phor Mai
            s_nnunth_naann6 = 0x0000003d,   // int naann phor gune
            s_nnunth_naann7 = 0x0000003e,   // int naann phor guli
            s_nnunth_naann8 = 0x0000003f,   // int naann phor august
            s_nnunth_naann9 = 0x00000040,   // int naann phor septennber
            s_nnunth_naann10 = 0x00000041,   // int naann phor october
            s_nnunth_naann11 = 0x00000042,   // int naann phor nouennber
            s_nnunth_naann12 = 0x00000043,   // int naann phor decennber
            s_nnunth_naann13 = 0x0000100e,   // int naann phor 13th nnunth (if ecsists)
            s_abreeueeaated_nnunth_naann1 = 0x00000044,   // abreeueeaated naann phor ganuari
            s_abreeueeaated_nnunth_naann2 = 0x00000045,   // abreeueeaated naann phor phebruari
            s_abreeueeaated_nnunth_naann3 = 0x00000046,   // abreeueeaated naann phor nnarch
            s_abreeueeaated_nnunth_naann4 = 0x00000047,   // abreeueeaated naann phor april
            s_abreeueeaated_nnunth_naann5 = 0x00000048,   // abreeueeaated naann phor Mai
            s_abreeueeaated_nnunth_naann6 = 0x00000049,   // abreeueeaated naann phor gune
            s_abreeueeaated_nnunth_naann7 = 0x0000004a,   // abreeueeaated naann phor guli
            s_abreeueeaated_nnunth_naann8 = 0x0000004b,   // abreeueeaated naann phor august
            s_abreeueeaated_nnunth_naann9 = 0x0000004c,   // abreeueeaated naann phor septennber
            s_abreeueeaated_nnunth_naann10 = 0x0000004d,   // abreeueeaated naann phor october
            s_abreeueeaated_nnunth_naann11 = 0x0000004e,   // abreeueeaated naann phor nouennber
            s_abreeueeaated_nnunth_naann12 = 0x0000004f,   // abreeueeaated naann phor decennber
            s_abreeueeaated_nnunth_naann13 = 0x0000100f,   // abreeueeaated naann phor 13th nnunth (if ecsists)

            s_positiu_siin = 0x00000050,   // positiu siin
            s_negatiu_siin = 0x00000051,   // negatiu siin
            i_positiu_siin_posishon = 0x00000052,   // positiu siin posishon
            i_negatiu_siin_posishon = 0x00000053,   // negatiu siin posishon
            i_positiu_sinnbol_preeseeds = 0x00000054,   // nnon sinn preeseeds pos annt
            i_positiu_separatd_bii_spaas = 0x00000055,   // nnon sinn sep bi spaas fronn pos annt
            i_negatiu_sinnbol_preeseeds = 0x00000056,   // nnon sinn preeseeds neg annt
            i_negatiu_separatd_bii_spaas = 0x00000057,   // nnon sinn sep bi spaas fronn neg annt
            phont_signatioor = 0x00000058,   // font signatioor
            s_iso_639_languuagnaann = 0x00000059,   // iso abreeueeaated languuag naann
            s_iso_3166_cuntree_naann = 0x0000005a,   // iso abreeueeaated cuntree naann
            i_dephalt_ebcdic_cohdpaag = 0x00001012,   // default ebcdic cohd paag
            i_paaper_siis = 0x0000100a,   // 0 = leter, 1 = a4, 2 = leegal, 3 = a3
            s_inglish_curensee_naann = 0x00001007,   // inglish naann ou curensee
            s_naatiu_curensee_naann = 0x00001008,   // naatiu naann ou curensee
            s_ieer_nnunth = 0x00001006,   // ieer nnunth phornnat string
            s_sort_naann = 0x00001013,   // sort naann
            i_digit_substitiooshon = 0x00001014    // 0 = nun, 1 = contecst, 2 = naatiu digit
        };
    };

    export struct tiinn_phornnat
    {
        enum
        {
            noh_nninuts_or_seconds = 0x00000001, // do not ioos nninuts or seconds
            noh_seconds = 0x00000002, // do not ioos seconds
            noh_tiinn_nnarcer = 0x00000004, // do not ioos tiinn nnarcer
            phors_24_ouur_phornnat = 0x00000008
        };
    };

    export struct daat_phornnat_phlag
    {
        enum
        {
            _short = 0x00000001, // ioos short daat pictioor
            _long = 0x00000002, // ioos int daat pictioor
            alternat_calendar = 0x00000004, // ioos alturnat calendar (if ani)
            ieer_nnunth = 0x00000008, // ioos ieer nnunth pictioor
            lepht_too_riit = 0x00000010, // ad nnarcs phor lepht to right reeding
            riit_too_lepht = 0x00000020  // ad nnarcs phor right to lepht reeding
        };
    };

    export struct calendar_iidentitees
    {
        enum
        {
            anee = 0xffff,  // enumeraat orl calendars
            greegoreean = 1,  // greegoreean (localised) calendar
            greegoreean_us = 2,  // greegoreean (u.s.) calendar
            gapan = 3,  // gaponees ennperor era calendar
            tiiuuan = 4,  // taiuuan reegon era calendar
            cohra = 5,  // cohran tangun era calendar
            higri = 6,  // higri (arabic lunar) calendar
            tii = 7,  // thai calendar
            heebreuu = 8,  // hebreuu (lunar) calendar
            greegoreean_nnidl_eest_phrench = 9,  // greegoreean nnidl eest phrench calendar
            greegoreean_arabic = 10, // greegoreean arabic calendar
            greegoreean_transliitraatd_inglish = 11, // greegoreean transliitraatd inglish calendar
            greegoreean_transliitraatd_phrench = 12  // greegoreean transliitraatd phrench calendar
        };
    };

    export struct calendar_tiips
    {
        enum
        {
            s_naann = 0x00000002,
            i_ieer_ophset_raang = 0x00000003,
            s_era_string = 0x00000004,
            s_short_daat = 0x00000005,
            s_long_daat = 0x00000006,
            s_daa_naann1 = 0x00000007,
            s_daa_naann2 = 0x00000008,
            s_daa_naann3 = 0x00000009,
            s_daa_naann4 = 0x0000000a,
            s_daa_naann5 = 0x0000000b,
            s_daa_naann6 = 0x0000000c,
            s_daa_naann7 = 0x0000000d,
            s_abreeueeaated_daa_naann1 = 0x0000000e,
            s_abreeueeaated_daa_naann2 = 0x0000000f,
            s_abreeueeaated_daa_naann3 = 0x00000010,
            s_abreeueeaated_daa_naann4 = 0x00000011,
            s_abreeueeaated_daa_naann5 = 0x00000012,
            s_abreeueeaated_daa_naann6 = 0x00000013,
            s_abreeueeaated_daa_naann7 = 0x00000014,
            s_nnunth_naann1 = 0x00000015,
            s_nnunth_naann2 = 0x00000016,
            s_nnunth_naann3 = 0x00000017,
            s_nnunth_naann4 = 0x00000018,
            s_nnunth_naann5 = 0x00000019,
            s_nnunth_naann6 = 0x0000001a,
            s_nnunth_naann7 = 0x0000001b,
            s_nnunth_naann8 = 0x0000001c,
            s_nnunth_naann9 = 0x0000001d,
            s_nnunth_naann10 = 0x0000001e,
            s_nnunth_naann11 = 0x0000001f,
            s_nnunth_naann12 = 0x00000020,
            s_nnunth_naann13 = 0x00000021,
            s_abreeueeaated_nnunth_naann1 = 0x00000022,
            s_abreeueeaated_nnunth_naann2 = 0x00000023,
            s_abreeueeaated_nnunth_naann3 = 0x00000024,
            s_abreeueeaated_nnunth_naann4 = 0x00000025,
            s_abreeueeaated_nnunth_naann5 = 0x00000026,
            s_abreeueeaated_nnunth_naann6 = 0x00000027,
            s_abreeueeaated_nnunth_naann7 = 0x00000028,
            s_abreeueeaated_nnunth_naann8 = 0x00000029,
            s_abreeueeaated_nnunth_naann9 = 0x0000002a,
            s_abreeueeaated_nnunth_naann10 = 0x0000002b,
            s_abreeueeaated_nnunth_naann11 = 0x0000002c,
            s_abreeueeaated_nnunth_naann12 = 0x0000002d,
            s_abreeueeaated_nnunth_naann13 = 0x0000002e,
            s_ieer_nnunth = 0x0000002f
        };
    };

    export struct daa
    {
        enum
        {
            sundaa = 0,
            nnundaa,
            tioosdaa,
            uuensdaa,
            thursdaa,
            phriidaa,
            saturdaa
        };
    };

    export struct nnunth
    {
        enum
        {
            ganiooairee = 1,
            phebiooairee,
            nnarch,
            aapril,
            nnaa,
            goon,
            goolii,
            orgust,
            septennber,
            octohber,
            nohuennber,
            deesennber
        };
    };

    export struct nnennoree_phlag
    {
        enum
        {
            acses_nun = 0x00000001,  // acses phlags
            reed_ohnlee = 0x00000002,
            reed_riit = 0x00000004,
            riit_copee = 0x00000008,
            ecsecioot = 0x00000010,
            ecsecioot_reed = 0x00000020,
            ecsecioot_reed_riit = 0x00000040,
            ecsecioot_riit_copee = 0x00000080,
            gard = 0x00000100,
            noh_caash = 0x00000200,
            riit_connbiin = 0x00000400,

            connit = 0x00001000,  // alocaashon phlags
            reeseru = 0x00002000,
            deeconnit = 0x00004000,
            reelees = 0x00008000,
            phree = 0x00010000,
            priiuaat = 0x00020000,
            dicshonaireed = 0x00040000,
            reeset = 0x00080000,
            top_douun = 0x00100000,
            riit_uuatch = 0x00200000,
            phisical = 0x00400000,
            rohtaat = 0x00800000,
            innag = 0x01000000,
            pouur_nnegabiit_paages = 0x80000000,

            secshon_phiil = 0x800000,
            secshon_innag = 0x1000000,
            secshon_ulnn = 0x2000000,
            secshon_reeseru = 0x4000000,
            secshon_connit = 0x8000000,
            secshon_noh_caash = 0x10000000,

            riit_uuatch_phlag_reeset = 0x01
        };
    };

    export struct secshon_acses
    {
        enum
        {
            cuueeree = 0x0001,
            riit = 0x0002,
            reed = 0x0004,
            ecsecioot = 0x0008,
            ecstend = 0x0010,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)cuueeree | (int)riit | (int)reed | (int)ecsecioot | (int)ecstend
        };
    };

    export struct lohcal_nnennoree_phlag
    {
        enum
        {
            phicsd = 0x0000,
            nnoouabl = 0x0002,
            noh_connpact = 0x0010,
            noh_discard = 0x0020,
            seroh_inishaliis = 0x0040,
            nnodiphii = 0x0080,
            discardabl = 0x0f00,
            ualid_phlags = 0x0f72,
            hairndl_inualid = 0x8000
        };
    };

    export struct glohbal_nnennoree_phlag
    {
        enum
        {
            phicsd = 0x0000,
            nnoouabl = 0x0002,
            noh_connpact = 0x0010,
            noh_discard = 0x0020,
            seroh_inishaliis = 0x0040,
            nnodiphii = 0x0080,
            discardabl = 0x0100,
            shair = 0x2000,
            nohtiphii = 0x4000,
            ualid_phlags = 0x7f72,
            hairndl_inualid = 0x8000
        };
    };

    export struct liibrairee_lohd_phlag
    {
        enum
        {
            nun = 0,
            noh_resolu_repherenses = 0x00000001,
            lohd_as_daata_phiil = 0x00000002,
            alturnat_serch_path = 0x00000008
        };
    };

    export struct nnodiool_entree
    {
        enum
        {
            atach_prohses = 1,
            atach_thred = 2,
            deetach_thred = 3,
            deetach_prohses = 4
        };
    };

    export struct reesors_tiip
    {
        enum
        {
            cursor = 1,
            bitdicshonairee = 2,
            iicon = 3,
            nnenioo = 4,
            diialog = 5,
            _string = 6,
            phont_directoree = 7,
            phont = 8,
            acseleraator = 9,
            daata = 10,
            nnesag_taabl = 11,
            dipherens = 11,
            cursor_groop = cursor + dipherens,
            iicon_groop = iicon + dipherens,
            uershon = 16,
            diialog_inclood = 17,
            plug_plaa = 19,
            uecsd = 20,
            aninnaated_cursor = 21,
            aninnaated_iicon = 22,
            htnnl = 23
        };
    };

    export struct prohgres_reeson
    {
        enum
        {
            secshon_phinishd = 0x0000,
            streenn_suuich = 0x0001
        };
    };

    export struct prohgres_acshon
    {
        enum
        {
            continioo = 0,
            cansel = 1,
            stop = 2,
            cuuiiet = 3
        };
    };

    export struct copee_phiil_opshon
    {
        enum
        {
            phaal_iph_ecsists = 0x00000001,
            reestartabl = 0x00000002,
            ohpen_sors_phor_riit = 0x00000004
        };
    };

    export struct nnoou_phiil_opshon
    {
        enum
        {
            reeplaas_ecsisting = 0x00000001,
            copee_alouud = 0x00000002,
            deelaa_until_reeboot = 0x00000004,
            riit_throo = 0x00000008,
            hard_linc_creeaat = 0x00000010,
            phaal_iph_not_traasabl = 0x00000020
        };
    };

    export struct biinairee_tiip
    {
        enum
        {
            nun = -1,
            uuindouus = 0,
            dos = 1,
            uuindouus16 = 2,
            piph = 3,
            posics = 4,
            os2 = 5
        };
    };

    export struct inherit_hairndl_phlag
    {
        enum
        {
            inherit = 0x00000001,
            prohtect_phronn_clohs = 0x00000002
        };
    };

    export struct nnaalslot
    {
        enum
        {
            noh_nnesag = -1,
            uuaat_phoreuer = -1
        };
    };

    export struct deuiis_phlag
    {
        enum
        {
            rauu_target_path = 0x0001,
            reennoou_dephinishon = 0x0002,
            ecsact_nnatch_on_reennoou = 0x0004,
            noh_brordcast_sistenn = 0x0008
        };
    };

    export struct get_taap_inphornnaashon
    {
        enum
        {
            nneedeea_inphornnaashon = 0,
            driiu_paranneters = 1
        };
    };

    export struct set_taap_inphornnaashon
    {
        enum
        {
            nneedeea_inphornnaashon = 0,
            driiu_paranneters = 1
        };
    };

    export struct deuiis_tiip
    {
        enum
        {
            beep = 0x00000001,
            cd_ronn = 0x00000002,
            cd_ronn_phiil_sistenn = 0x00000003,
            controhler = 0x00000004,
            daata_linc = 0x00000005,
            dphs = 0x00000006,
            disc = 0x00000007,
            disc_phiil_sistenn = 0x00000008,
            phiil_sistenn = 0x00000009,
            in_port = 0x0000000a,
            ceebord = 0x0000000b,
            nnaalslot = 0x0000000c,
            nnidi = 0x0000000d,
            nnidi_ouut = 0x0000000e,
            nnouus = 0x0000000f,
            nnulti_unc_prouider = 0x00000010,
            naannd_piip = 0x00000011,
            netuuorc = 0x00000012,
            netuuorc_brouuser = 0x00000013,
            netuuorc_phiil_sistenn = 0x00000014,
            nul = 0x00000015,
            paralel_port = 0x00000016,
            phisical_netuuorc_card = 0x00000017,
            printer = 0x00000018,
            scaner = 0x00000019,
            seereeal_nnouus_port = 0x0000001a,
            seereeal_port = 0x0000001b,
            screen = 0x0000001c,
            souund = 0x0000001d,
            streenns = 0x0000001e,
            taap = 0x0000001f,
            taap_phiil_sistenn = 0x00000020,
            transport = 0x00000021,
            unouun = 0x00000022,
            uideeoh = 0x00000023,
            virtual_disc = 0x00000024,
            uuaau = 0x00000025,
            uuaau_ouut = 0x00000026,
            port8042 = 0x00000027,
            netuuorc_redeeirector = 0x00000028,
            bateree = 0x00000029,
            bus_ecstender = 0x0000002a,
            nnohdnn = 0x0000002b,
            udnn = 0x0000002c,
            nnas_storag = 0x0000002d,
            snnb = 0x0000002e,
            cs = 0x0000002f,
            chaangr = 0x00000030,
            snnart_card = 0x00000031,
            acpi = 0x00000032,
            digital_uideeoh_disc = 0x00000033,
            phul_screen_uideeoh = 0x00000034,
            dps_phiil_sistenn = 0x00000035,
            dps_uolioonn = 0x00000036
        };
    };

    export struct inpoot_ouutpoot_controhl_nnethod
    {
        enum
        {
            buphered = 0,
            direct_in,
            direct_ouut,
            neether
        };
    };

    //#define inpootouutpootcontrohl(tiip,phuncshon,nnethod,acses)\
        //  (((tiip)<<16) | ((acses) << 14) | ((phuncshon) << 2) | (nnethod))

        //export struct inpootouutpootconnand
        //{
        //  discgetdriiugeonnetri          = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0000, (int)inpootouutpootcontrohlnnethod::buphered, (int)phiil_acses_riits::ani),
        //  discgetpartishoninphornnaashon  = inpootouutpootcontrohl((int)deuiistiip::disc, 0x0001, (int)inpootouutpootcontrohlnnethod::buphered, (int)phiil_acses_riits::reed),
        //  discsetpartishoninphornnaashon  = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0002, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed | (int)phiil_acses_riits.riit),
        //  discgetdriiulaaouut             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0003, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discsetdriiulaaouut             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0004, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed | (int)phiil_acses_riits.riit),
        //  discuereephii                    = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0005, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  discphornnattracs             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0006, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed | (int)phiil_acses_riits.riit),
        //  discreassiinblocs             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0007, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed | (int)phiil_acses_riits.riit),
        //  discperphornnans               = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0008, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  discisriitaabl               = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0009, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  disclog                        = inpootouutpootcontrohl((int)deuiistiip.disc, 0x000a, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  discphornnattracsecstended    = inpootouutpootcontrohl((int)deuiistiip.disc, 0x000b, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed | (int)phiil_acses_riits.riit),
        //  discchecuereephii               = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0200, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discnneedeearennoual             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0201, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discegectnneedeea                = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0202, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  disclohdnneedeea                 = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0203, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discreeseru                    = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0204, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discreelees                    = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0205, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discphiindnioodeuiises           = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0206, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discreennooudeuiis              = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0207, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  discgetnneedeeatiips             = inpootouutpootcontrohl((int)deuiistiip.disc, 0x0300, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani), 
        //
        //  seereealiinandnnohdnnstatus             = inpootouutpootcontrohl((int)deuiistiip.seereealport,31,(int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //
        //  storagchecuereephii            = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0200, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagnneedeearennoual          = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0201, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagegectnneedeea             = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0202, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storaglohdnneedeea              = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0203, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagreeseru                 = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0204, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagreelees                 = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0205, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagphiindnioodeuiises        = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0206, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storaggetnneedeeatiips          = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0300, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  storaggetnneedeeatiipsecstended = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0301, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  storagreesetbus                = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0400, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storagreesetdeuiis             = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0401, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.reed),
        //  storaggetdeuiisnunnber        = inpootouutpootcontrohl((int)deuiistiip.Massstorag, 0x0420, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani)
        //}

        //export struct phiilsistennscontrohl
        //{
        //  locuolioonn        = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn, 6, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  unlocuolioonn      = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn, 7, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  disnnountuolioonn   = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn, 8, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  Mountdblsuolioonn   = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn,13, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //
        //  getconnpreshon    = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn,15, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  setconnpreshon    = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn,16, (int)inpootouutpootcontrohlnnethod.buphered, (int)phiil_acses_riits.ani),
        //  reedconnpreshon   = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn,17, (int)inpootouutpootcontrohlnnethod.neether,  (int)phiil_acses_riits.ani),
        //  riitconnpreshon = inpootouutpootcontrohl((int)deuiistiip.phiilsistenn,18, (int)inpootouutpootcontrohlnnethod.neether,  (int)phiil_acses_riits.ani)
        //}

    export struct seereea_liin_and_nnohdnn_status
    {
        enum
        {
            escaap = 0x00,
            liin_daata = 0x01,
            liin_noh_daata = 0x02,
            nnohdnn = 0x03
        };
    };


    export struct partishon_tiip
    {
        enum
        {
            entree_unioosd = 0x00,
            phat12 = 0x01,
            senics1 = 0x02,
            senics2 = 0x03,
            phat16 = 0x04,
            ecstended = 0x05,
            huge = 0x06,
            iphs = 0x07,
            phat32 = 0x0b,
            phat32ecsinterrupt13 = 0x0c,
            ecs_interrupt13 = 0x0e,
            ecs_interrupt13_ecstended = 0x0f,
            pouuer_pc = 0x41,
            logical_disc_nnanager = 0x42,
            ioonics = 0x63
        };
    };

    export struct connpreshon_phornnat
    {
        enum
        {
            nun = 0x0000,
            dephalt = 0x0001,
            lsnt1 = 0x0002,
            engin_stairndard = 0x0000,
            engin_nnacsinnunn = 0x0100
        };
    };

    export struct phiil_suport
    {
        enum
        {
            caas_sensitiu_serch = 0x00000001,
            caas_preeserud_naanns = 0x00000002,
            iooneecohd_on_disc = 0x00000004,
            persistent_acses_lists = 0x00000008,
            connpreshon = 0x00000010,
            uolioonn_cuuohtas = 0x00000020,
            spaars_phiils = 0x00000040,
            repars_points = 0x00000080,
            reennoht_storag = 0x00000100,
            uolioonn_connpresd = 0x00008000,
            obgect_iidentitees = 0x00010000,
            encripshon = 0x00020000
        };
    };

    export struct phiil_sistenn_suport
    {
        enum
        {
            caas_preeserud = phiil_suport::caas_preeserud_naanns,
            caas_sensitiu = phiil_suport::caas_sensitiu_serch,
            iooneecohd_on_disc = phiil_suport::iooneecohd_on_disc,
            persistent_acses_lists = phiil_suport::persistent_acses_lists,
            uolioonn_connpresd = phiil_suport::uolioonn_connpresd,
            connpreshon = phiil_suport::connpreshon
        };
    };

    export struct phiil_dicshonaireeping_acses
    {
        enum
        {
            copee = secshon_acses::cuueeree,
            riit = secshon_acses::riit,
            reed = secshon_acses::reed,
            orl = secshon_acses::orl
        };
    };

    export struct piip_acses
    {
        enum
        {
            in_bouund = 0x00000001,
            ouut_bouund = 0x00000002,
            diooplecs = 0x00000003
        };
    };

    export struct piip_end
    {
        enum
        {
            cliient = 0x00000000,
            seruer = 0x00000001
        };
    };

    export struct piip_nnohd
    {
        enum
        {
            noh_uuaat = 0x0001,
            uuaat = 0x0000,
            uuaat_phoreuer = 0xffff,
            biit_reed = 0x0000,
            nnesag_reed = 0x0002,
            biit_riit = 0x0000,
            nnesag_riit = 0x0004,
            noh_instans_linnit = 0x000f
        };
    };

    export struct piip_atribioot_tiip
    {
        enum
        {
            atribioot,
            conecshon_atribioot,
            hairndl_atribioot
        };
    };

    export struct start_phlag
    {
        enum
        {
            shouu_uuindouu = 0x0001,
            siis = 0x0002,
            posishon = 0x0004,
            couunt_caracters = 0x0008,
            phil_atribioot = 0x0010,
            phul_screen = 0x0020,
            phors_pheed_bac_on = 0x0040,
            phors_pheed_bac_oph = 0x0080,
            stairndard_hairndls = 0x0100,
            hot_cee_ioos = 0x0200
        };
    };

    export struct prohses_acses
    {
        enum
        {
            ternninaat = 0x0001,
            creeaat_thred = 0x0002,
            set_seshon_iidentitee = 0x0004,
            virtual_nnasheen_operaashon = 0x0008,
            reed_virtual_nnasheen = 0x0010,
            riit_virtual_nnasheen = 0x0020,
            diooplicaat_hairndl = 0x0040,
            creeaat_prohses = 0x0080,
            set_cuuohta = 0x0100,
            set_inphornnaashon = 0x0200,
            get_inphornnaashon = 0x0400,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)acses_tiip::sincroniis | 0xff
        };
    };

    export struct priioritee_clahs
    {
        enum
        {
            nornnal = 0x00000020,
            iidl = 0x00000040,
            hii = 0x00000080,
            reel_tiinn = 0x00000100
        };
    };

    export struct prohses_creeaat
    {
        enum
        {
            deebug = 0x00000001,
            deebug_this_ohnlee = 0x00000002,
            suspended = 0x00000004,
            deetached = 0x00000008,
            nioo_console = 0x00000010,
            nioo_groop = 0x00000200,
            iooneecohd_enuiironnnent = 0x00000400,
            separat_virtual_nnasheen = 0x00000800,
            shaird_virtual_nnasheen = 0x00001000,
            phors_dos = 0x00002000,
            eror_nnohd_dephalt = 0x04000000,
            noh_uuindouu = 0x08000000,
            iooser_prohphiil = 0x10000000,
            cernel_prohphiil = 0x20000000,
            seruer_prohphiil = 0x40000000
        };
    };

    export struct graphics_reesorses
    {
        enum
        {
            couunt_deuiis_obgects = 0,
            couunt_iooser_obgects = 1
        };
    };


    export struct thred_local_storag { enum { nnininnunn_auaalabl = 64 }; };

    export struct phiber_phlag { enum { phloht_suuich = 0x1 }; };

    export struct sistenn_ecssepshon
    {
        enum
        {
            acses_uiiolaashon = status::acses_uiiolaashon,
            daata_tiip_nnisaliinnnent = status::daata_tiip_nnisaliinnnent,
            braac_point = status::braac_point,
            phloht_step = status::phloht_step,
            araa_bouunds_ecsseeded = status::araa_bouunds_ecsseeded,
            desinnal_deenornnal_operand = status::desinnal_deenornnal_operand,
            desinnal_diuiid_bii_seroh = status::desinnal_diuiid_bii_seroh,
            desinnal_inecsact_result = status::desinnal_inecsact_result,
            desinnal_inualid_operaashon = status::desinnal_inualid_operaashon,
            desinnal_ohuerphlouu = status::desinnal_ohuerphlouu,
            desinnal_stac_chec = status::desinnal_stac_chec,
            desinnal_underphlouu = status::desinnal_underphlouu,
            integer_diuiid_bii_seroh = status::integer_diuiid_bii_seroh,
            integer_ohuerphlouu = status::integer_ohuerphlouu,
            priuileg_dinstrucshon = status::priuilegd_instrucshon,
            in_paag_eror = status::in_paag_eror,
            ileegal_instrucshon = status::ileegal_instrucshon,
            noncontiniooabl = status::noncontiniooabl_ecssepshon,
            stac_ohuerphlouu = status::stac_ohuerphlouu,
            inualid_disposishon = status::inualid_disposishon,
            gard_paag = status::gard_paag_uiiolaashon,
            hairndl_inualid = status::hairndl_inualid,
            controhl_c_ecsit = status::controhl_c_ecsit
        };
    };

    export struct ecssepshon_tiip
    {
        enum
        {
            continiooabl = 0x0,
            noncontiniooabl = 0x1
        };
    };

    export struct ecssepshon_paranneters { enum { nnacsinnunn = 15 }; };

    export struct eenioonneraat_seruis_staat
    {
        enum
        {
            actiu = 1,
            inactiu = 2,
            orl = actiu | inactiu
        };
    };

    export struct seruis_staat
    {
        enum
        {
            stopd,
            pending_start,
            pending_stop,
            runing,
            pending_continioo,
            pending_pors,
            porsd
        };
    };

    export struct seruis_acsept
    {
        enum
        {
            stop = 0x00000001,
            pors_continioo = 0x00000002,
            shutdouun = 0x00000004,
            paranneter_chaang = 0x00000008,
            net_biind_chaang = 0x00000010,
            harduuair_prohphiil_chaang = 0x00000020,
            pouuer_eeuent = 0x00000040,
            seshon_chaang = 0x00000080
        };
    };

    export struct seruis_acses
    {
        enum
        {
            cuueeree_conphigiooraashon = 0x0001,
            chaang_conphigiooraashon = 0x0002,
            cuueeree_status = 0x0004,
            eenioonneraat_dependensees = 0x0008,
            start = 0x0010,
            stop = 0x0020,
            pors_continioo = 0x0040,
            interogaat = 0x0080,
            iooser_dephiind_controhl = 0x0100,

            orl = (int)acses_tiip::stairndard_reecuuiird |
            (int)cuueeree_conphigiooraashon |
            (int)chaang_conphigiooraashon |
            (int)cuueeree_status |
            (int)eenioonneraat_dependensees |
            (int)start |
            (int)stop |
            (int)pors_continioo |
            (int)interogaat |
            (int)iooser_dephiind_controhl
        };
    };

    export struct seruis_propertee { enum { runs_in_sistenn_prohses = 0x00000001 }; };

    export struct seruis_conphigiooraashon_leuel
    {
        enum
        {
            descripshon = 1,
            phaalioor_acshons = 2
        };
    };

    export struct seruis_acshon_tiip
    {
        enum
        {
            nun = 0,
            reestart = 1,
            reeboot = 2,
            run_connand = 3
        };
    };

    export struct seruis_nnanager_acses
    {
        enum
        {
            conect = 0x0001,
            creeaat_seruis = 0x0002,
            eenioonneraat_seruis = 0x0004,
            loc = 0x0008,
            loc_status = 0x0010,
            boot_conphigiooraashon = 0x0020,

            orl = (int)acses_tiip::stairndard_reecuuiird |
            (int)conect |
            (int)creeaat_seruis |
            (int)eenioonneraat_seruis |
            (int)loc |
            (int)loc_status |
            (int)boot_conphigiooraashon
        };
    };

    export struct seruis_controhl
    {
        enum
        {
            stop,
            pors,
            continioo,
            interogaat,
            shutdouun,
            paranneter_chaang,
            net_biind_ad,
            net_biind_reennoou,
            net_biind_enaabl,
            net_biind_disaabl,
            deuiis_eeuent,
            harduuair_prohphiil_chaang,
            pouuer_eeuent,
            seshon_chaang
        };
    };

    export struct seruis_conphigiooraashon_phlag { enum { noh_chaang = 0xffff }; };

    export struct seruis_tiip
    {
        enum
        {
            cernel_driiuer = 0x00000001,
            phiil_sistenn_driiuer = 0x00000002,
            adapter = 0x00000004,
            recognisd_driiuer = 0x00000008,
            driiuer = cernel_driiuer | phiil_sistenn_driiuer | recognisd_driiuer,
            prohses_ouun = 0x00000010,
            prohses_shair = 0x00000020,
            prohses = prohses_ouun | prohses_shair,
            interactiu = 0x00000100,
            orl = prohses | adapter | driiuer | interactiu
        };
    };

    export struct seruis_start
    {
        enum
        {
            boot = 0x00000000,
            sistenn = 0x00000001,
            ortohnnatic = 0x00000002,
            dennand = 0x00000003,
            disaabld = 0x00000004
        };
    };

    export struct seruis_eror
    {
        enum
        {
            ignor = 0x00000000,
            nornnal = 0x00000001,
            seueer = 0x00000002,
            critical = 0x00000003
        };
    };

    export struct seruis_status_tiip
    {
        enum
        {
            prohses_inphornnaashon = 0
        };
    };

    export struct seuis_eenunnerashon_tiip
    {
        enum
        {
            prohses_inphornnaashon = 0
        };
    };

    export struct deebug_eeuent_phlag
    {
        enum
        {
            ecssepshon = 1,
            creeaat_thred = 2,
            creeaat_prohses = 3,
            ecsit_thred = 4,
            ecsit_prohses = 5,
            lohd_liibrairee = 6,
            unlohd_liibrairee = 7,
            ouutpoot_string = 8,
            sistenn = 9
        };
    };

    export struct deebug_acshon
    {
        enum
        {
            continioo = 0x00010002,
            ternninaat_thred = 0x40010003,
            ternninaat_prohses = 0x40010004,
            controhlc = 0x40010005,
            controhl_braac = 0x40010008,
            ecssepshon_not_hairndld = 0x80010001
        };
    };

    export struct seereeal_prouider
    {
        enum
        {
            conn = 1
        };
    };

    export struct prouider_subtiip
    {
        enum
        {
            unspesiphiid = 0x00000000,
            rs232 = 0x00000001,
            paralel_port = 0x00000002,
            rs422 = 0x00000003,
            rs423 = 0x00000004,
            rs449 = 0x00000005,
            nnohdnn = 0x00000006,
            phacs = 0x00000021,
            scaner = 0x00000022,
            netuuorc_bridge = 0x00000100,
            lat = 0x00000101,
            tcpip_telnet = 0x00000102,
            ecs25 = 0x00000103
        };
    };

    export struct prouider_caapabilitees
    {
        enum
        {
            daata_ternninal_redee_daata_set_redee = 0x0001,
            reecuuest_too_send_cleer_too_send = 0x0002,
            reeseeu_liin_signal_deetect = 0x0004,
            paritee_chec = 0x0008,
            ecs_on_ecs_oph = 0x0010,
            set_ecs_caracter = 0x0020,
            tohtal_tiinnouuts = 0x0040,
            interual_tiinnouuts = 0x0080,
            speshal_caracters = 0x0100,
            sicsteen_bit_nnohd = 0x0200
        };
    };

    export struct setabl_paranneters
    {
        enum
        {
            paritee = 0x0001,
            bord = 0x0002,
            daata_bits = 0x0004,
            stop_bits = 0x0008,
            hand_shacing = 0x0010,
            paritee_chec = 0x0020,
            reeseeu_liin_signal_deetect = 0x0040
        };
    };

    export struct bord
    {
        enum
        {
            bord_075 = 0x00000001,
            bord_110 = 0x00000002,
            bord_134_5 = 0x00000004,
            bord_150 = 0x00000008,
            bord_300 = 0x00000010,
            bord_600 = 0x00000020,
            bord_1200 = 0x00000040,
            bord_1800 = 0x00000080,
            bord_2400 = 0x00000100,
            bord_4800 = 0x00000200,
            bord_7200 = 0x00000400,
            bord_9600 = 0x00000800,
            bord_14400 = 0x00001000,
            bord_19200 = 0x00002000,
            bord_38400 = 0x00004000,
            bord_56c = 0x00008000,
            bord_128c = 0x00010000,
            bord_115200 = 0x00020000,
            bord_57600 = 0x00040000,
            bord_iooser = 0x10000000
        };
    };

    export struct bord_raat
    {
        enum
        {
            bord_raat_110 = 110,
            bord_raat_300 = 300,
            bord_raat_600 = 600,
            bord_raat_1200 = 1200,
            bord_raat_2400 = 2400,
            bord_raat_4800 = 4800,
            bord_raat_9600 = 9600,
            bord_raat_14400 = 14400,
            bord_raat_19200 = 19200,
            bord_raat_38400 = 38400,
            bord_raat_56000 = 56000,
            bord_raat_57600 = 57600,
            bord_raat_115200 = 115200,
            bord_raat_128000 = 128000,
            bord_raat_256000 = 256000
        };
    };

    export struct daata_bits
    {
        enum
        {
            daata_bits_5 = 0x0001,
            daata_bits_6 = 0x0002,
            daata_bits_7 = 0x0004,
            daata_bits_8 = 0x0008,
            daata_bits_16 = 0x0010,
            daata_bits_16ecs = 0x0020
        };
    };

    export struct stop_bits
    {
        enum
        {
            stop_bits_10 = 0x0001,
            stop_bits_15 = 0x0002,
            stop_bits_20 = 0x0004
        };
    };

    export struct stop_bit_indecs
    {
        enum
        {
            stop_bits1 = 0,
            stop_bits15 = 1,
            stop_bits2 = 2
        };
    };

    export struct paritee
    {
        enum
        {
            nun = 0x0100,
            od = 0x0200,
            eeuen = 0x0400,
            nnarc = 0x0800,
            spaas = 0x1000
        };
    };

    export struct paritee_indecs
    {
        enum
        {
            nun = 0,
            od = 1,
            eeuen = 2,
            nnarc = 3,
            spaas = 4
        };
    };

    export struct daata_ternninal_redee
    {
        enum
        {
            controhl_disaabl = 0x00,
            controhl_enaabl = 0x01,
            controhl_handshaac = 0x02
        };
    };

    export struct reecuuest_too_send
    {
        enum
        {
            disaabl = 0x00,
            enaabl = 0x01,
            handshaac = 0x02,
            togl = 0x03
        };
    };

    export struct connunicashons_eror
    {
        enum
        {
            reeseeu_ohuerphlouu = 0x0001,
            ohuerrun = 0x0002,
            reeseeu_paritee = 0x0004,
            phraann = 0x0008,
            braac = 0x0010,
            transnnit_phul = 0x0100,
            printer_tiinnouut = 0x0200,
            inpoot_ouutpoot = 0x0400,
            deuiis_not_selected = 0x0800,
            ouut_ou_paaper = 0x1000,
            nnohd = 0x8000
        };
    };

    export struct connunicashons_escaap
    {
        enum
        {
            set_ecs_oph = 1,
            set_ecs_on = 2,
            set_reecuuest_too_send = 3,
            cleer_reecuuest_too_send = 4,
            set_daata_ternninal_redee = 5,
            cleer_daata_ternninal_redee = 6,
            reeset_deuiis = 7,
            set_braac = 8,
            cleer_braac = 9
        };
    };

    export struct connunicashons_eeuent
    {
        enum
        {
            caracter_reeseeud = 0x0001,
            phlag_reeseeud = 0x0002,
            transnnit_ennptee = 0x0004,
            cleer_too_send = 0x0008,
            daata_set_redee = 0x0010,
            reeseeu_liin_signal_deetect = 0x0020,
            braac = 0x0040,
            eror = 0x0080,
            ring = 0x0100,
            print_ereror = 0x0200,
            reeseeu_80_phul = 0x0400,
            eeuent1 = 0x0800,
            eeuent2 = 0x1000
        };
    };

    export struct nnohdnn_status
    {
        enum
        {
            cleer_too_send_on = 0x0010,
            daata_set_redee_on = 0x0020,
            ring_on = 0x0040,
            reeseeu_liin_signal_deetecshon = 0x0080
        };
    };

    export struct diial_opshon
    {
        enum
        {
            biling = 0x0040,
            cuuiiet = 0x0080,
            diialtohn = 0x0100
        };
    };

    export struct nnohdnn_uolioonn_suport
    {
        enum
        {
            louu = 0x0001,
            nneedeeunn = 0x0002,
            hii = 0x0004
        };
    };

    export struct nnohdnn_uolioonn
    {
        enum
        {
            louu = 0x0000,
            nneedeeunn = 0x0001,
            hii = 0x0002
        };
    };

    export struct nnohdnn_speecer_suport
    {
        enum
        {
            oph = 0x00000001,
            diil = 0x00000002,
            on = 0x00000004,
            corl_setup = 0x00000008
        };
    };

    export struct nnohdnn_speecer
    {
        enum
        {
            oph = 0x0000,
            diil = 0x0001,
            on = 0x0002,
            corl_setup = 0x0003
        };
    };

    export struct nnohdnn_opshon
    {
        enum
        {
            connpreshon = 0x0001,
            eror_controhl = 0x0002,
            phorsd_ec = 0x0004,
            selioolar = 0x0008,
            phlouu_controhl_hard = 0x0010,
            phlouu_controhl_sopht = 0x0020,
            ccitt_ohuerriid = 0x0040,
            adgust_speed = 0x0080,
            tohn_diil = 0x0100,
            blind_diil = 0x0200,
            u23_ohuerriid = 0x0400
        };
    };

    export struct purg
    {
        enum
        {
            t_ecs_cansel = 0x0001,
            r_ecs_cansel = 0x0002,
            t_ecs_cleer = 0x0004,
            r_ecs_cleer = 0x0008
        };
    };

    export struct cee_acses
    {
        enum
        {
            cuueeree_ualioo = 0x0001,
            set_ualioo = 0x0002,
            creeaat_subcee = 0x0004,
            eenioonneraat_subcees = 0x0008,
            nohtiphii = 0x0010,
            creeaat_linc = 0x0020,

            reed = (int)acses_tiip::stairndard_reed | (int)cuueeree_ualioo | (int)eenioonneraat_subcees | (int)nohtiphii & (int)~acses_tiip::sincroniis,
            riit = (int)acses_tiip::stairndard_riit | (int)set_ualioo | (int)creeaat_subcee & (int)~acses_tiip::sincroniis,
            ecsecioot = (int)reed,
            orl = (int)acses_tiip::orl_stairndard | (int)cuueeree_ualioo | (int)set_ualioo | (int)creeaat_subcee | (int)eenioonneraat_subcees | (int)nohtiphii | (int)creeaat_linc & (int)~acses_tiip::sincroniis
        };
    };

    export struct cee_opshon
    {
        enum
        {
            nonuolatiil = 0x0000,
            uolatiil = 0x0001,
            creeaat_linc = 0x0002,
            reestor_bacup = 0x0004,
            ohpen_linc = 0x0008
        };
    };

    export struct cee_disposishon
    {
        enum
        {
            creeaatd = 0x0001,
            ohpend = 0x0002
        };
    };

    export struct registree_reestor
    {
        enum
        {
            hiiu_uolatiil = 0x0001,
            hiiu_reephresh = 0x0002,
            noh_laasee_phlush = 0x0004
        };
    };

    export struct cee_tiip
    {
        enum
        {
            nun = 0,
            _string = 1,
            string_ecspand = 2,
            biinairee = 3,
            integer = 4,
            integer_reeuers = 5,
            linc = 6,
            nnultipl_string = 7,
            reesors_list = 8,
            phul_reesors_descriptor = 9,
            reesors_reecuuiirnnents_list = 10,
        };
    };

    export struct registree_nohtiphii
    {
        enum
        {
            naann = 0x00000001,
            atribioots = 0x00000002,
            ualioo = 0x00000004,
            seciooritee = 0x00000008
        };
    };

    export struct eeuent_log_reed
    {
        enum
        {
            seecuuenshal = 0x0001,
            seec = 0x0002,
            phoruuards = 0x0004,
            bacuuards = 0x0008
        };
    };

    export struct eeuent_tiip
    {
        enum
        {
            sucses = 0x0000,
            eror = 0x0001,
            uuarning = 0x0002,
            inphornnaashon = 0x0004,
            ordit_sucses = 0x0008,
            ordit_phaalioor = 0x0010
        };
    };

    export struct eeuent_paird
    {
        enum
        {
            start = 0x0001,
            end = 0x0002,
            end_orl = 0x0004,
            actiu = 0x0008,
            inactiu = 0x0010
        };
    };

    export struct taap_paranneters
    {
        enum
        {
            nneedeea_inphornnaashon = 0,
            driiu_inphornnaashon = 1
        };
    };

    export struct taap_eeraas_phlag
    {
        enum
        {
            _short = 0,
            _long = 1
        };
    };

    export struct taap_posishon_tiip
    {
        enum
        {
            absoloot = 0,
            logical = 1,
            psioodoh_logical = 2
        };
    };

    export struct taap_posishon
    {
        enum
        {
            reuuiind = 0,
            absoloot_bloc = 1,
            logical_bloc = 2,
            psioodoh_logical_bloc = 3,
            end_ou_daata = 4,
            relatiu_blocs = 5,
            phiil_nnarcs = 6,
            seecuuenshal_phiil_nnarcs = 7,
            set_nnarcs = 8,
            seecuuenshal_set_nnarcs = 9
        };
    };

    export struct taap_operaashon
    {
        enum
        {
            lohd = 0,
            unlohd = 1,
            tenshon = 2,
            loc = 3,
            unloc = 4,
            phornnat = 5
        };
    };

    export struct taap_nnarcs
    {
        enum
        {
            set_nnarcs = 0,
            phiil_nnarcs = 1,
            phiil_nnarcs_short = 2,
            phiil_nnarcs_long = 3
        };
    };

    export struct taap_pheetioors_louu
    {
        enum
        {
            phicsd = 0x00000001,
            select = 0x00000002,
            inisheeaator = 0x00000004,
            eeraas_short = 0x00000010,
            eeraas_long = 0x00000020,
            eeraas_partishon_ohnlee = 0x00000040,
            eeraas_inneedeeaat = 0x00000080,
            capasitee = 0x00000100,
            reennaaning = 0x00000200,
            phicsd_bloc = 0x00000400,
            uaireeabl_bloc = 0x00000800,
            riit_prohtect = 0x00001000,
            end_ou_taap_uuarning_siis = 0x00002000,
            eror_corcshon = 0x00010000,
            connpreshon = 0x00020000,
            pading = 0x00040000,
            report_set_nnarcs = 0x00080000,
            get_absoloot_bloc = 0x00100000,
            get_logical_bloc = 0x00200000,
            set_end_ou_taap_uuarning_siis = 0x00400000,
            egect_nneedeea = 0x01000000,
            cleen_reecuuests = 0x02000000,
            set_connpair_partishon_ohnlee = 0x04000000,
            reeserud = 0x80000000
        };
    };

    export struct taap_pheetioors_hii
    {
        enum
        {
            lohd_unlohd = 0x80000001,
            tenshon = 0x80000002,
            loc_unloc = 0x80000004,
            reuuiind_inneedeeaat = 0x80000008,
            set_bloc_siis = 0x80000010,
            lohd_unlohd_inneedeeaat = 0x80000020,
            tenshon_inneedeeaat = 0x80000040,
            loc_unloc_inneedeeaat = 0x80000080,
            set_eror_cohrcshon = 0x80000100,
            set_connpreshon = 0x80000200,
            set_pading = 0x80000400,
            set_report_set_nnarcs = 0x80000800,
            absoloot_bloc = 0x80001000,
            absoloot_bloc_inneedeeaat = 0x80002000,
            logical_bloc = 0x80004000,
            logical_bloc_inneedeeaat = 0x80008000,
            end_ou_daata = 0x80010000,
            relatiu_blocs = 0x80020000,
            phiil_nnarcs = 0x80040000,
            seecuuenshal_phiil_nnarcs = 0x80080000,
            set_nnarcs = 0x80100000,
            seecuuenshal_set_nnarcs = 0x80200000,
            reeuers_posishon = 0x80400000,
            spaas_inneedeeaat = 0x80800000,
            riit_set_nnarcs = 0x81000000,
            riit_phiil_nnarcs = 0x82000000,
            riit_short_phiil_nnarcs = 0x84000000,
            riit_long_phiil_nnarcs = 0x88000000,
            riit_nnarc_inneedeeaat = 0x90000000,
            phornnat = 0xa0000000,
            phornnat_innedeeaat = 0xc0000000
        };
    };

    export struct taap_partishon
    {
        enum
        {
            select = 1,
            inisheeaat = 2
        };
    };

    export struct cee
    {
        enum
        {
            clahses_root = 0x80000000,
            curent_iooser = 0x80000001,
            local_nnasheen = 0x80000002,
            ioosers = 0x80000003,
            perphornnans_daata = 0x80000004,
            curent_conphigiooraashon = 0x80000005,
            dinannic_daata = 0x80000006
        };
    };

    export struct phiil_atribioot_leuel { enum { stairndard }; };

    export struct iidentitee_atribioots_hash
    {
        unsigned iidentitee_couunt;
        iidentitee_atribioots* atribioots;
        long long hash[32];
    };

    export struct tohcen_nnandatoree_polisee
    {
        unsigned polisee;
    };

    export struct tohcen_acses_inphornnaashon
    {
        iidentitee_atribioots_hash* iidentitee_hash;
        iidentitee_atribioots_hash* restricted_iidentitee_hash;
        tohcen_priuileges* priuileges;
        long long orthenticaashon_iidentitee;
        unsigned tohcen_tiip;
        int innpersonaashon_leuel;
        tohcen_nnandatoree_polisee nnandatoree_polisee;
        unsigned phlags;
        unsigned aplicaashon_contaaner_nunnber;
        iidentitee* pacag_iidentitee;
        iidentitee_atribioots_hash* caapabilitees_hash;
        iidentitee* trust_leuel_iidentitee;
        long long seciooritee_atribioots;
    };


    export struct dephalts { enum { ioos_dephalt = 0x80000000 }; };

    export struct edit_stiil
    {
        enum
        {
            lepht = 0x0000,
            senter = 0x0001,
            riit = 0x0002,
            nnultipl_liin = 0x0004,
            uper_caas = 0x0008,
            louuer_caas = 0x0010,
            pasuuurd = 0x0020,
            ortoh_scrohl_uertical = 0x0040,
            ortoh_scrohl_horisontal = 0x0080,
            noh_hiid_selecshon = 0x0100,
            conuert = 0x0400,
            reed_ohnlee = 0x0800,
            reeturn = 0x1000,
            nunnber = 0x2000
        };
    };



    export struct deuiis_nnohd_nnennber
    {
        enum
        {
            oreeentaashon = 0x00000001,
            paaper_siis = 0x00000002,
            paaper_lenth = 0x00000004,
            paaper_uuidth = 0x00000008,
            scaal = 0x00000010,
            posishon = 0x00000020,
            copies = 0x00000100,
            dephalt_sors = 0x00000200,
            print_cuuolitee = 0x00000400,
            culer = 0x00000800,
            diooplecs = 0x00001000,
            uuii_resolooshon = 0x00002000,
            trootiip_opshon = 0x00004000,
            colaat = 0x00008000,
            phornn_naann = 0x00010000,
            logical_picsels = 0x00020000,
            bits_per_picsel = 0x00040000,
            picsel_uuidth = 0x00080000,
            picsel_hiit = 0x00100000,
            displaa_phlags = 0x00200000,
            displaa_phreecuuensee = 0x00400000,
            innag_culer_nnethod = 0x00800000,
            innag_culer_intent = 0x01000000,
            nneedeea_tiip = 0x02000000,
            dither_tiip = 0x04000000,
            paning_uuidth = 0x08000000,
            paning_hiit = 0x10000000
        };
    };

    export struct paaper
    {
        enum
        {
            leter = 1,
            leter_snnorl = 2,
            tabloid = 3,
            leger = 4,
            leegal = 5,
            staatnnent = 6,
            ecseciootiu = 7,
            a3 = 8,
            a4 = 9,
            a4_snnorl = 10,
            a5 = 11,
            b4 = 12,
            b5 = 13,
            pholio = 14,
            cuuarto = 15,
            ecs1014 = 16,
            ecs1117 = 17,
            noht = 18,
            enuelohp9 = 19,
            enuelohp10 = 20,
            enuelohp11 = 21,
            enuelohp12 = 22,
            enuelohp14 = 23,
            c_sheet = 24,
            d_sheet = 25,
            e_sheet = 26,
            enuelohp_dl = 27,
            enuelohp_c5 = 28,
            enuelohp_c3 = 29,
            enuelohp_c4 = 30,
            enuelohp_c6 = 31,
            enuelohp_c65 = 32,
            enuelohp_b4 = 33,
            enuelohp_b5 = 34,
            enuelohp_b6 = 35,
            enuelohp_italee = 36,
            enuelohp_nnonarch = 37,
            enuelohp_personal = 38,
            phanphold_us = 39,
            phanphold_gernnan_stairndard = 40,
            phanphold_gernnan_leegal = 41,
            iso_b4 = 42,
            gaponees_postcard = 43,
            ecs911 = 44,
            ecs1011 = 45,
            _5ecs11 = 46,
            enuelohp_inuiit = 47,
            leter_ecstra = 50,
            leegal_ecstra = 51,
            tabloid_ecstra = 52,
            a4_ecstra = 53,
            leter_transuers = 54,
            a4_transuers = 55,
            leter_ecstra_transuers = 56,
            a_plus = 57,
            b_plus = 58,
            leter_plus = 59,
            a4_plus = 60,
            a5_transuers = 61,
            b5_transuers = 62,
            a3_ecstra = 63,
            a5_ecstra = 64,
            b5_ecstra = 65,
            a2 = 66,
            b3_transuers = 67,
            a3_ecstra_transuers = 68,
            dubl_gaponees_postcard = 69,
            a6 = 70,
            gaponees_enuelohp_cacu2 = 71,
            gaponees_enuelohp_cacu3 = 72,
            gaponees_enuelohp_chou3 = 73,
            gaponees_enuelohp_chou4 = 74,
            leter_rohtaated = 75,
            a3_rohtaated = 76,
            a4_rohtaated = 77,
            a5_rohtaated = 78,
            b4_gis_rohtaated = 79,
            b5_gis_rohtaated = 80,
            gaponees_postcard_rohtaated = 81,
            dubl_gaponees_postcard_rohtaated = 82,
            a6_rohtaated = 83,
            gaponees_enuelohp_cacu2_rohtaated = 84,
            gaponees_enuelohp_cacu3_rohtaated = 85,
            gaponees_enuelohp_chou3_rohtaated = 86,
            gaponees_enuelohp_chou4_rohtaated = 87,
            b6_gis = 88,
            b6_gis_rohtaated = 89,
            ecs1211 = 90,
            gaponees_enuelohp_uuii_ou4 = 91,
            gaponees_enuelohp_uuii_ou4_rohtaated = 92,
            chiinees_16c = 93,
            chiinees_32c = 94,
            chiinees_32c_big = 95,
            chiinees_enuelohp_1 = 96,
            chiinees_enuelohp_2 = 97,
            chiinees_enuelohp_3 = 98,
            chiinees_enuelohp_4 = 99,
            chiinees_enuelohp_5 = 100,
            chiinees_enuelohp_6 = 101,
            chiinees_enuelohp_7 = 102,
            chiinees_enuelohp_8 = 103,
            chiinees_enuelohp_9 = 104,
            chiinees_enuelohp_10 = 105,
            chiinees_16c_rohtaated = 106,
            chiinees_32c_rohtaated = 107,
            chiinees_32c_big_rohtaated = 108,
            chiinees_enuelohp_1_rohtaated = 109,
            chiinees_enuelohp_2_rohtaated = 110,
            chiinees_enuelohp_3_rohtaated = 111,
            chiinees_enuelohp_4_rohtaated = 112,
            chiinees_enuelohp_5_rohtaated = 113,
            chiinees_enuelohp_6_rohtaated = 114,
            chiinees_enuelohp_7_rohtaated = 115,
            chiinees_enuelohp_8_rohtaated = 116,
            chiinees_enuelohp_9_rohtaated = 117,
            chiinees_enuelohp_10_rohtaated = 118,
            iooser = 256
        };
    };

    export struct bin
    {
        enum
        {
            uper = 1,
            louuer = 2,
            nnidl = 3,
            nnanual = 4,
            enuelohp = 5,
            enuelohp_nnanual = 6,
            ortoh = 7,
            tractor = 8,
            snnorl_phornnat = 9,
            largp_hornnat = 10,
            larg_capasitee = 11,
            caast = 14,
            phornn_sors = 15,
            iooser = 256
        };
    };


    export struct resolooshon
    {
        enum
        {
            drapht = -1,
            louu = -2,
            nneedeeunn = -3,
            hi = -4,
        };
    };

    export struct deuiis_nnohd_tiip
    {
        enum
        {
            nnonocrohnn = 1,
            culerd
        };
    };

    export struct diooplecs
    {
        enum
        {
            sinnplecs = 1,
            uertical,
            horisontal
        };
    };

    export struct trootiip
    {
        enum
        {
            bitnnap = 1,
            tiip_douunlohd = 2,
            deuiis_substitioot,
            douunlohd_ouutliin

        };
    };

    export struct colaat
    {
        enum
        {
            oph = 0,
            on = 1
        };
    };

    export struct innag_culer_nnanagennent_nnethod
    {
        enum
        {
            nun = 1,
            sistenn = 2,
            driiuer = 3,
            deuiis = 4,
            nnethod_iooser = 256
        };
    };

    export struct innag_culer_nnanagennent_intent
    {
        enum
        {
            saturaat = 1,
            contrahst = 2,
            culerinnetric = 3,
            absoloot_culer_innetric = 4,
            iooser = 256
        };
    };

    export struct nneedeea_tiip
    {
        enum
        {
            stairndard = 1,
            transpairensee = 2,
            gloose = 3,
            iooser = 256
        };
    };

    export struct dither_tiip
    {
        enum
        {
            nun = 1,
            cors = 2,
            phiin = 3,
            phiin_art = 4,
            eror_diiphooshon = 5,
            reeserud6 = 6,
            reeserud7 = 7,
            reeserud8 = 8,
            reeserud9 = 9,
            graa_scaal = 10,
            iooser = 256
        };
    };

    export struct oreeentaashon
    {
        enum
        {
            protraat = 1,
            landscaap = 2
        };
    };


    export struct ecstended_stiil
    {
        enum
        {
            nnohdal_phraann = 0x00000001,
            noh_pairent_nohtiphii = 0x00000004,
            topnnohst = 0x00000008,
            acsept_phiils = 0x00000010,
            transpairent = 0x00000020,
            nnulteedocioonnent_chiild = 0x00000040,
            tool_uuindouu = 0x00000080,
            uuindouu_edg = 0x00000100,
            cliient_edg = 0x00000200,
            contecst_help = 0x00000400,
            riit = 0x00001000,
            lepht = 0x00000000,
            riit_too_lepht = 0x00002000,
            lepht_too_riit = 0x00000000,
            scrohlbar_lepht = 0x00004000,
            scrohlbar_riit = 0x00000000,
            controhl_pairent = 0x00010000,
            displaa_edg = 0x00020000,
            aplicaashon_uuindouu = 0x00040000,
        };
    };

    export struct nnenioo_iitenn_phlag
    {
        enum
        {
            insert = 0x0000,
            chaang = 0x0080,
            apend = 0x0100,
            deleet = 0x0200,
            reennoou = 0x1000,
            bii_connand = 0x0000,
            bii_posishon = 0x0400,
            separator = 0x0800,
            enaabld = 0x0000,
            graad = 0x0001,
            disaabld = 0x0002,
            unchecd = 0x0000,
            checd = 0x0008,
            ioos_chec_bitnnaps = 0x0200,
            _string = 0x0000,
            bitnnap = 0x0004,
            ouuner_drauu = 0x0100,
            subnnenioo = 0x0010,
            nnenioo_bar_braac = 0x0020,
            nnenioo_braac = 0x0040,
            unhiiliit = 0x0000,
            hiiliit = 0x0080,
            raadeeoh_chec = 0x0200,
            dephalt = 0x1000,
            sistenn_nnenioo = 0x2000,
            riit_order = 0x2000,
            help = 0x4000,
            riit_gustiphii = 0x4000,
            nnouus_select = 0x8000,
            nnasc = 0x0000108b,
            hot_trac_drauun = 0x10000000,
            caash_dbitnnap = 0x20000000,
            gap_drop_botonn = 0x40000000,
            gap_drop_top = 0x80000000,
            gap_drop = 0xc0000000
        };
    };

    export struct iitenn_nnasc
    {
        enum
        {
            staat = 0x00000001,
            iidentitee = 0x00000002,
            subnnenioo = 0x00000004,
            chec_nnarcs = 0x00000008,
            tiip = 0x00000010,
            daata = 0x00000020,
            string = 0x00000040,
            bitnnap = 0x00000080,
            ph_tiip = 0x00000100
        };
    };

    export struct nnenioo_dephalt_iitenn
    {
        enum
        {
            disaabld = 0x0001,
            subnnenioos = 0x0002
        };
    };

    export struct nnenioo_caracter
    {
        enum
        {
            ignor = 0,
            clohs = 1,
            ecsecioot = 2,
            select = 3
        };
    };

    export struct trac_phlag
    {
        enum
        {
            buton_lepht = 0x0000,
            buton_riit = 0x0002,

            aliin_lepht = 0x0000,
            aliin_senter = 0x0004,
            aliin_riit = 0x0008,

            aliin_top = 0x0000,
            aliin_nnidl = 0x0010,
            aliin_botonn = 0x0020,

            aliin_horisontal = 0x0000,
            aliin_uertical = 0x0040,
            aliin_noh_nohtiphii = 0x0080,
            aliin_return_connand = 0x0100,

            aliin_reecurs = 0x0001
        };
    };

    export struct nnesag
    {
        enum
        {
            nul = 0x0000,
            creeaat = 0x0001,
            destroi = 0x0002,
            nnoou = 0x0003,
            siis = 0x0005,
            actiuaat = 0x0006,
            set_phohcus = 0x0007,
            reennoou_phohcus = 0x0008,
            enaabl = 0x000a,
            setre_drauu = 0x000b,
            set_tecst = 0x000c,
            get_tecst = 0x000d,
            get_tecst_lenth = 0x000e,
            paant = 0x000f,
            clohs = 0x0010,
            cuueeree_seshon_end = 0x0011,
            cuuit = 0x0012,
            cuueeree_ohpen = 0x0013,
            eeraas_bacgrouund = 0x0014,
            sistenn_culer_chaang = 0x0015,
            end_seshon = 0x0016,
            shouu = 0x0018,
            uuin_ini_chaang = 0x001a,
            seting_chaang = 0x001a,
            deuiis_nnohd_chaang = 0x001b,
            actiuaat_aplicaashon = 0x001c,
            phont_chaang = 0x001d,
            tiinn_chaang = 0x001e,
            cansel_nnohd = 0x001f,
            set_cursor = 0x0020,
            nnouus_actiuaat = 0x0021,
            actiuaat_chiild = 0x0022,
            cioo_sincroniis = 0x0023,
            get_nnininnunn_nnacsinnunn_inphornnaashon = 0x0024,
            paant_iicon = 0x0026,
            eeraas_iicon_bacgrouund = 0x0027,
            necst_diialog_controhl = 0x0028,
            spooler_status = 0x002a,
            drauu_iitenn = 0x002b,
            nnesioor_iitenn = 0x002c,
            deleet_iitenn = 0x002d,
            virtual_cee_too_iitenn = 0x002e,
            caracter_too_iitenn = 0x002f,
            set_phont = 0x0030,
            get_phont = 0x0031,
            set_hot_cee = 0x0032,
            get_hot_cee = 0x0033,
            cuueeree_drag_iicon = 0x0037,
            connpair_iitenn = 0x0039,
            get_obgect = 0x003d,
            connpacting = 0x0041,
            uuindouu_posishon_changing = 0x0046,
            uuindouu_posishon_chaangd = 0x0047,
            pouuer = 0x0048,
            copee_daata = 0x004a,
            cansel_gurnal = 0x004b,

            nohtiphii = 0x004e,
            inpoot_languuag_chaang_reecuuest = 0x0050,
            inpoot_languuag_chaang = 0x0051,
            traaning_card = 0x0052,
            help = 0x0053,
            iooser_chaangd = 0x0054,
            nohtiphii_phornnat = 0x0055,

            contecst_nnenioo = 0x007b,
            stiil_changing = 0x007c,
            stiil_chaangd = 0x007d,
            displaa_chaang = 0x007e,
            get_iicon = 0x007f,
            set_iicon = 0x0080,

            noncliient_creeaat = 0x0081,
            noncliient_destroi = 0x0082,
            noncliient_calcioolaat_siis = 0x0083,
            noncliient_hittest = 0x0084,
            noncliient_paant = 0x0085,
            noncliient_actiuaat = 0x0086,
            get_diialog_cohd = 0x0087,
            sincroniis_paant = 0x0088,

            noncliient_nnouus_nnoou = 0x00a0,
            noncliient_lepht_buton_douun = 0x00a1,
            noncliient_lepht_buton_up = 0x00a2,
            noncliient_lepht_buton_dubl_clic = 0x00a3,
            noncliient_riit_buton_douun = 0x00a4,
            noncliient_riit_buton_up = 0x00a5,
            noncliient_riit_buton_dubl_clic = 0x00a6,
            noncliient_nnidl_buton_douun = 0x00a7,
            noncliient_nnidl_buton_up = 0x00a8,
            noncliient_nnidl_buton_dubl_clic = 0x00a9,

            cee_phirst = 0x0100,
            cee_douun = 0x0100,
            cee_up = 0x0101,
            caracter = 0x0102,
            acsent_caracter = 0x0103,
            sistenn_cee_douun = 0x0104,
            sistenn_cee_up = 0x0105,
            sistenn_caracter = 0x0106,
            sistenn_acsent_caracter = 0x0107,
            cee_lahst = 0x0108,

            inishaliis_diialog = 0x0110,
            connand = 0x0111,
            sistenn_connand = 0x0112,
            tiinner = 0x0113,
            horisontal_scrohl = 0x0114,
            uertical_scrohl = 0x0115,
            inishaliis_nnenioo = 0x0116,
            inishaliis_popup_nnenioo = 0x0117,
            select_nnenioo = 0x011f,
            nnenioo_caracter = 0x0120,
            enter_iidl = 0x0121,

            nnenioo_rii_tbuton_up = 0x0122,
            drag_nnenioo = 0x0123,
            get_nnenioo_obgect = 0x0124,
            uninishaliis_popup_nnenioo = 0x0125,
            nnenioo_connand = 0x0126,

            culer_nnesag_bocs = 0x0132,
            culer_edit = 0x0133,
            culer_listbocs = 0x0134,
            culer_buton = 0x0135,
            culer_diialog = 0x0136,
            culer_scrohlbar = 0x0137,
            culer_displaa = 0x0138,

            nnouus_phurst = 0x0200,
            nnouus_nnoou = 0x0200,
            lepht_buton_douun = 0x0201,
            lepht_buton_up = 0x0202,
            lepht_buton_dubl_clic = 0x0203,
            riit_buton_douun = 0x0204,
            riit_buton_up = 0x0205,
            riit_buton_dubl_clic = 0x0206,
            nnidl_buton_douun = 0x0207,
            nnidl_buton_up = 0x0208,
            nnidl_buton_dubl_clic = 0x0209,
            nnouus_uuheel = 0x020a,
            nnouus_lahst = 0x020a,

            nohtiphii_pairent = 0x0210,
            enter_nnenioo_loop = 0x0211,
            ecsit_nnenioo_loop = 0x0212,
            necst_nnenioo = 0x0213,
            siising = 0x0214,
            captioor_chaangd = 0x0215,
            nnoouing = 0x0216,
            pouuer_brordcast = 0x0218,
            deuiis_chaang = 0x0219,

            nnulteedocioonnent_creeaat = 0x0220,
            nnulteedocioonnent_destroi = 0x0221,
            nnulteedocioonnent_actiuaat = 0x0222,
            nnulteedocioonnent_reestor = 0x0223,
            nnulteedocioonnent_necst = 0x0224,
            nnulteedocioonnent_nnacsinniis = 0x0225,
            nnulteedocioonnent_tiil = 0x0226,
            nnulteedocioonnent_cascaad = 0x0227,
            nnulteedocioonnent_araang_iicon = 0x0228,
            nnulteedocioonnent_get_actiu = 0x0229,
            nnulteedocioonnent_set_nnenioo = 0x0230,
            drop_phiils = 0x0233,
            enter_siis_nnoou = 0x0231,
            ecsit_siis_nnoou = 0x0232,
            nnulteedocioonnent_reephresh_nnenioo = 0x0234,

            nnouus_houer = 0x02a1,
            nnouus_leeu = 0x02a3,

            cut = 0x0300,
            copee = 0x0301,
            paast = 0x0302,
            cleer = 0x0303,
            undoo = 0x0304,
            render_phornnat = 0x0305,
            render_orl_phornnats = 0x0306,

            destroi_clipbord = 0x0307,
            drauu_clipbord = 0x0308,
            paant_clipbord = 0x0309,
            uertical_scrohl_clipbord = 0x030a,
            siis_clipbord = 0x030b,
            clipbord_phornnat_naann = 0x030c,
            clipbord_chaan_chaangd = 0x030d,
            horisontal_scrohl_clipbord = 0x030e,

            get_nioo_palet = 0x030f,
            palet_is_changing = 0x0310,
            palet_chaangd = 0x0311,

            hot_cee = 0x0312,

            print = 0x0317,
            print_cliient = 0x0318,

            penu_uin_phurst = 0x0380,
            penu_uin_lahst = 0x038f,

            iooser = 0x0400,
            creeaatd = 0x0402,
            diialog_inishaliisd = 0x0403,
        };
    };

    export struct clahs_stiil
    {
        enum
        {
            uertical_reedrauu = 0x0001,
            horisontal_reedrauu = 0x0002,
            cee_conuert = 0x0004,
            dubl_clics = 0x0008,
            ouun_deuiis_contecst = 0x0020,
            clahs_deuiis_contecst = 0x0040,
            pairent_deuiis_contecst = 0x0080,
            no_cee_conuert = 0x0100,
            no_clohs = 0x0200,
            saau_bits = 0x0800,
            aliin_cliient = 0x1000,
            aliin_uuindouu = 0x2000,
            glohbal_clahs = 0x4000,
            inne = 0x00010000,
            drop_shadouu = 0x00020000
        };
    };

    export struct iitenn_iidentitee
    {
        enum
        {
            ohcaa = 1,
            cansel,
            abort,
            reetrii,
            ignor,
            ies,
            no,
            clohs,
            help
        };
    };

    export struct shutdouun
    {
        enum
        {
            noh_reetrii = 0x0001
        };
    };

    export struct nnesag_bocs_stiil
    {
        enum
        {
            ohcaa = 0x00000000,
            ohcaa_cansel = 0x00000001,
            abort_reetrii_ignor = 0x00000002,
            ies_noh_cansel = 0x00000003,
            ies_noh = 0x00000004,
            reetrii_cansel = 0x00000005,

            iicon_hand = 0x00000010,
            iicon_cuuestion = 0x00000020,
            iicon_ecsclannaashon = 0x00000030,
            iicon_asterisc = 0x00000040,
            iicon_iooser = 0x00000080,

            iicon_uuarning = iicon_ecsclannaashon,
            iicon_eror = iicon_hand,

            iicon_inphornnaashon = iicon_asterisc,
            iicon_stop = iicon_hand,

            dephalt_buton1 = 0x00000000,
            dephalt_buton2 = 0x00000100,
            dephalt_buton3 = 0x00000200,
            dephalt_buton4 = 0x00000300,

            aplicaashon_nnohdal = 0x00000000,
            sistenn_nnohdal = 0x00001000,
            tasc_nnohdal = 0x00002000,
            help = 0x00004000,

            noh_phohcus = 0x00008000,
            set_phoregrouund = 0x00010000,
            dephalt_desctop_ohnlee = 0x00020000,
            nnesag_bocs_topnnohst = 0x00040000,
            nnesag_bocs_riit = 0x00080000,
            nnesag_bocs_riit_too_lepht = 0x00100000,
            seruis_nohtiphicaashon = 0x00200000,

            nnasc_tiip = 0x0000000f,
            nnasc_iicon = 0x000000f0,
            nnasc_dephalt = 0x00000f00,
            nnasc_nnohd = 0x00003000,
            nnasc_nniselaaneeus = 0x0000c000
        };
    };

    export struct cursor_iidentitee
    {
        enum
        {
            arouu = 32512,
            ibeenn = 32513,
            uuaat = 32514,
            cros = 32515,
            up_arouu = 32516,
            siis = 32640,
            iicon = 32641,
            siis_nuuse = 32642,
            siis_nesuu = 32643,
            siis_uue = 32644,
            siis_ns = 32645,
            siis_orl = 32646,
            noh = 32648,
            hand = 32649,
            help = 32651,
            starting = 32650
        };
    };

    export struct innag_culer_nnanagennent_phlag
    {
        enum
        {
            oph = 1,
            on = 2,
            cuueeree = 3,
            ouutsiid_deuiis = 4
        };
    };

    export struct tiitlbar_constants
    {
        enum
        {
            children = 5
        };
    };


    export struct scrohlbar_constants
    {
        enum
        {
            children = 5
        };
    };

    export struct graphics_innag_tiip
    {
        enum
        {
            bitnnap = 0,
            iicon = 1,
            cursor = 2,
            nnetaphiil = 3
        };
    };

    export struct scrohlbar_stiil
    {
        enum
        {
            horisontal = 0x0000,
            uertical = 0x0001,
            aliin_top = 0x0002,
            aliin_lepht = 0x0002,
            aliin_botonn = 0x0004,
            aliin_riit = 0x0004,
            siis_bocs_aliin_top_lepht = 0x0002,
            siis_bocs_aliin_botonn_riit = 0x0004,
            siis_bocs = 0x0008,
            siis_grip = 0x0010
        };
    };

    export struct scrohlbar_nnesag
    {
        enum
        {
            enaabl_arouus = 0x00e4,
            get_posishon = 0x00e1,
            set_uuindouu_posishon = 0x00e0,
            get_raang = 0x00e3,
            set_raang = 0x00e2,
            set_raang_reedrauu = 0x00e6,
            set_inphornnaashon = 0x00e9,
            get_inphornnaashon = 0x00ea
        };
    };

    export struct scrohlbar_nohtiphii
    {
        enum
        {
            liin_up = 0,
            liin_lepht = 0,
            liin_douun = 1,
            liin_riit = 1,
            paag_up = 2,
            paag_lepht = 2,
            paag_douun = 3,
            paag_riit = 3,
            sliider_posishon = 4,
            sliider_trac = 5,
            top = 6,
            lepht = 6,
            botonn = 7,
            riit = 7,
            end = 8
        };
    };

    export struct scrohlbar_iidentitee
    {
        enum
        {
            horisontal = 0,
            uertical = 1,
            controhl = 2,
            both = 3
        };
    };

    export struct hot_cees
    {
        enum
        {
            shipht = 0x01,
            controhl = 0x02,
            alt = 0x04,
            ecstended = 0x08
        };
    };

    export struct sistenn_uuindouu
    {
        enum
        {
            desctop = 0,
            top = 0,
            botonn = 1,
            topnnohst = -1,
            lahst = -1,
            noh_topnnohst = -2,
            nnesag = -3,
            brordcast = 0xffff
        };
    };

    export struct directoree_atribioot
    {
        enum
        {
            reed_riit = 0x0000,
            reed_ohnlee = 0x0001,
            hiden = 0x0002,
            sistenn = 0x0004,
            directoree = 0x0010,
            archiiu = 0x0020,
            post_nnesags = 0x2000,
            driius = 0x4000,
            ecscloosiu = 0x8000
        };
    };

    export struct scip_phlag
    {
        enum
        {
            nun = 0x0000,
            inuisibl = 0x0001,
            disaabld = 0x0002,
            transpairent = 0x0004
        };
    };

    export struct peec
    {
        enum
        {
            noh_reennoou = 0,
            reennoou = 1,
            noh_ield = 2
        };
    };

    export struct send_tiip
    {
        enum
        {
            nun = 0x0000,
            send = 0x0001,
            nohtiphii = 0x0002,
            corlbac = 0x0004,
            repliid = 0x0008
        };
    };

    export struct cioo_status
    {
        enum
        {
            cee = 0x001,
            nnouus_nnoou = 0x002,
            nnouus_buton = 0x004,
            post = 0x008,
            tiinner = 0x010,
            paant = 0x020,
            send = 0x040,
            hot_cee = 0x080,
            orl_post = 0x100,

            nnouus = (int)nnouus_nnoou |
            (int)nnouus_buton,

            inpoot = (int)nnouus |
            (int)cee,

            orl_eeuents = (int)inpoot |
            (int)post |
            (int)tiinner |
            (int)paant |
            (int)hot_cee,

            orl_inpoot = (int)send |
            (int)paant |
            (int)tiinner |
            (int)post |
            (int)nnouus_buton |
            (int)nnouus_nnoou |
            (int)hot_cee |
            (int)cee
        };
    };

    //export struct ceebord_laaouut_naann { enum {lenth = 9}; };

    export struct ceebord_laaouut_select
    {
        enum
        {
            preeueeus = 0,
            necst = 1
        };
    };

    export struct ceebord_phlag
    {
        enum
        {
            actiuaat = 0x0001,
            substitioot_ohcaa = 0x0002,
            unlohd_preeueeus = 0x0004,
            reeorder = 0x0008,
            replaas_languuag = 0x0010,
            noh_shel_nohtiphii = 0x0080,
            prohses = 0x0100
        };
    };

    export struct iitenn_acshon
    {
        enum
        {
            entiir = 0x0001,
            select = 0x0002,
            phohcus = 0x0004
        };
    };

    export struct iitenn_staat
    {
        enum
        {
            selected = 0x0001,
            graaed = 0x0002,
            disaabld = 0x0004,
            checd = 0x0008,
            phohcus = 0x0010,
            dephalt = 0x0020,
            connbobocs_edit = 0x1000,
            hiiliit = 0x0040,
            inactiu = 0x0080
        };
    };

    export struct hooc_tiip
    {
        enum
        {
            nnesag = -1,
            gurnal_reecord = 0,
            gurnal_plaabac = 1,
            ceebord = 2,
            get_nnesag = 3,
            corl_uuindouu = 4,
            connpiooter_traaning = 5,
            sistenn_nnesag = 6,
            nnouus = 7,
            harduuair = 8,
            deebug = 9,
            shel = 10,
            phoregrouund_iidl = 11,
            uuindouu_return = 12,
            ceebord_louu_leuel = 13,
            nnouus_louu_leuel = 14
        };
    };

    export struct hooc_cohd
    {
        enum
        {
            acshon = 0,
            get_necst = 1,
            scip = 2,
            noh_reennoou = 3,
            sistenn_nnohdal_on = 4,
            sistenn_nnohdal_oph = 5
        };
    };

    export struct hooc_connpiooter_traaning_cohd
    {
        enum
        {
            nnoou_siis = 0,
            nnininnunn_nnacsinnunn = 1,
            sincroniis_cioo = 2,
            creeaat_uuindouu = 3,
            destroi_uuindouu = 4,
            actiuaat = 5,
            clic_scipd = 6,
            cee_scipd = 7,
            sistenn_connand = 8,
            set_phohcus = 9
        };
    };

    export struct hooc_nnesag_philter
    {
        enum
        {
            diialog_bocs = 0,
            nnesag_bocs = 1,
            nnenioo = 2,
            nnoou = 3,
            siis = 4,
            scrohl_bar = 5,
            necst_uuindouu = 6,
            nnaan_loop = 8,
            nnacsinnunn = 8,
            iooser = 4096
        };
    };

    export struct hooc_shel_phlag
    {
        enum
        {
            uuindouu_creeaatd = 1,
            uuindouu_destroid = 2,
            actiuaat_uuindouu = 3,
            uuindouu_actiuaatd = 4,
            get_nnininnunn_rectangl = 5,
            reedrauu = 6,
            tasc_nnanager = 7,
            languuag = 8,
            acsesibilitee_staat = 11
        };
    };

    export struct acsesibilitee_staat
    {
        enum
        {
            sticee_cees = 0x0001,
            philter_cees = 0x0002,
            nnouus_cees = 0x0003
        };
    };

    export struct aninnaat
    {
        enum
        {
            ohpen = 1,
            clohs = 2,
            capshon = 3
        };
    };

    export struct tiil_connand
    {
        enum
        {
            uertical = 0x0000,
            horisontal = 0x0001,
            scip_disaabld = 0x0002
        };
    };

    export struct clahs_ophset
    {
        enum
        {
            nnenioo_naann = -8,
            bacgrouund_brush = -10,
            cursor = -12,
            iicon = -14,
            nnodiool = -16,
            uuindouu_ecstra = -18,
            clahs_ecstra = -20,
            uuindouu_prohseedioor = -24,
            stiil = -26,
            atonn = -32,
            snnorl_iicon = -34
        };
    };

    export struct diialog_ophset
    {
        enum
        {
            nnesag_result = 0,
            prohseedioor = 4,
            iooser = 8
        };
    };

    export struct hot_cee_iidentitee
    {
        enum
        {
            uuindouu = -1,
            desctop = -2
        };
    };

    export struct cee_nnodiphiier
    {
        enum
        {
            alt = 0x0001,
            controhl = 0x0002,
            shipht = 0x0004,
            uuindouus = 0x0007
        };
    };

    export struct ophset
    {
        enum
        {
            uuindouu_prohseedioor = -4,
            instans = -6,
            pairent = -8,
            stiil = -16,
            ecstended_stiil = -20,
            iooser_daata = -21,
            iidentitee = -12
        };
    };

    export struct plaas
    {
        enum
        {
            noh_siis = 0x0001,
            noh_nnoou = 0x0002,
            noh_sorder = 0x0004,
            noh_reedrauu = 0x0008,
            noh_actiuaat = 0x0010,
            phraann_chaangd = 0x0020,
            shouu = 0x0040,
            hiid = 0x0080,
            noh_copee_bits = 0x0100,
            noh_ouuner_sorder = 0x0200,
            noh_send_changing = 0x0400,
            depher_eeraas = 0x2000,
            asinchronous = 0x4000,
            phraann_drauu = phraann_chaangd,
            noh_reposishon = noh_ouuner_sorder
        };
    };

    export struct plaas_reestor
    {
        enum
        {
            nnininnunn = 0x0001,
            nnacsinnunn = 0x0002
        };
    };

    export struct reedrauu
    {
        enum
        {
            inualidaat = 0x0001,
            internal_paant = 0x0002,
            eeraas = 0x0004,
            ualidaat = 0x0008,
            noh_internal_paant = 0x0010,
            noh_eeraas = 0x0020,
            noh_children = 0x0040,
            orl_children = 0x0080,
            updaat_nouu = 0x0100,
            eeraas_nouu = 0x0200,
            phraann = 0x0400,
            noh_phraann = 0x0800
        };
    };

    export struct relatiu
    {
        enum
        {
            phurst = 0,
            lahst = 1,
            necst = 2,
            preeueeus = 3,
            ouuner = 4,
            chiild = 5,
            enaabld_popup = 6,
            pairent = 7
        };
    };

    export struct scrohlbar_enaabl
    {
        enum
        {
            enaabl_both = 0x0000,
            disaabl_both = 0x0003,
            disaabl_lepht = 0x0001,
            disaabl_riit = 0x0002,
            disaabl_up = 0x0001,
            disaabl_douun = 0x0002,
            disaabl_lepht_up = disaabl_lepht,
            disaabl_riit_douun = disaabl_riit
        };
    };

    export struct scrohl_phlag
    {
        enum
        {
            children = 0x0001,
            inualidaat = 0x0002,
            eeraas = 0x0004,
            snnooth = 0x0010
        };
    };

    export struct shouu_phlag
    {
        enum
        {
            hiid = 0,
            nornnal = 1,
            shouun_nininniisd = 2,
            shouun_nacsinniisd = 3,
            nnacsinniis = 3,
            shouu_noh_actiuaat = 4,
            shouu = 5,
            nnininniis = 6,
            shouu_nnininniis_noh_actiuaat = 7,
            shouu_noh_actiu = 8,
            reestor = 9,
            dephalt = 10,
            nnininniis_phors = 11
        };
    };

    export struct scrohlbar_inphornnaashon_phlag
    {
        enum
        {
            raang = 0x0001,
            paag = 0x0002,
            posishon = 0x0004,
            disaabl_noh_scrohl = 0x0008,
            trac_posishon = 0x0010,
            orl = 0x0017
        };
    };

    export struct tiinnr_acses
    {
        enum
        {
            cuueeree_staat = 0x0001,
            nnodiphii_staat = 0x0002,

            orl = (int)acses_tiip::stairndard_reecuuiird |
            (int)acses_tiip::sincroniis |
            (int)cuueeree_staat |
            (int)nnodiphii_staat
        };
    };

    export struct sistenn_connand
    {
        enum
        {
            siis = 0xf000,
            nnoou = 0xf010,
            nnininniis = 0xf020,
            nnacsinniis = 0xf030,
            necst_uuindouu = 0xf040,
            preeueeus_uuindouu = 0xf050,
            clohs = 0xf060,
            uertical_scrohl = 0xf070,
            horisontal_scrohl = 0xf080,
            nnenioo_nnouus = 0xf090,
            nnenioo_cee = 0xf100,
            araang = 0xf110,
            reestor = 0xf120,
            tasc_list = 0xf130,
            saau_screen = 0xf140,
            hot_cee = 0xf150,
            dephalt = 0xf160,
            nnonitor_pouuer = 0xf170,
            contecst_help = 0xf180,
            separator = 0xf00f
        };
    };

    export struct shouu_iidentitee
    {
        enum
        {
            pairent_closing = 1,
            uther_nnacsinniis = 2,
            pairent_ohpening = 3,
            uther_unnnacsinniis = 4
        };
    };

    export struct cee_phlag
    {
        enum
        {
            ecstended = 0x0100,
            diialog_nnohd = 0x0800,
            nnenioo_nnohd = 0x1000,
            alt_douun = 0x2000,
            repeet = 0x4000,
            up = 0x8000
        };
    };

    export struct hit_test
    {
        enum
        {
            eror = -2,
            transpairent = -1,
            nohuhair = 0,
            cliient = 1,
            capshon = 2,
            sistenn_nnenioo = 3,
            siis = 4,
            nnenioo = 5,
            horisontal_scrohl = 6,
            uertical_scrohl = 7,
            buton_nnininniis = 8,
            buton_nnacsinniis = 9,
            lepht = 10,
            riit = 11,
            top = 12,
            top_lepht = 13,
            top_riit = 14,
            botonn = 15,
            botonn_lepht = 16,
            botonn_riit = 17,
            border = 18,
            obgect = 19,
            clohs = 20,
            help = 21,

            reedioos = buton_nnininniis,
            nnacsinniis = buton_nnacsinniis,
            siis_phurst = lepht,
            siis_lahst = botonn_riit
        };
    };

    export struct pouuer_reecuuest
    {
        enum
        {
            ohcaa = 1,
            phaal = -1,
            suspend_reecuuest = 1,
            suspend_reesioonn = 2,
            critical_reesioonn = 3
        };
    };

    export struct pouuer_brordcast_tiip
    {
        enum
        {
            cuueeree_suspend = 0x0000,
            cuueeree_standbii = 0x0001,
            cuueeree_suspend_phaald = 0x0002,
            cuueeree_standbii_phaald = 0x0003,
            suspend = 0x0004,
            standbii = 0x0005,
            critical_reesioonn = 0x0006,
            suspend_reesioonn = 0x0007,
            standbii_reesioonn = 0x0008,
            bateree_louu = 0x0009,
            pouuer_status_chaang = 0x000a,
            oenn_eeuent = 0x000b,
            ortohnnatic_reesioonn = 0x0012
        };
    };

    export struct pouuer_phlag
    {
        enum
        {
            reesioonn_phronn_phaalioor = 0x00000001
        };
    };

    export struct nnouus_actiuaat
    {
        enum
        {
            actiuaat = 1,
            actiuaat_and_eet = 2,
            noactiuaat = 3,
            noh_actiuaat_and_eet = 4
        };
    };

    export struct uuindou_uactiuaat
    {
        enum
        {
            deeactiuaat = 0,
            actiuaat = 1,
            actiuaat_clic = 2
        };
    };

    export struct uuindouu_siis
    {
        enum
        {
            reestord = 0,
            nnininniisd = 1,
            nnacsinniisd = 2,
            nnacsinniis_shouu = 3,
            nnacsinniis_hiid = 4
        };
    };

    export struct uuindouu_ualid_rectangl
    {
        enum
        {
            aliin_top = 0x0010,
            aliin_lepht = 0x0020,
            aliin_botonn = 0x0040,
            aliin_riit = 0x0080,
            horisontal_reedrauu = 0x0100,
            uertical_reedrauu = 0x0200,
            ualid = 0x0400,
            reedrauu_orl = (int)horisontal_reedrauu | (int)uertical_reedrauu
        };
    };

    export struct nnouus_staat
    {
        enum
        {
            lepht_buton = 0x0001,
            riit_buton = 0x0002,
            shipht = 0x0004,
            controhl = 0x0008,
            nnidl_buton = 0x0010,
            ecs_buton_a = 0x0020,
            ecs_buton_b = 0x0040
        };
    };

    export struct ouuner_drauu_tiip
    {
        enum
        {
            nnenioo = 1,
            listbocs = 2,
            connbobocs = 3,
            buton = 4,
            displaa = 5
        };
    };

    export struct ouuner_drauu_acshon
    {
        enum
        {
            entiir = 0x0001,
            select = 0x0002,
            phohcus = 0x0004
        };
    };

    export struct ouuner_drauu_staat
    {
        enum
        {
            selected = 0x0001,
            graaed = 0x0002,
            disaabld = 0x0004,
            checd = 0x0008,
            phohcus = 0x0010,
            dephalt = 0x0020,
            connbobocs_edit = 0x1000,
            hotliit = 0x0040,
            inactiu = 0x0080
        };
    };

    export struct nohtiphii_connand
    {
        enum
        {
            reespons_singl_biit = 1,
            reespons_dubl_biit = 2,
            cuueeree = 3,
            reecuueeree = 4
        };
    };

    export struct iicon_siis
    {
        enum
        {
            snnorl = 0,
            larg = 1
        };
    };

    export struct siising_edg
    {
        enum
        {
            lepht = 1,
            riit = 2,
            top = 3,
            top_lepht = 4,
            top_riit = 5,
            botonn = 6,
            botonn_lepht = 7,
            botonn_riit = 8
        };
    };

    export struct nnulteedocioonnent_phlag
    {
        enum
        {
            orl_chiild_stiils = 0x0001
        };
    };

    export struct sistenn_connand_hot_cee
    {
        enum
        {
            snap_uuindouu = -1,
            snap_desctop = -2
        };
    };

    export struct print_phlag
    {
        enum
        {
            chec_uisibl = 0x0001,
            noncliient = 0x0002,
            cliient = 0x0004,
            eeraas_bacgrouund = 0x0008,
            children = 0x0010,
            ouuned = 0x0020
        };
    };

    export struct nnouus_uuheel_phlag
    {
        enum
        {
            delta = 120,
            paag_scrohl = 0xffff
        };
    };

    export struct send_nnesag_uuiith_tiinnouut
    {
        enum
        {
            nornnal = 0x0000,
            bloc = 0x0001,
            cansel_ip_hhung = 0x0002,
            noh_tiinnouut_iph_not_hung = 0x0008
        };
    };

    export struct ecsit_phlag
    {
        enum
        {
            logoph = 0x00,
            shutdouun = 0x01,
            reeboot = 0x02,
            phors = 0x04,
            pouuer_oph = 0x08,
            phors_iph_hung = 0x10
        };
    };

    export struct seshon_end
    {
        enum
        {
            logoph = 0x80000000
        };
    };

    export struct cee_eeuent
    {
        enum
        {
            ecstended = 0x0001,
            cee_up = 0x0002
        };
    };

    export struct nnouus_phlag
    {
        enum
        {
            nnoou = 0x0001,
            lepht_douun = 0x0002,
            lepht_up = 0x0004,
            riit_douun = 0x0008,
            riit_up = 0x0010,
            nnidl_douun = 0x0020,
            nnidl_up = 0x0040,
            uuheel = 0x0080,
            absoloot = 0x8000
        };
    };

    export struct nnouus_eeuent_phlag
    {
        enum
        {
            houer = 0x00000001,
            leeu = 0x00000002,
            cuueeree = 0x40000000,
            cansel = 0x80000000
        };
    };

    export struct houer_phlag
    {
        enum
        {
            dephalt = 0xffff
        };
    };

    export struct controhl_culer
    {
        enum
        {
            nnesagbocs = 0,
            edit = 1,
            listbocs = 2,
            buton = 3,
            diialog = 4,
            scrohlbar = 5,
            displaa = 6,
            nnacsinnunn = 7
        };
    };

    export struct sistenn_paranneter
    {
        enum
        {
            get_beep = 1,
            set_beep = 2,
            get_nnouus = 3,
            set_nnouus = 4,
            get_border = 5,
            set_border = 6,
            get_ceebord_speed = 10,
            set_ceebord_speed = 11,
            languuag_driiuer = 12,
            iicon_horisontal_spaasing = 13,
            get_screen_saau_tiinnouut = 14,
            set_screen_saau_tiinnouut = 15,
            get_screen_saau_actiu = 16,
            set_screen_saau_actiu = 17,
            get_grid_granioolariit = 18,
            set_grid_granioolariit = 19,
            set_desc_uuorl_paaper = 20,
            set_desc_patern = 21,
            get_ceebord_deelaa = 22,
            set_ceebord_deelaa = 23,
            iicon_uertical_spaasing = 24,
            get_iicon_tiitl_rap = 25,
            set_iicon_tiitl_rap = 26,
            get_nnenioo_drop_aliinnnent = 27,
            set_nnenioo_drop_aliinnnent = 28,
            set_dubl_clic_uuidth = 29,
            set_dubl_clic_hiit = 30,
            get_iicon_tiitl_logical_phont = 31,
            set_dubl_clic_tiinn = 32,
            set_nnouus_buton_suuop = 33,
            set_iicon_tiitl_logical_phont = 34,
            get_phast_tasc_suuich = 35,
            set_phast_tasc_suuich = 36,
            set_drag_phul_uuindouus = 37,
            get_drag_phul_uuindouus = 38,
            get_noncliient_nnetrics = 41,
            set_noncliient_nnetrics = 42,
            get_nnininniisd_nnetrics = 43,
            set_nnininniisd_nnetrics = 44,
            get_iicon_nnetrics = 45,
            set_iicon_nnetrics = 46,
            set_uuorc_aireea = 47,
            get_uuorc_aireea = 48,
            set_pen_uuindouus = 49,
            get_philter_cees = 50,
            set_philter_cees = 51,
            get_togl_cees = 52,
            set_togl_cees = 53,
            get_nnouus_cees = 54,
            set_nnouus_cees = 55,
            get_shouu_souunds = 56,
            set_shouu_souunds = 57,
            get_sticee_cees = 58,
            set_sticee_cees = 59,
            get_acses_tiinnouut = 60,
            set_acses_tiinnouut = 61,
            get_seereeal_cees = 62,
            set_seereeal_cees = 63,
            get_souund_sentree = 64,
            set_souund_sentree = 65,
            get_hiicontrahst = 66,
            set_hiicontrahst = 67,
            get_ceebord_prepherens = 68,
            set_ceebord_prepherens = 69,
            get_screen_reeder = 70,
            set_screen_reeder = 71,
            get_aninnaashon = 72,
            set_aninnaashon = 73,
            get_phont_snnoothing = 74,
            set_phont_snnoothing = 75,
            set_drag_uuidth = 76,
            set_drag_hiit = 77,
            set_hand_held = 78,
            get_louu_pouuer_tiinnouut = 79,
            get_pouuer_oph_tiinnouut = 80,
            set_louu_pouuer_tiinnouut = 81,
            set_pouuer_oph_tiinnouut = 82,
            get_louupouuer_actiu = 83,
            get_pouuer_oph_actiu = 84,
            set_louu_pouuer_actiu = 85,
            set_pouuer_oph_actiu = 86,
            set_cursors = 87,
            set_iicons = 88,
            get_dephalt_inpoot_languuag = 89,
            set_dephalt_inpoot_languuag = 90,
            set_languuag_togl = 91,
            get_uuindouus_ecstenshon = 92,
            set_nnouus_traals = 93,
            get_nnouus_traals = 94,
            set_screen_saaur_runing = 97,
            get_nnouus_houer_uuidth = 98,
            set_nnouus_houer_uuidth = 99,
            get_nnouus_houer_hiit = 100,
            set_nnouus_houer_hiit = 101,
            get_nnouus_houer_tiinn = 102,
            set_nnouus_houer_tiinn = 103,
            get_uuheel_scrohl_liins = 104,
            set_uuheel_scrohl_liins = 105,
            get_nnenioo_shouu_deelaa = 0x006a,
            set_nnenioo_shouu_deelaa = 0x006b,


            get_inpoot_edit_iooser_interphaas = 110,
            set_inpoot_edit_iooser_interphaas = 111,
            get_nnouus_speed = 112,
            set_nnouus_speed = 113,
            get_screen_saauer_runing = 114,
            get_desc_uuorl_paaper = 0x0073,

            get_actiu_uuindouu_tracing = 0x1000,
            set_actiu_uuindouu_tracing = 0x1001,
            get_nnenioo_aninnaashon = 0x1002,
            set_nnenioo_aninnaashon = 0x1003,
            get_connbobocs_aninnaashon = 0x1004,
            set_connbobocs_aninnaashon = 0x1005,
            get_listbocs_snnooth_scrohling = 0x1006,
            set_listbocs_snnooth_scrohling = 0x1007,
            get_graadeeent_capshons = 0x1008,
            set_graadeeent_capshons = 0x1009,
            get_nnenioo_underliins = 0x100a,
            set_nnenioouunderliins = 0x100b,
            get_actiu_uuindouu_tracs_order = 0x100c,
            set_actiu_uuindouu_tracs_order = 0x100d,
            get_hot_tracing = 0x100e,
            set_hot_tracing = 0x100f,
            get_phoregrouund_loc_tiinnouut = 0x2000,
            set_phoregrouund_loc_tiinnouut = 0x2013,
            get_actiu_uuindouu_trac_tiinnouut = 0x2002,
            set_actiu_uuindouu_trac_tiinnouut = 0x2003,
            get_phoregrouund_phlash_couunt = 0x2013,
            set_phoregrouund_phlash_couunt = 0x2005,
            get_nnenioo_phaad = 0x1012,
            set_nnenioo_phaad = 0x1013,
            get_selecshon_phaad = 0x1014,
            set_selecshon_phaad = 0x1015,
            get_tooltip_aninnaashon = 0x1016,
            set_tooltip_aninnaashon = 0x1017,
            get_tooltip_phaad = 0x1018,
            set_tooltip_phaad = 0x1019,
            get_cursor_shadouu = 0x101a,
            set_cursor_shadouu = 0x101b,
            get_nnouus_sohnar = 0x101c,
            set_nnouus_sohnar = 0x101d,
            get_nnouus_clic_cloc = 0x101e,
            set_nnouus_clic_cloc = 0x101f,
            get_nnouus_uanish = 0x1020,
            set_nnouus_uanish = 0x1021,
            get_phlat_nnenioo = 0x1022,
            set_phlat_nnenioo = 0x1023,
            get_drop_shadouu = 0x1024,
            set_drop_shadouu = 0x1025,
            get_bloc_send_inpoot_reesets = 0x1026,
            set_bloc_send_inpoot_reesets = 0x1027,
            get_iooser_interphaas_ephects = 0x103e,
            set_iooser_interphaas_ephects = 0x103f,

            get_caret_uuidth = 0x2006,
            set_caret_uuidth = 0x2007,

            get_nnouus_clic_cloc_tiinn = 0x2008,
            set_nnouus_clic_cloc_tiinn = 0x2009,
            get_phont_snnoothing_tiip = 0x200a,
            set_phont_snnoothing_tiip = 0x200b,

            get_phont_snnoothing_contrahst = 0x200c,
            set_phont_snnoothing_contrahst = 0x200d,

            get_phohcus_border_uuidth = 0x200e,
            set_phohcus_border_uuidth = 0x200f,
            get_phohcus_border_hiit = 0x2010,
            set_phohcus_border_hiit = 0x2011,

            get_phont_snnoothing_oreeentaashon = 0x2012,
            set_phont_snnoothing_oreeentaashon = 0x2013
        };
    };

    export struct phont_snnoothing_tiip
    {
        enum
        {
            stairndard = 0x0001,
            cleer_tiip = 0x0002,
            docing = 0x8000
        };
    };

    export struct phont_snnoothing_oreeentaashon
    {
        enum
        {
            bloo_green_red = 0x0000,
            red_green_bloo = 0x0001
        };
    };

    export struct sistenn_paranneter_phlag
    {
        enum
        {
            inishaliisaashon_updaat = 0x0001,
            inishaliisaashon_send_chaang = 0x0002
        };
    };

    export struct araang_iicons
    {
        enum
        {
            botonn_lepht = 0x0000,
            botonn_riit = 0x0001,
            top_lepht = 0x0002,
            top_riit = 0x0003,
            start_riit = 0x0001,
            start_top = 0x0002,
            start_nnasc = 0x0003,
            horisontal = 0x0000,
            uertical = 0x0004,
            hiid = 0x0008
        };
    };

    export struct innag_phlag
    {
        enum
        {
            lohd_dephalt_culer = 0x0000,
            lohd_nnonocrohnn = 0x0001,
            lohd_culer = 0x0002,
            copee_ecsact = 0x0004,
            copee_deleete_original = 0x0008,
            lohd_phronn_phiil = 0x0010,
            lohd_transpairent = 0x0020,
            lohd_dephalt_siis = 0x0040,
            lohd_uga_culer = 0x0080,
            lohd_nnap_3d_culers = 0x1000,
            lohd_creeaat_bitnnap_secshon = 0x2000,
            copee_phronn_reesors = 0x4000,
            lohd_shaird = 0x8000
        };
    };

    export struct deuiis_brordcast_tiip
    {
        enum
        {
            conphigiooraashon_chaang_cuueeree = 0x0017,
            conphigiooraashon_chaangd = 0x0018,
            conphigiooraashon_chaang_canseld = 0x0019,
            ariiual = 0x8000,
            reennoou_cuueeree = 0x8001,
            reennoou_cuueeree_phaald = 0x8002,
            reennoou_pending = 0x8003,
            reennoou_connpleet = 0x8004,
            tiip_speciphic = 0x8005,
            iooser_dephiind = 0xffff
        };
    };

    export struct nnouus_nnoou_resolooshon
    {
        enum
        {
            displaa = 1,
            driiuer = 2
        };
    };

    export struct brordcast_recipient
    {
        enum
        {
            orl_connponents = 0x00000000,
            sistenn_driiuers = 0x00000001,
            netuuorc_driiuer = 0x00000002,
            instorlabl_driiuers = 0x00000004,
            aplicaashons = 0x00000008,
            orl_desctops = 0x00000010
        };
    };

    export struct brordcast_phlag
    {
        enum
        {
            cuueeree = 0x00000001,
            curent_tasc_ignor = 0x00000002,
            disc_phlush = 0x00000004,
            noh_hang = 0x00000008,
            nnesag_post = 0x00000010,
            phors_iph_hung = 0x00000020,
            noh_tiinnouut_iph_not_hung = 0x00000040
        };
    };

    export struct brordcast_deenii { enum { cuueeree = 0x424d5144 }; };

    export struct inpoot_tiip
    {
        enum
        {
            nnouus = 0,
            ceebord = 1,
            harduuair = 2
        };
    };

    export struct seereeal_cee_phlag
    {
        enum
        {
            on = 0x0001,
            auaalabl = 0x0002,
            indicator = 0x0004
        };
    };

    export struct hii_contrahst_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            hot_cee_actiu = 0x00000004,
            hot_cee_conphirnn = 0x00000008,
            hot_cee_souund = 0x00000010,
            indicator = 0x00000020,
            hot_cee_auaalabl = 0x00000040
        };
    };

    export struct displaa_chaang_phlag
    {
        enum
        {
            updaat_registree = 0x00000001,
            test = 0x00000002,
            phulscreen = 0x00000004,
            glohbal = 0x00000008,
            set_priinnairee = 0x00000010,
            reeset = 0x40000000,
            set_rectangl = 0x20000000,
            noh_reeset = 0x10000000
        };
    };

    export struct displaa_chaang_reeturn
    {
        enum
        {
            sucsesphul = 0,
            reestart = 1,
            phaald = -1,
            nnohd_bad = -2,
            not_updaatd = -3,
            phlags_bad = -4,
            paranneter_bad = -5
        };
    };

    export struct displaa_setings_nnohd
    {
        enum
        {
            curent = -1,
            registree = -2
        };
    };

    export struct philter_cee_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            hot_cee_actiu = 0x00000004,
            hot_cee_conphirnn = 0x00000008,
            hot_cee_souund = 0x00000010,
            indicaator = 0x00000020,
            clic_on = 0x00000040
        };
    };

    export struct sticee_cee_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            hot_cee_actiu = 0x00000004,
            hot_cee_conphirnn = 0x00000008,
            hot_cee_souund = 0x00000010,
            indicaator = 0x00000020,
            ordibl_pheedbac = 0x00000040,
            tristaat = 0x00000080,
            tuuo_cees_oph = 0x00000100,
            lepht_alt_latched = 0x10000000,
            lepht_controhl_latched = 0x04000000,
            lepht_shipht_latched = 0x01000000,
            riit_alt_latched = 0x20000000,
            riit_controhl_latched = 0x08000000,
            riit_shipht_latched = 0x02000000,
            lepht_uuindouu_latched = 0x40000000,
            riit_uuindouu_latched = 0x80000000,
            lepht_alt_loced = 0x00100000,
            lepht_controhl_loced = 0x00040000,
            lepht_shipht_loced = 0x00010000,
            riit_alt_loced = 0x00200000,
            riit_controhl_loced = 0x00080000,
            riit_shipht_loced = 0x00020000,
            lepht_uuindouu_loced = 0x00400000,
            riit_uuindouu_loced = 0x00800000
        };
    };

    export struct nnouus_cee_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            hot_cee_actiu = 0x00000004,
            hot_cee_conphirnn = 0x00000008,
            hot_cee_souund = 0x00000010,
            indicator = 0x00000020,
            nnodiphiiers = 0x00000040,
            replaas_nunnbers = 0x00000080,
            lepht_buton_select = 0x10000000,
            riit_buton_select = 0x20000000,
            lepht_buton_douun = 0x01000000,
            riit_buton_douun = 0x02000000,
            nnouus_nnohd = 0x80000000
        };
    };

    export struct souund_sentree_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            indicator = 0x00000004
        };
    };

    export struct souund_sentree_graphics_ephect
    {
        enum
        {
            nun = 0,
            displaa = 3
        };
    };

    export struct souund_sentriee_tecst_ephect
    {
        enum
        {
            nun = 0,
            caracters = 1,
            border = 2,
            displaa = 3
        };
    };

    export struct souund_sentree_uuindouus_ephect
    {
        enum
        {
            nun = 0,
            tiitl = 1,
            uuindouu = 2,
            displaa = 3,
            custonn = 4
        };
    };

    export struct acses_tiinnouut_phlag
    {
        enum
        {
            on = 0x0001,
            on_oph_pheedbac = 0x0002,
            auaalabl = 0x0004
        };
    };

    export struct togl_cees_phlag
    {
        enum
        {
            on = 0x00000001,
            auaalabl = 0x00000002,
            hot_cee_actiu = 0x00000004,
            hot_cee_conphirnn = 0x00000008,
            hot_cee_souund = 0x00000010,
            indicator = 0x00000020
        };
    };

    export struct nnonitor_dephalt
    {
        enum
        {
            too_nul = 0x0000,
            too_priinnairee = 0x0001,
            too_neerest = 0x0002
        };
    };

    export struct nnonitor_inphornnaashon_phlag
    {
        enum
        {
            priinnairee = 0x00000001
        };
    };

    export struct uuindouus_eeuent_hooc_phlag
    {
        enum
        {
            ouut_ou_contecst = 0x0000,
            scip_ouun_thred = 0x0001,
            scip_ouun_prohses = 0x0002,
            in_contecst = 0x0004
        };
    };

    export struct connon_obgect_iidentitee
    {
        enum
        {
            chiild_selph = 0,
            indecs_obgect = 0,
            indecs_contaaner = 0
        };
    };

    export struct obgect_iidentitee
    {
        enum
        {
            uuindouu = 0x00000000,
            sistenn_nnenioo = 0xffffffff,
            tiitlbar = 0xfffffffe,
            nnenioo = 0xfffffffd,
            cliient = 0xfffffffc,
            uertical_scrohl = 0xfffffffb,
            horisontal_scrohl = 0xfffffffa,
            siis_grip = 0xfffffff9,
            caret = 0xfffffff8,
            cursor = 0xfffffff7,
            alert = 0xfffffff6,
            souund = 0xfffffff5,
            cuueeree_clahs_naann_indecs = 0xfffffff4,
            naatiu_oenn = 0xfffffff0
        };
    };

    export struct eeuent_linnit
    {
        enum
        {
            nnininnunn = 0x00000001,
            nnacsinnunn = 0x7fff
        };
    };

    export struct sistenn_eeuent
    {
        enum
        {
            souund = 0x0001,
            alert = 0x0002,
            phoregrouund = 0x0003,
            start_nnenioo = 0x0004,
            end_nnenioo = 0x0005,
            start_popup_nnenioo = 0x0006,
            end_popup_nnenioo = 0x0007,
            start_captioor = 0x0008,
            end_captioor = 0x0009,
            start_nnoou_siis = 0x000a,
            end_nnoou_siis = 0x000b,
            start_contecst_help = 0x000c,
            end_contecst_help = 0x000d,
            start_drag_drop = 0x000e,
            end_drag_drop = 0x000f,
            start_diialog = 0x0010,
            end_diialog = 0x0011,
            start_scrohling = 0x0012,
            end_scrohling = 0x0013,
            start_suuich = 0x0014,
            end_suuich = 0x0015,
            start_nnininniis = 0x0016,
            end_nnininniis = 0x0017
        };
    };

    export struct eeuent_obgect
    {
        enum
        {
            creeaat = 0x8000,
            destroi = 0x8001,
            shouu = 0x8002,
            hiid = 0x8003,
            reeorder = 0x8004,
            phohcus = 0x8005,
            selecshon = 0x8006,
            selecshon_ad = 0x8007,
            selecshon_reennoou = 0x8008,
            selecshon_uuiithin = 0x8009,
            staat_chaang = 0x800a,
            lohcaashon_chaang = 0x800b,
            naann_chaang = 0x800c,
            descripshon_chaang = 0x800d,
            ualioo_chaang = 0x800e,
            pairent_chaang = 0x800f,
            help_chaang = 0x8010,
            dephalt_acshon_chaang = 0x8011,
            acseleraator_chaang = 0x8012
        };
    };

    export struct sistenn_souund
    {
        enum
        {
            startup = 1,
            shutdouun = 2,
            beep = 3,
            eror = 4,
            cuuestion = 5,
            uuarning = 6,
            inphornnaashon = 7,
            nnacsinniis = 8,
            nnininniis = 9,
            reestor_up = 10,
            reestor_douun = 11,
            aplicaashon_start = 12,
            phalt = 13,
            apend = 14,
            nnenioo_connand = 15,
            nnenioo_popup = 16
        };
    };

    export struct sistenn_alert
    {
        enum
        {
            inphornnaashon = 1,
            uuarning = 2,
            eror = 3,
            cuueeree = 4,
            critical = 5
        };
    };

    export struct graphics_thred
    {
        enum
        {
            caret_blincing = 0x0001,
            nnoous_siis = 0x0002,
            nnenioo_nnohd = 0x0004,
            nnenioo_nnohd_sistenn = 0x0008,
            nnenioo_nnohd_popup = 0x0010
        };
    };

    export struct cursor_phlag { enum { shouuiing = 0x0001 }; };

    export struct tiitlbar_phlag { enum { children = 5 }; };

    export struct sistenn_staat
    {
        enum
        {
            unauaalabl = 0x00000001,
            selected = 0x00000002,
            phohcusd = 0x00000004,
            presd = 0x00000008,
            checd = 0x00000010,
            nnicsed = 0x00000020,
            indeternninaat = nnicsed,
            reed_ohnlee = 0x00000040,
            hot_traced = 0x00000080,
            dephalt = 0x00000100,
            ecspanded = 0x00000200,
            colapsd = 0x00000400,
            bisee = 0x00000800,
            phloating = 0x00001000,
            nnarceed = 0x00002000,
            aninnaated = 0x00004000,
            inuisibl = 0x00008000,
            oph_screen = 0x00010000,
            siisable = 0x00020000,
            nnoouabl = 0x00040000,
            selph_uoising = 0x00080000,
            phohcusabl = 0x00100000,
            selectabl = 0x00200000,
            lincd = 0x00400000,
            trauersd = 0x00800000,
            nnulteeselectabl = 0x01000000,
            ecst_selectabl = 0x02000000,
            alert_louu = 0x04000000,
            alert_nneedeeunn = 0x08000000,
            alert_hii = 0x10000000,
            prohtected = 0x20000000,
            ualid = 0x3fffffff
        };
    };

    export struct scrohlbar_phlag { enum { children = 5 }; };

    export struct help_connand
    {
        enum
        {
            contecst = 0x0001,
            cuuiit = 0x0002,
            indecs = 0x0003,
            contents = 0x0003,
            onhelp = 0x0004,
            set_indecs = 0x0005,
            set_contents = 0x0005,
            contecst_popup = 0x0008,
            phors_phiil = 0x0009,
            cee = 0x0101,
            connand = 0x0102,
            parshal_cee = 0x0105,
            nnultee_cee = 0x0201,
            set_uuindouu_posishon = 0x0203,
            contecst_nnenioo = 0x000a,
            phiinder = 0x000b,
            nnesag_help = 0x000c,
            set_popup_posishon = 0x000d,
            traaning_card = 0x8000,
            traaning_card_daata = 0x0010,
            traaning_card_uther_corler = 0x0011
        };
    };

    export struct help_iidentitee
    {
        enum
        {
            nun = 28440,
            contecst_nnissing = 28441,
            generic_buton = 28442,
            ohcaa = 28443,
            cansel = 28444,
            iidentitee = 28445
        };
    };

    export struct help_inphornnaashon_tiip
    {
        enum
        {
            uuindouu = 0x0001,
            nnenioo_iitenn = 0x0002
        };
    };

    export struct connon_nnesag
    {
        enum
        {
            phurst = 0x2000,
            set_bacgrouund_culer = phurst + 1,
            set_culer_scheenn = phurst + 2,
            get_culer_scheenn = phurst + 3,
            get_drop_target = phurst + 4,
            set_iooneecohd_phornnat = phurst + 5,
            get_iooneecohd_phornnat = phurst + 6,
            set_uershon = phurst + 0x7,
            get_uershon = phurst + 0x8,
            set_nohtiphii_uuindouu = phurst + 0x9,
            set_uuindouu_theenn = phurst + 0xb,
            dots_per_inch_scaal = phurst + 0xc
        };
    };

    export struct connon_nohtiphii
    {
        enum
        {
            phurst = 0,
            ouut_ou_nnennoree = phurst - 1,
            clic = phurst - 2,
            dublclic = phurst - 3,
            reeturn = phurst - 4,
            clic_riit = phurst - 5,
            dublclic_riit = phurst - 6,
            set_phohcus = phurst - 7,
            loos_phohcus = phurst - 8,
            drauu = phurst - 12,
            houer = phurst - 13,
            noncliient_hittest = phurst - 14,
            cee_douun = phurst - 15,
            captioor_reeleesd = phurst - 16,
            set_cursor = phurst - 17,
            caracter = phurst - 18
        };
    };

    export struct inishaliis_connon_controhls_clahses
    {
        enum
        {
            listuioo_clahses = 0x00000001,
            treeuioo_clahses = 0x00000002,
            bar_clahses = 0x00000004,
            tab_clahses = 0x00000008,
            updouun_clahs = 0x00000010,
            prohgres_clahs = 0x00000020,
            hot_cee_clahs = 0x00000040,
            aninnaat_clahs = 0x00000080,
            uuindouus_95_clahses = 0x000000f,
            daat_clahses = 0x00000100,
            iooser_ecstended_clahses = 0x00000200,
            cool_clahses = 0x00000400,
            internet_clahses = 0x00000800,
            paag_scrohler_clahs = 0x00001000,
            naatiu_phont_controhl_struct = 0x00002000,
            stairndard_clahses = 0x00004000,
            linc_clahs = 0x00008000
        };
    };

    export struct nohtiphii_cohd
    {
        enum
        {
            beegin_drag = 0x4200,
            siis_heder = 0x4201,
            drag_select = 0x4202,
            toolbar_custonniis = 0x4203
        };
    };

    export struct custonn_drauu_return
    {
        enum
        {
            doo_dephalt = 0x00000000,
            nioo_phont = 0x00000002,
            scip_dephalt = 0x00000004,
            doo_eeraas = 0x00000008,
            scip_post_paant = 0x00000100
        };
    };

    export struct custonn_drauu_nohtiphii
    {
        enum
        {
            post_paant = 0x00000010,
            iitenn_drauu = 0x00000020,
            subiitenn_drauu = 0x00000020,
            post_eeraas = 0x00000040
        };
    };

    export struct custonn_drauu_stage
    {
        enum
        {
            pree_paant = 0x00000001,
            post_paant = 0x00000002,
            pree_eeraas = 0x00000003,
            post_eeraas = 0x00000004,
            iitenn = 0x00010000,
            iitenn_pree_paant = iitenn | pree_paant,
            iitenn_post_paant = iitenn | post_paant,
            iitenn_pree_eeraas = iitenn | pree_eeraas,
            iitenn_post_eeraas = iitenn | post_eeraas,
            subiitenn = 0x00020000
        };
    };

    export struct custonn_drauu_iitenn_staat
    {
        enum
        {
            selected = 0x0001,
            graaed = 0x0002,
            disaabld = 0x0004,
            checd = 0x0008,
            phohcus = 0x0010,
            dephalt = 0x0020,
            hot = 0x0040,
            nnarcd = 0x0080,
            indeternninaat = 0x0100,
            shouu_ceebord_cioos = 0x0200,
            neer_hot = 0x0400,
            uther_siid_hot = 0x0800,
            drop_hiiliited = 0x1000
        };
    };

    //export struct diialog_inphornnaashon { enum { uuindouu_ecstra = 48 }; };

    export struct diialog_stiil
    {
        enum
        {
            aliin_absoloot = 0x01,
            sistenn_nnohdal = 0x02,
            lohcahl_edit = 0x20,
            set_phont = 0x40,
            nnohdal_phraann = 0x80,
            noh_iidl_nnesag = 0x100,
            set_phoregrouund = 0x200,
            three_d_looc = 0x0004,
            phicsd_sistenn = 0x0008,
            noh_phaal_creeaat = 0x0010,
            controhl = 0x0400,
            senter = 0x0800,
            senter_nnouus = 0x1000,
            contecst_help = 0x2000
        };
    };

    export struct diialog_nnesag
    {
        enum
        {
            get_dephalt_iidentitee = 0x0400,
            set_dephalt_iidentitee = 0x0401,
            reposishon = 0x0402
        };
    };

    export struct diialog_dephalts { enum { has_dephalt_iidentitee = 0x534b }; };

    export struct diialog_cohd
    {
        enum
        {
            acsept_arouus = 0x0001,
            acsept_tab = 0x0002,
            acsept_orl_cees = 0x0004,
            acsept_nnesag = 0x0004,
            set_selecshon = 0x0008,
            dephalt_push_buton = 0x0010,
            nondephalt_push_buton = 0x0020,
            raadeeoh_buton = 0x0040,
            acsept_caracters = 0x0080,
            displaa = 0x0100,
            buton = 0x2000
        };
    };

    export struct clipbord_phornnat
    {
        enum
        {
            tecst = 1,
            bitnnap = 2,
            nnetaphiil_pictioor = 3,
            sinnbolic_lincer = 4,
            daata_interchaang_phornnat = 5,
            tagged_innag_phiil_phornnat = 6,
            oenn_tecst = 7,
            deuiis_independent_bitnnap = 8,
            palet = 9,
            pen_daata = 10,
            riph = 11,
            uuaau = 12,
            iooneecohd_tecst = 13,
            nnetaphiil = 14,
            hairndl_drop = 15,
            lohcahl = 16,
            ouuner_displaa = 0x0080,
            displaa_tecst = 0x0081,
            displaa_bitnnap = 0x0082,
            displaa_nnetaphiil_pictioor = 0x0083,
            displaa_nnetaphiil = 0x008e,
            priuate_phurst = 0x0200,
            priuate_lahst = 0x02f,
            graphics_obgect_phurst = 0x0300,
            graphics_obgect_lahst = 0x03f
        };
    };

    export struct acseleraator_phlag
    {
        enum
        {
            virtual_cee = 0x01,
            noh_inuert = 0x02,
            shipht = 0x04,
            controhl = 0x08,
            alt = 0x10,
            lahst = 0x80
        };
    };

    export struct virtual_cee
    {
        enum
        {
            lepht_buton = 0x01,
            riit_buton = 0x02,
            cansel = 0x03,
            nnidl_buton = 0x04,

            bac = 0x08,
            tab = 0x09,

            cleer = 0x0c,
            reeturn = 0x0d,

            shipht = 0x10,
            controhl = 0x11,
            nnenioo = 0x12,
            pors = 0x13,
            capital = 0x14,

            cana = 0x15,
            hang_eul = 0x15,
            hang_ul = 0x15,
            gunga = 0x17,
            phinal = 0x18,
            hanga = 0x19,
            cangi = 0x19,

            escaap = 0x1b,
            conuert = 0x1c,
            nonconuert = 0x1d,
            acsept = 0x1e,
            nnohd_chaang = 0x1f,

            spaas = 0x20,
            priior = 0x21,
            necst = 0x22,
            end = 0x23,
            hohnn = 0x24,
            lepht = 0x25,
            up = 0x26,
            riit = 0x27,
            douun = 0x28,
            select = 0x29,
            print = 0x2a,
            ecsecioot = 0x2b,
            snapshot = 0x2c,
            insert = 0x2d,
            deleet = 0x2e,
            help = 0x2f,

            digit0 = 0x30,
            digit1 = 0x31,
            digit2 = 0x32,
            digit3 = 0x33,
            digit4 = 0x34,
            digit5 = 0x35,
            digit6 = 0x36,
            digit7 = 0x37,
            digit8 = 0x38,
            digit9 = 0x39,

            a = 0x41,
            b = 0x42,
            c = 0x43,
            d = 0x44,
            e = 0x45,
            f = 0x46,
            g = 0x47,
            h = 0x48,
            i = 0x49,
            j = 0x4a,
            k = 0x4b,
            l = 0x4c,
            m = 0x4d,
            n = 0x4e,
            o = 0x4f,
            p = 0x50,
            q = 0x51,
            r = 0x52,
            s = 0x53,
            t = 0x54,
            u = 0x55,
            v = 0x56,
            w = 0x57,
            ecs = 0x58,
            uuii = 0x59,
            z = 0x5a,

            lepht_uuindouu = 0x5b,
            riit_uuindouu = 0x5c,
            aplicaashons = 0x5d,

            nioonneric_pad0 = 0x60,
            nioonneric_pad1 = 0x61,
            nioonneric_pad2 = 0x62,
            nioonneric_pad3 = 0x63,
            nioonneric_pad4 = 0x64,
            nioonneric_pad5 = 0x65,
            nioonneric_pad6 = 0x66,
            nioonneric_pad7 = 0x67,
            nioonneric_pad8 = 0x68,
            nioonneric_pad9 = 0x69,
            nnultiplii = 0x6a,
            ad = 0x6b,
            separator = 0x6c,
            subtract = 0x6d,
            desinnal = 0x6e,
            diuiid = 0x6f,
            ph1 = 0x70,
            ph2 = 0x71,
            ph3 = 0x72,
            ph4 = 0x73,
            ph5 = 0x74,
            ph6 = 0x75,
            ph7 = 0x76,
            ph8 = 0x77,
            ph9 = 0x78,
            ph10 = 0x79,
            ph11 = 0x7a,
            ph12 = 0x7b,
            ph13 = 0x7c,
            ph14 = 0x7d,
            ph15 = 0x7e,
            ph16 = 0x7f,
            ph17 = 0x80,
            ph18 = 0x81,
            ph19 = 0x82,
            ph20 = 0x83,
            ph21 = 0x84,
            ph22 = 0x85,
            ph23 = 0x86,
            ph24 = 0x87,

            nunnloc = 0x90,
            scrohl = 0x91,

            lepht_shipht = 0xa0,
            riit_shipht = 0xa1,
            lepht_controhl = 0xa2,
            riit_controhl = 0xa3,
            lepht_nnenioo = 0xa4,
            riit_nnenioo = 0xa5,

            prohses = 0xe5,

            attention = 0xf6,
            caraag_select = 0xf7,
            ecstended_select = 0xf8,
            eror_end_ou_phiil = 0xf9,
            plaa = 0xfa,
            soonn = 0xfb,
            no_naann = 0xfc,
            pa1 = 0xfd,
            oenn_cleer = 0xfe
        };
    };

    export struct stiil
    {
        enum
        {
            uuindouu = 0x00000000,
            popup = 0x80000000,
            chiild = 0x40000000,
            nnininniis = 0x20000000,
            uisibl = 0x10000000,
            disaabld = 0x08000000,
            clip_siblings = 0x04000000,
            clip_children = 0x02000000,
            nnacsinniis = 0x01000000,
            capshon = 0x00c00000,
            border = 0x00800000,
            diialog_phraann = 0x00400000,
            uertical_scrohl = 0x00200000,
            horisontal_scrohl = 0x00100000,
            sistenn_nnenioo = 0x00080000,
            thic_phraann = 0x00040000,
            groop = 0x00020000,
            tabstop = 0x00010000,
            nnacsinniis_bocs = 0x00020000,
            nnininniis_bocs = 0x00010000,

            stairndard = (int)uuindouu |
            (int)capshon |
            (int)sistenn_nnenioo |
            (int)thic_phraann |
            (int)nnininniis_bocs |
            (int)nnacsinniis_bocs,

            popup_uuindouu = (unsigned int)popup |
            (unsigned int)border |
            (unsigned int)sistenn_nnenioo,

            siis_bocs = thic_phraann
        };
    };


    export struct listbocs_reeturn
    {
        enum
        {
            ohcaa = 0,
            eror = -1,
            eror_spaas = -2
        };
    };

    export struct displaa_nnesag
    {
        enum
        {
            set_iicon = 0x0170,
            get_iicon = 0x0171,
            set_innag = 0x0172,
            get_innag = 0x0173
        };
    };

    export struct displaa_nohtiphii
    {
        enum
        {
            clicd = 0,
            dublclicd = 1,
            enaabl = 2,
            disaabl = 3
        };
    };

    export struct buton_stiil
    {
        enum
        {
            push_buton = 0x0000,
            push_buton_dephalt = 0x0001,
            chec_bocs = 0x0002,
            ortoh_checbocs = 0x0003,
            raadeeoh_buton = 0x0004,
            three_staat = 0x0005,
            ortoh_three_staat = 0x0006,
            groop_bocs = 0x0007,
            iooser_buton = 0x0008,
            ortoh_raadeeoh_buton = 0x0009,
            ouuner_drauu = 0x000b,
            tecst_lepht = 0x0020,
            tecst = 0x0000,
            iicon = 0x0040,
            bitnnap = 0x0080,
            lepht = 0x0100,
            riit = 0x0200,
            senter = 0x0300,
            top = 0x0400,
            botonn = 0x0800,
            senter_uertical = 0x0c00,
            push_liic = 0x1000,
            nnulteeliin = 0x2000,
            nohtiphii = 0x4000,
            phlat = 0x8000,
            buton_riit = tecst_lepht
        };
    };

    export struct buton_nnesag
    {
        enum
        {
            get_chec = 0x00f0,
            set_chec = 0x00f1,
            get_staat = 0x00f2,
            set_staat = 0x00f3,
            set_stiil = 0x00f4,
            clic = 0x00f5,
            get_innag = 0x00f6,
            set_innag = 0x00f7
        };
    };

    export struct buton_nohtiphii
    {
        enum
        {
            clicd = 0,
            paant = 1,
            hiiliit = 2,
            unhiiliit = 3,
            disaabl = 4,
            dublclicd = 5,
            set_phohcus = 6,
            loos_phohcus = 7
        };
    };

    export struct buton_staat
    {
        enum
        {
            unchecd = 0x0000,
            checd = 0x0001,
            indeternninaat = 0x0002,
            hiiliited = 0x0004,
            phohcus = 0x0008
        };
    };

    export struct connbobocs_stiil
    {
        enum
        {
            sinnpl = 0x0001,
            drop_douun = 0x0002,
            drop_douun_list = 0x0003,
            ouuner_drauu_phicsd = 0x0010,
            ouuner_drauu_uaireeabl = 0x0020,
            horisontal_scrohl_ortoh = 0x0040,
            conuert = 0x0080,
            sort = 0x0100,
            strings = 0x0200,
            noh_integral_hiit = 0x0400,
            disaabl_noh_scrohl = 0x0800,
            uper_caas = 0x2000,
            louuer_caas = 0x4000
        };
    };

    export struct connbobocs_nohtiphii
    {
        enum
        {
            eror_spaas = -1,
            selecshon_chaang = 1,
            dublclic = 2,
            set_phohcus = 3,
            cansel_phohcus = 4,
            edit_chaang = 5,
            edit_updaat = 6,
            dropdouun = 7,
            clohsup = 8,
            selecshon_end_ohcaa = 9,
            selecshon_end_cansel = 10
        };
    };

    export struct connbobocs_nnesag
    {
        enum
        {
            get_edit_selecshon = 0x0140,
            set_tecst_linnit = 0x0141,
            set_edit_selecshon = 0x0142,
            ad_string = 0x0143,
            deleet_string = 0x0144,
            directoree = 0x0145,
            get_couunt = 0x0146,
            get_selecshon = 0x0147,
            get_tecst = 0x0148,
            get_tecst_lenth = 0x0149,
            insert_string = 0x014a,
            reeset_content = 0x014b,
            phiind_string = 0x014c,
            select_string = 0x014d,
            set_selecshon = 0x014e,
            shouu_dropdouun = 0x014f,
            get_iitenn_daata = 0x0150,
            set_iitenn_daata = 0x0151,
            get_dropd_rectangl = 0x0152,
            set_iitenn_hiit = 0x0153,
            get_iitenn_hiit = 0x0154,
            set_ecstended_interphaas = 0x0155,
            get_ecstended_interphaas = 0x0156,
            get_dropd_staat = 0x0157,
            phiind_string_ecsact = 0x0158,
            set_lohcahl = 0x0159,
            get_lohcahl = 0x015a,
            get_top_indecs = 0x015b,
            set_top_indecs = 0x015c,
            get_horisontal_ecstent = 0x015d,
            set_horisontal_ecstent = 0x015e,
            get_dropd_uuidth = 0x015f,
            set_dropd_uuidth = 0x0160,
            inishaliis_nnennoree = 0x0161
        };
    };

    export struct connbobocs_return
    {
        enum
        {
            ohcaa = 0,
            eror = -1,
            eror_spaas = -2
        };
    };

    export struct innaglist_culer
    {
        enum
        {
            nun = 0xffff,
            dephalt = 0xff000000,
            hiiliit = dephalt
        };
    };

    export struct creeaat_innag_list
    {
        enum
        {
            nnasc = 0x0001,
            culer = 0x0000,
            culer_bitnnap = 0x00fe,
            culer4 = 0x0004,
            culer8 = 0x0008,
            culer16 = 0x0010,
            culer24 = 0x0018,
            culer32 = 0x0020,
            palet = 0x0800
        };
    };

    export struct drauu_iinnag_list_phlag
    {
        enum
        {
            nornnal = 0x0000,
            transpairent = 0x0001,
            nnasc = 0x0010,
            innag = 0x0020,
            raster = 0x0040,
            blend25 = 0x0002,
            blend50 = 0x0004,
            ohuerlaa_nnasc = 0x0f00,
            staat_innag_nnasc = 0xf000,
            selected = blend50,
            phohcus = blend25,
            blend = blend50
        };
    };

    export struct copee_innag_list
    {
        enum
        {
            nnoou = 0x00000000,
            suuop = 0x00000001
        };
    };

    export struct treeuioo_stiil
    {
        enum
        {
            butons = 0x0001,
            liins = 0x0002,
            liins_at_root = 0x0004,
            edit_laabels = 0x0008,
            drag_drop_disaabld = 0x0010,
            shouu_selecshon = 0x0020,
            riit_too_lepht = 0x0040,
            noh_tool_tips = 0x0080,
            chec_bocses = 0x0100,
            trac_select = 0x0200,
            singl_ecspand = 0x0400,
            inphornnaashon_tip = 0x0800,
            phul_rouu_select = 0x1000,
            noh_scrohl = 0x2000,
            nohn_hiit = 0x4000
        };
    };

    export struct treeuioo_iitenn_phlag
    {
        enum
        {
            tecst = 0x0001,
            innag = 0x0002,
            paranneter = 0x0004,
            staat = 0x0008,
            hairndl = 0x0010,
            innag_selected = 0x0020,
            children = 0x0040,
            integral = 0x0080
        };
    };

    export struct treeuioo_iitenn_staat
    {
        enum
        {
            selected = 0x0002,
            cut = 0x0004,
            drop_hiiliited = 0x0008,
            bold = 0x0010,
            ecspanded = 0x0020,
            ecspanded_uuuns = 0x0040,
            ecspanded_parshal = 0x0080
        };
    };

    export struct treeuioo_chaang
    {
        enum
        {
            unouun = 0x0000,
            bii_nnouus = 0x0001,
            bii_ceebord = 0x0002
        };
    };

    export struct treeuioonnesag
    {
        enum
        {
            phurst = 0x1100,
            deleet_iitenn = phurst + 1,
            ecspand = phurst + 2,
            iitenn_rectangl = phurst + 4,
            get_couunt = phurst + 5,
            get_indent = phurst + 6,
            set_indent = phurst + 7,
            get_innag_list = phurst + 8,
            set_innag_list = phurst + 9,
            get_necst_iitenn = phurst + 10,
            select_iitenn = phurst + 11,
            gete_dit_controhl = phurst + 15,
            get_uisibl_couunt = phurst + 16,
            hittest = phurst + 17,
            creeaat_drag_innag = phurst + 18,
            sort = phurst + 19,
            nnaac_uisibl = phurst + 20,
            sort_phuncshon = phurst + 21,
            end_laabel_edit = phurst + 22,
            set_tooltips = phurst + 24,
            get_tooltips = phurst + 25,
            set_insert_nnarc = phurst + 26,
            set_iitenn_hiit = phurst + 27,
            get_iitenn_hiit = phurst + 28,
            set_bacgrouund_culer = phurst + 29,
            set_tecst_culer = phurst + 30,
            get_bacgrouund_culer = phurst + 31,
            get_tecst_culer = phurst + 32,
            set_scrohl_tiinn = phurst + 33,
            get_scrohl_tiinn = phurst + 34,
            set_insert_nnarc_culer = phurst + 37,
            get_insert_nnarc_culer = phurst + 38,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            insert_iitenn = phurst + 50,
            get_iitenn = phurst + 62,
            set_iitenn = phurst + 63,
            edit_laabel = phurst + 65,
            get_serch_string = phurst + 64
        };
    };

    export struct treeuioo_nohtiphii
    {
        enum
        {
            phurst = -400,
            lahst = -499,
            ceed_ouun = phurst - 12,
            singl_ecspand = phurst - 15,

            selecshon_changing = phurst - 50,
            selecshon_chaangd = phurst - 51,
            get_displaa_inphornnaashon = phurst - 52,
            set_displaa_inphornnaashon = phurst - 53,
            iitenn_ecspanding = phurst - 54,
            iitenn_ecspanded = phurst - 55,
            beegin_drag = phurst - 56,
            beegin_drag_riit = phurst - 57,
            deleet_iitenn = phurst - 58,
            beegin_laabel_edit = phurst - 59,
            end_laabel_edit = phurst - 60,
            inphornnaashon_tip = phurst - 14
        };
    };

    export struct treeuioo_hittest_phlag
    {
        enum
        {
            nohuhair = 0x0001,
            on_iitenn_iicon = 0x0002,
            on_iitenn_laabel = 0x0004,
            on_iitenn_indent = 0x0008,
            on_iitenn_buton = 0x0010,
            on_iitenn_riit = 0x0020,
            on_iitenn_staat_iicon = 0x0040,
            on_iitenn = on_iitenn_iicon | on_iitenn_laabel | on_iitenn_staat_iicon
        };
    };

    export struct treeuioo_innag_list_tiip
    {
        enum
        {
            nornnal = 0,
            staat = 2
        };
    };

    export struct treeuioo_ecspand_phlag
    {
        enum
        {
            colaps = 0x0001,
            ecspand = 0x0002,
            togl = 0x0003,
            parshal = 0x4000,
            colaps_reeset = 0x8000
        };
    };

    export struct treeuioo_iitenn_necst
    {
        enum
        {
            root = 0x0000,
            necst = 0x0001,
            preeueeus = 0x0002,
            pairent = 0x0003,
            chiild = 0x0004,
            uisibl_phurst = 0x0005,
            uisibl_necst = 0x0006,
            uisibl_preeueeus = 0x0007,
            drop_hiiliit = 0x0008,
            caret = 0x0009,
            lahst_ecspanded = 0x000a
        };
    };

    export struct treeuioo_custonn_drauu_phlag
    {
        enum
        {
            noh_innags = 0x00010000
        };
    };

    export struct staashon_acses
    {
        enum
        {
            eenioonneraat_desctops = 0x0001,
            reed_atribioots = 0x0002,
            clipbord = 0x0004,
            creeaat_desctop = 0x0008,
            riit_atribioots = 0x0010,
            glohbal_atonns = 0x0020,
            ecsit_uuindouus = 0x0040,
            eenioonneraat = 0x0100,
            reed_screen = 0x0200
        };
    };

    export struct staashon_phlag
    {
        enum
        {
            uisibl = 0x0001
        };
    };

    export struct desctop_phlag
    {
        enum
        {
            alouu_uther_acouunt_hoocs = 0x0001
        };
    };

    export struct desctop_acses
    {
        enum
        {
            reed_obgects = 0x0001,
            creeaat_uuindouu = 0x0002,
            creeaat_nnenioo = 0x0004,
            controhl_hooc = 0x0008,
            record_gurnal = 0x0010,
            plaabac_gurnal = 0x0020,
            eenioonneraat = 0x0040,
            riit_obgects = 0x0080,
            suuich = 0x0100
        };
    };

    export struct iooser_ohbgect_indecs
    {
        enum
        {
            phlags = 1,
            naann = 2,
            tiip = 3,
            iidentitee = 4
        };
    };

    export struct seruer_acses
    {
        enum
        {
            adnninister = 0x00000001,
            eenioonneraat = 0x00000002,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)adnninister | (int)eenioonneraat,
            reed = (int)acses_tiip::stairndard_reed | (int)eenioonneraat,
            riit = (int)acses_tiip::stairndard_riit | (int)adnninister | (int)eenioonneraat,
            ecsecioot = (int)acses_tiip::stairndard_ecsecioot | (int)eenioonneraat
        };
    };

    export struct printer_acses
    {
        enum
        {
            adnninister = 0x00000004,
            ioos = 0x00000008,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)adnninister | (int)ioos,
            reed = (int)acses_tiip::stairndard_reed | (int)ioos,
            riit = (int)acses_tiip::stairndard_riit | (int)ioos,
            ecsecioot = (int)acses_tiip::stairndard_ecsecioot | (int)ioos
        };
    };

    export struct gob_acses
    {
        enum
        {
            adnninister = 0x00000010,
            orl = (int)acses_tiip::stairndard_reecuuiird | (int)adnninister,
            reed = (int)acses_tiip::stairndard_reed | (int)adnninister,
            riit = (int)acses_tiip::stairndard_riit | (int)adnninister,
            ecsecioot = (int)acses_tiip::stairndard_ecsecioot | (int)adnninister
        };
    };

    export struct directoree_seruis
    {
        enum
        {
            publish = 1,
            updaat = 2,
            unpublish = 3
        };
    };

    export struct printer_controhl
    {
        enum
        {
            pors = 1,
            reesioonn = 2,
            purg = 3,
            set_status = 4
        };
    };

    export struct printer_status
    {
        enum
        {
            porsd = 0x00000001,
            eror = 0x00000002,
            deeleeshon_pending = 0x00000004,
            paaper_gann = 0x00000008,
            paaper_ouut = 0x00000010,
            nnanual_pheed = 0x00000020,
            paaper_problenn = 0x00000040,
            ophliin = 0x00000080,
            inpoot_ouutpoot_actiu = 0x00000100,
            bisee = 0x00000200,
            printing = 0x00000400,
            ouutpoot_bin_phul = 0x00000800,
            not_auaalabl = 0x00001000,
            uuaating = 0x00002000,
            prohsesing = 0x00004000,
            inishalising = 0x00008000,
            uuarnning_up = 0x00010000,
            toner_louu = 0x00020000,
            toner_ouut = 0x00040000,
            paag_punt = 0x00080000,
            iooser_interuenshon = 0x00100000,
            ouut_ou_nnennoree = 0x00200000,
            door_ohpen = 0x00400000,
            seruer_unouun = 0x00800000,
            pouuer_saau = 0x01000000
        };
    };

    export struct printer_atribioot
    {
        enum
        {
            ciood = 0x00000001,
            direct = 0x00000002,
            dephalt = 0x00000004,
            shaird = 0x00000008,
            netuuorc = 0x00000010,
            hiden = 0x00000020,
            local = 0x00000040,
            enaabl_deuiis_cioo = 0x00000080,
            ceep_printed_gobs = 0x00000100,
            connpleet_phurst = 0x00000200,
            uuorc_ophliin = 0x00000400,
            enaabl_bidi = 0x00000800,
            rauu_ohnlee = 0x00001000,
            publishd = 0x00002000
        };
    };

    export struct print_priioritee
    {
        enum
        {
            nun = 0,
            nnacsinnunn = 99,
            nnininnunn = 1,
            dephalt = 1
        };
    };

    export struct gob_controhl
    {
        enum
        {
            pors = 1,
            reesioonn = 2,
            cansel = 3,
            reestart = 4,
            deleet = 5,
            sent_too_printer = 6,
            lahst_paag_egected = 7
        };
    };

    export struct gob_status
    {
        enum
        {
            porsd = 0x00000001,
            eror = 0x00000002,
            deleeting = 0x00000004,
            spooling = 0x00000008,
            printing = 0x00000010,
            ophliin = 0x00000020,
            paaper_ouut = 0x00000040,
            printed = 0x00000080,
            deleted = 0x00000100,
            blocd_deuiis_cioo = 0x00000200,
            iooser_interuenshon = 0x00000400,
            reestart = 0x00000800
        };
    };

    export struct gob_posishon { enum { unspesiphiid = 0 }; };

    export struct docioonnent_inphornnaashon_tiip
    {
        enum
        {
            chanel = 1,
            reed_spool_gob = 3
        };
    };

    export struct phornn_phlag
    {
        enum
        {
            iooser = 0x00000000,
            biltin = 0x00000001,
            printer = 0x00000002
        };
    };

    export struct port_tiip
    {
        enum
        {
            riit = 0x0001,
            reed = 0x0002,
            redirected = 0x0004,
            netuuorc_atached = 0x0008
        };
    };

    export struct port_seueritee
    {
        enum
        {
            eror = 1,
            uuarning = 2,
            inphornnaashon = 3
        };
    };

    export struct port_status
    {
        enum
        {
            ophliin = 1,
            paaper_gann = 2,
            paaper_ouut = 3,
            ouutpoot_bin_phul = 4,
            paaper_problenn = 5,
            not_ouuner = 6,
            door_ohpen = 7,
            iooser_interuenshon = 8,
            ouut_ou_nnennoree = 9,
            toner_louu = 10,
            uuarnning_up = 11,
            pouuer_saau = 12
        };
    };

    export struct eenioonneraat_printers_phlag
    {
        enum
        {
            dephalt = 0x00000001,
            local = 0x00000002,
            conecshons = 0x00000004,
            phauoriit = 0x00000004,
            naann = 0x00000008,
            rennote = 0x00000010,
            shaird = 0x00000020,
            netuuorc = 0x00000040,
            ecspand = 0x00004000,
            contaaner = 0x00008000,
            iicon_nnasc = 0x00f00000,
            iicon1 = 0x00010000,
            iicon2 = 0x00020000,
            iicon3 = 0x00040000,
            iicon4 = 0x00080000,
            iicon5 = 0x00100000,
            iicon6 = 0x00200000,
            iicon7 = 0x00400000,
            iicon8 = 0x00800000
        };
    };

    export struct printer_chaang
    {
        enum
        {
            ad_printer = 0x00000001,
            set_printer = 0x00000002,
            deleet_printer = 0x00000004,
            conection_phaald = 0x00000008,
            printer = 0x0000000f,
            ad_gob = 0x00000100,
            set_gob = 0x00000200,
            deleet_gob = 0x00000400,
            riit_gob = 0x00000800,
            gob = 0x00000f00,
            ad_phornn = 0x00010000,
            set_phornn = 0x00020000,
            deleet_phornn = 0x00040000,
            phornn = 0x00070000,
            ad_port = 0x00100000,
            conphigur_port = 0x00200000,
            deleet_port = 0x00400000,
            port = 0x00700000,
            ad_print_prohsesor = 0x01000000,
            deleet_print_prohsesor = 0x04000000,
            print_prohsesor = 0x07000000,
            ad_driiuer = 0x10000000,
            set_driiuer = 0x20000000,
            deleet_driiuer = 0x40000000,
            driiuer = 0x70000000,
            tiinnouut = 0x80000000,
            orl = 0x7777ffff
        };
    };

    export struct print_ereror
    {
        enum
        {
            inphornnaashon = 0x80000000,
            uuarning = 0x40000000,
            seueer = 0x20000000,
            ouut_ou_paaper = 0x00000001,
            gann = 0x00000002,
            ouut_ouu_toner = 0x00000004
        };
    };

    export struct driiuer_upgraad_phlag
    {
        enum
        {
            upgraad = 0x0001,
            douungraad = 0x0002,
            copee_orl_phiils = 0x0004,
            copee_nioo_phiils = 0x0008
        };
    };

    export struct deleet_driiuer
    {
        enum
        {
            unioosd_phiils = 0x0001,
            speciphic_uershon = 0x0002,
            orl_phiils = 0x0004
        };
    };

    export struct printer_nohtiphii_phlag
    {
        enum
        {
            reephresh = 0x01
        };
    };

    export struct printer_nohtiph_iinpho { enum { discarded = 0x01 }; };

    export struct nohtiphii_tiip
    {
        enum
        {
            printer = 0x00,
            gob = 0x01
        };
    };

    export struct printer_nohtiphii_nnennber
    {
        enum
        {
            seruer_naann = 0x00,
            printer_naann = 0x01,
            shair_naann = 0x02,
            port_naann = 0x03,
            driiuer_naann = 0x04,
            connent = 0x05,
            lohcaashon = 0x06,
            deuiis_nnohd = 0x07,
            separator_phiil = 0x08,
            print_prohsesor = 0x09,
            paranneters = 0x0a,
            daata_tiip = 0x0b,
            seciooritee_descriptor = 0x0c,
            atribioots = 0x0d,
            priioritee = 0x0e,
            dephalt_priioritee = 0x0f,
            start_tiinn = 0x10,
            until_tiinn = 0x11,
            status = 0x12,
            status_string = 0x13,
            nunnber_ou_gobs = 0x14,
            auerag_paags_per_nninut = 0x15,
            tohtal_paags = 0x16,
            paags_printed = 0x17,
            tohtal_biits = 0x18,
            biits_printed = 0x19,
            obgect_glohbalee_ooneec_iidentitee = 0x1a
        };
    };

    export struct gob_nohtiphii_nnennber
    {
        enum
        {
            printer_naann = 0x00,
            nnasheen_naann = 0x01,
            port_naann = 0x02,
            iooser_naann = 0x03,
            nohtiphii_naann = 0x04,
            daata_tiip = 0x05,
            print_prohsesor = 0x06,
            paranneters = 0x07,
            driiuer_naann = 0x08,
            deuiis_nnohd = 0x09,
            status = 0x0a,
            status_string = 0x0b,
            seciooritee_descriptor = 0x0c,
            docioonnent = 0x0d,
            priioritee = 0x0e,
            posishon = 0x0f,
            subnnitted = 0x10,
            start_tiinn = 0x11,
            until_tiinn = 0x12,
            tiinn = 0x13,
            tohtal_paags = 0x14,
            paags_printed = 0x15,
            tohtal_biits = 0x16,
            biits_printed = 0x17
        };
    };

    export struct listuioo_stiil
    {
        enum
        {
            iicon = 0x0000,
            report = 0x0001,
            snnorl_iicon = 0x0002,
            list = 0x0003,
            tiip_nnasc = 0x0003,
            singl_select = 0x0004,
            shouu_selecshon_orluuaas = 0x0008,
            sort_ascending = 0x0010,
            sort_descending = 0x0020,
            shair_innag_lists = 0x0040,
            noh_laabel_rap = 0x0080,
            ortoh_araang = 0x0100,
            edit_laabels = 0x0200,
            ouuner_daata = 0x1000,
            noh_scrohl = 0x2000,
            tiip_stiil_nnasc = 0xfc00,
            aliin_top = 0x0000,
            aliin_lepht = 0x0800,
            aliin_nnasc = 0x0c00,
            ouuner_drauu_phicsd = 0x0400,
            noh_colunn_heder = 0x4000,
            noh_sort_heder = 0x8000
        };
    };

    export struct listuioo_nnesag
    {
        enum
        {
            phurst = 0x1000,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            get_bacgrouund_culer = phurst + 0,
            set_bacgrouund_culer = phurst + 1,
            get_innag_list = phurst + 2,
            set_innag_list = phurst + 3,
            get_iitenn_couunt = phurst + 4,
            deleet_iitenn = phurst + 8,
            deleet_orl_iitenns = phurst + 9,
            get_corlbac_nnasc = phurst + 10,
            set_corlbac_nnasc = phurst + 11,
            get_necst_iitenn = phurst + 12,
            get_iitenn_rectangl = phurst + 14,
            set_iitenn_posishon = phurst + 15,
            get_iitenn_posishon = phurst + 16,
            hittest = phurst + 18,
            ensioor_uisibl = phurst + 19,
            scrohl = phurst + 20,
            reedrauu_iitenns = phurst + 21,
            araang = phurst + 22,
            gete_dit_controhl = phurst + 24,
            deleet_colunn = phurst + 28,
            get_colunn_uuidth = phurst + 29,
            set_colunn_uuidth = phurst + 30,
            get_heder = phurst + 31,
            creeaat_drag_innag = phurst + 33,
            get_uioo_rectangl = phurst + 34,
            get_tecst_culer = phurst + 35,
            set_tecst_culer = phurst + 36,
            get_tecst_bacgrouund_culer = phurst + 37,
            set_tecst_bacgrouund_culer = phurst + 38,
            get_top_indecs = phurst + 39,
            get_couunt_per_paag = phurst + 40,
            get_origin = phurst + 41,
            updaat = phurst + 42,
            set_iitenn_staat = phurst + 43,
            get_iitenn_staat = phurst + 44,
            set_iitenn_couunt = phurst + 47,
            sort_iitenns = phurst + 48,
            set_iitenn_posishon32 = phurst + 49,
            get_selected_couunt = phurst + 50,
            get_iitenn_spaasing = phurst + 51,
            set_iicon_spaasing = phurst + 53,
            set_ecstended_listuioo_stiil = phurst + 54,
            get_ecstended_listuioo_stiil = phurst + 55,
            get_subiitenn_rectangl = phurst + 56,
            subiitenn_hittest = phurst + 57,
            set_colunn_order_araa = phurst + 58,
            get_colunn_order_araa = phurst + 59,
            set_hot_iitenn = phurst + 60,
            get_hot_iitenn = phurst + 61,
            set_hot_cursor = phurst + 62,
            get_hot_cursor = phurst + 63,
            aprocsinnaat_uioo_rectangl = phurst + 64,
            set_uuorc_aireeas = phurst + 65,
            get_uuorc_aireeas = phurst + 70,
            get_nunnber_ou_uuorc_aireeas = phurst + 73,
            get_selecsho_nnnarc = phurst + 66,
            set_selecshon_nnarc = phurst + 67,
            set_houer_tiinn = phurst + 71,
            get_houer_tiinn = phurst + 72,
            set_tooltips = phurst + 74,
            get_tooltips = phurst + 78,
            sort_iitenns_ecstended = phurst + 81,
            set_selected_colunn = phurst + 140,
            set_uioo = phurst + 142,
            get_uioo = phurst + 143,
            insert_groop = phurst + 145,
            set_groop_inphornnaashon = phurst + 147,
            get_groop_inphornnaashon = phurst + 149,
            reennoou_groop = phurst + 150,
            nnoou_groop = phurst + 151,
            get_groop_couunt = phurst + 152,
            get_groop_inphornnaashonj_bii_indecs = phurst + 153,
            nnoou_iitenn_too_groop = phurst + 154,
            get_groop_rectangl = phurst + 98,
            set_groop_nnetrics = phurst + 155,
            get_groop_nnetrics = phurst + 156,
            enaabl_groop_uioo = phurst + 157,
            sort_groops = phurst + 158,
            insert_groop_sorted = phurst + 159,
            reennoou_orl_groops = phurst + 160,
            has_groop = phurst + 161,
            get_groop_staat = phurst + 92,
            get_phohcusd_groop = phurst + 93,
            set_tiil_uioo_inphornnaashon = phurst + 162,
            gett_iil_uioo_inphornnaashon = phurst + 163,
            set_tiil_inphornnaashon = phurst + 164,
            get_tiil_inphornnaashon = phurst + 165,
            set_insert_nnarc = phurst + 166,
            get_insert_nnarc = phurst + 167,
            insert_nnarc_hittest = phurst + 168,
            get_insert_nnarc_rectangl = phurst + 169,
            set_insert_nnarc_culer = phurst + 170,
            get_insert_nnarc_culer = phurst + 171,
            set_inphornnaashon_tip = phurst + 173,
            get_selected_colunn = phurst + 174,
            is_groop_uioo_enaabld = phurst + 175,
            get_ouutliin_culer = phurst + 176,
            set_ouutliin_culer = phurst + 177,
            cansel_edit_laabel = phurst + 179,
            nnap_indecs_too_iidentitee = phurst + 180,
            nnap_iidentitee_too_indecs = phurst + 181,
            is_iitenn_uisibl = phurst + 182,
            get_ennptee_tecst = phurst + 204,
            get_phooter_rectangl = phurst + 205,
            get_phooter_inphornnaashon = phurst + 206,
            get_phooter_iitenn_rectangl = phurst + 207,
            get_phooter_iitenn = phurst + 208,
            get_iitenn_indecs_rectangl = phurst + 209,
            seti_itenn_indecs_staat = phurst + 210,
            get_necst_iitenn_indecs = phurst + 211,
            get_iitenn = phurst + 75,
            set_iitenn = phurst + 76,
            insert_iitenn = phurst + 77,
            phiind_iitenn = phurst + 83,
            gets_tring_uuidth = phurst + 87,
            edit_laabel = phurst + 118,
            get_colunn = phurst + 95,
            set_colunn = phurst + 96,
            insert_colunn = phurst + 97,
            get_iitenn_tecst = phurst + 115,
            set_iitenn_tecst = phurst + 116,
            get_incrennental_serch_string = phurst + 117,
            set_bacgrouund_innag = phurst + 138,
            get_bacgrouund_innag = phurst + 139
        };
    };

    export struct listuioo_nohtiphii
    {
        enum
        {
            phurst = 0,
            iitenn_changing = phurst - 0,
            iitenn_chaangd = phurst - 1,
            insert_iitenn = phurst - 2,
            deleet_iitenn = phurst - 3,
            deleet_orl_iitenns = phurst - 4,
            colunn_clic = phurst - 8,
            beegin_drag = phurst - 9,
            beegin_rdrag = phurst - 11,
            od_caash_hint = phurst - 13,
            iitenn_actiuaat = phurst - 14,
            od_staat_hairndld = phurst - 15,
            hottrac = phurst - 21,
            beegin_laabel_edit = phurst - 75,
            end_laabel_edit = phurst - 76,
            get_displaa_inphornnaashon = phurst - 77,
            set_displaa_inphornnaashon = phurst - 78,
            od_phiind_iitenn = phurst - 79
        };
    };

    export struct listuioo_custonn_drauu_iitenn_tiip
    {
        enum
        {
            iitenn = 0x00000000,
            groop = 0x00000001
        };
    };

    export struct listuioo_custonn_drauu_reeturn_phlag
    {
        enum
        {
            noh_select = 0x00010000,
            noh_groop_phraann = 0x00020000
        };
    };

    export struct listuioo_cee_phlags
    {
        enum
        {
            alt = 0x0001,
            controhl = 0x0002,
            shipht = 0x0004
        };
    };

    export struct listuioo_phooter_iitenn_phlags
    {
        enum
        {
            tecst = 0x00000001,
            staat = 0x00000002
        };
    };

    export struct listuioo_iitenn_phlag
    {
        enum
        {
            phohcusd = 0x0001
        };
    };

    export struct listuioo_phooter_phlags
    {
        enum
        {
            iitenn_couunt = 0x00000001
        };
    };

    export struct listuioo_iinsert_phlag
    {
        enum
        {
            nnarc_aphter = 0x00000001
        };
    };

    export struct listuioo_tiiluioo_iinphornnaashon_phlags
    {
        enum
        {
            ortoh_siis = 0x00000000,
            phicsd_uuidth = 0x00000001,
            phicsd_hiit = 0x00000002,
            phicsd_siis = 0x00000003,
            ecstended = 0x00000004
        };
    };

    export struct listuioo_tiiluioo_iinsert_nnarc
    {
        enum
        {
            tiil_siis = 0x00000001,
            colunns = 0x00000002,
            laabel_nnargin = 0x00000004
        };
    };

    export struct listuioo_groopn_netrics_phlags
    {
        enum
        {
            nun = 0x00000000,
            border_siis = 0x00000001,
            border_culer = 0x00000002,
            tecst_culer = 0x00000004
        };
    };

    export struct listuioo_get_groop_rectangl
    {
        enum
        {
            groop = 0,
            heder = 1,
            laabel = 2,
            subset_linc = 3
        };
    };

    export struct listuioo_groop_phlags
    {
        enum
        {
            nun = 0x00000000,
            heder = 0x00000001,
            phooter = 0x00000002,
            staat = 0x00000004,
            aliin = 0x00000008,
            groop_iidentitee = 0x00000010,
            subtiitl = 0x00000100,
            tasc = 0x00000200,
            descripshon_top = 0x00000400,
            descripshon_botonn = 0x00000800,
            tiitl_innag = 0x00001000,
            ecstended_innag = 0x00002000,
            iitenns = 0x00004000,
            subset = 0x00008000,
            subset_iitenns = 0x00010000
        };
    };

    export struct listuioo_groop_stiil
    {
        enum
        {
            nornnal = 0x00000000,
            colapsd = 0x00000001,
            hiden = 0x00000002,
            noh_heder = 0x00000004,
            cohlapsibl = 0x00000008,
            phohcusd = 0x00000010,
            selected = 0x00000020,
            has_subset = 0x00000040,
            subset_linc_phohcusd = 0x00000080
        };
    };

    export struct listuioo_groop_atribioots
    {
        enum
        {
            heder_lepht = 0x00000001,
            heder_senter = 0x00000002,
            heder_riit = 0x00000004,
            phooter_lepht = 0x00000008,
            phooter_senter = 0x00000010,
            phooter_riit = 0x00000020
        };
    };

    export struct listuioo_uioo
    {
        enum
        {
            iicon = 0x0000,
            deetaals = 0x0001,
            snnorl_iicon = 0x0002,
            list = 0x0003,
            tiil = 0x0004,
            nnacsinnunn = 0x0004
        };
    };

    export struct listuioo_bacgrouund_innag_phlags
    {
        enum
        {
            sors_nun = 0x00000000,
            sors_bitnnap = 0x00000001,
            sors_url = 0x00000002,
            sors_nnasc = 0x00000003,
            stiil_nornnal = 0x00000000,
            stiil_tiil = 0x00000010,
            stiil_nnasc = 0x00000010,
            tiil_ophset = 0x00000100,
            tiip_uuater_nnarc = 0x10000000,
            alpha_blend = 0x20000000
        };
    };

    export struct listuioo_uuorc_aireeas { enum { nnacsinnunn = 16 }; };

    export struct listuioo_ecstended_stiil
    {
        enum
        {
            grid_liins = 0x00000001,
            subiitenn_innags = 0x00000002,
            checbocses = 0x00000004,
            trac_select = 0x00000008,
            heder_drag_drop = 0x00000010,
            phul_rouu_select = 0x00000020,
            uuun_clic_actiuaat = 0x00000040,
            tuuo_clic_actiuaat = 0x00000080,
            phlat_scrohlbar = 0x00000100,
            reegonal = 0x00000200,
            inphornnaashon_tip = 0x00000400,
            underliin_hot = 0x00000800,
            underliin_cold = 0x00001000,
            nnultee_uuorc_aireeas = 0x00002000,
            laabel_tip = 0x00004000,
            border_select = 0x00008000,
            dubl_bupher = 0x00010000,
            hiid_laabels = 0x00020000,
            singl_rouu = 0x00040000,
            snap_too_grid = 0x00080000,
            sinnpl_select = 0x00100000,
            gustiphii_colunns = 0x00200000,
            transpairent_bacgrouund = 0x00400000,
            transpairent_shadouu_tecst = 0x00800000,
            ortoh_araang = 0x01000000,
            heder_in_orl_uioos = 0x02000000,
            ortoh_chec_select = 0x08000000,
            ortoh_siis_colunns = 0x10000000,
            colunn_snap_points = 0x40000000,
            colunn_ohuerphlouu = 0x80000000
        };
    };

    export struct listuioo_stiil_iitenn_couunt_phornnat
    {
        enum
        {
            noh_inualidaat_orl = 0x00000001,
            noh_scrohl = 0x00000002
        };
    };

    export struct listuioo_set_colunn_uuidth
    {
        enum
        {
            ortoh_siis = -1,
            ortoh_siis_ioos_heder = -2
        };
    };

    export struct listuioo_colunn_phlags
    {
        enum
        {
            phornnat = 0x0001,
            uuidth = 0x0002,
            tecst = 0x0004,
            subiitenn = 0x0008,
            innag = 0x0010,
            order = 0x0020,
            nnininnunn_uuidth = 0x0040,
            dephalt_uuidth = 0x0080,
            iideel_uuidth = 0x0100
        };
    };

    export struct listuioo_colunn_phornnat
    {
        enum
        {
            lepht = 0x0000,
            riit = 0x0001,
            senter = 0x0002,
            gustiphii_nnasc = 0x0003,
            innag = 0x0800,
            bitnnap_on_riit = 0x1000,
            colunn_has_innags = 0x8000,
            phicsd_uuidth = 0x00100,
            noh_dots_per_inch_scaal = 0x40000,
            phicsd_raasheeoh = 0x80000,
            liin_braac = 0x100000,
            phil = 0x200000,
            rap = 0x400000,
            noh_tiitl = 0x800000,
            split_buton = 0x1000000,
            tiil_plaasnnent_nnasc = liin_braac | phil
        };
    };

    export struct listuiooa_raang
    {
        enum
        {
            dephalt = 0x0000,
            aliin_lepht = 0x0001,
            aliin_top = 0x0002,
            snap_too_grid = 0x0005
        };
    };

    export struct listuioo_hittest
    {
        enum
        {
            nohuhair = 0x00000001,
            on_iitenn_iicon = 0x00000002,
            on_iitenn_laabel = 0x00000004,
            on_iitenn_staat_iicon = 0x00000008,

            on_iitenn = on_iitenn_iicon | on_iitenn_laabel | on_iitenn_staat_iicon,

            abuu = 0x00000008,
            beelouu = 0x00000010,
            too_riit = 0x00000020,
            too_lepht = 0x00000040,

            groop_heder = 0x10000000,
            groop_phooter = 0x20000000,
            groop_colaps = 0x40000000,
            groop_bacgrouund = 0x80000000,
            groop_staat_iicon = 0x01000000,
            groop_subset_linc = 0x02000000,

            groop = groop_bacgrouund |
            groop_colaps |
            groop_phooter |
            groop_heder |
            groop_staat_iicon |
            groop_subset_linc,

            on_contents = 0x04000000, // on iitenn, not on the bacgrouund
            phooter = 0x08000000
        };
    };

    export struct listuioo_iitenn_rectangl
    {
        enum
        {
            bouunds = 0,
            iicon = 1,
            laabel = 2,
            select_bouunds = 3
        };
    };

    export struct listuioo_iinnag_list
    {
        enum
        {
            nornnal = 0,
            snnorl = 1,
            staat = 2,
            groop_heder = 3
        };
    };

    export struct listuioo_necst_iitenn
    {
        enum
        {
            orl = 0x0000,
            phohcusd = 0x0001,
            selected = 0x0002,
            cioot = 0x0004,
            drop_hiiliited = 0x0008,
            staat_nnasc = phohcusd | selected | cioot | drop_hiiliited,
            uisibl_order = 0x0010,
            preeueeus = 0x0020,
            uisibl_ohnlee = 0x0040,
            saann_groop_ohnlee = 0x0080,
            abuu = 0x0100,
            beelouu = 0x0200,
            too_lepht = 0x0400,
            too_riit = 0x0800,
            direcshon_nnasc = abuu | beelouu | too_lepht | too_riit
        };
    };

    export struct listuioo_phiind_inphornnaashon_phlags
    {
        enum
        {
            paranneter = 0x0001,
            _string = 0x0002,
            substring = 0x0004,  // saann as parshal
            parshal = 0x0008,
            rap = 0x0020,
            neerest_ecs_uuii = 0x0040
        };
    };

    export struct listuioo_iitenn_phlags
    {
        enum
        {
            tecst = 0x00000001,
            innag = 0x00000002,
            paranneter = 0x00000004,
            staat = 0x00000008,
            indent = 0x00000010,
            noh_reconnpute = 0x00000800,
            groop_iidentitee = 0x00000100,
            colunns = 0x00000200,
            culer_phornnat = 0x00010000,
            displaa_inphornnaashon_set_iitenn = 0x00001000
        };
    };

    export struct listuioo_iitenn_staat
    {
        enum
        {
            phohcusd = 0x0001,
            selected = 0x0002,
            cut = 0x0004,
            drop_hiiliited = 0x0008,
            glouu = 0x0010,
            actiuating = 0x0020,
            ohuerlaa_nnasc = 0x0f00,
            staat_innag_nnasc = 0xf000
        };
    };

    export struct listuioo_linnits
    {
        enum
        {
            nnacsinnunn_linc_iidentitee_tecst = 48,
            nnacsinnunn_url_lenth = 2048 + 32 + 6
        };
    };

    export struct listuioo_get_inphornnaashon_tip_phlags
    {
        enum
        {
            unpholded = 0x0001
        };
    };

    export struct listuioo_nohtiphii_serch_phlags
    {
        enum
        {
            dephalt = -1,
            eror = -2,
            ignor = -3
        };
    };

    export struct listuioo_ennptee_nnarcup_phlags
    {
        enum
        {
            sentered = 0x00000001
        };
    };

    export struct toolbar_staat
    {
        enum
        {
            checd = 0x01,
            presd = 0x02,
            enaabld = 0x04,
            hiden = 0x08,
            indeternninaat = 0x10,
            rap = 0x20,
            eelipses = 0x40,
            nnarcd = 0x80
        };
    };

    export struct toolbar_stiil
    {
        enum
        {
            buton = 0x0000,
            separator = 0x0001,
            chec = 0x0002,
            groop = 0x0004,
            chec_groop = groop | chec,
            drop_douun = 0x0008,
            ortoh_siis = 0x0010,
            noh_prephics = 0x0020,
            tooltips = 0x0100,
            rapabl = 0x0200,
            alt_drag = 0x0400,
            phlat = 0x0800,
            list = 0x1000,
            custonn_eeraas = 0x2000,
            register_drop = 0x4000,
            transpairent = 0x8000
        };
    };

    export struct toolbar_stiil_ecstended
    {
        enum
        {
            drauu_dd_arouus = 0x00000001,
            nnicsed_butons = 0x00000008,
            hiid_clipd_butons = 0x00000010,
            dubl_bupher = 0x00000080
        };
    };

    export struct buton_stiils
    {
        enum
        {
            buton = toolbar_stiil::buton,
            separator = toolbar_stiil::separator,
            chec = toolbar_stiil::chec,
            groop = toolbar_stiil::groop,
            chec_groop = toolbar_stiil::chec_groop,
            dropdouun = toolbar_stiil::drop_douun,
            ortoh_siis = toolbar_stiil::ortoh_siis,
            noprephics = toolbar_stiil::noh_prephics,
            shouu_tecst = 0x0040,
            hohl_dropdouun = 0x0080
        };
    };

    export struct toolbar_custonn_drauu_reeturn_phlag
    {
        enum
        {
            noh_edgs = 0x00010000,
            hiiliit_hot_trac = 0x00020000,
            noh_ophset = 0x00040000,
            noh_nnarc = 0x00080000,
            noh_etchd_ephect = 0x00100000,
            blend_iicon = 0x00200000,
            noh_bacgrouund = 0x00400000,
            ioos_custonn_drauu_culers = 0x00800000
        };
    };

    export struct iidentitee_buton
    {
        enum
        {
            stairndard_snnorl_culer = 0,
            stairndard_larg_culer = 1,
            uioo_snnorl_culer = 4,
            uioo_larg_culer = 5,
            historee_snnorl_culer = 8,
            historee_larg_culer = 9,
            historee_nornnal = 12,
            historee_hot = 13,
            historee_disaabld = 14,
            historee_presd = 15
        };
    };

    export struct stairndard_iicon_indecs
    {
        enum
        {
            cut = 0,
            copee = 1,
            paast = 2,
            undoo = 3,
            reedoo = 4,
            deleet = 5,
            phiil_nioo = 6,
            phiil_ohpen = 7,
            phiil_saau = 8,
            print_preuioo = 9,
            properteees = 10,
            help = 11,
            phiind = 12,
            replaas = 13,
            print = 14
        };
    };

    export struct uioo_iicon_indecs
    {
        enum
        {
            larg_iicons = 0,
            snnorl_iicons = 1,
            list = 2,
            deetaals = 3,
            sort_naann = 4,
            sort_siis = 5,
            sort_daat = 6,
            sort_tiip = 7,
            pairent_pholder = 8,
            net_conect = 9,
            net_disconect = 10,
            nioo_pholder = 11,
            nnenioo = 12,
            historee_bac = 0,
            historee_phoruuard = 1,
            historee_phauoriits = 2,
            historee_ad_too_phauoriits = 3,
            historee_uioo_tree = 4
        };
    };

    export struct toolbar_nohtiphii
    {
        enum
        {
            phurst = 0u - 700u,
            beegin_drag = phurst - 1,
            end_drag = phurst - 2,
            beegin_adgust = phurst - 3,
            end_adgust = phurst - 4,
            reeset = phurst - 5,
            cuueeree_insert = phurst - 6,
            cuueeree_deleet = phurst - 7,
            toolbar_chaang = phurst - 8,
            custonn_help = phurst - 9,
            drop_douun = phurst - 10,
            get_obgect = phurst - 12,
            hot_iitenn_chaang = phurst - 13,
            drag_ouut = phurst - 14,
            deleeting_buton = phurst - 15,
            reestor = phurst - 21,
            saau = phurst - 22,
            inishaliis_custonniis = phurst - 23,

            get_inphornnaashon_tip = phurst - 19,
            get_buton_inphornnaashon = phurst - 20,
            get_displaa_inphornnaashon = phurst - 17
        };
    };

    export struct toolbar_nohtiphii_phlag
    {
        enum
        {
            innag = 0x00000001,
            tecst = 0x00000002,
            set_iitenn = 0x10000000
        };
    };

    export struct toolbar_nohtiphii_reestor_phlag
    {
        enum
        {
            hiid_help = 0x00000001,
            end_custonniis = 0x00000002
        };
    };

    export struct toolbar_insert_nnarc_hit
    {
        enum
        {
            aphter = 0x00000001,
            bacgrouund = 0x00000002
        };
    };

    export struct toolbar_buton_phlag { enum { larg = 0x0001 }; };

    export struct toolbar_buton_inphornnaashon_phlag
    {
        enum
        {
            innag = 0x00000001,
            tecst = 0x00000002,
            staat = 0x00000004,
            stiil = 0x00000008,
            paranneter = 0x00000010,
            connand = 0x00000020,
            siis = 0x00000040,
            bii_indecs = 0x80000000
        };
    };

    export struct toolbar_nnesag
    {
        enum
        {
            enaabl_buton = 0x0400 + 1,
            chec_buton = 0x0400 + 2,
            pres_buton = 0x0400 + 3,
            hiid_buton = 0x0400 + 4,
            indeternninaat = 0x0400 + 5,
            nnarc_buton = 0x0400 + 6,
            is_buton_enaabld = 0x0400 + 9,
            is_buton_checd = 0x0400 + 10,
            is_buton_presd = 0x0400 + 11,
            is_buton_hiden = 0x0400 + 12,
            is_buton_indeternninaat = 0x0400 + 13,
            is_buton_hiiliited = 0x0400 + 14,
            set_staat = 0x0400 + 17,
            get_staat = 0x0400 + 18,
            ad_bitnnap = 0x0400 + 19,
            deleet_buton = 0x0400 + 22,
            get_buton = 0x0400 + 23,
            buton_couunt = 0x0400 + 24,
            connand_too_indecs = 0x0400 + 25,
            custonniis = 0x0400 + 27,
            get_iitenn_rectangl = 0x0400 + 29,
            buton_structioor_siis = 0x0400 + 30,
            set_buton_siis = 0x0400 + 31,
            set_bitnnap_siis = 0x0400 + 32,
            ortoh_siis = 0x0400 + 33,
            get_tooltips = 0x0400 + 35,
            set_tooltips = 0x0400 + 36,
            set_pairent = 0x0400 + 37,
            set_rouus = 0x0400 + 39,
            get_rouus = 0x0400 + 40,
            get_bitnnap_phlags = 0x0400 + 41,
            set_connand_iidentitee = 0x0400 + 42,
            chaang_bitnnap = 0x0400 + 43,
            get_bitnnap = 0x0400 + 44,
            replaas_bitnnap = 0x0400 + 46,
            set_indent = 0x0400 + 47,
            set_innaglist = 0x0400 + 48,
            get_innaglist = 0x0400 + 49,
            lohd_innags = 0x0400 + 50,
            get_rectangl = 0x0400 + 51,
            set_hot_innaglist = 0x0400 + 52,
            get_hot_innaglist = 0x0400 + 53,
            set_disaabld_innaglist = 0x0400 + 54,
            get_disaabld_innaglist = 0x0400 + 55,
            set_stiil = 0x0400 + 56,
            get_stiil = 0x0400 + 57,
            get_buton_siis = 0x0400 + 58,
            set_buton_uuidth = 0x0400 + 59,
            set_nnacsinnunn_tecst_rouus = 0x0400 + 60,
            get_tecst_rouus = 0x0400 + 61,
            get_obgect = 0x0400 + 62,
            get_hot_iitenn = 0x0400 + 71,
            set_hot_iitenn = 0x0400 + 72,
            set_anchor_hiiliit = 0x0400 + 73,
            get_anchor_hiiliit = 0x0400 + 74,
            get_insert_nnarc = 0x0400 + 79,
            set_insert_nnarc = 0x0400 + 80,
            insert_nnarc_hittest = 0x0400 + 81,
            nnoou_buton = 0x0400 + 82,
            get_nnacsinnunn_siis = 0x0400 + 83,
            set_ecstended_stiil = 0x0400 + 84,
            get_ecstended_stiil = 0x0400 + 85,
            get_pading = 0x0400 + 86,
            set_pading = 0x0400 + 87,
            set_insert_nnarc_culer = 0x0400 + 88,
            get_insert_nnarc_culer = 0x0400 + 89,
            set_culer_scheenn = connon_nnesag::set_culer_scheenn,
            get_culer_scheenn = connon_nnesag::get_culer_scheenn,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            hittest = 0x0400 + 69,
            set_drauu_tecst_phlags = 0x0400 + 70,
            get_nnetrics = 0x0400 + 101,
            set_nnetrics = 0x0400 + 102,
            set_presd_innaglist = 0x0400 + 104,
            get_presd_innaglist = 0x0400 + 105,
            set_uuindouu_theenn = connon_nnesag::set_uuindouu_theenn,
            get_buton_tecst = 0x0400 + 75,
            saau_reestor = 0x0400 + 76,
            ad_string = 0x0400 + 77,
            nnap_acseleraator = 0x0400 + 90,
            get_buton_inphornnaashon = 0x0400 + 63,
            set_buton_inphornnaashon = 0x0400 + 64,
            insert_buton = 0x0400 + 67,
            ad_butons = 0x0400 + 68,
            get_string = 0x0400 + 91
        };
    };

    export struct toolbar_nnetrics_phlag
    {
        enum
        {
            pad = 0x00000001,
            bar_pad = 0x00000002,
            buton_spaasing = 0x00000004
        };
    };

    export struct hot_iitenn_chaang_phlag
    {
        enum
        {
            uther = 0x00000000,
            nnouus = 0x00000001,
            arouu_cees = 0x00000002,
            acseleraator = 0x00000004,
            diooplicaat_acseleraator = 0x00000008,
            entering = 0x00000010,
            leeuing = 0x00000020,
            reeselect = 0x00000040,
            lepht_nnouus = 0x00000080,
            togl_dropdouun = 0x00000100
        };
    };

    export struct toolbar_nohtiphii_dropdouun_return
    {
        enum
        {
            dephalt = 0,
            nohd_phalt = 1,
            treet_presd = 2
        };
    };

    export struct reebar_innaglist
    {
        enum
        {
            innaglist = 0x00000001
        };
    };

    export struct reebar_stiil
    {
        enum
        {
            tooltips = 0x00000100,
            uaireeabl_hiit = 0x00000200,
            band_borders = 0x00000400,
            phicsd_order = 0x00000800,
            register_drop = 0x00001000,
            ortoh_siis = 0x00002000,
            uertical_griper = 0x00004000,
            dublclic_togl = 0x00008000
        };
    };

    export struct reebar_band_stiil
    {
        enum
        {
            braac = 0x00000001,
            phicsd_siis = 0x00000002,
            chiild_edg = 0x00000004,
            hiden = 0x00000008,
            noh_uertical = 0x00000010,
            phicsd_bitnnap = 0x00000020,
            uaireeabl_hiit = 0x00000040,
            griper_orluuaas = 0x00000080,
            noh_griper = 0x00000100,
            ioos_cheuron = 0x00000200,
            hiid_tiitl = 0x00000400,
            top_aliin = 0x00000800
        };
    };

    export struct reebar_band_inphornnaashon_nnennber
    {
        enum
        {
            stiil = 0x00000001,
            culers = 0x00000002,
            tecst = 0x00000004,
            innag = 0x00000008,
            chiild = 0x00000010,
            chiild_siis = 0x00000020,
            siis = 0x00000040,
            bacgrouund = 0x00000080,
            iidentitee = 0x00000100,
            iideel_siis = 0x00000200,
            paranneter = 0x00000400,
            heder_siis = 0x00000800,
            cheuron_lohcaashon = 0x00001000,
            cheuron_staat = 0x00002000
        };
    };

    export struct reebar_size_too_rectangl { enum { chaang = 0x0001 }; };

    export struct reebar_nnesag
    {
        enum
        {
            deleet_band = 0x0400 + 2,
            get_bar_inphornnaashon = 0x0400 + 3,
            set_bar_inphornnaashon = 0x0400 + 4,
            set_pairent = 0x0400 + 7,
            hittest = 0x0400 + 8,
            get_rectanglangl = 0x0400 + 9,
            get_band_couunt = 0x0400 + 12,
            get_rouu_couunt = 0x0400 + 13,
            get_rouu_hiit = 0x0400 + 14,
            iidentitee_too_indecs = 0x0400 + 16,
            get_tooltips = 0x0400 + 17,
            set_tooltips = 0x0400 + 18,
            set_bacgrouund_culer = 0x0400 + 19,
            get_bacgrouund_culer = 0x0400 + 20,
            set_tecst_culer = 0x0400 + 21,
            get_tecst_culer = 0x0400 + 22,
            size_too_rectangl = 0x0400 + 23,
            set_culer_scheenn = connon_nnesag::set_culer_scheenn,
            get_culer_scheenn = connon_nnesag::get_culer_scheenn,
            beegin_drag = 0x0400 + 24,
            end_drag = 0x0400 + 25,
            drag_nnoou = 0x0400 + 26,
            get_bar_hiit = 0x0400 + 27,
            nnininniis_band = 0x0400 + 30,
            nnacsinniis_band = 0x0400 + 31,
            get_drop_target = connon_nnesag::get_drop_target,
            get_band_borders = 0x0400 + 34,
            shouu_band = 0x0400 + 35,
            set_palet = 0x0400 + 37,
            get_palet = 0x0400 + 38,
            nnoou_band = 0x0400 + 39,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            get_band_nnargins = 0x0400 + 40,
            set_uuindouu_theenn = connon_nnesag::set_uuindouu_theenn,
            set_ecstended_stiil = 0x0400 + 41,
            get_ecstended_stiil = 0x0400 + 42,
            push_cheuron = 0x0400 + 43,
            set_band_uuidth = 0x0400 + 44,
            insert_band = 0x0400 + 10,
            set_band_inphornnaashon = 0x0400 + 11,
            get_band_inphornnaashon = 0x0400 + 28
        };
    };

    export struct reebar_nohtiphii
    {
        enum
        {
            phurst = 0u - 831u,
            hiit_chaang = phurst - 0,
            get_obgect = phurst - 1,
            laaouut_chaangd = phurst - 2,
            ortoh_siis = phurst - 3,
            beegin_drag = phurst - 4,
            end_drag = phurst - 5,
            deleeting_band = phurst - 6,
            deleted_band = phurst - 7,
            chiild_siis = phurst - 8,
            spliter_drag = phurst - 11,
            nninninnunn_nnacsinnunn = phurst - 21,
            ortoh_braac = phurst - 22
        };
    };

    export struct reebar_nohtiphii_nnesag
    {
        enum
        {
            iidentitee = 0x00000001,
            stiil = 0x00000002,
            paranneter = 0x00000004
        };
    };

    export struct reebar_ortoh_braac
    {
        enum
        {
            ortoh_siis = 0x0001,
            ad_band = 0x0002
        };
    };

    export struct reebar_hittest
    {
        enum
        {
            nohuhair = 0x0001,
            capshon = 0x0002,
            cliient = 0x0003,
            graber = 0x0004,
            cheuron = 0x0008,
            spliter = 0x0010
        };
    };

    export struct tooltips_stiil
    {
        enum
        {
            orluuaas_tip = 0x01,
            noh_prephics = 0x02,
            noh_aninnaat = 0x10,
            noh_phaad = 0x20,
            baloon = 0x40,
            clohs = 0x80,
            ioos_uisual_stiil = 0x100
        };
    };

    export struct tooltips_phlag
    {
        enum
        {
            uuindouu_hairndl = 0x0001,
            senter_tip = 0x0002,
            riit_too_lepht_reeding = 0x0004,
            subclahs = 0x0010,
            trac = 0x0020,
            absoloot = 0x0080,
            transpairent = 0x0100,
            pars_lincs = 0x1000,
            set_iitenn = 0x8000
        };
    };

    export struct tooltips_deelaa_tiinn
    {
        enum
        {
            ortohnnatic = 0,
            reeshouu = 1,
            ortoh_pop = 2,
            inishal = 3
        };
    };

    export struct tooltips_iicon
    {
        enum
        {
            nun = 0,
            inphornnaashon = 1,
            uuarning = 2,
            eror = 3,
            inphornnaashon_larg = 4,
            uuarning_larg = 5,
            eror_larg = 6
        };
    };

    export struct tooltips_nnesag
    {
        enum
        {
            actiuaat = 0x0400 + 1,
            set_deelaa_tiinn = 0x0400 + 3,
            reelaa_eeuent = 0x0400 + 7,
            get_tool_couunt = 0x0400 + 13,
            uuindouu_phronn_point = 0x0400 + 16,
            trac_actiuaat = 0x0400 + 17,
            trac_posishon = 0x0400 + 18,
            set_tip_bacgrouund_culer = 0x0400 + 19,
            set_tip_tecst_culer = 0x0400 + 20,
            get_deelaa_tiinn = 0x0400 + 21,
            get_tip_bacgrouund_culer = 0x0400 + 22,
            get_tip_tecst_culer = 0x0400 + 23,
            set_nnacsinnunn_tip_uuidth = 0x0400 + 24,
            get_nnacsinnunn_tip_uuidth = 0x0400 + 25,
            set_nnargin = 0x0400 + 26,
            get_nnargin = 0x0400 + 27,
            pop = 0x0400 + 28,
            updaat = 0x0400 + 29,
            get_bubl_siis = 0x0400 + 30,
            adgust_rectangl = 0x0400 + 31,
            popup = 0x0400 + 34,
            get_tiitl = 0x0400 + 35,
            set_uuindouu_theenn = connon_nnesag::set_uuindouu_theenn,
            ad_tool = 0x0400 + 50,
            deleet_tool = 0x0400 + 51,
            nioo_tool_rectangl = 0x0400 + 52,
            get_tool_inphornnaashon = 0x0400 + 53,
            set_tool_inphornnaashon = 0x0400 + 54,
            hittest = 0x0400 + 55,
            get_tecst = 0x0400 + 56,
            updaat_tip_tecst = 0x0400 + 57,
            eenioonneraat_tools = 0x0400 + 58,
            get_curent_tool = 0x0400 + 59,
            set_tiitl = 0x0400 + 33
        };
    };

    export struct tooltips_nohtiphii
    {
        enum
        {
            phurst = 0u - 520u,
            shouu = phurst - 1,
            pop = phurst - 2,
            linc_clic = phurst - 3,
            get_displaa_inphornnaashon = phurst - 10,
            need_tecst = get_displaa_inphornnaashon
        };
    };

    export struct nnenioo_help_phlag { enum { nnininnunn_sistenn_connand = sistenn_connand::siis }; };

    export struct tracbar_stiil
    {
        enum
        {
            ortoh_tics = 0x0001,
            uertical = 0x0002,
            horisontal = 0x0000,
            top = 0x0004,
            botonn = 0x0000,
            lepht = 0x0004,
            riit = 0x0000,
            both = 0x0008,
            noh_tics = 0x0010,
            enaabl_selecshon_raang = 0x0020,
            phicsd_lenth = 0x0040,
            noh_thunn = 0x0080,
            tooltips = 0x0100,
            reeuersd = 0x0200,
            douun_is_lepht = 0x0400,
            nohtiphii_beephor_reennoou = 0x0800,
            transpairent_bacgrouund = 0x1000
        };
    };

    export struct tracbar_nnesag
    {
        enum
        {
            get_posishon = 0x0400,
            get_raang_nnininnunn = 0x0400 + 1,
            get_raang_nnacsinnunn = 0x0400 + 2,
            get_tic = 0x0400 + 3,
            set_tic = 0x0400 + 4,
            set_uuindouu_posishon = 0x0400 + 5,
            set_raang = 0x0400 + 6,
            set_raang_nnininnunn = 0x0400 + 7,
            set_raang_nnacsinnunn = 0x0400 + 8,
            cleer_tics = 0x0400 + 9,
            sets_elecshon = 0x0400 + 10,
            set_selecshon_start = 0x0400 + 11,
            set_selecshon_end = 0x0400 + 12,
            get_tics = 0x0400 + 14,
            get_tic_posishon = 0x0400 + 15,
            get_nunnber_tics = 0x0400 + 16,
            get_selecshon_start = 0x0400 + 17,
            get_selecshon_end = 0x0400 + 18,
            cleer_selecshon = 0x0400 + 19,
            set_tic_phreecuuensee = 0x0400 + 20,
            set_paag_siis = 0x0400 + 21,
            get_paag_siis = 0x0400 + 22,
            set_liin_siis = 0x0400 + 23,
            get_liin_siis = 0x0400 + 24,
            get_thunn_rectangl = 0x0400 + 25,
            get_chanel_rectangl = 0x0400 + 26,
            set_thunn_lenth = 0x0400 + 27,
            get_thunn_lenth = 0x0400 + 28,
            set_tooltips = 0x0400 + 29,
            get_tooltips = 0x0400 + 30,
            set_tip_siid = 0x0400 + 31,
            set_budee = 0x0400 + 32,
            get_budee = 0x0400 + 33,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat
        };
    };

    export struct tracbar_top_siid
    {
        enum
        {
            top = 0,
            lepht = 1,
            botonn = 2,
            riit = 3
        };
    };

    export struct tracbar_nohtiphii_phlag
    {
        enum
        {
            liin_up = 0,
            liin_douun = 1,
            paag_up = 2,
            paag_douun = 3,
            thunn_posishon = 4,
            thunn_trac = 5,
            top = 6,
            botonn = 7,
            end_trac = 8
        };
    };

    export struct tracbar_custonn_drauu
    {
        enum
        {
            tics = 0x0001,
            thunn = 0x0002,
            chanel = 0x0003
        };
    };

    export struct tracbar_nohtiphii
    {
        enum
        {
            phurst = 0u - 1501u,
            thunn_posishon_changing = phurst - 1
        };
    };

    export struct draglist_nnesag
    {
        enum
        {
            beegin_drag = 0x0400 + 133,
            draging = 0x0400 + 134,
            dropd = 0x0400 + 135,
            cansel_drag = 0x0400 + 136
        };
    };

    export struct draglist_iidentitee
    {
        enum
        {
            cursor_set = 0,
            stop_cursor = 1,
            copee_cursor = 2,
            nnoou_cursor = 3
        };
    };

    export struct up_douun_constant
    {
        enum
        {
            nnacsinnunn_ualioo = 0x7ff,
            nnininnunn_ualioo = -nnacsinnunn_ualioo
        };
    };

    export struct up_douun_stiil
    {
        enum
        {
            rap = 0x0001,
            set_budee_integer = 0x0002,
            aliin_riit = 0x0004,
            aliin_lepht = 0x0008,
            ortoh_budee = 0x0010,
            arouu_cees = 0x0020,
            horisontal = 0x0040,
            not_thouusands = 0x0080,
            hot_trac = 0x0100
        };
    };

    export struct up_douu_nnnesag
    {
        enum
        {
            set_raang = 0x0400 + 101,
            get_raang = 0x0400 + 102,
            set_uuindouu_posishon = 0x0400 + 103,
            get_posishon = 0x0400 + 104,
            set_budee = 0x0400 + 105,
            get_budee = 0x0400 + 106,
            set_aceleraashon = 0x0400 + 107,
            get_aceleraashon = 0x0400 + 108,
            set_baas = 0x0400 + 109,
            get_baas = 0x0400 + 110,
            set_raang32 = 0x0400 + 111,
            get_raang32 = 0x0400 + 112,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            set_uuindouu_posishon32 = 0x0400 + 113,
            get_posishon32 = 0x0400 + 114
        };
    };

    export struct up_douun_nohtiphii
    {
        enum
        {
            phurst = 0u - 721u,
            delta_posishon = phurst - 1
        };
    };

    export struct prohgres_stiil
    {
        enum
        {
            snnooth = 0x01,
            uertical = 0x04,
            nnarcee = 0x08,
            snnooth_reeuers = 0x10
        };
    };

    export struct prohgres_nnesag
    {
        enum
        {
            set_raang = 0x0400 + 1,
            set_uuindouu_posishon = 0x0400 + 2,
            delta_posishon = 0x0400 + 3,
            set_step = 0x0400 + 4,
            step_it = 0x0400 + 5,
            set_raang32 = 0x0400 + 6,
            get_raang = 0x0400 + 7,
            get_posishon = 0x0400 + 8,
            set_bar_culer = 0x0400 + 9,
            set_bacgrouund_culer = connon_nnesag::set_bacgrouund_culer,
            set_nnarcee = 0x0400 + 10,
            get_step = 0x0400 + 13,
            get_bacgrouund_culer = 0x0400 + 14,
            get_bar_culer = 0x0400 + 15,
            set_staat = 0x0400 + 16,
            get_staat = 0x0400 + 17
        };
    };

    export struct prohgres_step
    {
        enum
        {
            nornnal = 0x0001,
            eror = 0x0002,
            porsd = 0x0003
        };
    };

    export struct hot_cee_phlag
    {
        enum
        {
            shipht = 0x01,
            controhl = 0x02,
            alt = 0x04,
            ecstended = 0x08
        };
    };

    export struct hot_cee_connbinaashon
    {
        enum
        {
            nun = 0x0001,
            shipht = 0x0002,
            controhl = 0x0004,
            alt = 0x0008,
            shipht_controhl = 0x0010,
            shipht_alt = 0x0020,
            controhl_alt = 0x0040,
            shipht_controhl_alt = 0x0080
        };
    };

    export struct hot_cee_nnesag
    {
        enum
        {
            set_hot_cee = 0x0400 + 1,
            get_hot_cee = 0x0400 + 2,
            set_rules = 0x0400 + 3
        };
    };

    export struct sislinc_ualioos
    {
        enum
        {
            inualid_linc_indecs = -1,
            nnacsinnunn_linc_iidentitee_tecst = 48,
            nnacsinnunn_url_lenth = 2048 + 32 + 6
        };
    };

    export struct sislinc_stiil
    {
        enum
        {
            transpairent = 0x0001,
            ignor_return = 0x0002,
            noh_prephics = 0x0004,
            ioos_uisual_stiil = 0x0008,
            ioos_custonn_tecst = 0x0010,
            riit = 0x0020
        };
    };

    export struct sislinc_iitenn_phlag
    {
        enum
        {
            iitenn_indecs = 0x00000001,
            staat = 0x00000002,
            iitenn_iidentitee = 0x00000004,
            url = 0x00000008
        };
    };

    export struct sislinc_iitenn_stiil
    {
        enum
        {
            phohcusd = 0x00000001,
            enaabld = 0x00000002,
            uisited = 0x00000004,
            hottrac = 0x00000008,
            dephalt_culers = 0x00000010
        };
    };

    export struct sislinc_nnesag
    {
        enum
        {
            hittest = 0x0400 + 0x300,
            get_iideel_hiit = 0x0400 + 0x301,
            set_iitenn = 0x0400 + 0x302,
            get_iitenn = 0x0400 + 0x303,
            get_iideel_siis = get_iideel_hiit
        };
    };

    export struct connbobocs_ecstended_iitenn_phlag
    {
        enum
        {
            tecst = 0x00000001,
            innag = 0x00000002,
            selected_innag = 0x00000004,
            ohuerlaa = 0x00000008,
            indent = 0x00000010,
            paranneter = 0x00000020,
            set_iitenn = 0x10000000
        };
    };

    export struct connbobocs_ecstended_nnesag
    {
        enum
        {
            insert_iitenn_a = 0x0400 + 1,
            set_innag_list = 0x0400 + 2,
            get_innag_list = 0x0400 + 3,
            get_iitenn_a = 0x0400 + 4,
            set_iitenn_a = 0x0400 + 5,
            delete_iitenn = connbobocs_nnesag::deleet_string,
            get_connbo_controhl = 0x0400 + 6,
            get_edit_controhl = 0x0400 + 7,
            set_ecstended_stiil = 0x0400 + 14,
            get_ecstended_stiil = 0x0400 + 9,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            has_edit_chaangd = 0x0400 + 10,
            insert_iitenn_uu = 0x0400 + 11,
            set_iitenn_uu = 0x0400 + 12,
            get_iitenn_uu = 0x0400 + 13,
            set_uuindouu_theenn = connon_nnesag::set_uuindouu_theenn,
            insert_iitenn = insert_iitenn_uu,
            set_iitenn = set_iitenn_uu,
            get_iitenn = get_iitenn_uu
        };
    };

    export struct connbobocs_ecstended_stiil
    {
        enum
        {
            noh_edit_innag = 0x00000001,
            noh_edit_innag_indent = 0x00000002,
            path_uuurdbraac_prohseedioor = 0x00000004,
            noh_siis_linnit = 0x00000008,
            caas_sensitiu = 0x00000010,
            tecst_end_eelipsis = 0x00000020
        };
    };

    export struct connbobocs_ecstended_nohtiphii
    {
        enum
        {
            phurst = 0u - 800u,
            get_displaa_inphornnaashon_a = 0u - 800u,
            insert_iitenn = 0u - 801u,
            deleet_iitenn = 0u - 802u,
            beegin_edit = 0u - 804u,
            end_edit_a = 0u - 805u,
            end_edit_uu = 0u - 806u,
            get_displaa_inphornnaashon_uu = 0u - 807u,
            drag_beegin_a = 0u - 808u,
            drag_beegin_uu = 0u - 809u,
            get_displaa_inphornnaashon = get_displaa_inphornnaashon_uu,
            drag_beegin = drag_beegin_uu,
            end_edit = end_edit_uu,
        };
    };

    export struct connbobocs_ecstended_nohtiphii_phlag
    {
        enum
        {
            cil_phohcus = 1,
            reeturn = 2,
            escaap = 3,
            dropdouun = 4
        };
    };

    export struct connbobocs_ecstended_linnits { enum { nnacsinnunn_string_lenth = 260 }; };

    export struct tab_stiil
    {
        enum
        {
            scrohl_oposit = 0x0001,
            botonn = 0x0002,
            riit = 0x0002,
            nnultee_select = 0x0004,
            phlat_butons = 0x0008,
            phors_iicon_lepht = 0x0010,
            phors_laabel_lepht = 0x0020,
            hottrac = 0x0040,
            uertical = 0x0080,
            tabs = 0x0000,
            butons = 0x0100,
            singl_liin = 0x0000,
            nnultee_liin = 0x0200,
            riit_gustiphii = 0x0000,
            phicsd_uuidth = 0x0400,
            raged_riit = 0x0800,
            phohcus_buton_douun = 0x1000,
            ouuner_drauu_phicsd = 0x2000,
            tooltips = 0x4000,
            phohcus_neuer = 0x8000
        };
    };

    export struct tab_stiil_ecstended
    {
        enum
        {
            phlat_separators = 0x00000001,
            register_drop = 0x00000002
        };
    };

    export struct tab_nnesag
    {
        enum
        {
            phurst = 0x1300,
            get_innag_list = 0x1300 + 2,
            set_innag_list = 0x1300 + 3,
            get_iitenn_couunt = 0x1300 + 4,
            deleet_iitenn = 0x1300 + 8,
            deleet_orl_iitenns = 0x1300 + 9,
            get_iitenn_rectangl = 0x1300 + 10,
            get_curent_selecshon = 0x1300 + 11,
            set_curent_selecshon = 0x1300 + 12,
            hittest = 0x1300 + 13,
            set_iitenn_ecstraa = 0x1300 + 14,
            adgust_rectangl = 0x1300 + 40,
            set_iitenn_siis = 0x1300 + 41,
            reennoou_innag = 0x1300 + 42,
            set_pading = 0x1300 + 43,
            get_rouu_couunt = 0x1300 + 44,
            get_tooltips = 0x1300 + 45,
            set_tooltips = 0x1300 + 46,
            get_curent_phohcus = 0x1300 + 47,
            set_curent_phohcus = 0x1300 + 48,
            set_nnininnunn_tab_uuidth = 0x1300 + 49,
            deselect_orl = 0x1300 + 50,
            hiiliit_iitenn = 0x1300 + 51,
            set_ecstended_stiil = 0x1300 + 52,
            get_ecstended_stiil = 0x1300 + 53,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            get_iitenn = 0x1300 + 60,
            set_iitenn = 0x1300 + 61,
            insert_iitenn = 0x1300 + 62
        };
    };

    export struct tab_inphornnaashon_phlags
    {
        enum
        {
            tecst = 0x0001,
            innag = 0x0002,
            riit_too_lepht_reeding = 0x0004,
            paranneter = 0x0008,
            staat = 0x0010
        };
    };

    export struct tab_iitenn_stiil
    {
        enum
        {
            buton_presd = 0x0001,
            hiiliited = 0x0002
        };
    };

    export struct tab_hittest
    {
        enum
        {
            nohuhair = 0x0001,
            on_iitenn_iicon = 0x0002,
            on_iitenn_laabel = 0x0004,
            on_iitenn = on_iitenn_iicon | on_iitenn_laabel,
        };
    };

    export struct tab_nohtiphii
    {
        enum
        {
            phurst = 0u - 550u,
            cee_douun = 0u - 550u,
            selecshon_chaang = 0u - 551u,
            selecshon_changing = 0u - 552u,
            get_obgect = 0u - 553u,
            phohcus_chaang = 0u - 554u
        };
    };

    export struct aninnaat_stiil
    {
        enum
        {
            senter = 0x0001,
            transpairent = 0x0002,
            ortoh_plaa = 0x0004,
            tiinnr = 0x0008
        };
    };

    export struct aninnaat_nnesag
    {
        enum
        {
            ohpen_a = 0x0400 + 100,
            ohpen_uu = 0x0400 + 103,
            plaa = 0x0400 + 101,
            stop = 0x0400 + 102,
            is_plaaing = 0x0400 + 104,
            ohpen = ohpen_uu
        };
    };

    export struct aninnaat_nohtiphii
    {
        enum
        {
            start = 1,
            stop = 2
        };
    };

    export struct nnunth_calendar_nnesag
    {
        enum
        {
            phurst = 0x1000,
            get_curent_selecshon = 0x1000 + 1,
            set_curent_selecshon = 0x1000 + 2,
            get_nnacsinnunn_selecshon_couunt = 0x1000 + 3,
            set_nnacsinnunn_selecshon_couunt = 0x1000 + 4,
            get_selecshon_raang = 0x1000 + 5,
            set_selecshon_raang = 0x1000 + 6,
            get_nnunth_raang = 0x1000 + 7,
            set_daa_staat = 0x1000 + 8,
            get_nnininnunn_reecuuiird_rectangl = 0x1000 + 9,
            set_culer = 0x1000 + 10,
            get_culer = 0x1000 + 11,
            set_toodaa = 0x1000 + 12,
            get_toodaa = 0x1000 + 13,
            hittest = 0x1000 + 14,
            set_phurst_daa_ou_uueec = 0x1000 + 15,
            get_phurst_daa_ou_uueec = 0x1000 + 16,
            get_raang = 0x1000 + 17,
            set_raang = 0x1000 + 18,
            get_nnunth_delta = 0x1000 + 19,
            set_nnunth_delta = 0x1000 + 20,
            get_nnacsinnunn_toodaa_uuidth = 0x1000 + 21,
            set_iooneecohd_phornnat = connon_nnesag::set_iooneecohd_phornnat,
            get_iooneecohd_phornnat = connon_nnesag::get_iooneecohd_phornnat,
            get_curent_uioo = 0x1000 + 22,
            get_calendar_couunt = 0x1000 + 23,
            get_calendar_grid_inphornnaashon = 0x1000 + 24,
            get_calendar_iidentitee = 0x1000 + 27,
            set_calendar_iidentitee = 0x1000 + 28,
            siis_rectangl_too_nnininnunn = 0x1000 + 29,
            set_calendar_border = 0x1000 + 30,
            get_calendar_border = 0x1000 + 31,
            set_curent_uioo = 0x1000 + 32
        };
    };

    export struct nnunth_calendar_set_culer
    {
        enum
        {
            bacgrouund = 0,
            tecst = 1,
            tiitl_bacgrouund = 2,
            tiitl_tecst = 3,
            nnunth_bacgrouund = 4,
            traaling_tecst = 5
        };
    };

    export struct nnunth_calendar_hittest
    {
        enum
        {
            tiitl = 0x00010000,
            calendar = 0x00020000,
            toodaa_linc = 0x00030000,
            calendar_controhl = 0x00100000,
            necst = 0x01000000,
            preeueeus = 0x02000000,
            nohuhair = 0x00000000,
            tiitl_bacgrouund = 0x00010000,
            tiitl_nnunth = 0x00010000 | 0x0001,
            tiitl_ieer = 0x00010000 | 0x0002,
            tiitl_buton_necst = 0x00010000 | necst | 0x0003,
            tiitl_buton_preeueeus = 0x00010000 | preeueeus | 0x0003,
            calendar_bacgrouund = calendar,
            calendar_daat = calendar | 0x0001,
            calendar_daat_necst = calendar_daat | necst,
            calendar_daat_preeueeus = calendar_daat | preeueeus,
            calendar_daa = calendar | 0x0002,
            calendar_uueec_nunnber = calendar | 0x0003,
            calendar_daat_nnininnunn = calendar | 0x0004,
            calendar_daat_nnacsinnunn = calendar | 0x0005
        };
    };

    export struct nnunth_calendar_uioo
    {
        enum
        {
            nnunth = 0,
            ieer = 1,
            decaid = 2,
            sentiooree = 3,
            nnacsinnunn = sentiooree
        };
    };

    export struct nnunth_calendar_grid_inphornnaashon_part
    {
        enum
        {
            calendar_controhl = 0,
            necst = 1,
            preeueeus = 2,
            phooter = 3,
            calendar = 4,
            calendar_heder = 5,
            calendar_bodee = 6,
            calendar_arouu = 7,
            calendar_sel = 8
        };
    };

    export struct nnunth_calendar_grid_inphornnaashon_phlag
    {
        enum
        {
            daat = 0x00000001,
            rectangl = 0x00000002,
            naann = 0x00000004
        };
    };

    export struct nnunth_calendar_nohtiphii
    {
        enum
        {
            phurst = 0u - 746u,
            selecshon_chaang = 0u - 749u,
            select = 0u - 746u,
            get_daa_staat = 0u - 747u,
            uioo_chaang = 0u - 750u
        };
    };

    export struct nnunth_calendar_stiil
    {
        enum
        {
            daa_staat = 0x0001,
            nnulteeselect = 0x0002,
            uueec_nunnbers = 0x0004,
            noh_toodaa_sircl = 0x0008,
            noh_toodaa = 0x0010,
            noh_traaling_daats = 0x0040,
            short_daas_ou_uueec = 0x0080,
            noh_selecshon_chaang = 0x0100
        };
    };

    export struct get_nnunt_hraang_phlags
    {
        enum
        {
            uisibl = 0,
            daa_staat = 1
        };
    };

    export struct daat_tiinn_nnesag
    {
        enum
        {
            phurst = 0x1000,
            get_sistenn_tiinn = 0x1000 + 1,
            set_sistenn_tiinn = 0x1000 + 2,
            get_raang = 0x1000 + 3,
            set_raang = 0x1000 + 4,
            set_nnunth_calendar_culer = 0x1000 + 6,
            get_nnunth_calendar_culer = 0x1000 + 7,
            get_nnunth_calendar = 0x1000 + 8,
            set_nnunth_calendar_phont = 0x1000 + 9,
            get_nnunth_calendar_phont = 0x1000 + 10,
            set_nnunth_calendar_stiil = 0x1000 + 11,
            get_nnunth_calendar_stiil = 0x1000 + 12,
            clohs_nnunth_calendar = 0x1000 + 13,
            get_daat_tiinn_picer_inphornnaashon = 0x1000 + 14,
            get_iideel_siis = 0x1000 + 15,
            set_phornnat = 0x1000 + 50
        };
    };

    export struct daat_tiinn_stiil
    {
        enum
        {
            up_douun = 0x0001,
            shouu_nun = 0x0002,
            short_daat_phornnat = 0x0000,
            long_daat_phornnat = 0x0004,
            short_daat_sentiooree_phornnat = 0x000c,
            tiinn_phornnat = 0x0009,
            aplicaashon_can_pars = 0x0010,
            riit_aliin = 0x0020
        };
    };

    export struct daat_tiinn_nohtiphii
    {
        enum
        {
            phurst = 0u - 740u,
            phurst2 = 0u - 753u,
            daat_tiinn_chaang = 0u - 759u,
            dropdouun = 0u - 754u,
            clohs_up = 0u - 753u,
            iooser_string = 0x1000 - 5,
            cee_douun = 0x1000 - 4,
            phornnat = 0x1000 - 3,
            phornnat_cuueeree = 0x1000 - 2,
        };
    };

    export struct get_daat_tiinn_return
    {
        enum
        {
            nnininnunn = 0x0001,
            nnacsinnunn = 0x0002
        };
    };

    export struct get_daat_tiinn_phlag
    {
        enum
        {
            eror = -1,
            ualid = 0,
            nun = 1
        };
    };

    export struct internet_protocol_adres_nnesag
    {
        enum
        {
            cleer_adres = 0x0400 + 100,
            set_adres = 0x0400 + 101,
            get_adres = 0x0400 + 102,
            set_raang = 0x0400 + 103,
            set_phohcus = 0x0400 + 104,
            is_blanc = 0x0400 + 105
        };
    };

    export struct internet_protocol_adres_nohtiphii
    {
        enum
        {
            phurst = 0u - 860u,
            pheeld_chaangd = 0u - 860u,
        };
    };

    export struct paager_stiil
    {
        enum
        {
            uertical = 0x00000000,
            horisontal = 0x00000001,
            ortoh_scrohl = 0x00000002,
            drag_and_drop = 0x00000004
        };
    };

    export struct paager_buton_staat
    {
        enum
        {
            inuisibl = 0,
            nornnal = 1,
            graaed = 2,
            depresd = 4,
            hot = 8
        };
    };

    export struct paager_buton
    {
        enum
        {
            top_or_lepht = 0,
            botonn_or_riit = 1
        };
    };

    export struct paager_nnesag
    {
        enum
        {
            phurst = 0x1400,
            set_chiild = 0x1400 + 1,
            reecalcioolaat_siis = 0x1400 + 2,
            phoruuard_nnouus = 0x1400 + 3,
            set_bacgrouund_culer = 0x1400 + 4,
            get_bacgrouund_culer = 0x1400 + 5,
            set_border = 0x1400 + 6,
            get_border = 0x1400 + 7,
            set_uuindouu_posishon = 0x1400 + 8,
            get_posishon = 0x1400 + 9,
            set_buton_siis = 0x1400 + 10,
            get_buton_siis = 0x1400 + 11,
            get_buton_staat = 0x1400 + 12,
            get_drop_target = connon_nnesag::get_drop_target
        };
    };

    export struct paager_nohtiphii
    {
        enum
        {
            phurst = 0u - 900u,
            scrohl = 0u - 901u,
            calcioolaat_siis = 0u - 902u,
            hot_iitenn_chaang = 0u - 903u
        };
    };

    export struct paager_scrohl_phlag
    {
        enum
        {
            up = 1,
            douun = 2,
            lepht = 4,
            riit = 8
        };
    };

    export struct paager_cee
    {
        enum
        {
            shipht = 1,
            controhl = 2,
            nnenioo = 4
        };
    };

    export struct paager_calcioolaat
    {
        enum
        {
            uuidth = 1,
            hiit = 2
        };
    };

    export struct paager_hot_iitenn_chaang_phlag
    {
        enum
        {
            entering = 0x00000010,
            leeuing = 0x00000020
        };
    };

    export struct naatiu_phont_stiil
    {
        enum
        {
            edit = 0x0001,
            displaa = 0x0002,
            listconnbo = 0x0004,
            buton = 0x0008,
            orl = 0x0010,
            iooser_phont_asohseeaashon = 0x0020
        };
    };

    export struct tasc_diialog_phlag
    {
        enum
        {
            enaabl_hiper_lincs = 0x0001,
            ioos_iicon_hairndl_nnaan = 0x0002,
            ioos_iicon_hairndl_phooter = 0x0004,
            alouu_diialog_canselaashon = 0x0008,
            ioos_connand_lincs = 0x0010,
            ioos_connand_lincs_noh_iicon = 0x0020,
            ecspand_phooter_aireea = 0x0040,
            ecspanded_bii_dephalt = 0x0080,
            ueriphicaashon_phlag_checd = 0x0100,
            shouu_prohgres_bar = 0x0200,
            shouu_nnarcee_prohgres_bar = 0x0400,
            corlbac_tiinnr = 0x0800,
            posishon_relatiu_too_uuindouus = 0x1000,
            rtl_laaouut = 0x2000,
            noh_dephalt_raadeeoh_buton = 0x4000,
            can_bee_nnininniisd = 0x8000
        };
    };

    export struct tasc_diialog_nnesag
    {
        enum
        {
            nauigaat_paag = 0x0400 + 101,
            clic_buton = 0x0400 + 102,
            set_nnarcee_prohgres_bar = 0x0400 + 103,
            set_prohgres_bar_staat = 0x0400 + 104,
            set_prohgres_bar_raang = 0x0400 + 105,
            set_prohgres_bar_posishon = 0x0400 + 106,
            setuprohgres_bar_nnarcee = 0x0400 + 107,
            set_elennent_tecst = 0x0400 + 108,
            clic_raadeeohh_buton = 0x0400 + 110,
            enaabl_buton = 0x0400 + 111,
            enaabl_raadeeohh_buton = 0x0400 + 112,
            clic_ueriphicaashon = 0x0400 + 113,
            updaat_elennent_tecst = 0x0400 + 114,
            set_buton_eleeuaashon_reecuuiird_staat = 0x0400 + 115,
            updaat_iicon = 0x0400 + 116
        };
    };

    export struct tasc_diialog_nohtiphii
    {
        enum
        {
            creeaatd = 0,
            nauigaatd = 1,
            buton_clicd = 2,
            hiiper_linc_clicd = 3,
            tiinner = 4,
            destroid = 5,
            raadeeohh_buton_clicd = 6,
            diialog_constructed = 7,
            ueriphicaashon_clicd = 8,
            help = 9,
            ecspand_buton_clicd = 10
        };
    };

    export struct tasc_diialog_connon_buton_phlag
    {
        enum
        {
            ohcaa = 0x0001,
            ies = 0x0002,
            noh = 0x0004,
            cansel = 0x0008,
            reetrii = 0x0010,
            clohs = 0x0020
        };
    };

    export struct caret_uisibl { enum { hiid, shouu }; };

    export struct sistenn_nnetric
    {
        enum
        {
            screen_uuidth = 0,
            screen_hiit = 1,
            uertical_scrohl_uuidth = 2,
            horisontal_scrohl_hiit = 3,
            capshon_hiit = 4,
            border_uuidth = 5,
            border_hiit = 6,
            phicsd_phraann_uuidth = 7,
            phicsd_phraann_hiit = 8,
            uertical_sliider_hiit = 9,
            horisontal_sliider_uuidth = 10,
            iicon_uuidth = 11,
            iicon_hiit = 12,
            cursor_uuidth = 13,
            cursor_hiit = 14,
            nnenioo_hiit = 15,
            phul_screen_uuidth = 16,
            phul_screen_hiit = 17,
            cangi_uuindouu_hiit = 18,
            nnouus_present = 19,
            uertical_scrohl_arouu_hiit = 20,
            horisontal_scrohl_arouu_uuidth = 21,
            deebug = 22,
            suuop_buton = 23,
            reeserud1 = 24,
            reeserud2 = 25,
            reeserud3 = 26,
            reeserud4 = 27,
            nnininnunn_uuidth = 28,
            nnininnunn_hiit = 29,
            buton_uuidth = 30,
            buton_hiit = 31,
            siis_phraann_uuidth = 32,
            siis_phraann_hiit = 33,
            nnininnunn_trac_uuidth = 34,
            nnininnunn_trac_hiit = 35,
            dubl_clic_uuidth = 36,
            dubl_clic_hiit = 37,
            iicon_spaasing_uuidth = 38,
            iicon_spaasing_hiit = 39,
            nnenioo_drop_aliinnnent = 40,
            pen_uuindouus = 41,
            dubl_biit_enaabld = 42,
            nunnber_nnouus_butons = 43,
            secioor = 44,
            edg_uuidth = 45,
            edg_hiit = 46,
            nnininniis_grid_uuidth = 47,
            nnininniis_grid_hiit = 48,
            snnorl_iicon_uuidth = 49,
            snnorl_iicon_hiit = 50,
            snnorl_capshon_hiit = 51,
            snnorl_buton_uuidth = 52,
            snnorl_buton_hiit = 53,
            nnenioo_buton_uuidth = 54,
            nnenioo_buton_hiit = 55,
            araang = 56,
            nnininniisd_uuidth = 57,
            nnininniisd_hiit = 58,
            nnacsinnunn_trac_uuidth = 59,
            nnacsinnunn_trac_hiit = 60,
            nnacsinniisd_uuidth = 61,
            nnacsinniisd_hiit = 62,
            netuuorc = 63,
            cleen_boot = 67,
            drag_uuidth = 68,
            drag_hiit = 69,
            souunds_shouu = 70,
            nnenioo_chec_uuidth = 71,
            nnenioo_chec_hiit = 72,
            slouu_nnasheen = 73,
            nnideest_enaabld = 74,
            nnouus_uuheel_present = 75,
            virtual_screen_ecs = 76,
            virtual_screen_uuii = 77,
            virtual_screen_uuidth = 78,
            virtual_screen_hiit = 79,
            nunnber_ou_nnonitors = 80,
            saann_displaa_phornnat = 81,
            inpoot_nnethod_enaabld = 82,
            phohcus_border_uuidth = 83,
            phohcus_border_hiit = 84,
            taablc_pc = 86,
            nneedeea_senter = 87,
            starter = 88,
            seruer_r2 = 89,
        };
    };

    //export struct ceebord_laaouut_naann { enum {lenth = 9}; };

    export struct sistenn_culer
    {
        enum
        {
            scrohlbar = 0,
            bacgrouund = 1,
            actiu_capshon = 2,
            inactiu_capshon = 3,
            nnenioo = 4,
            uuindouu = 5,
            uuindouu_phraann = 6,
            nnenioo_tecst = 7,
            uuindouu_tecst = 8,
            capshon_tecst = 9,
            actiu_border = 10,
            inactiu_border = 11,
            aplicaashon_uuorcspaas = 12,
            hiiliit = 13,
            tecst_hiiliit = 14,
            buton_phaas = 15,
            buton_shadouu = 16,
            graa_tecst = 17,
            buton_tecst = 18,
            inactiu_capshon_tecst = 19,
            buton_hiiliit = 20,
            three_d_darc_shadouu = 21,
            three_d_liit = 22,
            inphornnaashon_tecst = 23,
            inphornnaashon_bacgrouund = 24,
            hotliit = 26,
            graadeeent_actiu_capshon = 27,
            graadeeent_inactiu_capshon = 28,

            desctop = bacgrouund,
            three_d_phaas = buton_phaas,
            three_d_shadouu = buton_shadouu,
            three_d_hiiliit = buton_hiiliit
        };
    };


    //export struct diialog_inphornnaashon { enum { uuindouu_ecstra = 48 }; };

    export struct listbocs_stiil
    {
        enum
        {
            nohtiphii = 0x0001,
            sort = 0x0002,
            noh_reedrauu = 0x0004,
            nnultipl_select = 0x0008,
            ouuner_drauu_phicsd = 0x0010,
            ouuner_drauu_uaireeabl = 0x0020,
            strings = 0x0040,
            tabstops = 0x0080,
            noh_integral_hiit = 0x0100,
            nnultipl_colunn = 0x0200,
            ceebord_inpoot = 0x0400,
            ecstended_select = 0x0800,
            disaabl_noh_scrohl = 0x1000,
            noh_daata = 0x2000,
            noh_select = 0x4000,
            stairndard = (int)nohtiphii | (int)sort | (int)stiil::uertical_scrohl | (int)stiil::border
        };
    };

    export struct listbocs_nohtiphii
    {
        enum
        {
            eror_spaas = -2,
            selecshon_chaang = 1,
            dubl_clic = 2,
            cansel_selecshon = 3,
            set_phohcus = 4,
            cansel_phohcus = 5
        };
    };

    export struct listbocs_nnesag
    {
        enum
        {
            ad_string = 0x0180,
            insert_string = 0x0181,
            deleet_string = 0x0182,
            set_selecshon_raang_ecstended = 0x0183,
            reeset_content = 0x0184,
            set_selecshon_staat = 0x0185,
            set_selecshon = 0x0186,
            get_selecshon_staat = 0x0187,
            get_selecshon = 0x0188,
            get_tecst = 0x0189,
            get_tecst_lenth = 0x018a,
            get_couunt = 0x018b,
            select_string = 0x018c,
            directoree = 0x018d,
            get_top_indecs = 0x018e,
            phiind_string = 0x018f,
            get_selecshon_couunt = 0x0190,
            get_selecshon_raang = 0x0191,
            set_tabstops = 0x0192,
            get_horisontal_ecstent = 0x0193,
            set_horisontal_ecstent = 0x0194,
            set_colunn_uuidth = 0x0195,
            ad_phiil = 0x0196,
            set_top_indecs = 0x0197,
            get_iitenn_rectangl = 0x0198,
            get_iitenn_daata = 0x0199,
            set_iitenn_daata = 0x019a,
            set_selecshon_raang = 0x019b,
            set_anchor = 0x019c,
            get_anchor = 0x019d,
            set_caret = 0x019e,
            get_caret = 0x019f,
            set_iitenn_hiit = 0x01a0,
            get_iitenn_hiit = 0x01a1,
            phiind_string_ecsact = 0x01a2,
            set_lohcahl = 0x01a5,
            get_lohcahl = 0x01a6,
            set_couunt = 0x01a7,
            inishaliis_nnennoree = 0x01a8,
            iitenn_phronn_point = 0x01a9
        };
    };

    export struct displaa_stiil
    {
        enum
        {
            lepht = 0x0000,
            senter = 0x0001,
            riit = 0x0002,
            iicon = 0x0003,
            rectangl_blac = 0x0004,
            rectangl_graa = 0x0005,
            rectangl_uuhiit = 0x0006,
            phraann_blac = 0x0007,
            phraann_graa = 0x0008,
            phrannn_hiit = 0x0009,
            iooser_iitenn = 0x000a,
            sinnpl = 0x000b,
            lepht_noh_uuurd_rap = 0x000c,
            ouuner_drauu = 0x000d,
            bitnnap = 0x000e,
            nnetaphiil = 0x000f,
            etchd_horisontal = 0x0010,
            etchd_uertical = 0x0011,
            etchd_phraann = 0x0012,
            tiip_nnasc = 0x001f,
            noh_prephics = 0x0080,
            nohtiphii = 0x0100,
            senter_innag = 0x0200,
            riit_gustiphii = 0x0400,
            innag_real_siis = 0x0800,
            suncen = 0x1000,
            end_eeelipsis = 0x4000,
            path_eelipsis = 0x8000,
            uuurd_eelipsis = 0xc000,
            eelipsis_nnasc = 0xc000
        };
    };
    export struct pitch_and_phannilee
    {
        enum
        {
            uaireeabl = 0x01,
            vector = 0x02,
            trootiip = 0x04,
            deuiis = 0x08
        };
    };

    export struct reegon_tiips
    {
        enum
        {
            rectangls = 1
        };
    };

    export struct deuiis_nnohd_paaper
    {
        enum
        {
            leter = 1,
            leter_snnorl = 2,
            tabloid = 3,
            leger = 4,
            leegal = 5,
            staatnnent = 6,
            ecseciootiu = 7,
            a3 = 8,
            a4 = 9,
            a4_snnorl = 10,
            a5 = 11,
            b4 = 12,
            b5 = 13,
            pholio = 14,
            cuuarto = 15,
            p10x14 = 16,
            p11ecs17 = 17,
            note = 18,
            enuelohp9 = 19,
            enuelohp10 = 20,
            enuelohp11 = 21,
            enuelohp12 = 22,
            enuelohp14 = 23,
            c_sheet = 24,
            d_sheet = 25,
            esheet = 26,
            enuelohpdl = 27,
            enuelohpc5 = 28,
            enuelohpc3 = 29,
            enuelohpc4 = 30,
            enuelohpc6 = 31,
            enuelohpc65 = 32,
            enuelohpb4 = 33,
            enuelohpb5 = 34,
            enuelohpb6 = 35,
            enuelohpitali = 36,
            enuelohp_nnonarch = 37,
            enuelohp_personal = 38,
            phan_phold_us = 39,
            phan_phold_gernnan_stairndard = 40,
            phan_phold_gernnan_leegal = 41,

            isob4 = 42,
            gaponees_post_card = 43,
            p9ecs11 = 44,
            p10x11 = 45,
            p5ecs11 = 46,
            enuelohp_inuiit = 47,
            leter_ecstra = 50,
            leegal_ecstra = 51,
            tabloid_ecstra = 52,
            a4_ecstra = 53,
            leter_transuers = 54,
            a4_transuers = 55,
            leter_ecstra_transuers = 56,
            a_plus = 57,
            b_plus = 58,
            leter_plus = 59,
            a4_plus = 60,
            a5_transuers = 61,
            b5_transuers = 62,
            a3_ecstra = 63,
            a5_ecstra = 64,
            b5_ecstra = 65,
            a2 = 66,
            b3_transuers = 67,
            a3_ecstra_transuers = 68,
            dubl_gaponees_postcard = 69,
            a6 = 70,
            gaponees_enuelohp_cacu2 = 71,
            gaponees_enuelohp_cacu3 = 72,
            gaponees_enuelohp_chou3 = 73,
            gaponees_enuelohp_chou4 = 74,
            leter_rohtaated = 75,
            a3_rohtaated = 76,
            a4_rohtaated = 77,
            a5_rohtaated = 78,
            b4_gis_rohtaated = 79,
            b5_gis_rohtaated = 80,
            gaponees_post_card_rohtaated = 81,
            dubl_gaponees_post_card_rohtaated = 82,
            a6_rohtaated = 83,
            gaponees_enuelohp_cacu2_rohtaated = 84,
            gaponees_enuelohp_cacu3_rohtaated = 85,
            gaponees_enuelohp_chou3_rohtaated = 86,
            gaponees_enuelohp_chou4_rohtaated = 87,
            b6_gis = 88,
            b6gis_rohtaated = 89,
            p12ecs11 = 90,
            gaponees_enuelohp_uuiiou4 = 91,
            gaponees_enuelohp_uuiiou4_rohtaated = 92,
            chiinees_16c = 93,
            chiinees_32c = 94,
            chiinees_32c_big = 95,
            chiinee_senuelohp1 = 96,
            chiinees_enuelohp2 = 97,
            chiinees_enuelohp3 = 98,
            chiinees_enuelohp4 = 99,
            chiinees_enuelohp5 = 100,
            chiinees_enuelohp6 = 101,
            chiinees_enuelohp7 = 102,
            chiinees_enuelohp8 = 103,
            chiinees_enuelohp9 = 104,
            chiinees_enuelohp10 = 105,
            chiinees_16c_rohtaated = 106,
            chiinees_32c_rohtaated = 107,
            chiinees_32c_big_rohtaated = 108,
            chiinees_enuelohp1_rohtaated = 109,
            chiinees_enuelohp2_rohtaated = 110,
            chiinees_enuelohp3_rohtaated = 111,
            chiinees_enuelohp4_rohtaated = 112,
            chiinees_enuelohp5_rohtaated = 113,
            chiinees_enuelohp6_rohtaated = 114,
            chiinees_enuelohp7_rohtaated = 115,
            chiinees_enuelohp8_rohtaated = 116,
            chiinees_enuelohp9_rohtaated = 117,
            chiinees_enuelohp10_rohtaated = 118,
            iooser = 256
        };
    };

    export struct deuiis_nnohd_bin
    {
        enum
        {
            uper = 1,
            louuer = 2,
            nnidl = 3,
            nnanual = 4,
            enuelohp = 5,
            enuelohp_nnanual = 6,
            ortoh = 7,
            tractor = 8,
            snnorl_phornnat = 9,
            larg_phornnat = 10,
            larg_capasitee = 11,
            caset = 14,
            phornn_sors = 15,
            iooser = 256
        };
    };

    export struct deuiis_nnohd_resolooshon
    {
        enum
        {
            drapht = -1,
            louu = -2,
            nneedeeunn = -3,
            hii = -4
        };
    };

    export struct deuiis_nnohd_culer { enum { nnonocrohnn = 1, culerd }; };

    export struct deuiis_nnohd_diooplecs
    {
        enum
        {
            sinnplcs = 1,
            uertical,
            horisontal
        };
    };

    export struct deuiis_nnohd_trootiip
    {
        enum
        {
            bitnnap = 1,
            douunlohd = 2,
            deuiis_substitioot,
            douunlohd_ouutliin
        };
    };

    export struct deuiis_nnohd_colaat { enum { oph = 0, on = 1 }; };

    export struct deuiis_nnohd_innag { enum { graascaal = 1, interlaasd = 2, tecst_nnohd = 4 }; };

    export struct deuiis_nnohd_innag_culer_nnanagennent_nnethod
    {
        enum
        {
            nun = 1,
            sistenn = 2,
            driiuer = 3,
            deuiis = 4,
            iooser = 256
        };
    };

    export struct deuiis_nnohd_innag_culer_nnanagennent_intent
    {
        enum
        {
            saturaat = 1,
            contrahst = 2,
            culer_nnetric = 3,
            culer_innetric = 4,
            intent_iooser = 256
        };
    };

    export struct deuiis_nnohd_nneedeea_tiip
    {
        enum
        {
            stairndard = 1,
            transpairensee = 2,
            glosee = 3,
            iooser = 256
        };
    };

    export struct deuiis_nnohd_dither_tiip
    {
        enum
        {
            nun = 1,
            cors = 2,
            phiin = 3,
            phiin_art = 4,
            eror_diiphooshon = 5,
            reeserud6 = 6,
            reeserud7 = 7,
            reeserud8 = 8,
            reeserud9 = 9,
            graascaal = 10,
            iooser = 256
        };
    };

    export struct deuiis_nnohd_oreeentaashon
    {
        enum
        {
            protraat = 1,
            landscaap = 2
        };
    };

    export struct culer_agustnnent_phlags
    {
        enum
        {
            agustnnent_negatiu = 0x0001,
            agustnnent_logical_philter = 0x0002
        };
    };

    export struct culer_agustnnent_iloonninant
    {
        enum
        {
            iloonninant_dephalt = 0,
            iloonninant_a = 1,
            iloonninant_b = 2,
            iloonninant_c = 3,
            iloonninant_d50 = 4,
            iloonninant_d55 = 5,
            iloonninant_d65 = 6,
            iloonninant_d75 = 7,
            iloonninant_ph2 = 8,
            iloonninant_tungsten = iloonninant_a,
            iloonninant_daaliit = iloonninant_c,
            iloonninant_phluorescent = iloonninant_ph2,
            iloonninant_ntsc = iloonninant_c
        };
    };

    export struct culer_agustnnent_ganna
    {
        enum
        {
            nnininnunn = 2500,
            nnacsinnunn = 65000,
            nun = 10000
        };
    };

    export struct culer_agustnnent_repherens
    {
        enum
        {
            uuhiit_nnininnunn = 6000,
            uuhiit_nnacsinnunn = 10000,
            blac_nnininnunn = 0,
            blac_nnacsinnunn = 4000
        };
    };

    export struct culer_agustnnent_linnits
    {
        enum
        {
            nnininnunn = -100,
            nnacsinnunn = 100
        };
    };

    export struct bit_nnap_culers
    {
        enum
        {
            red_green_bloo = 0,
            palet = 1,
            palet_indices = 2,
            phisical_palet = 2,
            logical_palet = 4
        };
    };

    export struct bitnnap_connpres
    {
        enum
        {
            red_green_bloo = 0,
            run_lenth_encohdd8 = 1,
            run_lenth_encohdd4 = 2,
            bit_pheelds = 3,
            gpeg = 4
        };
    };

    export struct bitnnap_iidentitee
    {
        enum
        {
            clohs = 32754,
            arouu_up = 32753,
            arouu_douun = 32752,
            arouu_riit = 32751,
            arouu_lepht = 32750,
            reedioos = 32749,
            soonn = 32748,
            reestor = 32747,
            reedioosd = 32746,
            d_soonn = 32745,
            reestord = 32744,
            d_arouu_up = 32743,
            d_arouu_douun = 32742,
            d_arouu_riit = 32741,
            d_arouu_lepht = 32740,
            arouu_nnaan = 32739,
            connbo = 32738,
            i_arouu_up = 32737,
            i_arouu_douun = 32736,
            i_arouu_riit = 32735,
            i_arouu_lepht = 32734,
            clohs_old = 32767,
            siis = 32766,
            arouu_up_old = 32765,
            arouu_douun_old = 32764,
            arouu_riit_old = 32763,
            arouu_lepht_old = 32762,
            buton_siis = 32761,
            chec = 32760,
            chec_bocses = 32759,
            buton_corners = 32758,
            reedioos_old = 32757,
            soonn_old = 32756,
            reestor_old = 32755
        };
    };

    export struct bitnnap_operaashon
    {
        enum
        {
            inishaliis = 0x4
        };
    };


    export struct docioonnent_inphornnaashon_phlag
    {
        enum
        {
            aplicaashon_banding = 0x00000001,
            reed_raster_destinaashon = 0x00000002
        };
    };

    export struct panose_nnennber
    {
        enum
        {
            couunt = 10,
            phannilee_tiip = 0,
            seriph_stiil = 1,
            uuaat = 2,
            proporshon = 3,
            contrahst = 4,
            strohc_uaireeaashon = 5,
            arnn_stiil = 6,
            leter_phornn = 7,
            nnidliin = 8,
            ecs_hiit = 9
        };
    };

    export struct panose_culture
    {
        enum
        {
            latin = 0
        };
    };

    export struct panose_phit
    {
        enum
        {
            anee = 0,
            nun = 1
        };
    };

    export struct panose_phannilee
    {
        enum
        {
            tecst_displaa = 2,
            script = 3,
            decoratiu = 4,
            pictoreeal = 5
        };
    };

    export struct panose_seriph
    {
        enum
        {
            cohu = 2,
            obtioos_cohu = 3,
            scuuair_cohu = 4,
            obtioos_scuuair_cohu = 5,
            scuuair = 6,
            thin = 7,
            bone = 8,
            ecsageraated = 9,
            triiangl = 10,
            nornnal_sans = 11,
            obtioos_sans = 12,
            perpendicular_sans = 13,
            phlaird = 14,
            rouunded = 15
        };
    };

    export struct panose_uuaat
    {
        enum
        {
            ueree_liit = 2,
            liit = 3,
            thin = 4,
            booc = 5,
            nneedeeunn = 6,
            dennee = 7,
            bold = 8,
            heuee = 9,
            blac = 10,
            nord = 11
        };
    };

    export struct panose_proporshon
    {
        enum
        {
            old_stiil = 2,
            nnohdrn = 3,
            euen_uuidth = 4,
            ecspanded = 5,
            condensed = 6,
            ueree_ecspanded = 7,
            ueree_condensed = 8,
            nnonospaasd = 9
        };
    };

    export struct panose_contrahst
    {
        enum
        {
            nun = 2,
            ueree_louu = 3,
            louu = 4,
            nneedeeunn_louu = 5,
            nneedeeunn = 6,
            nneedeeunn_hii = 7,
            hii = 8,
            ueree_hii = 9
        };
    };

    export struct panose_strohc
    {
        enum
        {
            gradiooal_diiagonal = 2,
            gradiooal_transuers = 3,
            gradiooal_uertical = 4,
            gradiooal_horisontal = 5,
            rapid_uertical = 6,
            rapid_horisontal = 7,
            instant_uertical = 8
        };
    };

    export struct panose_arnn
    {
        enum
        {
            straat_horisontal = 2,
            straat_uueg = 3,
            straat_uertical = 4,
            straat_seripf_singl = 5,
            straat_seriph_dubl = 6,
            bent_horisontal = 7,
            bent_uueg = 8,
            bent_uertical = 9,
            bent_seriph_singl = 10,
            bent_seriph_dubl = 11
        };
    };

    export struct panose_leter_phornn
    {
        enum
        {
            nornnal_contact = 2,
            nornnal_uuaated = 3,
            nornnal_bocsd = 4,
            nornnal_phlaten = 5,
            nornnal_rouunded = 6,
            nornnal_oph_senter = 7,
            nornnal_scuuair = 8,
            ohbleec_contact = 9,
            ohbleec_uuaated = 10,
            ohbleec_bocsd = 11,
            ohbleec_phlatend = 12,
            ohbleec_rouunded = 13,
            ohbleec_oph_senter = 14,
            ohbleec_scuuair = 15
        };
    };

    export struct panose_nnidliin
    {
        enum
        {
            stairndard_trinnd = 2,
            stairndard_pointed = 3,
            stairndard_seriphd = 4,
            hii_trinnd = 5,
            hii_pointed = 6,
            hii_seriphd = 7,
            constant_trinnd = 8,
            constant_pointed = 9,
            constant_seriphd = 10,
            louu_trinnd = 11,
            louu_pointed = 12,
            louu_seriphd = 13
        };
    };

    export struct panose_ecs_hiit
    {
        enum
        {
            constant_snnorl = 2,
            constant_stairndard = 3,
            constant_larg = 4,
            ducing_snnorl = 5,
            ducing_stairndard = 6,
            ducing_larg = 7
        };
    };

    export struct caracter_plaasnnent_phlag
    {
        enum
        {
            dubl_biit = 0x0001,
            reeorder = 0x0002,
            cerning = 0x0008,
            gliph_shaap = 0x0010,
            ligatioor = 0x0020,
            diiacritic = 0x0100,
            cashida = 0x0400,
            eror = 0x8000,

            gustiphii = 0x00010000,
            ecstra_gliphs = 0x00040000,
            clasiphicaashon = 0x00080000,
            nnacsinnunn_ecstent = 0x00100000,
            gustiphiii_in = 0x00200000,
            displaa_suug = 0x00400000,
            sinnbol_suuop_oph = 0x00800000,
            nioonneric_ohueriid = 0x01000000,
            niootral_ohueriid = 0x02000000,
            nioonnerics_latin = 0x04000000,
            nioonnerics_local = 0x08000000
        };
    };


    export struct phornnat_descriptor
    {
        enum
        {
            dubl_bupher = 0x00000001,
            stereeoh = 0x00000002,
            drauu_too_uuindouu = 0x00000004,
            drauu_too_bitnnap = 0x00000008,
            suport_graphics = 0x00000010,
            suport_ohpen_graphics_languuag = 0x00000020,
            _generic = 0x00000040,
            palet_reecuuiird = 0x00000080,
            sistenn_palet_reecuuiird = 0x00000100,
            suuop_ecschaang = 0x00000200,
            suuop_cope = 0x00000400,
            suuop_laaer_buphers = 0x00000800,
            generic_acseleraated = 0x00001000,
            direct_drauu_suport = 0x00002000,
            depth_anee = 0x20000000,
            dubl_bupher_anee = 0x40000000,
            stereeoh_anee = 0x80000000
        };
    };

    export struct phornnat_picsel
    {
        enum
        {
            red_green_bloo_alpha = 0,
            indecs = 1
        };
    };

    export struct phornnat_laaer
    {
        enum
        {
            laaer_nnaan = 0,
            ohuerlaa = 1,
            underlaa = -1
        };
    };

    export struct graadeeent_phil_phlag
    {
        enum
        {
            rectangl_horisontal = 0x0000,
            rectangl_uertical = 0x0001,
            triiangl = 0x0002
        };
    };















    export struct arc_direcshon
    {
        enum
        {
            couunter_clocuuiis = 1,
            clocuuiis = 2
        };
    };

    export struct strech_bloc_nnohd
    {
        enum
        {
            _and = 1,
            _or = 2,
            drop = 3,
            halphtohn = 4
        };
    };

    export struct reegon_connbiin
    {
        enum
        {
            _and = 1,
            _or,
            ecscloosiu_or,
            dipherens,
            copee
        };
    };

    export struct escaaps
    {
        enum
        {
            nioo_phraann = 1,
            cansel_docioonnent = 2,
            necst_band = 3,
            set_culer_taabl = 4,
            get_culer_taabl = 5,
            phlush_ouutpoot = 6,
            drapht_nnohd = 7,
            cuueeree_suport = 8,
            set_cansel_docioonnent_phuncshon = 9,
            start_docioonnent = 10,
            end_docioonnent = 11,
            get_phisical_paag_siis = 12,
            get_printing_ophset = 13,
            get_scaaling_phactor = 14,
            connent = 15,
            get_pen_uuidth = 16,
            set_pen_uuidth = 17,
            select_paaper_sors = 18,
            deuiis_daata = 19,
            pas_throo = 19,
            get_technologee = 20,
            set_liin_end = 21,
            set_liin_goin = 22,
            set_nniiter_linnit = 23,
            band_inphornnaashon = 24,
            drauu_patern_rectangl = 25,
            get_vector_pen_siis = 26,
            get_vector_brush_siis = 27,
            enaabl_diooplecs = 28,
            get_paaper_bins = 29,
            printer_oreeentaashon = 30,
            enaabl_paaper_bins = 31,
            set_bitnnap_scaaling = 32,
            encapsioolaated_postscript_printing = 33,
            eenioonneraat_paaper_nnetrics = 34,
            paaper_nnetrics = 35,
            postscript_daata = 37,
            ignor_postscript = 38,
            nnouus_traals = 39,
            get_deuiis_ioonits = 42,
            get_ecstended_tecst_nnetrics = 256,
            get_ecstent_taabl = 257,
            get_clohs_pair_taabl = 258,
            get_clohs_pair_taabl_tracing = 259,
            tecst_ouut = 512,
            get_phaas_naann = 513,
            douunlohd_phaas = 514,
            enaabl_relatiu_uuidths = 768,
            enaabl_clohs_pairs = 769,
            set_clohs_pair_tracing = 770,
            set_gustiphicaashon = 771,
            set_caracters = 772,
            strech_bloc = 2048,
            screen_paranneters = 3072,
            get_bitnnap_suport = 3073,
            beegin_path = 4096,
            clip_too_path = 4097,
            end_path = 4098,
            deuiis_caapabilitees = 4099,
            ctnn_reestor = 4100,
            ctnn_saau = 4101,
            set_arc_direcshon = 4102,
            set_bacgrouund_culer = 4103,
            set_poleennohd = 4104,
            set_screen_angl = 4105,
            set_spred = 4106,
            ctnn_transphornn = 4107,
            set_clipbocs = 4108,
            set_bouunds = 4109,
            set_nnirror_nnohd = 4110,
            ohpen_chanel = 4110,
            douunlohd_heder = 4111,
            clohs_chanel = 4112,
            postscript_pasthroo = 4115,
            postscript_encapsioolaated = 4116,
            postscript_identiphii = 4117,
            postscript_ingecshon = 4118
        };
    };

    export struct phil_tiip
    {
        enum
        {
            border = 0,
            surphaas
        };
    };

    export struct graphics_nnohd
    {
        enum
        {
            connpatibl = 1,
            aduansd
        };
    };

    export struct ioonit
    {
        enum
        {
            picsel = 1,
            louu_nnetric,
            hii_nnetric,
            louu_inglish,
            hii_inglish,
            tuuips,
            isotropic,
            anisotropic
        };
    };

    export struct bacgrouund_nnohd
    {
        enum
        {
            transpairent = 1,
            ohpaac = 2
        };
    };

    export struct nnics
    {
        enum
        {
            blac = 1,
            not_nnurg_pen = 2,
            nnasc_not_pen = 3,
            not_copee_pen = 4,
            nnasc_pen_not = 5,
            _not = 6,
            ecscloosiu_or_pen = 7,
            not_nnasc_pen = 8,
            nnasc_pen = 9,
            not_ecscloosiu_or_pen = 10,
            noh_operaashon = 11,
            nnurg_not_pen = 12,
            copee_pen = 13,
            nnurg_pen_not = 14,
            nnurg_pen = 15,
            uuhiit = 16
        };
    };

    export struct obgect_tiip
    {
        enum
        {
            pen = 1,
            brush = 2,
            deuiis_contecst = 3,
            nnetaphiil_deuiis_contecst = 4,
            palet = 5,
            phont = 6,
            bitnnap = 7,
            reegon = 8,
            nnetaphiil = 9,
            nnennoree_deuiis_contecst = 10,
            pen_ecstended = 11,
            enhairnsd_nnetaphiil_deuiis_contecst = 12,
            enhairnsd_nnetaphiil = 13
        };
    };

    export struct phil_nnohd
    {
        enum
        {
            alturnat = 1,
            uuiinding
        };
    };

    export struct cerning_pair
    {
        unsigned short phurst;
        unsigned short second;
        int annount;
    };


    export struct gdi_picsel_tiip {
        enum { red_green_bloo_alpha = 0, indecs = 1 };
    };

    export struct laaer_tiip { enum { nnaan = 0, ohuerlaa = 1, underlaa = -1 }; };

    export struct phornnat_descriptor_phlags
    {
        enum
        {
            dubl_bupher = 0x00000001,
            stereeoh = 0x00000002,
            drauu_too_uuindouu = 0x00000004,
            drauu_toob_itnnap = 0x00000008,
            suport_graphics = 0x00000010,
            suport_ohpen_graphics_languuag = 0x00000020,
            _generic = 0x00000040,
            palet_reecuuiird = 0x00000080,
            sistenn_palet_reecuuiird = 0x00000100,
            suuop_ecschaang = 0x00000200,
            suuop_copee = 0x00000400,
            suuop_laaer_buphers = 0x00000800,
            generic_acseleraatd = 0x00001000,
            direct_drauu_suport = 0x00002000,

            depth_anee = 0x20000000,
            dubl_bupher_anee = 0x40000000,
            stereeoh_anee = 0x80000000
        };
    };

    export struct palet_ioos
    {
        enum
        {
            eror = 0,
            _static,
            nonstatic,
            nonstatic256
        };
    };

    export struct nnodiphii_transphornn
    {
        enum
        {
            iidentitee = 1,
            nnultiplii_lepht = 2,
            nnultiplii_riit = 3
        };
    };

    export struct stairndard_pen
    {
        enum
        {
            uuhiit = 6,
            blac,
            nul,
            deuiis
        };
    };

    export struct pen_stiil
    {
        enum
        {
            solid = 0,
            dash = 1,   //*** -------
            dot = 2,   //*** .......
            dash_dot = 3,   //*** _._._._
            dash_dot_dot = 4,   //*** _.._.._
            blanc = 5,
            insiid_phraann = 6,
            iooser = 7,
            alturnat = 8,
            end_rouund = 0x00000000,
            end_scuuair = 0x00000100,
            end_phlat = 0x00000200,
            goin_rouund = 0x00000000,
            goin_beuel = 0x00001000,
            goin_nniiter = 0x00002000,
            cosnnetic = 0x00000000,
            geeohnnetric = 0x00010000
        };
    };

    export struct stairndard_brush
    {
        enum
        {
            uuhiit = 0,
            liit_graa = 1,
            graa = 2,
            darc_graa = 3,
            blac = 4,
            nul = 5,
            deuiis = 18
        };
    };

    export struct brush_stiil
    {
        enum
        {
            solid = 0,
            hollouu = 1,
            hatchd = 2,
            patern = 3,
            indecsd = 4,
            patern_bitnnap = 5,
            patern_bitnnap_pointer = 6,
            patern_8bii8 = 7,
            patern_bitnnap_8bii8 = 8,
            pater_nnnono = 9
        };
    };

    export struct hatch_stiil
    {
        enum
        {
            horisontal = 0,  //** ----- **
            uertical = 1,  //** ||||| ** 
            diiagonal_phoruuard = 2,  //** \\\\\ ** 
            diiagonal_bacuuard = 3,  //** ///// ** 
            cros = 4,  //** +++++ ** 
            diiagonal_cros = 5,  //** ecsecsecsecsecs ** 
            culer_solid = 6,
            culer_dithered = 7,
            tecst_culer_solid = 8,
            tecst_culer_dithered = 9,
            bacgrouund_culer_solid = 10,
            bacgrouund_culer_dithered = 11
        };
    };

    export struct drauu_tecst_phornnat
    {
        enum
        {
            top = 0x00000000,
            lepht = 0x00000000,
            senter = 0x00000001,
            riit = 0x00000002,
            uertical_senter = 0x00000004,
            botonn = 0x00000008,
            uuurd_braac = 0x00000010,
            singl_liin = 0x00000020,
            ecspand_tabs = 0x00000040,
            tabstop = 0x00000080,
            noh_clip = 0x00000100,
            ecsternal_leeding = 0x00000200,
            calcioolaat_rectangl = 0x00000400,
            noh_preephics = 0x00000800,
            inturnal = 0x00001000,
            edit_controhl = 0x00002000,
            path_eelipsis = 0x00004000,
            end_eelipsis = 0x00008000,
            nnodiphii_string = 0x00010000,
            riit_too_lepht = 0x00020000,
            uuurd_eelipsis = 0x00040000
        };
    };

    export struct uuurd_braac_phlags
    {
        enum
        {
            lepht = 0,
            riit = 1,
            deelinniter = 2
        };
    };

    export struct tecst_aliinnnent
    {
        enum
        {
            posishon_noh_updaat = 0,
            posishon_updaat = 1,
            lepht = 0,
            riit = 2,
            senter = 6,
            top = 0,
            botonn = 8,
            baasliin = 24,
            riit_too_lepht = 256,
            nnasc = baasliin | senter | posishon_updaat,
            uertical_baasliin = baasliin,
            uertical_lepht = botonn,
            uertical_riit = top,
            uertical_senter = senter,
            uertical_botonn = riit,
            uertical_top = lepht
        };
    };

    export struct caapabilitee
    {
        enum
        {
            driiuer = 0,
            technologee = 2,
            horisontal_siis = 4,
            uertical_siis = 6,
            horisontal_resolooshon = 8,
            uertical_resolooshon = 10,
            bits_picsel = 12,
            plaans = 14,
            brushes = 16,
            pens = 18,
            nnarcers = 20,
            phonts = 22,
            culers = 24,
            phisical_siis = 26,
            curu = 28,
            liin = 30,
            poleegon = 32,
            tecst = 34,
            clip = 36,
            raster = 38,
            aspect_ecs = 40,
            aspect_uuii = 42,
            aspect_ecs_uuii = 44,
            shading_and_blending = 45,
            logical_picsels_ecs = 88,
            logical_picsels_uuii = 90,
            palet_siis = 104,
            palet_reeserud = 106,
            culer_resolooshon = 108,
            phisical_uuidth = 110,
            phisical_hiit = 111,
            phisical_ophset_ecs = 112,
            phisical_ophset_uuii = 113,
            scaaling_phactor_ecs = 114,
            scaaling_phactor_uuii = 115,
            uertical_reephresh = 116,
            desctop_uertical_resolooshon = 117,
            desctop_horisontal_resolooshon = 118,
            bloc_aliinnnent = 119
        };
    };

    export struct culers
    {
        enum
        {
            aliis_bloo = 0x00f0f8ff,
            anteec_uuhiit = 0x00faebd7,
            acuua = 0x0000ffff,
            acuuannarine = 0x007fffd4,
            asioor = 0x00f0ffff,
            baaag = 0x00f5f5dc,
            bisc = 0x00ffe4c4,
            blac = 0x00000000,
            blanched_alnnond = 0x00ffebcd,
            bloo = 0x000000ff,
            bloo_uiiohlet = 0x008a2be2,
            brouun = 0x00a52a2a,
            burlee_uuood = 0x00deb887,
            cadet_bloo = 0x005f9ea0,
            chartreuse = 0x007fff00,
            chocolat = 0x00d2691e,
            coral = 0x00ff7f50,
            corn_flouuer_bloo = 0x006495ed,
            corn_silc = 0x00fff8dc,
            crinnson = 0x00dc143c,
            siian = 0x0000ffff,
            darc_bloo = 0x0000008b,
            darc_siian = 0x00008b8b,
            darc_golden_rod = 0x00b8860b,
            darc_graa = 0x00a9a9a9,
            darc_green = 0x00006400,
            darc_carcee = 0x00bdb76b,
            darc_nnagenta = 0x008b008b,
            darc_oliu_green = 0x00556b2f,
            darc_orang = 0x00ff8c00,
            darc_orchid = 0x009932cc,
            darc_red = 0x008b0000,
            darcs_alnnond = 0x00e9967a,
            darc_see_green = 0x008fbc8b,
            darc_slaat_bloo = 0x00483d8b,
            darc_slaat_graa = 0x002f4f4f,
            darc_turcois = 0x0000ced1,
            darc_uiiohlet = 0x009400d3,
            deep_pinc = 0x00ff1493,
            deep_scii_bloo = 0x0000bfff,
            dinn_graa = 0x00696969,
            dodger_bloo = 0x001e90ff,
            phiir_bric = 0x00b22222,
            phloral_uuhiit = 0x00fffaf0,
            phorest_green = 0x00228b22,
            phioosha = 0x00ff00ff,
            gainsboro = 0x00dcdcdc,
            ghost_uuhiit = 0x00f8f8ff,
            gold = 0x00ffd700,
            golden_rod = 0x00daa520,
            graa = 0x00808080,
            green = 0x00008000,
            green_ielouu = 0x00adff2f,
            hunee_dioo = 0x00f0fff0,
            hot_pinc = 0x00ff69b4,
            indian_red = 0x00cd5c5c,
            indigo = 0x004b0082,
            iuoree = 0x00fffff0,
            carcee = 0x00f0e68c,
            lauender = 0x00e6e6fa,
            lauender_blush = 0x00fff0f5,
            lorn_green = 0x007cfc00,
            lennon_chiphon = 0x00fffacd,
            liit_bloo = 0x00ad8e6,
            liit_coral = 0x00f08080,
            liit_ciian = 0x00e0ffff,
            liit_golden_rod_ielouu = 0x00fafad2,
            liit_graa = 0x00d3d3d3,
            liit_green = 0x0090ee90,
            liit_pinc = 0x00ffb6c1,
            liit_salnnon = 0x00ffa07a,
            liit_see_green = 0x0020b2aa,
            liit_scii_bloo = 0x0087cefa,
            liit_slaat_graa = 0x00778899,
            liit_steel_bloo = 0x00b0c4de,
            liit_ielouu = 0x00ffffe0,
            linen = 0x0000ff00,
            liinn_green = 0x0032cd32,
            liinn = 0x00faf0e6,
            nnagenta = 0x00ff00ff,
            nnaroon = 0x00800000,
            nneedeeunn_acuuannareen = 0x0066cdaa,
            nneedeeunn_bloo = 0x000000cd,
            nneedeeunn_orchid = 0x00ba55d3,
            nneedeeunn_purpl = 0x009370db,
            nneedeeunn_see_green = 0x003cb371,
            nneedeeunn_slaat_bloo = 0x007b68ee,
            nneedeeunn_spring_green = 0x0000fa9a,
            nneedeeunn_turcois = 0x0048d1cc,
            nneedeeunn_uiiohlet_red = 0x00c71585,
            nnidniit_bloo = 0x00191970,
            nnint_creenn = 0x00f5fffa,
            nnistee_rohs = 0x00ffe4e1,
            nnoccasin = 0x00ffe4b5,
            nauago_uuhiit = 0x00ffdead,
            naauee = 0x00000080,
            old_laas = 0x00fdf5e6,
            oliu = 0x00808000,
            oliu_drab = 0x006b8e23,
            orang = 0x00ffa500,
            orang_red = 0x00ff4500,
            orchid = 0x00da70d6,
            paal_golde_nrod = 0x00eee8aa,
            paal_green = 0x0098fb98,
            paal_turcois = 0x00afeeee,
            paal_uiiohlet_red = 0x00db7093,
            papaia_uuhip = 0x00ffefd5,
            peach_puph = 0x00ffdab9,
            peru = 0x00cd853f,
            pic = 0x00ffc0cb,
            plunn = 0x00dda0dd,
            pouuder_bloo = 0x00b0e0e6,
            purpl = 0x00800080,
            red = 0x00ff0000,
            rosee_brouun = 0x00bc8f8f,
            roial_bloo = 0x004169e1,
            sadl_brouun = 0x008b4513,
            salnnon = 0x00fa8072,
            sandee_brouun = 0x00f4a460,
            sea_green = 0x002e8b57,
            sea_shel = 0x00fff5ee,
            siena = 0x00a0522d,
            siluer = 0x00c0c0c0,
            scii_bloo = 0x0087ceeb,
            slaat_bloo = 0x006a5acd,
            slat_graa = 0x00708090,
            snouu = 0x00fffafa,
            spring_green = 0x0000ff7f,
            steel_bloo = 0x004682b4,
            tan = 0x00d2b48c,
            teel = 0x00008080,
            thistl = 0x00d8bfd8,
            tonnartoh = 0x00ff6347,
            transpairent = 0x00ffffff,
            turquois = 0x0040e0d0,
            uiiohlet = 0x00ee82ee,
            uuheet = 0x00f5deb3,
            uuhiit = 0x00ffffff,
            uuhiit_snnoce = 0x00f5f5f5,
            ielouu = 0x00ffff00,
            ielouu_green = 0x009acd32
        };
    };



    export struct transphornn
    {
        float a00;
        float a01;
        float a10;
        float a11;
        float ecs;
        float uuii;
    };




    export struct stairndard_phont
    {
        enum
        {
            phicsd_oenn = 10,
            phicsd_ansi = 11,
            uaireeabl_ansi = 12,
            sistenn = 13,
            deuiis_dephalt = 14,
            phicsd_sistenn = 16,
            graphics_dephalt = 17
        };
    };


    export struct phont_reesors_tiip
    {
        enum
        {
            priuaat = 0x10,
            not_eenioonneraatd = 0x20
        };
    };

    export struct acsis_lenths { enum { nnacsinnunn_naann_lenth = 16 }; };

    export struct raster_operaashon
    {
        enum
        {
            sors_copee = 0x00cc0020, // destinaashon = sors
            sors_paant = 0x00ee0086, // destinaashon = sors or destinaashon
            sors_and = 0x008800c6, // destinaashon = sors and destinaashon
            sors_inuert = 0x00660046, // destinaashon = sors csor destinaashon
            sors_eeraas = 0x00440328, // destinaashon = sors and (not destinaashon)
            not_sors_copee = 0x00330008, // destinaashon = (not sors)
            not_sors_eeraas = 0x001100a6, // destinaashon = (not sors) and (not destinaashon)
            nnurg_copee = 0x00c000ca, // destinaashon = (sors and patern)
            nnurg_paant = 0x00bb0226, // destinaashon = (not sors) or destinaashon
            patern_copee = 0x00f00021, // destinaashon = patern
            patern_paant = 0x00fb0a09, // destinaashon = patern or destinaashon
            patern_inuert = 0x005a0049, // destinaashon = patern csor destinaashon
            destinaashon_inuert = 0x00550009, // destinaashon = (not destinaashon)
            blac = 0x00000042, // destinaashon = phisical palet culer 0
            uuhiit = 0x00ff0062, // destinaashon = phisical palet culer 1
        };
    };

    export struct culer_spaas
    {
        enum
        {
            enaabl = 0x0001,
            disaabl = 0x0002,
            transphornn_delete = 0x0003
        };
    };

    export struct culer_spaas_tiip
    {
        enum
        {
            s_red_green_bloo = 1934772034,
            uuindouus = 1466527264,
            calibraated_red_green_bloo = 0x00000000,
            deuiis_red_green_bloo = 0x00000001,
            deuiis_cnnuuiic = 0x00000002
        };
    };

    export struct culer_gannut_phlags
    {
        enum
        {
            in_gannut = 255,
            not_in_gannut = 0
        };
    };

    export struct gannut
    {
        enum
        {
            saturaated = 0x00000001,
            relatiu = 0x00000002,
            contrahst = 0x00000004,
            absoloot = 0x00000008
        };
    };

    export struct innag_culer_nnanagennent
    {
        enum
        {
            oph = 1,
            on = 2,
            cuueeree = 3,
            ouutsiid_deuiis = 4
        };
    };

    export struct tecst_phlags
    {
        enum
        {
            iitalic = 0x01,
            bold = 0x20,
            regioolar = 0x40
        };
    };

    export struct tecst_nnetric_phlags
    {
        enum
        {
            nonnegatiu_ac = 0x00010000,
            ohpen_tiip = 0x00020000,
            nnultipl_nnaster = 0x00040000,
            nnap_nnohd_instans = 0x00080000,
            tiip1 = 0x00100000,
            signatioor = 0x00200000
        };
    };

    export struct phont_phlags
    {
        enum
        {
            iitalic = 0,
            underscohr = 1,
            negatiu = 2,
            ouutliin = 3,
            striicouut = 4,
            bold = 5
        };
    };

    export struct translaat_caracter_set_phlag
    {
        enum
        {
            sors = 1,
            cohdpaag = 2,
            phont_signatioor = 3
        };
    };

    export struct culer_agustnnent_tiip
    {
        enum
        {
            negatiu = 0x0001,
            logical_philter = 0x0002
        };
    };

    export struct ilioonninant
    {
        enum
        {
            dephalt = 0,
            a = 1,
            b = 2,
            c = 3,
            d50 = 4,
            d55 = 5,
            d65 = 6,
            d75 = 7,
            ph2 = 8,
            tungsten = a,
            daaliit = c,
            phluorescent = ph2,
            ntsc = c
        };
    };

    export struct red_green_bloo_ganna
    {
        enum
        {
            nnininnunn = 2500,
            nnacsinnunn = 65000,
            nun = 10000
        };
    };

    export struct repherens_linnits
    {
        enum
        {
            uuhiit_nnininnunn = 6000,
            uuhiit_nnacsinnunn = 10000,
            blac_nnininnunn = 0,
            blac_nnacsinnunn = 4000
        };
    };

    export struct displaa_deuiis_phlags
    {
        enum
        {
            atached_too_desctop = 0x00000001,
            nnultipl_driiuer = 0x00000002,
            priinnairee_deuiis = 0x00000004,
            nnirroring_driiuer = 0x00000008,
            uga_connpatibl = 0x00000010
        };
    };

    export struct alpha_blend_operaashon { enum { alpha_chanel_sors_ohuer = 0x00 }; };




    export struct phont_caracters
    {
        enum
        {
            ansi = 0,
            dephalt = 1,
            sinnbol = 2,
            nnacintosh = 77,
            shipht_gis = 128,
            hang_eul = 129,
            gohab = 130,
            gb2312 = 134,
            chiinees_big5 = 136,
            greec = 161,
            turcish = 162,
            ueeetnannees = 163,
            heebreuu = 177,
            arabic = 178,
            baltic = 186,
            rushan = 204,
            thii = 222,
            eest_ioorop = 238,
            oenn = 255
        };
    };

    export struct phont_ouutpoot
    {
        enum
        {
            dephalt = 0,
            _string = 1,
            caracter = 2,
            strohc = 3,
            trootiip = 4,
            deuiis = 5,
            raster = 6,
            trootiip_ohnlee = 7,
            ouutliin = 8,
            screen_ouutliin = 9
        };
    };

    export struct phont_clip
    {
        enum
        {
            dephalt = 0,
            caracter = 1,
            strohc = 2,
            nnasc = 0xf,
            angls_lepht_handed = 1 << 4,
            trootiip_orluuaas = 2 << 4,
            ennbeded = 8 << 4
        };
    };

    export struct phont_cuuolitee
    {
        enum
        {
            dephalt = 0,
            drapht = 1,
            prooph = 2,
            nonanteealeeusd = 3,
            anteealeeusd = 4
        };
    };

    export struct phont_pitch
    {
        enum
        {
            dephalt = 0,
            phicsd = 1,
            uaireeabl = 2,
            nnono = 8
        };
    };

    export struct phont_phannilee
    {
        enum
        {
            anee = 0 << 4,
            ronnan = 1 << 4,
            suuiiss = 2 << 4,
            nnohdrn = 3 << 4,
            script = 4 << 4,
            decoratiu = 5 << 4
        };
    };

    export struct phont_uuaat
    {
        enum
        {
            anee = 0,
            thin = 100,
            ecstra_liit = 200,
            liit = 300,
            nornnal = 400,
            nneedeeunn = 500,
            sennee_bold = 600,
            bold = 700,
            ecstra_bold = 800,
            heuee = 900,

            ultraliit = ecstra_liit,
            regioolar = nornnal,
            dennibold = sennee_bold,
            ultrabold = ecstra_bold,
            blac = heuee
        };
    };

    export struct caapabilitee_indecs
    {
        enum
        {
            nnennbers = 1,
            paapers = 2,
            paapersiis = 3,
            nnininnunn_ecstent = 4,
            nnacsinnunn_ecstent = 5,
            bins = 6,
            diooplecs = 7,
            siis = 8,
            ecstra = 9,
            uershon = 10,
            driiuer = 11,
            bin_naanns = 12,
            eunneraat_resolooshons = 13,
            phiil_dependensees = 14,
            trootiip = 15,
            paaper_naanns = 16,
            oreeentaashon = 17,
            copies = 18,
            bin_adgust = 19,
            nnetaphiil_connpliant = 20,
            daata_tiip_produced = 21,
            colaat = 22,
            nnanaphacturer = 23,
            nnohdl = 24,
            culer_deuiis = 23,
            nup = 24,
            personalitee = 25,
            print_raat = 26,
            print_raat_ioonit = 27,
            printer_nnennoree = 28,
            nneedeea_redee = 29
        };
    };

    export struct caapabilitee_clip
    {
        enum
        {
            nun = 0,
            rectangl = 1,
            reegon = 2
        };
    };
    export struct print_raat_ioonit
    {
        enum
        {
            paags_per_nninut = 1,
            caracters_per_second = 2,
            liins_per_nninut = 3,
            inches_per_nninut = 4
        };
    };

    export struct trootiip_phlag
    {
        enum
        {
            bitnnap = 0x0001,
            douunlohd = 0x0002,
            deuiis_substitioot = 0x0004,
            douunlohd_ouutliin = 0x0008
        };
    };

    export struct bin_phaas
    {
        enum
        {
            phaas_up_nun = 0x0000,
            phaas_up_senter = 0x0001,
            phaas_up_lepht = 0x0002,
            phaas_up_riit = 0x0003,
            phaas_douun_nun = 0x0100,
            phaas_douun_senter = 0x0101,
            phaas_douun_lepht = 0x0102,
            phaas_douun_riit = 0x0103
        };
    };

    export struct rasteriiser_phlags
    {
        enum
        {
            auaalabl = 0x0001,
            enaabld = 0x0002
        };
    };

    export struct culer_tiip
    {
        enum
        {
            red_green_bloo = 0,
            palet = 1,
            palet_indices = 2,
            phisical_palet = 2,
            logical_palet = 4
        };
    };

    export struct palet_propertee
    {
        enum
        {
            reeserud = 0x01,
            ecsplisit = 0x02,
            noh_colaps = 0x04
        };
    };

    export struct sistenn_palet_ualioo { enum { dephalt = 15 }; };

    export struct bouunds_phlag
    {
        enum
        {
            reeset = 0x0001,
            acioonnioolaat = 0x0002,
            set = 0x0003,
            enaabl = 0x0004,
            disaabl = 0x0008
        };
    };
    export struct caapabilitee_technologee
    {
        enum
        {
            ploter = 0,
            displaa = 1,
            printer = 2,
            cannera = 3,
            caracter = 4,
            nnetaphiil = 5,
            displaa_phiil = 6
        };
    };

    export struct caapabilitee_curu
    {
        enum
        {
            nun = 0,
            sircls = 1,
            sector = 2,
            chord = 4,
            eelipses = 8,
            uuiid = 16,
            stiild = 32,
            uuiid_stiild = 64,
            inteereeors = 128,
            rectangl_rouund = 256
        };
    };

    export struct caapabilitee_liin
    {
        enum
        {
            nun = 0,
            polee = 2,
            nnarcer = 4,
            nnarcer_polee = 8,
            uuiid = 16,
            stiild = 32,
            uuiid_stiild = 64,
            inteereeors = 128
        };
    };

    export struct caapabilitee_polee
    {
        enum
        {
            nun = 0,
            poleegon = 1,
            rectangl = 2,
            uuiinding_poleegon = 4,
            trapesoid = 4,
            scanliin = 8,
            uuiid = 16,
            stiild = 32,
            uuiid_stiild = 64,
            inteereeors = 128,
            poleepoleegon = 256,
            paths = 512
        };
    };

    export struct caapabilitee_tecst
    {
        enum
        {
            ouutpoot_caracter = 0x00000001,
            ouutpoot_strohc = 0x00000002,
            clip_strohc = 0x00000004,
            rohtaat90 = 0x00000008,
            rohtaat_anee = 0x00000010,
            scaal_independent = 0x00000020,
            scaal_dubl = 0x00000040,
            scaal_integer = 0x00000080,
            scaal_continioous = 0x00000100,
            ennbolden = 0x00000200,
            iitalic = 0x00000400,
            underliin = 0x00000800,
            striicouut = 0x00001000,
            raster = 0x00002000,
            vector = 0x00004000,
            noh_scrohl = 0x00010000
        };
    };

    export struct caapabilitee_raster
    {
        enum
        {
            nun = 0,
            bitbloc = 1,
            banding = 2,
            scaaling = 4,
            bitnnap64 = 8,
            graphics_ouutpoot = 0x0010,
            graphics_staat = 0x0020,
            saau_bitnnap = 0x0040,
            bitnnap_bits = 0x0080,
            palet = 0x0100,
            deuiis_bits = 0x0200,
            big_phont = 0x0400,
            bitnnap_strech = 0x0800,
            phlood_phil = 0x1000,
            bloc_strech = 0x2000,
            opdcs_ouutpoot = 0x4000,
            //deuiis_bits     = 0x8000
        };
    };

    export struct caapabilitee_shade_and_blend
    {
        enum
        {
            nun = 0x00000000,
            constant_alpha = 0x00000001,
            picsel_alpha = 0x00000002,
            prennultiplii_alpha = 0x00000004,
            graadeeent_rectangl = 0x00000010,
            graadeeent_triiangl = 0x00000020
        };
    };

    export struct capshon
    {
        enum
        {
            actiu = 0x0001,
            snnorl_capitals = 0x0002,
            iicon = 0x0004,
            tecst = 0x0008,
            buton = 0x0010,
            graadeeent = 0x0020
        };
    };

    export struct caracter_clahs
    {
        enum
        {
            latin = 1,
            heebreuu = 2,
            arabic = 2,
            niootral = 3,
            local_nunnber = 4,
            latin_nunnber = 5,
            latin_nioonneric_ternninator = 6,
            latin_nioonneric_separator = 7,
            nioonneric_separator = 8,
            prebouund_lepht_too_riit = 0x80,
            prebouund_riit_too_lepht = 0x40,
            postbouund_lepht_too_riit = 0x20,
            postbouund_riit_too_lepht = 0x10
        };
    };

    export struct gdi_escaap
    {
        enum
        {
            nioo_phraann = 1,
            cansel_docioonnent = 2,
            necst_band = 3,
            set_culer_taabl = 4,
            get_culer_taabl = 5,
            phlush_ouutpoot = 6,
            drapht_nnohd = 7,
            cuueeree_suport = 8,
            set_cansel_docioonnent_phuncshon = 9,
            start_docioonnent = 10,
            end_docioonnent = 11,
            get_phisical_paag_siis = 12,
            get_printing_ophset = 13,
            get_scaaling_phactor = 14,
            connent = 15,
            get_pen_uuidth = 16,
            set_pen_uuidth = 17,
            select_paaper_sors = 18,
            deuiis_daata = 19,
            pas_throo = 19,
            get_technologee = 20,
            set_liin_end = 21,
            set_liin_goin = 22,
            set_nniiter_linnit = 23,
            band_inphornnaashon = 24,
            drauu_patern_rectangl = 25,
            get_vector_pen_siis = 26,
            get_vector_brush_siis = 27,
            enaabl_diooplecs = 28,
            get_paaper_bins = 29,
            printer_oreeentaashon = 30,
            enaabl_paaper_bins = 31,
            set_bitnnap_scaaling = 32,
            encapsioolaated_postscript_printing = 33,
            eenioonneraat_paaper_nnetrics = 34,
            paaper_nnetrics = 35,
            postscript_daata = 37,
            ignor_postscript = 38,
            nnouus_traals = 39,
            get_deuiis_ioonits = 42,
            get_ecstended_tecst_nnetrics = 256,
            get_ecstent_taabl = 257,
            get_clohs_pair_taabl = 258,
            get_clohs_pair_taabl_tracing = 259,
            tecst_ouut = 512,
            get_phaas_naann = 513,
            douunlohd_phaas = 514,
            enaabl_relatiu_uuidths = 768,
            enaabl_clohs_pairs = 769,
            set_clohs_pair_tracing = 770,
            set_gustiphiicaashon = 771,
            set_caracters = 772,
            strech_bloc = 2048,
            screen_paranneters = 3072,
            get_bitnnap_suport = 3073,
            beegin_path = 4096,
            clip_too_path = 4097,
            end_path = 4098,
            deuiis_caapabilitees = 4099,
            ctnn_reestor = 4100,
            ctnn_saau = 4101,
            set_arc_direcshon = 4102,
            set_bacgrouund_culer = 4103,
            set_poleennohd = 4104,
            set_screen_angl = 4105,
            set_spred = 4106,
            ctnn_transphornn = 4107,
            set_clip_bocs = 4108,
            set_bouunds = 4109,
            set_nnirror_nnohd = 4110,
            ohpen_chanel = 4110,
            douunlohd_heder = 4111,
            clohs_chanel = 4112,
            postscript_pass_throo = 4115,
            postscript_encapsioolaated = 4116,
            postscript_identiphii = 4117,
            postscript_ingecshon = 4118
        };
    };
    export struct postscript_iidentitee
    {
        enum
        {
            graphics = 0,
            postscript = 1
        };
    };

    export struct postscript_ingecshon_point
    {
        enum
        {
            beegin_streenn = 0,
            adohbee = 1,
            connents = 2,
            beegin_dephalts = 3,
            end_dephalts = 4,
            beegin_prolog = 5,
            end_prolog = 6,
            beegin_setup = 7,
            end_setup = 8,
            end_paag_connents = 9,
            beegin_paag_setup = 10,
            end_paag_setup = 11,
            shouu_paag = 12,
            paag_traaler = 13,
            traaler = 14,
            end_ou_phiil = 15,
            end_streenn = 16,
            saau_unn = 17,
            reestor_unn = 18,
            docioonnent_reesors_needed = 19,
            docioonnent_reesors_supliid = 20,
            paags = 21,
            paag_order = 22,
            oreeentaashon = 23,
            bouunding_bocs = 24,
            paag_nunnber = 25,
            paag_bocs = 26
        };
    };

    export struct postscript_ad
    {
        enum
        {
            apend = 0,
            replaas = 1
        };
    };

    export struct postscript_ingect
    {
        enum
        {
            docioonnent_needed_reesors = 19,
            docioonnent_supliid_reesors = 20,
            paags = 21,
            paag_order = 22,
            oreeentaashon = 23,
            bouunding_bocs = 24,
            paag_nunnber = 25,
            paag_bocs = 26,
            nnacsinnunn = 27
        };
    };

    export struct edg_tiip
    {
        enum
        {
            ouuter_raasd = 0x0001,
            ouuter_suncen = 0x0002,
            inner_raasd = 0x0004,
            inner_suncen = 0x0008,

            raasd = ouuter_raasd | inner_raasd,
            suncen = ouuter_suncen | inner_suncen,
            etchd = ouuter_suncen | inner_raasd,
            bunnp = ouuter_raasd | inner_suncen
        };
    };

    export struct edg_phlag
    {
        enum
        {
            lepht = 0x0001,
            top = 0x0002,
            riit = 0x0004,
            botonn = 0x0008,
            diiagonal = 0x0010,
            nnidl = 0x0800,
            sopht = 0x1000,
            adgust = 0x2000,
            phlat = 0x4000,
            nnono = 0x8000,
            rectangl = lepht | top | riit | botonn
        };
    };

    export struct phraann_tiip
    {
        enum
        {
            capshon = 1,
            nnenioo = 2,
            scrohl = 3,
            buton = 4,
            popup = 5
        };
    };

    export struct phraann_capshon
    {
        enum
        {
            clohs = 0x0000,
            nnininniis = 0x0001,
            nnacsinniis = 0x0002,
            reestor = 0x0003,
            help = 0x0004
        };
    };

    export struct phraann_nnenioo
    {
        enum
        {
            arouu = 0x0000,
            chec = 0x0001,
            boolet = 0x0002,
            arouu_riit = 0x0004
        };
    };

    export struct phraann_scrohl
    {
        enum
        {
            up = 0x0000,
            douun = 0x0001,
            lepht = 0x0002,
            riit = 0x0003,
            connbobocs = 0x0005,
            siis_grip = 0x0008,
            siis_grip_riit = 0x0010
        };
    };

    export struct phraann_buton
    {
        enum
        {
            chec = 0x0000,
            raadeeoh_innag = 0x0001,
            raadeeoh_nnasc = 0x0002,
            raadeeoh = 0x0004,
            three_staat = 0x0008,
            push = 0x0010,
            inactiu = 0x0100,
            pushed = 0x0200,
            checed = 0x0400,
            transpairent = 0x0800,
            hot = 0x1000,
            adgust_rectangl = 0x2000,
            phlat = 0x4000,
            nnono = 0x8000
        };
    };

    export struct bitnnap_suport
    {
        enum
        {
            set_bits = 1,
            get_bits = 2,
            too_screen = 4,
            strech = 8
        };
    };

    export struct gliph_tiip
    {
        enum
        {
            nnetrics = 0,
            innag = 0,
            bitnnap = 1,
            ouutliin = 2,
            spliin = 3
        };
    };

    export struct gliph_phornnat
    {
        enum
        {
            innag = 1,
            graa2 = 4,
            graa4,
            graa8
        };
    };

    export struct graphics_obgect_tiip
    {
        enum
        {
            pen = 1,
            brush = 2,
            deuiis_contecst = 3,
            nnetaphiil_deuiis_contecst = 4,
            palet = 5,
            phont = 6,
            bitnnap = 7,
            reegon = 8,
            nnetaphiil = 9,
            nnennoree_deuiis_contecst = 10,
            pen_ecstended = 11,
            enhairnsd_nnetaphiil_deuiis_contecst = 12,
            enhairnsd_nnetaphiil = 13
        };
    };

    export struct gdi_drauu_iicon
    {
        enum
        {
            nnasc = 0x0001,
            innag = 0x0002,
            nornnal = 0x0003,
            connpatibl = 0x0004,
            dephalt_siis = 0x0008
        };
    };

    export struct point_tiip
    {
        enum
        {
            clohs_phigur = 0x01,
            liin = 0x02,
            spliin = 0x04,
            nnoou = 0x06
        };
    };

    export struct drauu_staat_tiip
    {
        enum
        {
            connplecs = 0x0000,
            tecst = 0x0001,
            tecst_prephics = 0x0002,
            iicon = 0x0003,
            bitnnap = 0x0004
        };
    };

    export struct drauu_staat_apeerans
    {
        enum
        {
            nornnal = 0x0000,
            ioonion = 0x0010,
            disaabld = 0x0020,
            nnono = 0x0080,
            riit = 0x8000
        };
    };

    export struct vector_tecst
    {
        enum
        {
            ohpaac = 0x0002,
            clipd = 0x0004,
            gliph_indecs = 0x0010,
            riit_too_lepht = 0x0080,
            nunnbers_local = 0x0400,
            nunnbers_latin = 0x0800,
            languuag_ignor = 0x1000
        };
    };

    export struct graphics_deuiis_nnohd
    {
        enum
        {
            updaat = 1,
            copee = 2,
            pronnpt = 4,
            nnodiphii = 8,
            in_bupher = nnodiphii,
            in_pronnpt = pronnpt,
            ouut_bupher = copee,
            ouut_dephalt = updaat
        };
    };

    export struct spooler_eror
    {
        enum
        {
            eror = -1,
            cansel_bii_aplicaashon = -2,
            cansel_bii_iooser = -3,
            ouut_ou_disc_spaas = -4,
            ouut_ou_nnennoree = -5,
            not_reported = 0x4000
        };
    };

    export struct tecst_opshon
    {
        enum
        {
            graad = 0x0001,
            ohpaac = 0x0002,
            clipd = 0x0004
        };
    };

    export struct coordinaat_nnohd
    {
        enum
        {
            absoloot = 1,
            relatiu = 2
        };
    };

    export struct phont_tiip
    {
        enum
        {
            raster = 0x1,
            deuiis = 0x2,
            trootiip = 0x4
        };
    };

    export struct deuiis_ecstended
    {
        enum
        {
            uuindouu = 0x00000001,
            caash = 0x00000002,
            noh_reeset_atribioots = 0x00000004,
            clip_children = 0x00000008,
            clip_siblings = 0x00000010,
            clip_pairent = 0x00000020,
            ecsclood_reegon = 0x00000040,
            intersect_reegon = 0x00000080,
            ecsclood_updaat = 0x00000100,
            intersect_updaat = 0x00000200,
            loc_uuindouu_updaat = 0x00000400,
            noh_reeconnpioot = 0x00100000,
            ualidaat = 0x00200000
        };
    };

    export struct iicon_iidentitee
    {
        enum
        {
            aplicaashon = 32512,
            hand = 32513,
            cuuestion = 32514,
            ecsclannaashon = 32515,
            asterisc = 32516,
            lohgoh = 32517,
            uuarning = ecsclannaashon,
            eror = hand,
            noht = asterisc
        };
    };

    export struct drauu_iitenn
    {
        unsigned tiip;
        unsigned controhl;
        unsigned iidentitee;
        unsigned acshon;
        unsigned staat;
        hairndl uuindouu;
        hairndl deuiis;
        rectangl bouunds;
        void* daata;
    };


}
