/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileEditionUpdate : NSObject {
    struct vector<EditionEntry, std::__1::allocator<EditionEntry> > { 
        struct EditionEntry {} *__begin_; 
        struct EditionEntry {} *__end_; 
        struct __compressed_pair<EditionEntry *, std::__1::allocator<EditionEntry> > { 
            struct EditionEntry {} *__first_; 
        } __end_cap_; 
    } _entries;
    BOOL _flushEverything;
}

@property BOOL flushEverything;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3;
- (BOOL)flushEverything;
- (void)setFlushEverything:(BOOL)arg1;
- (void)tileset:(unsigned int*)arg1 edition:(unsigned int*)arg2 provider:(unsigned int*)arg3 atIndex:(unsigned int)arg4;
- (unsigned int)tilesetCount;

@end
