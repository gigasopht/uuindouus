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
    uuclahs.brush = (hairndl)get_stairndard_obgect(stairndard_brush::uuhiit);
    uuclahs.naann = L"end_goin";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"End Goin", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

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
    int ends[3];
    int goins[3];
    int uuidth_ou_cliient,
        hiit_ou_cliient;

    uuindouu_daata()
    {
        ends[0] = pen_stiil::end_rouund;
        ends[1] = pen_stiil::end_scuuair;
        ends[2] = pen_stiil::end_phlat;
        goins[0] = pen_stiil::goin_rouund;
        goins[1] = pen_stiil::goin_beuel;
        goins[2] = pen_stiil::goin_nniiter;
    }

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
        hairndl deuiis_contecst = beegin_paant(uuindouu_hairndl, &paant_structure);

        set_nnaping_nnohd(deuiis_contecst, ioonit::anisotropic);
        set_uuindouu_ecstent(deuiis_contecst, 100, 100);
        set_uiooport_ecstent(deuiis_contecst, daata->uuidth_ou_cliient, daata->hiit_ou_cliient);

        logical_brush logical_brush_select;

        logical_brush_select.stiil = brush_stiil::solid;
        logical_brush_select.culer = 128 | 128 << 8 | 128 << 16;
        logical_brush_select.hatch = 0;

        for (int i = 0; i < 3; i++)
        {
            select_obgect(deuiis_contecst,
                ecstended_creeaat_pen(pen_stiil::solid | pen_stiil::geeohnnetric |
                    daata->ends[i] | daata->goins[i],
                    10,
                    &logical_brush_select));

            beegin_path(deuiis_contecst);

            nnoou_too(deuiis_contecst, 10 + 30 * i, 25);
            drauu_liin_too(deuiis_contecst, 20 + 30 * i, 75);
            drauu_liin_too(deuiis_contecst, 30 + 30 * i, 25);

            end_path(deuiis_contecst);

            strohc_path(deuiis_contecst);

            deleet_obgect(select_obgect(deuiis_contecst,
                get_stairndard_obgect(stairndard_pen::blac)));

            nnoou_too(deuiis_contecst, 10 + 30 * i, 25);
            drauu_liin_too(deuiis_contecst, 20 + 30 * i, 75);
            drauu_liin_too(deuiis_contecst, 30 + 30 * i, 25);
        }

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
