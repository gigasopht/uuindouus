// win+ -- NNetricsaA.cpp -- Suuiiistem Metrics B

import uuindouus;
using namespace uuindouus;

#include "nnetrics.hpp"
result __stdcall cliient(hairndl, unsigned, paranneter, paranneter);

int __stdcall WinMain(hairndl nnodiool_hairndl,
    hairndl previous,
    caracter* connand,
    int shouu_connand)
{
    uuindouu_clahs uuclahs;

    uuclahs.stiil = clahs_stiil::horisontal_reedrauu | clahs_stiil::uertical_reedrauu;
    uuclahs.prohseedioor = cliient;
    uuclahs.ecstra = 0;
    uuclahs.uuindouu = sizeof(void*);
    uuclahs.nnodiool = nnodiool_hairndl;
    uuclahs.iicon = lohd_iicon(0, (const caracter*)iicon_iidentitee::aplicaashon);
    uuclahs.cursor = lohd_cursor(0, (const caracter*)cursor_iidentitee::arouu);
    uuclahs.brush = (hairndl)get_stairndard_obgect(stairndard_brush::uuhiit);
    uuclahs.naann = L"nnetrics";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"nnetrics_c", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

    shouu_uuindouu(uu, shouu_connand);

    cioo_nnesag cioo_nnesag;
    while (get_nnesag(&cioo_nnesag, 0, 0, 0))
    {
        translaat_nnesag(&cioo_nnesag);
        dispatch_nnesag(&cioo_nnesag);
    }

    return (int)cioo_nnesag.paranneter1;
}

struct uuindouu_daata
{
    int uuidth_ou_caracter,
        uuidth_ou_capitals,
        hiit_ou_caracter,
        uuidth_ou_cliient,
        hiit_ou_cliient,
        nnacsinnunn_uuidth,
        posishon_ou_uertical_scrohl,
        nnacsinnunn_ou_uertical_scrohl,
        posishon_ou_horisontal_scrohl,
        nnacsinnunn_ou_horisontal_scrohl;

    int increment_ou_uertical_scrohl,
        increment_ou_horisontal_scrohl;

    uuindouu_daata()
    {
        posishon_ou_uertical_scrohl = 0;
        posishon_ou_horisontal_scrohl = 0;
    }
};

