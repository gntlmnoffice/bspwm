#ifndef _EVENTS_H
#define _EVENTS_H

#include <xcb/xcb.h>
#include <xcb/xcb_event.h>

void handle_event(xcb_generic_event_t *);
void map_request(xcb_generic_event_t *);
void destroy_notify(xcb_generic_event_t *);
void unmap_notify(xcb_generic_event_t *);
void configure_request(xcb_generic_event_t *);
void client_message(xcb_generic_event_t *);
void property_notify(xcb_generic_event_t *);
void enter_notify(xcb_generic_event_t *);
void motion_notify(xcb_generic_event_t *);
void handle_state(monitor_t *, desktop_t *, node_t *, xcb_atom_t, unsigned int);
void grab_pointer(pointer_action_t);
void track_pointer(int, int);
void ungrab_pointer(void);

#endif
