- (void)_resolveWorkspaceTabController {
    rbx = self;
    var_30 = rbx;
    var_38 = _cmd;
    rax = [self isValid];
    if (self.isValid == NO) {
            _DVTAssertionFailureHandler(var_30, var_38, "-[IDEViewController _resolveWorkspaceTabController]", "/SourceCache/IDEFrameworks/IDEFrameworks-6776/IDEKit/ViewControllers/IDEViewController.m", 0x52, @"self.isValid", @"");
            rbx = var_30;
    }
    rax = [self isKindOfClass:[IDEWorkspaceTabController class]];
    rdi = var_30;
    if ([self isKindOfClass:[IDEWorkspaceTabController class] == NO) {
        // goto loc_24829a;

        r14 = [[self view] retain];
        r15 = @selector(superview);
        r12 = @selector(viewController);
        r13 = @selector(respondsToSelector:);
        LODWORD(rax) = 0x0;

        var_40 = rax;

        rbx = [[r14 superview] retain];
        [r14 release];
        if (self.view.superview == nil) { // if it's a top level view
            // goto loc_2483d5

                rdi = var_30;
            if (self.workspaceTabController == nil) {
                    r15 = *objc_msgSend;
                    r14 = [[self view] retain];
                    rax = [self.view window];
                    r12 = r15;
                    r15 = [self.view.window retain];
                    [r14 release];
                    if (self.view.window != 0x0) {
                            rax = [self.view.window isSheet];
                            if ([self.view.window isSheet] == YES) {
                                    rdx = @selector(_documentWindow);
                                    rax = [r15 respondsToSelector:rdx];
                                    LODWORD(r14) = 0x0;
                                    if (LOBYTE(rax) != 0x0) {
                                            r14 = [[r15 _documentWindow] retain];
                                    }
                                    rdx = (r12)(IDEWorkspaceWindow, @selector(class), rdx);
                                    rax = (r12)(r14, @selector(isKindOfClass:), rdx);
                                    if (LOBYTE(rax) != 0x0) {
                                            r13 = *_OBJC_IVAR_$_IDEViewController._workspaceTabController;
                                            rax = (r12)(r14, @selector(windowController), rdx);
                                            rax = [rax retain];
                                            var_48 = r14;
                                            r14 = rax;
                                            (r12)(var_30, @selector(willChangeValueForKey:), @"workspaceTabController");
                                            rax = (r12)(r14, @selector(activeWorkspaceTabController), @"workspaceTabController");
                                            rax = [rax retain];
                                            rdi = *(var_30 + r13);
                                            *(var_30 + r13) = rax;
                                            r13 = *objc_release;
                                            [rdi release];
                                            (r12)(var_30, @selector(didChangeValueForKey:), @"workspaceTabController");
                                            rdi = r14;
                                            r14 = var_48;
                                            [rdi release];
                                    }
                                    [r14 release];
                            }
                    }
                    [r15 release];
                }
                r14 = *objc_release;
                [rbx release];
                rax = [var_40 release];
            } else { // if it does have a superview
                    rax = [rbx respondsToSelector:rdx];
    r14 = rbx;
    if (LOBYTE(rax) == 0x0) goto loc_2482cd;
    r14 = [[rbx viewController] retain];
    var_48 = r14;
    [var_40 release];
    COND = r14 == 0x0;
    rax = r14;
    r14 = rbx;
    if (COND) goto loc_2482c9;
    rax = [var_48 isKindOfClass:[IDEWorkspaceTabController class]];
    COND = LOBYTE(rax) == 0x0;
    r14 = rbx;
    rax = var_48;
    if (COND) goto loc_2482c9;
    r13 = *objc_msgSend;
    [var_30 willChangeValueForKey:@"workspaceTabController"];
    r12 = *_OBJC_IVAR_$_IDEViewController._workspaceTabController;
    [var_48 retain];
    rdi = *(var_30 + r12);
    *(var_30 + r12) = var_48;
    [rdi release];
    [var_30 didChangeValueForKey:@"workspaceTabController"];
    var_40 = var_48;
    goto loc_2483d5;

            }

    } else {
    [self willChangeValueForKey:@"workspaceTabController"];
    _workspaceTabController = self;
    [self didChangeValueForKey:@"workspaceTabController"];
    }
}

loc_24829a:
    r14 = [[rdi view] retain];
    r15 = @selector(superview);
    r12 = @selector(viewController);
    r13 = @selector(respondsToSelector:);
    LODWORD(rax) = 0x0;

loc_2482c9:
    var_40 = rax;

loc_2482cd:
    rbx = [[r14 superview] retain];
    [r14 release];
    if (rbx == 0x0) goto loc_2483d5;
    goto loc_2482f6;

loc_2483d5:
    rdi = var_30;
    if (_workspaceTabController == nil) {
            r15 = *objc_msgSend;
            r14 = [[self view] retain];
            rax = [self.view window];
            r12 = r15;
            r15 = [self.view.window retain];
            [r14 release];
            if (self.view.window != 0x0) {
                    rax = [r15 isSheet];
                    if (LOBYTE(rax) != 0x0) {
                            rdx = @selector(_documentWindow);
                            rax = [r15 respondsToSelector:rdx];
                            LODWORD(r14) = 0x0;
                            if (LOBYTE(rax) != 0x0) {
                                    r14 = [[r15 _documentWindow] retain];
                            }
                            rdx = (r12)(IDEWorkspaceWindow, @selector(class), rdx);
                            rax = (r12)(r14, @selector(isKindOfClass:), rdx);
                            if (LOBYTE(rax) != 0x0) {
                                    r13 = *_OBJC_IVAR_$_IDEViewController._workspaceTabController;
                                    rax = (r12)(r14, @selector(windowController), rdx);
                                    rax = [rax retain];
                                    var_48 = r14;
                                    r14 = rax;
                                    (r12)(var_30, @selector(willChangeValueForKey:), @"workspaceTabController");
                                    rax = (r12)(r14, @selector(activeWorkspaceTabController), @"workspaceTabController");
                                    rax = [rax retain];
                                    rdi = *(var_30 + r13);
                                    *(var_30 + r13) = rax;
                                    r13 = *objc_release;
                                    [rdi release];
                                    (r12)(var_30, @selector(didChangeValueForKey:), @"workspaceTabController");
                                    rdi = r14;
                                    r14 = var_48;
                                    [rdi release];
                            }
                            [r14 release];
                    }
            }
            [r15 release];
    }
    r14 = *objc_release;
    [rbx release];
    rax = [var_40 release];

loc_24854e:
    return;

loc_2482f6:
    rax = [rbx respondsToSelector:rdx];
    r14 = rbx;
    if (LOBYTE(rax) == 0x0) goto loc_2482cd;
    r14 = [[rbx viewController] retain];
    var_48 = r14;
    [var_40 release];
    COND = r14 == 0x0;
    rax = r14;
    r14 = rbx;
    if (COND) goto loc_2482c9;
    rax = [var_48 isKindOfClass:[IDEWorkspaceTabController class]];
    COND = LOBYTE(rax) == 0x0;
    r14 = rbx;
    rax = var_48;
    if (COND) goto loc_2482c9;
    r13 = *objc_msgSend;
    [var_30 willChangeValueForKey:@"workspaceTabController"];
    r12 = *_OBJC_IVAR_$_IDEViewController._workspaceTabController;
    [var_48 retain];
    rdi = *(var_30 + r12);
    *(var_30 + r12) = var_48;
    [rdi release];
    [var_30 didChangeValueForKey:@"workspaceTabController"];
    var_40 = var_48;
    goto loc_2483d5;

loc_24824e:
    r12 = *objc_msgSend;
    [rdi willChangeValueForKey:@"workspaceTabController"];
    r15 = *_OBJC_IVAR_$_IDEViewController._workspaceTabController;
    rax = [var_30 retain];
    rdi = *(var_30 + r15);
    *(var_30 + r15) = rax;
    [rdi release];
    rax = [var_30 didChangeValueForKey:@"workspaceTabController"];
    goto loc_24854e;
}
