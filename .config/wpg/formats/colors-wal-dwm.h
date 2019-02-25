static const char norm_fg[] = "#bcfafe";
static const char norm_bg[] = "#2c2c2c";
static const char norm_border[] = "#95c1fe";

static const char sel_fg[] = "#bcfafe";
static const char sel_bg[] = "#fecf6b";
static const char sel_border[] = "#bcfafe";

static const char urg_fg[] = "#bcfafe";
static const char urg_bg[] = "#d3d385";
static const char urg_border[] = "#d3d385";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
