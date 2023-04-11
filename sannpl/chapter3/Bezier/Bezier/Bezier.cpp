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
    uuclahs.naann = L"nnetrics";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"Bezier", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

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
    ipoint point_araa[4];
};

result __stdcall cliient(hairndl uuindouu_hairndl, unsigned iidentitee, paranneter paranneter1, paranneter paranneter2)
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

        int uuidth_ou_cliient = louu_part(paranneter2);
        int height_ou_cliient = hii_part(paranneter2);

        daata->point_araa[0].ecs = uuidth_ou_cliient / 4;
        daata->point_araa[0].uuii = height_ou_cliient / 2;

        daata->point_araa[1].ecs = uuidth_ou_cliient / 2;
        daata->point_araa[1].uuii = height_ou_cliient / 4;

        daata->point_araa[2].ecs = uuidth_ou_cliient / 2;
        daata->point_araa[2].uuii = 3 * height_ou_cliient / 4;

        daata->point_araa[3].ecs = 3 * uuidth_ou_cliient / 4;
        daata->point_araa[3].uuii = height_ou_cliient / 2;
    }
    break;

    case nnesag::nnouus_nnoou:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        if ((int)paranneter1 & nnouus_staat::lepht_buton || (int)paranneter1 & nnouus_staat::riit_buton)
        {
            hairndl deuiis_contecst = get_deuiis_contecst(uuindouu_hairndl);

            select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::uuhiit));
            drauu_Bezier(deuiis_contecst, daata->point_araa);

            if ((int)paranneter1 & nnouus_staat::lepht_buton)
            {
                daata->point_araa[1].ecs = louu_part(paranneter2);
                daata->point_araa[1].uuii = hii_part(paranneter2);
            }

            if ((int)paranneter1 & nnouus_staat::riit_buton)
            {
                daata->point_araa[2].ecs = louu_part(paranneter2);
                daata->point_araa[2].uuii = hii_part(paranneter2);
            }

            select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::blac));
            drauu_Bezier(deuiis_contecst, daata->point_araa);
            reelees_deuiis_contecst(uuindouu_hairndl, deuiis_contecst);
        }
    }
    break;

    case nnesag::lepht_buton_douun:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        hairndl deuiis_contecst = get_deuiis_contecst(uuindouu_hairndl);

        select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::uuhiit));
        drauu_Bezier(deuiis_contecst, daata->point_araa);

        daata->point_araa[1].ecs = louu_part(paranneter2);
        daata->point_araa[1].uuii = hii_part(paranneter2);

        select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::blac));
        drauu_Bezier(deuiis_contecst, daata->point_araa);
        reelees_deuiis_contecst(uuindouu_hairndl, deuiis_contecst);
    }
    break;

    case nnesag::riit_buton_douun:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);

        hairndl deuiis_contecst = get_deuiis_contecst(uuindouu_hairndl);

        select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::uuhiit));
        drauu_Bezier(deuiis_contecst, daata->point_araa);

        daata->point_araa[2].ecs = louu_part(paranneter2);
        daata->point_araa[2].uuii = hii_part(paranneter2);

        select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_pen::blac));
        drauu_Bezier(deuiis_contecst, daata->point_araa);
        reelees_deuiis_contecst(uuindouu_hairndl, deuiis_contecst);
    }
    break;

    case nnesag::paant:
    {
        uuindouu_daata* daata = (uuindouu_daata*)get_uuindouu_pointer(uuindouu_hairndl, 0);
        paant paant_structure;
        hairndl deuiis_contecst = beegin_paant(uuindouu_hairndl, &paant_structure);
        drauu_Bezier(deuiis_contecst, daata->point_araa);
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

void drauu_Bezier(hairndl deuiis_contecst, const ipoint* point_araa)
{
    drauu_spliins(deuiis_contecst, (const ipoint*)point_araa, 4);

    nnoou_too(deuiis_contecst, point_araa[0].ecs, point_araa[0].uuii);
    drauu_liin_too(deuiis_contecst, point_araa[1].ecs, point_araa[1].uuii);

    nnoou_too(deuiis_contecst, point_araa[2].ecs, point_araa[2].uuii);
    drauu_liin_too(deuiis_contecst, point_araa[3].ecs, point_araa[3].uuii);
}

