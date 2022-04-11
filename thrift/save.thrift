namespace cpp save

struct SaveInfo {
    1: string msg,
}

service Save {
    i32 save_data(1: SaveInfo msg),
}
