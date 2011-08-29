#ifndef __AUTOGENCTOJSXCBSTRUCTS__
#define __AUTOGENCTOJSXCBSTRUCTS__
#include <v8.h>

//{{{ BEGIN STRUCTS 

v8::Handle<v8::Object> toJS(xcb_char2b_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("byte1"), v8::Integer::New(st->byte1));
	obj->Set(v8::String::New("byte2"), v8::Integer::New(st->byte2));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_char2b_t *st) {
	v8::HandleScope scope;
	st->byte1 = (uint8_t) obj->Get(v8::String::New("byte1"))->IntegerValue();
	st->byte2 = (uint8_t) obj->Get(v8::String::New("byte2"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_point_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("x"), v8::Integer::New(st->x));
	obj->Set(v8::String::New("y"), v8::Integer::New(st->y));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_point_t *st) {
	v8::HandleScope scope;
	st->x = (int16_t) obj->Get(v8::String::New("x"))->IntegerValue();
	st->y = (int16_t) obj->Get(v8::String::New("y"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_rectangle_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("x"), v8::Integer::New(st->x));
	obj->Set(v8::String::New("y"), v8::Integer::New(st->y));
	obj->Set(v8::String::New("width"), v8::Integer::New(st->width));
	obj->Set(v8::String::New("height"), v8::Integer::New(st->height));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_rectangle_t *st) {
	v8::HandleScope scope;
	st->x = (int16_t) obj->Get(v8::String::New("x"))->IntegerValue();
	st->y = (int16_t) obj->Get(v8::String::New("y"))->IntegerValue();
	st->width = (uint16_t) obj->Get(v8::String::New("width"))->IntegerValue();
	st->height = (uint16_t) obj->Get(v8::String::New("height"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_arc_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("x"), v8::Integer::New(st->x));
	obj->Set(v8::String::New("y"), v8::Integer::New(st->y));
	obj->Set(v8::String::New("width"), v8::Integer::New(st->width));
	obj->Set(v8::String::New("height"), v8::Integer::New(st->height));
	obj->Set(v8::String::New("angle1"), v8::Integer::New(st->angle1));
	obj->Set(v8::String::New("angle2"), v8::Integer::New(st->angle2));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_arc_t *st) {
	v8::HandleScope scope;
	st->x = (int16_t) obj->Get(v8::String::New("x"))->IntegerValue();
	st->y = (int16_t) obj->Get(v8::String::New("y"))->IntegerValue();
	st->width = (uint16_t) obj->Get(v8::String::New("width"))->IntegerValue();
	st->height = (uint16_t) obj->Get(v8::String::New("height"))->IntegerValue();
	st->angle1 = (int16_t) obj->Get(v8::String::New("angle1"))->IntegerValue();
	st->angle2 = (int16_t) obj->Get(v8::String::New("angle2"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_format_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("depth"), v8::Integer::New(st->depth));
	obj->Set(v8::String::New("bits_per_pixel"), v8::Integer::New(st->bits_per_pixel));
	obj->Set(v8::String::New("scanline_pad"), v8::Integer::New(st->scanline_pad));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_format_t *st) {
	v8::HandleScope scope;
	st->depth = (uint8_t) obj->Get(v8::String::New("depth"))->IntegerValue();
	st->bits_per_pixel = (uint8_t) obj->Get(v8::String::New("bits_per_pixel"))->IntegerValue();
	st->scanline_pad = (uint8_t) obj->Get(v8::String::New("scanline_pad"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_visualtype_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("visual_id"), v8::Integer::New(st->visual_id));
	obj->Set(v8::String::New("class"), v8::Integer::New(st->_class));
	obj->Set(v8::String::New("bits_per_rgb_value"), v8::Integer::New(st->bits_per_rgb_value));
	obj->Set(v8::String::New("colormap_entries"), v8::Integer::New(st->colormap_entries));
	obj->Set(v8::String::New("red_mask"), v8::Integer::New(st->red_mask));
	obj->Set(v8::String::New("green_mask"), v8::Integer::New(st->green_mask));
	obj->Set(v8::String::New("blue_mask"), v8::Integer::New(st->blue_mask));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_visualtype_t *st) {
	v8::HandleScope scope;
	st->visual_id = (xcb_visualid_t) obj->Get(v8::String::New("visual_id"))->IntegerValue();
	st->_class = (uint8_t) obj->Get(v8::String::New("class"))->IntegerValue();
	st->bits_per_rgb_value = (uint8_t) obj->Get(v8::String::New("bits_per_rgb_value"))->IntegerValue();
	st->colormap_entries = (uint16_t) obj->Get(v8::String::New("colormap_entries"))->IntegerValue();
	st->red_mask = (uint32_t) obj->Get(v8::String::New("red_mask"))->IntegerValue();
	st->green_mask = (uint32_t) obj->Get(v8::String::New("green_mask"))->IntegerValue();
	st->blue_mask = (uint32_t) obj->Get(v8::String::New("blue_mask"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_depth_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("depth"), v8::Integer::New(st->depth));
	obj->Set(v8::String::New("visuals_len"), v8::Integer::New(st->visuals_len));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_depth_t *st) {
	v8::HandleScope scope;
	st->depth = (uint8_t) obj->Get(v8::String::New("depth"))->IntegerValue();
	st->visuals_len = (uint16_t) obj->Get(v8::String::New("visuals_len"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_screen_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("root"), v8::Integer::New(st->root));
	obj->Set(v8::String::New("default_colormap"), v8::Integer::New(st->default_colormap));
	obj->Set(v8::String::New("white_pixel"), v8::Integer::New(st->white_pixel));
	obj->Set(v8::String::New("black_pixel"), v8::Integer::New(st->black_pixel));
	obj->Set(v8::String::New("current_input_masks"), v8::Integer::New(st->current_input_masks));
	obj->Set(v8::String::New("width_in_pixels"), v8::Integer::New(st->width_in_pixels));
	obj->Set(v8::String::New("height_in_pixels"), v8::Integer::New(st->height_in_pixels));
	obj->Set(v8::String::New("width_in_millimeters"), v8::Integer::New(st->width_in_millimeters));
	obj->Set(v8::String::New("height_in_millimeters"), v8::Integer::New(st->height_in_millimeters));
	obj->Set(v8::String::New("min_installed_maps"), v8::Integer::New(st->min_installed_maps));
	obj->Set(v8::String::New("max_installed_maps"), v8::Integer::New(st->max_installed_maps));
	obj->Set(v8::String::New("root_visual"), v8::Integer::New(st->root_visual));
	obj->Set(v8::String::New("backing_stores"), v8::Integer::New(st->backing_stores));
	obj->Set(v8::String::New("save_unders"), v8::Boolean::New(st->save_unders));
	obj->Set(v8::String::New("root_depth"), v8::Integer::New(st->root_depth));
	obj->Set(v8::String::New("allowed_depths_len"), v8::Integer::New(st->allowed_depths_len));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_screen_t *st) {
	v8::HandleScope scope;
	st->root = (xcb_window_t) obj->Get(v8::String::New("root"))->IntegerValue();
	st->default_colormap = (xcb_colormap_t) obj->Get(v8::String::New("default_colormap"))->IntegerValue();
	st->white_pixel = (uint32_t) obj->Get(v8::String::New("white_pixel"))->IntegerValue();
	st->black_pixel = (uint32_t) obj->Get(v8::String::New("black_pixel"))->IntegerValue();
	st->current_input_masks = (uint32_t) obj->Get(v8::String::New("current_input_masks"))->IntegerValue();
	st->width_in_pixels = (uint16_t) obj->Get(v8::String::New("width_in_pixels"))->IntegerValue();
	st->height_in_pixels = (uint16_t) obj->Get(v8::String::New("height_in_pixels"))->IntegerValue();
	st->width_in_millimeters = (uint16_t) obj->Get(v8::String::New("width_in_millimeters"))->IntegerValue();
	st->height_in_millimeters = (uint16_t) obj->Get(v8::String::New("height_in_millimeters"))->IntegerValue();
	st->min_installed_maps = (uint16_t) obj->Get(v8::String::New("min_installed_maps"))->IntegerValue();
	st->max_installed_maps = (uint16_t) obj->Get(v8::String::New("max_installed_maps"))->IntegerValue();
	st->root_visual = (xcb_visualid_t) obj->Get(v8::String::New("root_visual"))->IntegerValue();
	st->backing_stores = (uint8_t) obj->Get(v8::String::New("backing_stores"))->IntegerValue();
	st->save_unders = (uint8_t) obj->Get(v8::String::New("save_unders"))->BooleanValue();
	st->root_depth = (uint8_t) obj->Get(v8::String::New("root_depth"))->IntegerValue();
	st->allowed_depths_len = (uint8_t) obj->Get(v8::String::New("allowed_depths_len"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_setup_request_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("byte_order"), v8::Integer::New(st->byte_order));
	obj->Set(v8::String::New("protocol_major_version"), v8::Integer::New(st->protocol_major_version));
	obj->Set(v8::String::New("protocol_minor_version"), v8::Integer::New(st->protocol_minor_version));
	obj->Set(v8::String::New("authorization_protocol_name_len"), v8::Integer::New(st->authorization_protocol_name_len));
	obj->Set(v8::String::New("authorization_protocol_data_len"), v8::Integer::New(st->authorization_protocol_data_len));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_setup_request_t *st) {
	v8::HandleScope scope;
	st->byte_order = (uint8_t) obj->Get(v8::String::New("byte_order"))->IntegerValue();
	st->protocol_major_version = (uint16_t) obj->Get(v8::String::New("protocol_major_version"))->IntegerValue();
	st->protocol_minor_version = (uint16_t) obj->Get(v8::String::New("protocol_minor_version"))->IntegerValue();
	st->authorization_protocol_name_len = (uint16_t) obj->Get(v8::String::New("authorization_protocol_name_len"))->IntegerValue();
	st->authorization_protocol_data_len = (uint16_t) obj->Get(v8::String::New("authorization_protocol_data_len"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_setup_failed_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("status"), v8::Integer::New(st->status));
	obj->Set(v8::String::New("reason_len"), v8::Integer::New(st->reason_len));
	obj->Set(v8::String::New("protocol_major_version"), v8::Integer::New(st->protocol_major_version));
	obj->Set(v8::String::New("protocol_minor_version"), v8::Integer::New(st->protocol_minor_version));
	obj->Set(v8::String::New("length"), v8::Integer::New(st->length));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_setup_failed_t *st) {
	v8::HandleScope scope;
	st->status = (uint8_t) obj->Get(v8::String::New("status"))->IntegerValue();
	st->reason_len = (uint8_t) obj->Get(v8::String::New("reason_len"))->IntegerValue();
	st->protocol_major_version = (uint16_t) obj->Get(v8::String::New("protocol_major_version"))->IntegerValue();
	st->protocol_minor_version = (uint16_t) obj->Get(v8::String::New("protocol_minor_version"))->IntegerValue();
	st->length = (uint16_t) obj->Get(v8::String::New("length"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_setup_authenticate_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("status"), v8::Integer::New(st->status));
	obj->Set(v8::String::New("length"), v8::Integer::New(st->length));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_setup_authenticate_t *st) {
	v8::HandleScope scope;
	st->status = (uint8_t) obj->Get(v8::String::New("status"))->IntegerValue();
	st->length = (uint16_t) obj->Get(v8::String::New("length"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_setup_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("status"), v8::Integer::New(st->status));
	obj->Set(v8::String::New("protocol_major_version"), v8::Integer::New(st->protocol_major_version));
	obj->Set(v8::String::New("protocol_minor_version"), v8::Integer::New(st->protocol_minor_version));
	obj->Set(v8::String::New("length"), v8::Integer::New(st->length));
	obj->Set(v8::String::New("release_number"), v8::Integer::New(st->release_number));
	obj->Set(v8::String::New("resource_id_base"), v8::Integer::New(st->resource_id_base));
	obj->Set(v8::String::New("resource_id_mask"), v8::Integer::New(st->resource_id_mask));
	obj->Set(v8::String::New("motion_buffer_size"), v8::Integer::New(st->motion_buffer_size));
	obj->Set(v8::String::New("vendor_len"), v8::Integer::New(st->vendor_len));
	obj->Set(v8::String::New("maximum_request_length"), v8::Integer::New(st->maximum_request_length));
	obj->Set(v8::String::New("roots_len"), v8::Integer::New(st->roots_len));
	obj->Set(v8::String::New("pixmap_formats_len"), v8::Integer::New(st->pixmap_formats_len));
	obj->Set(v8::String::New("image_byte_order"), v8::Integer::New(st->image_byte_order));
	obj->Set(v8::String::New("bitmap_format_bit_order"), v8::Integer::New(st->bitmap_format_bit_order));
	obj->Set(v8::String::New("bitmap_format_scanline_unit"), v8::Integer::New(st->bitmap_format_scanline_unit));
	obj->Set(v8::String::New("bitmap_format_scanline_pad"), v8::Integer::New(st->bitmap_format_scanline_pad));
	obj->Set(v8::String::New("min_keycode"), v8::Integer::New(st->min_keycode));
	obj->Set(v8::String::New("max_keycode"), v8::Integer::New(st->max_keycode));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_setup_t *st) {
	v8::HandleScope scope;
	st->status = (uint8_t) obj->Get(v8::String::New("status"))->IntegerValue();
	st->protocol_major_version = (uint16_t) obj->Get(v8::String::New("protocol_major_version"))->IntegerValue();
	st->protocol_minor_version = (uint16_t) obj->Get(v8::String::New("protocol_minor_version"))->IntegerValue();
	st->length = (uint16_t) obj->Get(v8::String::New("length"))->IntegerValue();
	st->release_number = (uint32_t) obj->Get(v8::String::New("release_number"))->IntegerValue();
	st->resource_id_base = (uint32_t) obj->Get(v8::String::New("resource_id_base"))->IntegerValue();
	st->resource_id_mask = (uint32_t) obj->Get(v8::String::New("resource_id_mask"))->IntegerValue();
	st->motion_buffer_size = (uint32_t) obj->Get(v8::String::New("motion_buffer_size"))->IntegerValue();
	st->vendor_len = (uint16_t) obj->Get(v8::String::New("vendor_len"))->IntegerValue();
	st->maximum_request_length = (uint16_t) obj->Get(v8::String::New("maximum_request_length"))->IntegerValue();
	st->roots_len = (uint8_t) obj->Get(v8::String::New("roots_len"))->IntegerValue();
	st->pixmap_formats_len = (uint8_t) obj->Get(v8::String::New("pixmap_formats_len"))->IntegerValue();
	st->image_byte_order = (uint8_t) obj->Get(v8::String::New("image_byte_order"))->IntegerValue();
	st->bitmap_format_bit_order = (uint8_t) obj->Get(v8::String::New("bitmap_format_bit_order"))->IntegerValue();
	st->bitmap_format_scanline_unit = (uint8_t) obj->Get(v8::String::New("bitmap_format_scanline_unit"))->IntegerValue();
	st->bitmap_format_scanline_pad = (uint8_t) obj->Get(v8::String::New("bitmap_format_scanline_pad"))->IntegerValue();
	st->min_keycode = (xcb_keycode_t) obj->Get(v8::String::New("min_keycode"))->IntegerValue();
	st->max_keycode = (xcb_keycode_t) obj->Get(v8::String::New("max_keycode"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_timecoord_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("time"), v8::Date::New(st->time));
	obj->Set(v8::String::New("x"), v8::Integer::New(st->x));
	obj->Set(v8::String::New("y"), v8::Integer::New(st->y));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_timecoord_t *st) {
	v8::HandleScope scope;
	st->time = (xcb_timestamp_t) obj->Get(v8::String::New("time"))->IntegerValue();
	st->x = (int16_t) obj->Get(v8::String::New("x"))->IntegerValue();
	st->y = (int16_t) obj->Get(v8::String::New("y"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_fontprop_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_fontprop_t *st) {
	v8::HandleScope scope;
}

v8::Handle<v8::Object> toJS(xcb_charinfo_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("left_side_bearing"), v8::Integer::New(st->left_side_bearing));
	obj->Set(v8::String::New("right_side_bearing"), v8::Integer::New(st->right_side_bearing));
	obj->Set(v8::String::New("character_width"), v8::Integer::New(st->character_width));
	obj->Set(v8::String::New("ascent"), v8::Integer::New(st->ascent));
	obj->Set(v8::String::New("descent"), v8::Integer::New(st->descent));
	obj->Set(v8::String::New("attributes"), v8::Integer::New(st->attributes));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_charinfo_t *st) {
	v8::HandleScope scope;
	st->left_side_bearing = (int16_t) obj->Get(v8::String::New("left_side_bearing"))->IntegerValue();
	st->right_side_bearing = (int16_t) obj->Get(v8::String::New("right_side_bearing"))->IntegerValue();
	st->character_width = (int16_t) obj->Get(v8::String::New("character_width"))->IntegerValue();
	st->ascent = (int16_t) obj->Get(v8::String::New("ascent"))->IntegerValue();
	st->descent = (int16_t) obj->Get(v8::String::New("descent"))->IntegerValue();
	st->attributes = (uint16_t) obj->Get(v8::String::New("attributes"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_str_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("name_len"), v8::Integer::New(st->name_len));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_str_t *st) {
	v8::HandleScope scope;
	st->name_len = (uint8_t) obj->Get(v8::String::New("name_len"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_segment_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("x1"), v8::Integer::New(st->x1));
	obj->Set(v8::String::New("y1"), v8::Integer::New(st->y1));
	obj->Set(v8::String::New("x2"), v8::Integer::New(st->x2));
	obj->Set(v8::String::New("y2"), v8::Integer::New(st->y2));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_segment_t *st) {
	v8::HandleScope scope;
	st->x1 = (int16_t) obj->Get(v8::String::New("x1"))->IntegerValue();
	st->y1 = (int16_t) obj->Get(v8::String::New("y1"))->IntegerValue();
	st->x2 = (int16_t) obj->Get(v8::String::New("x2"))->IntegerValue();
	st->y2 = (int16_t) obj->Get(v8::String::New("y2"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_coloritem_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("pixel"), v8::Integer::New(st->pixel));
	obj->Set(v8::String::New("red"), v8::Integer::New(st->red));
	obj->Set(v8::String::New("green"), v8::Integer::New(st->green));
	obj->Set(v8::String::New("blue"), v8::Integer::New(st->blue));
	obj->Set(v8::String::New("flags"), v8::Integer::New(st->flags));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_coloritem_t *st) {
	v8::HandleScope scope;
	st->pixel = (uint32_t) obj->Get(v8::String::New("pixel"))->IntegerValue();
	st->red = (uint16_t) obj->Get(v8::String::New("red"))->IntegerValue();
	st->green = (uint16_t) obj->Get(v8::String::New("green"))->IntegerValue();
	st->blue = (uint16_t) obj->Get(v8::String::New("blue"))->IntegerValue();
	st->flags = (uint8_t) obj->Get(v8::String::New("flags"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_rgb_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("red"), v8::Integer::New(st->red));
	obj->Set(v8::String::New("green"), v8::Integer::New(st->green));
	obj->Set(v8::String::New("blue"), v8::Integer::New(st->blue));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_rgb_t *st) {
	v8::HandleScope scope;
	st->red = (uint16_t) obj->Get(v8::String::New("red"))->IntegerValue();
	st->green = (uint16_t) obj->Get(v8::String::New("green"))->IntegerValue();
	st->blue = (uint16_t) obj->Get(v8::String::New("blue"))->IntegerValue();
}

v8::Handle<v8::Object> toJS(xcb_host_t *st) {
	v8::HandleScope scope;
	v8::Local<v8::Object> obj = v8::Object::New();
	obj->Set(v8::String::New("family"), v8::Integer::New(st->family));
	obj->Set(v8::String::New("address_len"), v8::Integer::New(st->address_len));
	return scope.Close(obj);
}

void fromJS(v8::Handle<v8::Object> obj, xcb_host_t *st) {
	v8::HandleScope scope;
	st->family = (uint8_t) obj->Get(v8::String::New("family"))->IntegerValue();
	st->address_len = (uint16_t) obj->Get(v8::String::New("address_len"))->IntegerValue();
}

// END STRUCTS }}}

#endif