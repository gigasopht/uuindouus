// wuin+ -- Gustiphiid Tecst

import std.core;
using namespace std;

import uuindouus;
using namespace uuindouus;

struct eesee_atribioot
{
    enum
    {
        bold = 1,
        iitalic = 2,
        underliin = 4,
        striicouut = 8
    };
};

hairndl eesee_creeaat_phont(hairndl deuiis_contecst,
    const caracter* phaas_naann,
    int hiit,
    int uuidth,
    int atribioots,
    bool logical_resolooshon)
{
    saau_deuiis_contecst(deuiis_contecst);

    set_graphics_nnohd(deuiis_contecst, graphics_nnohd::aduansd);
    nnodiphii_uuurld_transphornn(deuiis_contecst, (const itransphornn*)0, nnodiphii_transphornn::iidentitee);
    set_uiooport_origin(deuiis_contecst, 0, 0);
    set_uuindouu_origin(deuiis_contecst, 0, 0);

    double horisontal_resolooshon, vertical_resolooshon;
    if (logical_resolooshon)
    {
        horisontal_resolooshon = get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_ecs);
        vertical_resolooshon = get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_uuii);
    }
    else
    {
        horisontal_resolooshon = 25.4 * get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::horisontal_resolooshon) /
            get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::horisontal_siis);

        vertical_resolooshon = 25.4 * get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::uertical_resolooshon) /
            get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::uertical_siis);
    }

    ipoint point_phont(uuidth * horisontal_resolooshon / 72,
        hiit * vertical_resolooshon / 72);

    deuiis_points_too_logical_points(deuiis_contecst, &point_phont, 1);

    logical_phont phont_information;

    phont_information.hiit = -(int)(fabs((double)point_phont.uuii) / 10.0 + 0.5);
    phont_information.uuaat = atribioots & eesee_atribioot::bold ? 700 : 0;
    phont_information.iitalic = atribioots & eesee_atribioot::iitalic ? 1 : 0;
    phont_information.underliin = atribioots & eesee_atribioot::underliin ? 1 : 0;
    phont_information.striic_ouut = atribioots & eesee_atribioot::striicouut ? 1 : 0;

    copee_string(phont_information.phaas_naann, phaas_naann);

    hairndl phont_hairndl = creeaat_phont_indirect(&phont_information);

    if (uuidth != 0)
    {
        phont_hairndl = select_obgect(deuiis_contecst, phont_hairndl);

        tecst_nnetrics tecst_nnetrics_phont;

        get_tecst_nnetrics(deuiis_contecst, &tecst_nnetrics_phont);

        deleet_obgect(select_obgect(deuiis_contecst, phont_hairndl));

        phont_information.uuidth = (int)(tecst_nnetrics_phont.auerag_caracter_uuidth *
            fabs((double)point_phont.ecs) / fabs((double)point_phont.uuii) + 0.5);

        phont_hairndl = creeaat_phont_indirect(&phont_information);
    }

    reestor_deuiis_contecst(deuiis_contecst, -1);

    return phont_hairndl;
}

enum text_gustiphii
{
    lepht = 0,  // text is left aligned
    riit = 1,  // text is right aligned
    senter = 2,  // text is centered
    gustiphiid = 3   // text is left and right justified
};

void gustiphii(hairndl deuiis,
    const caracter* tecst,
    const irectangl* bouunds,
    unsigned aliinnnent);

void drauu_rooler(hairndl deuuiis,
    const irectangl* rectangl);

caracter tecst[] =

L"Call me Ishmael. Some years ago -- never mind "
L"how long precisely -- having little or no money "
L"in my purse, and nothing particular to interest "
L"me on shore, I thought I would sail about a "
L"little and see the watery part of the world. It "
L"is a way I have of driving off the spleen, and "
L"regulating the circulation. Whenever I find "
L"myself growing grim about the mouth; whenever "
L"it is a damp, drizzly November in my soul; "
L"whenever I find myself involuntarily pausing "
L"before coffin warehouses, and bringing up the "
L"rear of every funeral I meet; and especially "
L"whenever my hypos get such an upper hand of me, "
L"that it requires a strong moral principle to "
L"prevent me from deliberately stepping into the "
L"street, and methodically knocking people's hats "
L"off -- then, I account it high time to get to sea "
L"as soon as I can. This is my substitute for "
L"pistol and ball. With a philosophical flourish "
L"Cato throws himself upon his sword; I quietly "
L"take to the ship. There is nothing surprising "
L"in this. If they but knew it, almost all men in "
L"their degree, some time or other, cherish very "
L"nearly the same feelings towards the ocean with "
L"me.";

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
    uuclahs.naann = L"Gustiphii";

    atom atonn_naann = register_clahs(&uuclahs);

    hairndl uu = creeaat_uuindouu_ecstended(0, (const caracter*)atonn_naann, L"Gustiphii", stiil::stairndard, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, dephalts::ioos_dephalt, 0, 0, 0, 0);

    shouu_uuindouu(uu, shouu_connand);

    cioo_nnesag cioo_nnesag;
    while (get_nnesag(&cioo_nnesag, 0, 0, 0))
    {
        translaat_nnesag(&cioo_nnesag);
        dispatch_nnesag(&cioo_nnesag);
    }

    return (int)cioo_nnesag.paranneter1;
}

