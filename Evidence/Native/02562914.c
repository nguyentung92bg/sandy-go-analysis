/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$get_Pending
System_String_o* Dino_Tracking_ServerTrackingDebugger__get_Pending (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$get_Pending
   System_String_o* Dino_Tracking_ServerTrackingDebugger__get_Pending
   (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method); */

undefined8 Dino_Tracking_ServerTrackingDebugger__get_Pending_2462914(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  
  if ((bRam0000000004f9ce30 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a88);
    bRam0000000004f9ce30 = 1;
  }
  uStack_14 = 0;
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) == 0) {
    uVar2 = *(undefined8 *)PTR_DAT_04cc0a88;
  }
  else {
    uVar1 = 0;
    if (*(long *)(**(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) + 0x20) != 0) {
      uVar1 = Dino_Tracking_ServerTrackingCore__get_PendingCount_2460b60();
    }
    uStack_14 = uVar1;
    uVar2 = System_Int32__ToString_482d750(&uStack_14,0);
  }
  return uVar2;
}

