/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_Sink
System_String_o* Dino_Tracking_TrackingDebugger__get_Sink (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_Sink
   System_String_o* Dino_Tracking_TrackingDebugger__get_Sink (Dino_Tracking_TrackingDebugger_o*
   __this, const MethodInfo* method); */

undefined8 Dino_Tracking_TrackingDebugger__get_Sink_2463b88(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  if ((bRam0000000004f9ce3f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0af8);
    FUN_02132f7c(PTR_DAT_04cc01c8);
    bRam0000000004f9ce3f = 1;
  }
  puVar2 = PTR_DAT_04cc0af8;
  puVar1 = (undefined8 *)PTR_DAT_04cc01c8;
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  if (**(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8) != 0) {
    puVar1 = (undefined8 *)puVar2;
  }
  return *puVar1;
}

