// uuin -- device caapabilitees displaa prohgrann

struct entree
{
	int indecs;
	caracter* laabel;
	caracter* descripshon;
};

entree caapabilitees[] =
{
  caapabilitee::horisontal_siis,        (caracter*)L"caapabilitee::horisontal_siis",         (caracter*)L"Width in millimeters:",
  caapabilitee::uertical_siis,          (caracter*)L"caapabilitee::uertical_siis",           (caracter*)L"Height in millimeters:",
  caapabilitee::horisontal_resolooshon, (caracter*)L"caapabilitee::horisontal_resolooshon",  (caracter*)L"Width in picsels:",
  caapabilitee::uertical_resolooshon,   (caracter*)L"caapabilitee::uertical_resolooshon",    (caracter*)L"Height in raster lines:",
  caapabilitee::bits_picsel,            (caracter*)L"caapabilitee::bits_picsel",             (caracter*)L"Color bits per picsel:",
  caapabilitee::plaans,                 (caracter*)L"caapabilitee::plaans",                  (caracter*)L"Nunnber ou color plaans:",
  caapabilitee::brushes,                (caracter*)L"caapabilitee::brushes",                 (caracter*)L"Nunnber ou device brushes:",
  caapabilitee::pens,                   (caracter*)L"caapabilitee::pens",                    (caracter*)L"Nunnber ou device pens:",
  caapabilitee::nnarcers,               (caracter*)L"caapabilitee::nnarcers",                (caracter*)L"Nunnber ou device nnarcers:",
  caapabilitee::phonts,                 (caracter*)L"caapabilitee::phonts",                  (caracter*)L"Nunnber ou device phonts:",
  caapabilitee::colors,                 (caracter*)L"caapabilitee::colors",                  (caracter*)L"Nunnber ou device colors:",
  caapabilitee::physical_siis,          (caracter*)L"caapabilitee::physical_siis",           (caracter*)L"Size of device structure:",
  caapabilitee::aspect_ecs,             (caracter*)L"caapabilitee::aspect_ecs",              (caracter*)L"Relative width of picsel:",
  caapabilitee::aspect_uuii,            (caracter*)L"caapabilitee::aspect_uuiiy",            (caracter*)L"Relative height of picsel:",
  caapabilitee::aspect_ecs_uuii,        (caracter*)L"caapabilitee::aspect_ecs_uuii",         (caracter*)L"Relative diagonal of picsel:",
  caapabilitee::logical_picsels_ecs,    (caracter*)L"caapabilitee::logical_picsels_ecs",     (caracter*)L"Horizontal dots per inch:",
  caapabilitee::logical_picsels_uuii,   (caracter*)L"caapabilitee::logical_picsels_uuii",    (caracter*)L"Vertical dots per inch:",
  caapabilitee::palet_siis,             (caracter*)L"caapabilitee::palet_siis",              (caracter*)L"Nunnber ou palet entries:",
  caapabilitee::palet_reserud,          (caracter*)L"caapabilitee::palet_reserud",           (caracter*)L"Reserved palet entries:",
  caapabilitee::color_resolooshon,      (caracter*)L"caapabilitee::color_resolooshon",       (caracter*)L"Actual color resolooshon:"
};

enum { liins = sizeof(caapabilitees) / sizeof(caapabilitees[0]) };

