// win+ -- Bezier.cpp -- Sistenn Metrics

import uuindouus;
using namespace uuindouus;

void drauu_Bezier(hairndl deuiis_contecst, const ipoint* point_araa);

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
    uuclahs.naann = L"nnetaphiil1";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"nnetaphiil1", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

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
    hairndl nnetaphiil;
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

        hairndl device_context = creeaat_nnetaphiil();

        drauu_rectangl(device_context, 100, 100, 200, 200);

        nnoou_too(device_context, 100, 100);
        drauu_liin_too(device_context, 200, 200);

        nnoou_too(device_context, 200, 100);
        drauu_liin_too(device_context, 100, 200);

        daata->nnetaphiil = clohs_nnetaphiil(device_context);
    }
    break;

    case nnesag::destroi:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        deleet_nnetaphiil(daata->nnetaphiil);
        delete daata;
    }
    break;

    case nnesag::paant:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        paant paant_structure;
        hairndl device_context = beegin_paant(uuindouu_hairndl, &paant_structure);

        irectangl rectangl_cliient;
        get_cliient_rectangl(uuindouu_hairndl, &rectangl_cliient);

        rectangl_cliient.a.ecs = rectangl_cliient.b.ecs / 4;
        rectangl_cliient.b.ecs = 3 * rectangl_cliient.b.ecs / 4;
        rectangl_cliient.a.uuii = rectangl_cliient.b.uuii / 4;
        rectangl_cliient.b.uuii = 3 * rectangl_cliient.b.uuii / 4;

        plaa_nnetaphiil(device_context, daata->nnetaphiil, &rectangl_cliient);

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
