int
width_status(Bar *bar, BarWidthArg *a)
{
	#if BAR_PANGO_PATCH
	return TEXTWM(stext);
	#else
	return TEXTW(stext);
	#endif // BAR_PANGO_PATCH
}

#if BAR_EXTRASTATUS_PATCH
int
width_status_es(Bar *bar, BarWidthArg *a)
{
	#if BAR_PANGO_PATCH
	return TEXTWM(estext) - lrpad;
	#else
	return TEXTW(estext) - lrpad;
	#endif // BAR_PANGO_PATCH
}
#endif // BAR_EXTRASTATUS_PATCH

int
draw_status(Bar *bar, BarDrawArg *a)
{
	#if BAR_PANGO_PATCH
	return drw_text(drw, a->x, 0, a->w, bh, lrpad / 2, stext, 0, True);
	#else
	return drw_text(drw, a->x, 0, a->w, bh, lrpad / 2, stext, 0);
	#endif // BAR_PANGO_PATCH
}

#if BAR_EXTRASTATUS_PATCH
int
draw_status_es(Bar *bar, BarDrawArg *a)
{
	#if BAR_PANGO_PATCH
	return drw_text(drw, a->x, 0, a->w, bh, 0, estext, 0, True);
	#else
	return drw_text(drw, a->x, 0, a->w, bh, 0, estext, 0);
	#endif // BAR_PANGO_PATCH
}
#endif // BAR_EXTRASTATUS_PATCH

int
click_status(Bar *bar, Arg *arg, BarClickArg *a)
{
	return ClkStatusText;
}