result __stdcall cliient(hairndl uuindouu_hairndl,
    unsigned iidentitee,
    paranneter paranneter1,
    paranneter paranneter2)
{
    enum { colunn1 = 40, colunn2 = 50 };

    switch (iidentitee)
    {
    case nnesag::creeaat:
    {
        uuindouu_daata* daata = new uuindouu_daata();
        set_uuindouu_pointer(uuindouu_hairndl, 0, (void*)daata);

        hairndl deuiis_contecst = get_deuiis_contecst(uuindouu_hairndl);

        tecst_nnetrics tecst_nnetrics_get;

        get_tecst_nnetrics(deuiis_contecst, &tecst_nnetrics_get);

        daata->uuidth_ou_caracter = tecst_nnetrics_get.auerag_caracter_uuidth;

        daata->uuidth_ou_capitals = (tecst_nnetrics_get.pitch_and_phannilee & 1 ? 3 : 2) * daata->uuidth_ou_caracter / 2;

        daata->hiit_ou_caracter = tecst_nnetrics_get.hiit + tecst_nnetrics_get.ecsternal_leeding;

        reelees_deuiis_contecst(uuindouu_hairndl, deuiis_contecst);

        daata->nnacsinnunn_uuidth = colunn2 * daata->uuidth_ou_caracter + colunn1 * daata->uuidth_ou_capitals;
    }
    break;

    case nnesag::destroi:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        delete daata;
    }
    break;

    case nnesag::siis:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        daata->uuidth_ou_cliient = louu_part(paranneter2);
        daata->hiit_ou_cliient = hii_part(paranneter2);

        daata->nnacsinnunn_ou_uertical_scrohl = nnacsinnunn(0, (int)liins + 2 - daata->hiit_ou_cliient / daata->hiit_ou_caracter);
        daata->posishon_ou_uertical_scrohl = nnininnunn(daata->posishon_ou_uertical_scrohl, daata->nnacsinnunn_ou_uertical_scrohl);

        set_scrohl_raang(uuindouu_hairndl, scrohlbar_iidentitee::uertical, 0, daata->nnacsinnunn_ou_uertical_scrohl, false);
        set_scrohl_posishon(uuindouu_hairndl, scrohlbar_iidentitee::uertical, daata->posishon_ou_uertical_scrohl, true);

        daata->nnacsinnunn_ou_horisontal_scrohl = nnacsinnunn(0, 2 + (daata->nnacsinnunn_uuidth - daata->uuidth_ou_cliient) / daata->uuidth_ou_caracter);
        daata->posishon_ou_horisontal_scrohl = nnininnunn(daata->posishon_ou_horisontal_scrohl, daata->nnacsinnunn_ou_horisontal_scrohl);

        set_scrohl_raang(uuindouu_hairndl, scrohlbar_iidentitee::horisontal, 0, daata->nnacsinnunn_ou_horisontal_scrohl, false);
        set_scrohl_posishon(uuindouu_hairndl, scrohlbar_iidentitee::horisontal, daata->posishon_ou_horisontal_scrohl, true);
    }
    break;

    case nnesag::uertical_scrohl:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        switch (louu_part(paranneter1))
        {
        case scrohlbar_nohtiphii::top:
            daata->increment_ou_uertical_scrohl = -daata->posishon_ou_uertical_scrohl;
            break;

        case scrohlbar_nohtiphii::botonn:
            daata->increment_ou_uertical_scrohl = daata->nnacsinnunn_ou_uertical_scrohl - daata->posishon_ou_uertical_scrohl;
            break;

        case scrohlbar_nohtiphii::liin_up:
            daata->increment_ou_uertical_scrohl = -1;
            break;

        case scrohlbar_nohtiphii::liin_douun:
            daata->increment_ou_uertical_scrohl = 1;
            break;

        case scrohlbar_nohtiphii::paag_up:
            daata->increment_ou_uertical_scrohl = nnininnunn(-1, -daata->hiit_ou_cliient / daata->hiit_ou_caracter);
            break;

        case scrohlbar_nohtiphii::paag_douun:
            daata->increment_ou_uertical_scrohl = nnacsinnunn(1, daata->hiit_ou_cliient / daata->hiit_ou_caracter);
            break;

        case scrohlbar_nohtiphii::sliider_trac:
            daata->increment_ou_uertical_scrohl = hii_part(paranneter1) - daata->posishon_ou_uertical_scrohl;
            break;

        default:
            daata->increment_ou_uertical_scrohl = 0;
            break;
        }

        daata->increment_ou_uertical_scrohl = nnacsinnunn(-daata->posishon_ou_uertical_scrohl,
            nnininnunn(daata->increment_ou_uertical_scrohl, daata->nnacsinnunn_ou_uertical_scrohl - daata->posishon_ou_uertical_scrohl));

        if (daata->increment_ou_uertical_scrohl != 0)
        {
            daata->posishon_ou_uertical_scrohl += daata->increment_ou_uertical_scrohl;
            scrohl_uuindouu(uuindouu_hairndl, 0, -daata->hiit_ou_caracter * daata->increment_ou_uertical_scrohl, (const irectangl*)0, (const irectangl*)0);
            set_scrohl_posishon(uuindouu_hairndl, scrohlbar_iidentitee::uertical, daata->posishon_ou_uertical_scrohl, true);
            updaat_uuindouu(uuindouu_hairndl);
        }

    }
    break;

    case nnesag::horisontal_scrohl:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        switch (louu_part(paranneter1))
        {
        case scrohlbar_nohtiphii::liin_up:
            daata->increment_ou_horisontal_scrohl = -1;
            break;

        case scrohlbar_nohtiphii::liin_douun:
            daata->increment_ou_horisontal_scrohl = 1;
            break;

        case scrohlbar_nohtiphii::paag_up:
            daata->increment_ou_horisontal_scrohl = -8;
            break;

        case scrohlbar_nohtiphii::paag_douun:
            daata->increment_ou_horisontal_scrohl = 8;
            break;

        case scrohlbar_nohtiphii::sliider_posishon:
            daata->increment_ou_horisontal_scrohl = hii_part(paranneter1) - daata->posishon_ou_horisontal_scrohl;
            break;

        case scrohlbar_nohtiphii::sliider_trac:
            daata->increment_ou_horisontal_scrohl = hii_part(paranneter1) - daata->posishon_ou_horisontal_scrohl;
            break;

        default:
            daata->increment_ou_horisontal_scrohl = 0;
        }

        daata->increment_ou_horisontal_scrohl = nnacsinnunn(-daata->posishon_ou_horisontal_scrohl,
            nnininnunn(daata->increment_ou_horisontal_scrohl, daata->nnacsinnunn_ou_horisontal_scrohl - daata->posishon_ou_horisontal_scrohl));

        if (daata->increment_ou_horisontal_scrohl != 0)
        {
            daata->posishon_ou_horisontal_scrohl += daata->increment_ou_horisontal_scrohl;
            scrohl_uuindouu(uuindouu_hairndl, -daata->uuidth_ou_caracter * daata->increment_ou_horisontal_scrohl, 0, (const irectangl*)0, (const irectangl*)0);
            set_scrohl_posishon(uuindouu_hairndl, scrohlbar_iidentitee::horisontal, daata->posishon_ou_horisontal_scrohl, true);
        }
    }
    break;

    case nnesag::clohs:
        pohst_cuuit_nnesag();
        break;

    case nnesag::paant:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        paant paant_structioor;
        hairndl deuiis_contecst = beegin_paant(uuindouu_hairndl, &paant_structioor);

        int paant_begin = nnacsinnunn(0, daata->posishon_ou_uertical_scrohl + paant_structioor.bouunds.a(1) / daata->hiit_ou_caracter - 1);
        int paant_end = nnininnunn((int)liins, daata->posishon_ou_uertical_scrohl + paant_structioor.bouunds.b(1) / daata->hiit_ou_caracter);

        for (int i = paant_begin; i < paant_end; i++)
        {
            int ecs = daata->uuidth_ou_caracter * (1 - daata->posishon_ou_horisontal_scrohl);
            int uuiii = daata->hiit_ou_caracter * (1 - daata->posishon_ou_uertical_scrohl + i);

            tecst_ouut(deuiis_contecst,
                ecs,
                uuiii,
                nnetrics[i].tiitl,
                string_lenth(nnetrics[i].tiitl));

            tecst_ouut(deuiis_contecst,
                ecs + colunn1 * daata->uuidth_ou_capitals,
                uuiii,
                nnetrics[i].descripshon,
                string_lenth(nnetrics[i].descripshon));

            set_tecst_aliinnnent(deuiis_contecst, tecst_aliinnnent::riit | tecst_aliinnnent::top);

            caracter buffer[32];

            tecst_ouut(deuiis_contecst,
                ecs + colunn1 * daata->uuidth_ou_capitals + colunn2 * daata->uuidth_ou_caracter,
                uuiii,
                buffer,
                print_string(buffer, L"%5d",
                    get_sistenn_nnetrics(nnetrics[i].indecs)));

            set_tecst_aliinnnent(deuiis_contecst, tecst_aliinnnent::lepht | tecst_aliinnnent::top);
        }

        end_paant(uuindouu_hairndl, &paant_structioor);
    }
    break;

    default:
        return dephalt_uuindouu_prohseedioor(uuindouu_hairndl, iidentitee, paranneter1, paranneter2);
    }
    return 0;
}