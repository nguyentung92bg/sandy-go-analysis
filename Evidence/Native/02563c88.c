/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_ServerRemembered
System_String_o* Dino_Tracking_TrackingDebugger__get_ServerRemembered (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_ServerRemembered
   System_String_o* Dino_Tracking_TrackingDebugger__get_ServerRemembered
   (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method); */

undefined8 Dino_Tracking_TrackingDebugger__get_ServerRemembered_2463c88(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)PTR_DAT_04cbf978;
  puVar2 = PTR_DAT_04cbf970;
  if ((bRam0000000004f9ce41 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf970);
    FUN_02132f7c(PTR_DAT_04cbf978);
    bRam0000000004f9ce41 = 1;
  }
  uVar3 = Dino_Tracking_ServerTrackingAutoRouter__get_UseServerPreference_2460504();
  if ((uVar3 & 1) == 0) {
    puVar1 = (undefined8 *)puVar2;
  }
  return *puVar1;
}

