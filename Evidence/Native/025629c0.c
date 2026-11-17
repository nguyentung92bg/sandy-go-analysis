/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$get_LastSend
System_String_o* Dino_Tracking_ServerTrackingDebugger__get_LastSend (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$get_LastSend
   System_String_o* Dino_Tracking_ServerTrackingDebugger__get_LastSend
   (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method); */

undefined8 Dino_Tracking_ServerTrackingDebugger__get_LastSend_24629c0(void)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f9ce31 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a88);
    bRam0000000004f9ce31 = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_04cc0a88;
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) != 0) {
    puVar1 = (undefined8 *)(**(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) + 0x38);
  }
  return *puVar1;
}

