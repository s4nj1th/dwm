/* See LICENSE file for copyright and license details. */

/* Constants */
#define TERMINAL "st"
#define TERMCLASS "St"
#define BROWSER "firefox"

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int gappx     = 4;        /* gap pixel between windows */
static const unsigned int snap      = 3;        /* snap pixel */
static const int swallowfloating    = 0;        /* 1 means swallow floating windows by default */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
#define ICONSIZE	16   /* icon size */
#define ICONSPACING	8   /* space between icon and title */
static const int user_bh            = 0;       /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
//static const char *fonts[]        = { "Liberation Mono:antialias=true:style=Regular:size=10", "fontawesome:antialias=true:size=10", "JoyPixels:antialias=true:autohint=true:size=10" };
static const char *fonts[]        = { "Input:size=8:antialias=true:style=Semiold", "JetBrainsMono Nerd Font:size=9:autohint=true", "TAMu_Maduram:size=11:autohint=true:antialias=true:style=Regular", "JoyPixels:size=10:antialias=true" };
//static const char *fonts[]        = { "JetBrains Mono Nerd Font:size=9:antialias=true:style=Regular", "TAMu_Maduram:size=13:autohint=true:antialias=true:style=Regular", "JoyPixels:size=14:antialias=true" };
static const char dmenufont[]       = "Input:size=8:antialias=true:style=Semiold";
static char normbgcolor[]           = "#1d1f21";
static char normbordercolor[]       = "#1d1f21";
static char normfgcolor[]           = "#c5c8c6";
static char selfgcolor[]            = "#e8e8e8";
static char selbordercolor[]        = "#224488";
static char selbgcolor[]            = "#224488";
static char *colors[][3] = {
       /*               fg           bg           border   */
       [SchemeNorm] = { normfgcolor, normbgcolor, normbordercolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};

/* tagging */
static const char *tags[] = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
//static const char *tags[] = { "₁", "₂", "₃", "₄", "₅", "₆", "₇", "₈" };
//static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const char *tagsalt[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static const int momentaryalttags = 1; /* 1 means alttags will show only when key is held down*/

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class       instance  title           tags mask  isfloating  isterminal  noswallow	isfakefullscr  monitor */
	{ "Gimp",      NULL,     NULL,           0,         1,          0,           1,        	0,		-1 },
	{ "Tor",       NULL,     NULL,           0,         1,          0,           0,        	1,		-1 },
	{ "firefox",   NULL,     NULL,     /*1 << 8*/ 0,    0,          0,           0,        	0,		-1 },
  {"Lxappearance",	NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
{"Blueman-manager", 	NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
	{"Soundux", 	  NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
	{"Cheese",      NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
  { NULL,         NULL, "Picture-in-Picture",   0,         1,          0,           0,        	0,		-1 },
  { NULL,         NULL, "Picture in picture",   0,         1,          0,           0,        	0,		-1 },
   {"gnome-calculator", NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
{"processing-app-Base", NULL,    NULL,           0,         1,          0,           0,        	0,		-1 },
	{ TERMCLASS,    NULL,    NULL,           0,         0,          1,           1,		0,		-1 },
	//{ "URxvt",     NULL,     NULL,           0,         0,          1,           1,      	0,		-1 },
	//{ "Alacritty", NULL,     NULL,           0,         0,          1,           1,       0,		-1 },
	{ "TelegramDesktop",     NULL,   NULL,    0,        1,          0,           0,       0,		-1 },
	{ "whatsdesk",     NULL,   NULL,    0,        1,          0,           0,       0,		-1 },
	{ "discord",     NULL,   NULL,    0,        1,          0,           0,       0,		-1 },
	{ "vesktop",     NULL,   NULL,    0,        1,          0,           0,       0,		-1 },
	{ "St",     "audMxr",   NULL,    0,        1,          0,           0,       0,		-1 },
	{ "toolkit",     NULL,   NULL,    0,        1,          0,           0,       0,		-1 },
	{ NULL,        NULL,     "Event Tester", 0,         0,          0,           1,        	0,		-1 }, /* xev */

	/* class       instance  title           tags mask  isfloating  monitor
	{ "Gimp",      NULL,     NULL,           0,         1,          -1 },
	{ "Tor",       NULL,     NULL,           0,         1,          -1 },
	{ "Firefox",   NULL,     NULL,           1 << 8,    0,          -1 },
{"mullvadbrowser", NULL,     NULL,           0,         1,          -1 },
  {"Lxappearance", NULL,     NULL,           0,         1,          -1 },
	{ "St",        NULL,     NULL,           0,         0,          -1 },
	{ "URxvt",     NULL,     NULL,           0,         0,          -1 },
	{ "Alacritty", NULL,     NULL,           0,         0,          -1 },
	{ NULL,        NULL,     "Event Tester", 0,         0,          -1 },  xev */

};

/* layout(s) */
static const float mfact     = 0.5;  /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 0; /* 1 will force focus on the fullscreen window */
static const int attachbelow = 1;    /* 1 means attach after the currently active window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-i", "-fn", dmenufont, "-nb", normbgcolor, "-nf", normfgcolor, "-sb", selbordercolor, "-sf", selfgcolor, NULL };
//static const char *dmenucmd[] = { "dmenu_run", "-i", "-fn", dmenufont, NULL };
//static const char *termcmd[]  = { "urxvt", NULL };
//static const char *termcmd[]  = { "st", NULL };
static const char *termcmd[]  = { TERMINAL, NULL };
static const char *browcmd[]  = { BROWSER, NULL };
static const char *emacscmd[] = { "emacs", NULL };
static const char *lockcmd[]  = { "slock", NULL };
static const char *suspcmd[]  = { "systemctl", "suspend", NULL };
static const char *setbg[]    = { "setbg", NULL };
static const char *incvol[]   = { "pamixer", "--allow-boost", "-i", "1", NULL };
static const char *decvol[]   = { "pamixer", "--allow-boost", "-d", "1", NULL };
static const char *incbrt[]   = { "brillo", "-q", "-A", "2", NULL };
static const char *decbrt[]   = { "brillo", "-q", "-U", "2", NULL };
static const char *mutvol[]   = { "pamixer", "-t", NULL };
static const char *unmvol[]   = { "pamixer", "-u", NULL };
static const char *scrShot[]  = { "scrShot", NULL };
static const char *scrShotAll[]  = { "scrShotAll", NULL };
static const char *scrShotSave[]  = { "scrShotSave", NULL };
static const char *phrasescmd[] = { "freqPhrases", NULL };

static const Key keys[] = {
	/* modifier                     key		function        argument */
	{ MODKEY,                       XK_space,	spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return,	spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_b,		    spawn,          {.v = browcmd } },
	{ MODKEY,			                  XK_t,		    spawn,		{.v = emacscmd } },
	{ MODKEY,			                  XK_Insert,	spawn,		{.v = phrasescmd } },
	{ MODKEY,                       XK_g,		togglebar,      {0} },
	{ MODKEY,                       XK_j,		focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,		focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_s,		incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,		incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,		setmfact,       {.f = -0.02} },
	{ MODKEY,                       XK_l,		setmfact,       {.f = +0.02} },
	{ MODKEY,                       XK_f,		zoom,           {0} },
	{ MODKEY,                       XK_Tab,		view,           {0} },
	{ MODKEY,                       XK_q,		killclient,     {0} },
	{ MODKEY,                       XK_w,		setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_e,		setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_r,		setlayout,      {.v = &layouts[2]} },
	//{ MODKEY,			XK_space,	setlayout,	{0} },
	{ MODKEY|ShiftMask,             XK_space,	togglefloating, {0} },
	{ MODKEY,                       XK_0,		view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,		tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,	focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period,	focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,	tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,	tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_n,		togglealttag,	{0} },
	{ MODKEY,			XK_minus,	setgaps,	{.i = -1 } },
	{ MODKEY,			XK_equal,	setgaps,	{.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,	setgaps,	{.i = 0 } },
	{ MODKEY,                       XK_F5,		xrdb,		{.v = NULL } },
	{ MODKEY|ShiftMask,             XK_F5,		spawn,		{.v = setbg} },
	{ MODKEY,                       XK_Print,	spawn,		{.v = scrShot } },
	{ MODKEY|ShiftMask,             XK_Print,	spawn,		{.v = scrShotAll} },
	{ MODKEY|ControlMask,           XK_Print,	spawn,		{.v = scrShotSave} },
	{ MODKEY,                       XK_x,		movecenter,	{0} },
	{ MODKEY|ControlMask,		XK_minus,	spawn,	   	{.v = decvol } },
	{ MODKEY|ControlMask,		XK_equal,	spawn,	   	{.v = incvol } },
	{ MODKEY|ControlMask,		XK_m,		spawn,	   	{.v = mutvol } },
	{ MODKEY|ControlMask,		XK_minus,	spawn,	   	{.v = unmvol } },
	{ MODKEY|ControlMask,		XK_equal,	spawn,	   	{.v = unmvol } },
	{ MODKEY|ShiftMask,		XK_Down,	spawn,	   	{.v = decbrt } },
	{ MODKEY|ShiftMask,		XK_Up,		spawn,		{.v = incbrt } },
	//{ XK_XF86MonBrightnessDown, NULL,	spawn,	{.v = decbrt } },
	//{ XK_XF86MonBrightnessUp, NULL,	spawn,	{.v = incbrt } },
	{ MODKEY|ControlMask,		XK_Down,	spawn,	   	{.v = decvol } },
	{ MODKEY|ControlMask,		XK_Up,		spawn,	   	{.v = incvol } },
	{ MODKEY|ControlMask,		XK_Down,	spawn,	   	{.v = unmvol } },
	{ MODKEY|ControlMask,		XK_Up,		spawn,	   	{.v = unmvol } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
	{ ControlMask|Mod1Mask,         XK_Delete, spawn,	   {.v = lockcmd } },
	{ ControlMask|ShiftMask|Mod1Mask,         XK_Delete, spawn,	   {.v = suspcmd } },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

