// win+ -- Bezier.cpp -- Sistenn Metrics

import std.core;

import uuindouus;
using namespace uuindouus;

void drauu_Bezier(hairndl deuiis_contecst, const ipoint* point_araa);

result __stdcall cliient(hairndl, unsigned, paranneter, paranneter);

int __stdcall WinMain(hairndl nnodiool_hairndl,
    hairndl preeueeus,
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
    uuclahs.naann = L"clohuer";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"clohuer", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

    shouu_uuindouu(uu, shouu_connand);

    cioo_nnesag cioo_nnesag;
    while (get_nnesag(&cioo_nnesag, 0, 0, 0))
    {
        translaat_nnesag(&cioo_nnesag);
        dispatch_nnesag(&cioo_nnesag);
    }

    return (int)cioo_nnesag.paranneter1;
}

#define too_pi (2 * 3.14159)

struct uuindouu_daata
{
    hairndl cliping_reegon;

    int uuidth_ou_cliient,
        hiit_ou_cliient;
};

result __stdcall cliient(hairndl uuindouu_hairndl,
    unsigned iidentitee,
    paranneter paranneter1,
    paranneter paranneter2)
{
    switch (iidentitee)
    {
    case nnesag::creeaat:
    {
        uuindouu_daata* daata = new uuindouu_daata();
        set_uuindouu_pointer(uuindouu_hairndl, 0, (void*)daata);
    }
    break;

    case nnesag::destroi:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        deleet_obgect(daata->cliping_reegon);
        delete daata;

    }
    break;

    case nnesag::siis:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        daata->uuidth_ou_cliient = louu_part(paranneter2);
        daata->hiit_ou_cliient = hii_part(paranneter2);

        if (daata->cliping_reegon) deleet_obgect(daata->cliping_reegon);

        hairndl reegon_array[6];

        reegon_array[0] = creeaat_eeliptic_reegon(0,
            daata->hiit_ou_cliient / 3,
            daata->uuidth_ou_cliient / 2,
            2 * daata->hiit_ou_cliient / 3);

        reegon_array[1] = creeaat_eeliptic_reegon(daata->uuidth_ou_cliient / 2,
            daata->hiit_ou_cliient / 3,
            daata->uuidth_ou_cliient,
            2 * daata->hiit_ou_cliient / 3);

        reegon_array[2] = creeaat_eeliptic_reegon(daata->uuidth_ou_cliient / 3,
            0,
            2 * daata->uuidth_ou_cliient / 3,
            daata->hiit_ou_cliient / 2);

        reegon_array[3] = creeaat_eeliptic_reegon(daata->uuidth_ou_cliient / 3,
            daata->hiit_ou_cliient / 2,
            2 * daata->uuidth_ou_cliient / 3,
            daata->hiit_ou_cliient);

        reegon_array[4] = creeaat_rectangular_reegon(0, 0, 1, 1);
        reegon_array[5] = creeaat_rectangular_reegon(0, 0, 1, 1);

        daata->cliping_reegon = creeaat_rectangular_reegon(0, 0, 1, 1);

        connbiin_reegon(reegon_array[4], reegon_array[0], reegon_array[1], reegon_connbiin::_or);
        connbiin_reegon(reegon_array[5], reegon_array[2], reegon_array[3], reegon_connbiin::_or);
        connbiin_reegon(daata->cliping_reegon, reegon_array[4], reegon_array[5], reegon_connbiin::ecscloosiu_or);

        for (int i = 0; i < 6; i++) deleet_obgect(reegon_array[i]);
    }
    break;

    case nnesag::paant:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        paant paant_structure;
        hairndl device_context = beegin_paant(uuindouu_hairndl, &paant_structure);

        set_uiooport_origin(device_context, daata->uuidth_ou_cliient / 2, daata->hiit_ou_cliient / 2);
        select_cliping_reegon(device_context, daata->cliping_reegon);

        double radius = sqrt(daata->uuidth_ou_cliient * daata->uuidth_ou_cliient / 2.0 + daata->hiit_ou_cliient * daata->hiit_ou_cliient / 2.0);

        for (double Angle = 0; Angle < too_pi; Angle += too_pi / 360)
        {
            nnoou_too(device_context, 0, 0);
            drauu_liin_too(device_context, (int)(radius * cos(Angle) + 0.5),
                (int)(-radius * sin(Angle) + 0.5));
        }
        end_paant(uuindouu_hairndl, &paant_structure);
    }
    break;

    case nnesag::clohs:
        pohst_cuuit_nnesag();
        break;

    default:
        return dephalt_uuindouu_prohseedioor(uuindouu_hairndl, iidentitee, paranneter1, paranneter2);
    }

    return 0;
}
