// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import AppKit;
@import Foundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="HandyMenuFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSEvent;
@class NSWindow;
@class NSCoder;

SWIFT_CLASS("_TtC18HandyMenuFramework24SettingsWindowController")
@interface SettingsWindowController : NSWindowController
- (void)windowDidLoad;
- (void)close;
- (void)mouseDown:(NSEvent * _Nonnull)event;
- (nonnull instancetype)initWithWindow:(NSWindow * _Nullable)window OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end





@class NSTableView;

@interface SettingsWindowController (SWIFT_EXTENSION(HandyMenuFramework)) <NSTableViewDataSource>
- (NSInteger)numberOfRowsInTableView:(NSTableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCollectionView;
@class NSCollectionViewItem;
@class NSView;

@interface SettingsWindowController (SWIFT_EXTENSION(HandyMenuFramework)) <NSCollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(NSCollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(NSCollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSCollectionViewItem * _Nonnull)collectionView:(NSCollectionView * _Nonnull)collectionView itemForRepresentedObjectAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSView * _Nonnull)collectionView:(NSCollectionView * _Nonnull)collectionView viewForSupplementaryElementOfKind:(NSCollectionViewSupplementaryElementKind _Nonnull)kind atIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCollectionViewLayout;
@class NSPasteboard;
@class NSDraggingSession;

@interface SettingsWindowController (SWIFT_EXTENSION(HandyMenuFramework)) <NSCollectionViewDelegateFlowLayout>
- (NSSize)collectionView:(NSCollectionView * _Nonnull)collectionView layout:(NSCollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSSize)collectionView:(NSCollectionView * _Nonnull)collectionView layout:(NSCollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSSize)collectionView:(NSCollectionView * _Nonnull)collectionView layout:(NSCollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (BOOL)collectionView:(NSCollectionView * _Nonnull)collectionView canDragItemsAtIndexes:(NSIndexSet * _Nonnull)indexes withEvent:(NSEvent * _Nonnull)event SWIFT_WARN_UNUSED_RESULT;
- (NSSet<NSIndexPath *> * _Nonnull)collectionView:(NSCollectionView * _Nonnull)collectionView shouldSelectItemsAtIndexPaths:(NSSet<NSIndexPath *> * _Nonnull)indexPaths SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(NSCollectionView * _Nonnull)collectionView didSelectItemsAtIndexPaths:(NSSet<NSIndexPath *> * _Nonnull)indexPaths;
- (void)collectionView:(NSCollectionView * _Nonnull)collectionView didDeselectItemsAtIndexPaths:(NSSet<NSIndexPath *> * _Nonnull)indexPaths;
- (BOOL)collectionView:(NSCollectionView * _Nonnull)collectionView writeItemsAtIndexPaths:(NSSet<NSIndexPath *> * _Nonnull)indexPaths toPasteboard:(NSPasteboard * _Nonnull)pasteboard SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(NSCollectionView * _Nonnull)collectionView draggingSession:(NSDraggingSession * _Nonnull)session willBeginAtPoint:(NSPoint)screenPoint forItemsAtIndexes:(NSIndexSet * _Nonnull)indexes;
@end



@class NSTableColumn;
@protocol NSDraggingInfo;

@interface SettingsWindowController (SWIFT_EXTENSION(HandyMenuFramework)) <NSTableViewDelegate>
- (CGFloat)tableView:(NSTableView * _Nonnull)tableView heightOfRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (NSView * _Nullable)tableView:(NSTableView * _Nonnull)tableView viewForTableColumn:(NSTableColumn * _Nullable)tableColumn row:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (void)tableViewSelectionDidChange:(NSNotification * _Nonnull)notification;
- (NSDragOperation)tableView:(NSTableView * _Nonnull)tableView validateDrop:(id <NSDraggingInfo> _Nonnull)info proposedRow:(NSInteger)row proposedDropOperation:(NSTableViewDropOperation)dropOperation SWIFT_WARN_UNUSED_RESULT;
- (BOOL)tableView:(NSTableView * _Nonnull)tableView writeRowsWithIndexes:(NSIndexSet * _Nonnull)rowIndexes toPasteboard:(NSPasteboard * _Nonnull)pboard SWIFT_WARN_UNUSED_RESULT;
- (BOOL)tableView:(NSTableView * _Nonnull)tableView acceptDrop:(id <NSDraggingInfo> _Nonnull)info row:(NSInteger)row dropOperation:(NSTableViewDropOperation)dropOperation SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(NSTableView * _Nonnull)tableView draggingSession:(NSDraggingSession * _Nonnull)session willBeginAtPoint:(NSPoint)screenPoint forRowIndexes:(NSIndexSet * _Nonnull)rowIndexes;
- (void)tableView:(NSTableView * _Nonnull)tableView draggingSession:(NSDraggingSession * _Nonnull)session endedAtPoint:(NSPoint)screenPoint operation:(NSDragOperation)operation;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
