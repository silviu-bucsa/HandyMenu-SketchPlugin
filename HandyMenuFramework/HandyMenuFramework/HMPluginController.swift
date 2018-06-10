//
//  HMPluginController.swift
//  HandyMenuFramework
//
//  Created by Sergey Dmitriev on 10/06/2018.
//  Copyright © 2018 Sergey Dmitriev. All rights reserved.
//

import Foundation
import os.log

@objc(HandyMenu) class HMPluginController:NSObject {
    
    // MARK: - Singletone instance
    static let shared = HMPluginController()
    
    // MARK: - Properties
    private let settingsWindowController = HMSettingsWindowController()
    private let menu = HMMenu()
    private let dataProvider = HMDataProvider()
    
    private override init() {
        super.init()

        self.menu?.groupComands = true
        self.dataProvider.delegate = self
        self.dataProvider.loadData()
        
//        self.settingsWindowController = HMSettingsWindowController(nibName)
        
//        [settingsWindowController updatePlugins:[dataProvider getPluginsSchemes]];
//        [settingsWindowController updateUserCommands:[dataProvider getUserCommandsSchemes]];
//        [settingsWindowController setDelegate:self];
        
//        return self;
        
        
//        unsigned short shortcutKeyCode = 21;
//        unsigned long shortcutModifierFlag = NSEventModifierFlagCommand; // + NSEventModifierFlagOption;
//
//        + (void) initializePlugin {
//            pluginController = [[HMPluginController alloc] init];
//
//            NSEvent * (^handleKeyDown)(NSEvent*) = ^(NSEvent *event){
//
//                if ((event.keyCode == shortcutKeyCode) &&
//                    ([event modifierFlags] & NSEventModifierFlagDeviceIndependentFlagsMask) == shortcutModifierFlag &&
//                    [[[NSDocumentController sharedDocumentController] documents] count] > 0) {
//
//                    [pluginController showMenu];
//
//                    return (NSEvent *)nil;
//                }
//                return event;
//            };
//
//            [NSEvent addLocalMonitorForEventsMatchingMask:NSEventMaskKeyDown handler:handleKeyDown];
    }
    
    @objc public func prepare() {
        os_log("[Handy Menu] Prepared")
    }
    
    @objc public func showMenu(){
        os_log("[Handy Menu] Showing the menu")
        self.menu?.show()
    }
    
    @objc public func showSettings() {
        os_log("[Handy Menu] Showing the settings")
//        pluginController.showSettings()
    }
    
}

extension HMPluginController: HMDataProviderDelegate {
    
    func dataProvider(_ dataProvider: HMDataProvider, didUpdate commandSchemes: Any) {
        os_log("[Handy Menu] Data Provider updated schemes")
    }
    
}