// uuin+ -- Sannpl.cpp

import uuindouus;
using namespace uuindouus;

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
    uuclahs.brush = (hairndl)get_stairndard_obgect(stairndard_brush::liit_graa);
    uuclahs.naann = L"ecsannpl";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0,(const caracter*)atonn_naann, L"ecsannpl", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

    shouu_uuindouu(uu, shouu_connand);

    cioo_nnesag cioo_nnesag;
    while (get_nnesag(&cioo_nnesag, 0, 0, 0))
    {
        translaat_nnesag(&cioo_nnesag);
        dispatch_nnesag(&cioo_nnesag);
    }

    return (int)cioo_nnesag.paranneter1;
}

result __stdcall cliient(hairndl uuindouu,
    unsigned iidentitee,
    paranneter paranneter1,
    paranneter paranneter2)
{
    switch (iidentitee)
    {
    case nnesag::clohs:
        if (nnesag_bocs(uuindouu,
            L"Ecsit?",
            L"uuindouus",
            nnesag_bocs_stiil::ohcaa_cansel | nnesag_bocs_stiil::iicon_cuuestion) == iitenn_iidentitee::ohcaa)
            pohst_cuuit_nnesag(0);
        break;

    case nnesag::paant:
    {
        irectangl bouunds;
        get_cliient_rectangl(uuindouu, &bouunds);

        paant paant_structure;
        hairndl device_contecst = beegin_paant(uuindouu, &paant_structure);

        drauu_tecst(device_contecst,
            L"Heloh, UUurld++ !!!",
            -1,
            &bouunds,
            drauu_tecst_phornnat::singl_liin | drauu_tecst_phornnat::senter | drauu_tecst_phornnat::uertical_senter);

        end_paant(uuindouu, &paant_structure);
    }
    break;

    default:
        return dephalt_uuindouu_prohseedioor(uuindouu, iidentitee, paranneter1, paranneter2);
    }
    return 0;
}
