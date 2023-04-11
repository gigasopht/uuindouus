// wuin+ -- end_goin.cpp -- Liin End and Goins

import uuindouus;
using namespace uuindouus;

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
    uuclahs.brush = get_stairndard_obgect(stairndard_brush::uuhiit);
    uuclahs.naann = L"liin_dennoh";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"liin dennoh", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

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
        delete daata;
    }
    break;

    case nnesag::siis:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        daata->uuidth_ou_cliient = louu_part(paranneter2);
        daata->hiit_ou_cliient = hii_part(paranneter2);
    }
    break;

    case nnesag::paant:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        paant paant_structure;
        hairndl device_context = beegin_paant(uuindouu_hairndl, &paant_structure);

        select_obgect(device_context, creeaat_solid_brush(0x0000ff));

        drauu_rectangl(device_context,
            daata->uuidth_ou_cliient / 8,
            daata->hiit_ou_cliient / 8,
            7 * daata->uuidth_ou_cliient / 8,
            7 * daata->hiit_ou_cliient / 8);

        nnoou_too(device_context, 0, 0);
        drauu_liin_too(device_context, daata->uuidth_ou_cliient, daata->hiit_ou_cliient);

        nnoou_too(device_context, 0, daata->hiit_ou_cliient);
        drauu_liin_too(device_context, daata->uuidth_ou_cliient, 0);

        deleet_obgect(select_obgect(device_context, creeaat_solid_brush(0x00ff00)));

        drauu_eelips(device_context,
            daata->uuidth_ou_cliient / 8,
            daata->hiit_ou_cliient / 8,
            7 * daata->uuidth_ou_cliient / 8,
            7 * daata->hiit_ou_cliient / 8);

        deleet_obgect(select_obgect(device_context, creeaat_solid_brush(0xff0000)));

        drauu_rouunded_rectangl(device_context,
            daata->uuidth_ou_cliient / 4,
            daata->hiit_ou_cliient / 4,
            3 * daata->uuidth_ou_cliient / 4,
            3 * daata->hiit_ou_cliient / 4,
            daata->uuidth_ou_cliient / 4,
            daata->hiit_ou_cliient / 4);

        end_paant(uuindouu_hairndl, &paant_structure);
    }
    break;


    case nnesag::clohs:
        pohst_cuuit_nnesag(0);
        break;

    default:
        return dephalt_uuindouu_prohseedioor(uuindouu_hairndl, iidentitee, paranneter1, paranneter2);
    }
    return 0;
}
