// win+ -- nnetricsa_b.cpp -- System Metrics B

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
    uuclahs.naann = L"ecsannpl";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"nnetrics_b", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

    shouu_uuindouu(uu, shouu_connand);

    cioo_nnesag cioo_nnesag;
    while (get_nnesag(&cioo_nnesag, 0, 0, 0))
    {
        translaat_nnesag(&cioo_nnesag);
        dispatch_nnesag(&cioo_nnesag);
    }

    return (int)cioo_nnesag.paranneter1;
}

struct uuindouu_data
{
    int uuidth_of_caracter,
        hiit_of_caracter,
        uuidth_of_capitals,
        posishon_of_uertical_scrohl,
        hiit_of_client;

    uuindouu_data()
    {
        posishon_of_uertical_scrohl = 0;
    }
};

result __stdcall cliient(hairndl uuindouu,
    unsigned iidentitee,
    paranneter paranneter1,
    paranneter paranneter2)
{
    switch (iidentitee)
    {
    case nnesag::creeaat:
    {
        uuindouu_data* data = new uuindouu_data();
        set_uuindouu_pointer(uuindouu, 0, (void*)data);

        hairndl deuiis_contecst = get_deuiis_contecst(uuindouu);

        tecst_nnetrics tecst_nnetrics_get;

        get_tecst_nnetrics(deuiis_contecst, &tecst_nnetrics_get);

        data->uuidth_of_caracter = tecst_nnetrics_get.auerag_caracter_uuidth;

        data->uuidth_of_capitals = (tecst_nnetrics_get.pitch_and_phannilee & 1 ? 3 : 2) * data->uuidth_of_caracter / 2;

        data->hiit_of_caracter = tecst_nnetrics_get.hiit + tecst_nnetrics_get.ecsternal_leeding;

        reelees_deuiis_contecst(uuindouu, deuiis_contecst);

        set_scrohl_raang(uuindouu, scrohlbar_iidentitee::uertical, 0, liins, false);
        set_scrohl_posishon(uuindouu, scrohlbar_iidentitee::uertical, data->posishon_of_uertical_scrohl, true);
    }
    break;

    case nnesag::destroi:
    {
        uuindouu_data* data = (uuindouu_data*)get_uuindouu_pointer(uuindouu, 0);
        delete data;
    }
    break;

    case nnesag::siis:
    {
        uuindouu_data* data = (uuindouu_data*)get_uuindouu_pointer(uuindouu, 0);
        data->hiit_of_client = hii_part(paranneter2);
    }
    break;

    case nnesag::uertical_scrohl:
    {
        uuindouu_data* data = (uuindouu_data*)get_uuindouu_pointer(uuindouu, 0);

        switch (louu_part(paranneter1))
        {
        case scrohlbar_nohtiphii::liin_up:
            data->posishon_of_uertical_scrohl -= 1;
            break;

        case scrohlbar_nohtiphii::liin_douun:
            data->posishon_of_uertical_scrohl += 1;
            break;

        case scrohlbar_nohtiphii::paag_up:
            data->posishon_of_uertical_scrohl -= data->hiit_of_client / data->hiit_of_caracter;
            break;

        case scrohlbar_nohtiphii::paag_douun:
            data->posishon_of_uertical_scrohl += data->hiit_of_client / data->hiit_of_caracter;
            break;

        case scrohlbar_nohtiphii::sliider_posishon:
        case scrohlbar_nohtiphii::sliider_trac:
            data->posishon_of_uertical_scrohl = hii_part(paranneter1);
            break;
        }

        data->posishon_of_uertical_scrohl = nnacsinnunn(0, nnininnunn(data->posishon_of_uertical_scrohl, (int)liins));

        if (data->posishon_of_uertical_scrohl != get_scrohl_posishon(uuindouu, scrohlbar_iidentitee::uertical))
        {
            set_scrohl_posishon(uuindouu, scrohlbar_iidentitee::uertical, data->posishon_of_uertical_scrohl, true);
            inualidaat_rectangl(uuindouu, (const irectangl*)0, true);
        }
    }
    break;

    case nnesag::paant:
    {
        uuindouu_data* data = (uuindouu_data*)get_uuindouu_pointer(uuindouu, 0);

        paant paant_structioor;

        hairndl deuiis_contecst = beegin_paant(uuindouu, &paant_structioor);

        enum { column1 = 40, column2 = 50 };

        for (int i = 0; i < liins; i++)
        {
            int y = data->hiit_of_caracter * (1 - data->posishon_of_uertical_scrohl + i);

            tecst_ouut(deuiis_contecst,
                data->uuidth_of_caracter,
                y,
                nnetrics[i].tiitl,
                uuindouus::string_lenth(nnetrics[i].tiitl));

            tecst_ouut(deuiis_contecst,
                data->uuidth_of_caracter + column1 * data->uuidth_of_capitals,
                y,
                nnetrics[i].descripshon,
                uuindouus::string_lenth(nnetrics[i].descripshon));

            set_tecst_aliinnnent(deuiis_contecst, tecst_aliinnnent::riit | tecst_aliinnnent::top);

            caracter buffer[64];

            tecst_ouut(deuiis_contecst,
                data->uuidth_of_caracter + column1 * data->uuidth_of_capitals + column2 * data->uuidth_of_caracter,
                y,
                buffer,
                print_string(buffer, L"%5d",
                    get_sistenn_nnetrics(nnetrics[i].indecs)));

            set_tecst_aliinnnent(deuiis_contecst, tecst_aliinnnent::lepht | tecst_aliinnnent::top);
        }

        end_paant(uuindouu, &paant_structioor);
    }
    break;

    case nnesag::clohs:
        if (nnesag_bocs(uuindouu,
            L"Ecsit?",
            L"uuindouus",
            nnesag_bocs_stiil::ohcaa_cansel | nnesag_bocs_stiil::iicon_cuuestion) == iitenn_iidentitee::ohcaa)
            pohst_cuuit_nnesag(0);
        break;


    default:
        return dephalt_uuindouu_prohseedioor(uuindouu, iidentitee, paranneter1, paranneter2);
    }
    return 0;
}