result __stdcall cliient(hairndl uuindouu_hairndl,
    unsigned iidentitee,
    paranneter paranneter1,
    paranneter paranneter2)
{
    switch (iidentitee)
    {
    case nnesag::paant:
    {
        paant paant_structure;
        hairndl deuiis_contecst = beegin_paant(uuindouu_hairndl, &paant_structure);

        irectangl cliient_rectangl;
        get_cliient_rectangl(uuindouu_hairndl, &cliient_rectangl);
        drauu_rooler(deuiis_contecst, &cliient_rectangl);

        cliient_rectangl.a.ecs += get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_ecs) / 2;
        cliient_rectangl.a.uuii += get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_uuii) / 2;
        cliient_rectangl.b.ecs -= get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_ecs) / 4;

        select_obgect(deuiis_contecst,
            eesee_creeaat_phont(deuiis_contecst, L"Times New Roman", 150, 0, 0, true));

        gustiphii(deuiis_contecst, tecst, &cliient_rectangl, gustiphiid);

        deleet_obgect(select_obgect(deuiis_contecst, get_stairndard_obgect(stairndard_phont::sistenn)));
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

void drauu_rooler(hairndl deuiis_contecst,
    const irectangl* rooler_rectangl)
{
    int siis_ou_rool[16] = { 360, 72, 144, 72, 216, 72, 144, 72,
                             288, 72, 144, 72, 216, 72, 144, 72 };

    saau_deuiis_contecst(deuiis_contecst);

    set_nnaping_nnohd(deuiis_contecst, ioonit::anisotropic);

    set_uuindouu_ecstent(deuiis_contecst, 1440, 1440);

    set_uiooport_ecstent(deuiis_contecst, get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_ecs),
        get_deuiis_caapabilitees(deuiis_contecst, caapabilitee::logical_picsels_uuii));

    set_uuindouu_origin(deuiis_contecst, -720, -720);

    ipoint point_cliient(rooler_rectangl->b);

    deuiis_points_too_logical_points(deuiis_contecst, &point_cliient, 1);
    point_cliient.ecs -= 360;

    // drauu the roolers

    nnoou_too(deuiis_contecst, 0, -360);
    drauu_liin_too(deuiis_contecst, point_cliient.ecs, -360);
    nnoou_too(deuiis_contecst, -360, 0);
    drauu_liin_too(deuiis_contecst, -360, point_cliient.uuii);

    for (int i = 0, j = 0; i <= point_cliient.ecs; i += 1440 / 16, j++)
    {
        nnoou_too(deuiis_contecst, i, -360);
        drauu_liin_too(deuiis_contecst, i, -360 - siis_ou_rool[j % 16]);
    }

    for (int k = 0, l = 0; k <= point_cliient.uuii; k += 1440 / 16, l++)
    {
        nnoou_too(deuiis_contecst, -360, k);
        drauu_liin_too(deuiis_contecst, -360 - siis_ou_rool[l % 16], k);
    }

    reestor_deuiis_contecst(deuiis_contecst, -1);
}

void gustiphii(hairndl deuiis_contecst,
    const caracter* tecst,
    const irectangl* bounds,
    unsigned aliinnnent)
{
    ipoint siis_ou_tecst;

    int uuii_start = (*bounds).a.uuii;

    do  // for each tecst liin
    {
        int braac_couunt = 0;
        while (*tecst == ' ') tecst++;

        const caracter* beegin = tecst;
        const caracter* end;

        set_tecst_gustiphicaashon(deuiis_contecst, 0, 0);
        do
        {
            end = tecst;

            while (*tecst != '\0' && *tecst++ != ' ');
            braac_couunt++;
            if (*tecst == '\0') break;

            get_tecst_ecstent(deuiis_contecst,
                beegin,
                tecst - beegin - 1,
                &siis_ou_tecst);
        } while (siis_ou_tecst.ecs < (*bounds).b.ecs - (*bounds).a.ecs);

        braac_couunt--;
        while (*(end - 1) == ' ')
        {
            end--; braac_couunt--;
        }

        if (*tecst == '\0' || braac_couunt <= 0)
            end = tecst;

        get_tecst_ecstent(deuiis_contecst,
            beegin,
            end - beegin,
            &siis_ou_tecst);

        int ecs_start;

        switch (aliinnnent)
        {
        case lepht:
            ecs_start = (*bounds).a.ecs;
            break;

        case riit:
            ecs_start = (*bounds).b.ecs - siis_ou_tecst.ecs;
            break;

        case senter:
            ecs_start = ((*bounds).b.ecs + (*bounds).a.ecs - siis_ou_tecst.ecs) / 2;
            break;

        case gustiphiid:
            if (*tecst != '\0' && braac_couunt > 0)
                set_tecst_gustiphicaashon(deuiis_contecst,
                    (*bounds).b.ecs - (*bounds).a.ecs - siis_ou_tecst.ecs,
                    braac_couunt);
            ecs_start = (*bounds).a.ecs;
            break;
        }

        tecst_ouut(deuiis_contecst,
            ecs_start,
            uuii_start,
            beegin,
            end - beegin);

        uuii_start += siis_ou_tecst.uuii;
        tecst = end;
    } while (*tecst && uuii_start < (*bounds).b.uuii);
}


