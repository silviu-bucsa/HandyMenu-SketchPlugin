//
//  CollectionTableView.swift
//  HandyMenuFramework
//
//  Created by Sergey Dmitriev on 02/08/2018.
//  Copyright © 2018 Sergey Dmitriev. All rights reserved.
//

import Cocoa

protocol CollectionTableViewDelegate: class {
    func collectionTableView(_ collectionTableView: CollectionTableView, willDelete rows:IndexSet)
    func collectionTableView(_ collectionTableView: CollectionTableView, draggingSession session: NSDraggingSession, movedTo screenPoint: NSPoint)
}

class CollectionTableView: NSTableView {

    override func draw(_ dirtyRect: NSRect) {
        super.draw(dirtyRect)
        // Drawing code here.
    }
    
    override func resignFirstResponder() -> Bool {
        self.deselectAll(self)
        return super.resignFirstResponder()
    }
    
    override func keyDown(with event: NSEvent) {
        plugin_log("KeyCode: %@", event.charactersIgnoringModifiers ?? "")
        let characters = event.charactersIgnoringModifiers ?? ""
        let firstCharacter = (characters as NSString).character(at: 0)
        if firstCharacter == NSDeleteCharacter,
            !self.selectedRowIndexes.isEmpty,
            let delegate = self.delegate as? CollectionTableViewDelegate {
            let selectedRows = self.selectedRowIndexes
            self.removeRows(at: selectedRows, withAnimation: .effectFade)
            delegate.collectionTableView(self, willDelete: selectedRows)
        }
        super.keyDown(with: event)
    }
    
    override func draggingSession(_ session: NSDraggingSession, movedTo screenPoint: NSPoint) {
        if let delegate = self.delegate as? CollectionTableViewDelegate {
            delegate.collectionTableView(self, draggingSession: session, movedTo: screenPoint)
        }

    }
}
