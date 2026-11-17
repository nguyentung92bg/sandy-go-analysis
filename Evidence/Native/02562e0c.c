/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_UserId
System_String_o* Dino_Tracking_ServerTrackingProvider__get_UserId (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingProvider$$get_UserId
   System_String_o* Dino_Tracking_ServerTrackingProvider__get_UserId
   (Dino_Tracking_ServerTrackingProvider_o* __this, const MethodInfo* method); */

long Dino_Tracking_ServerTrackingProvider__get_UserId_2462e0c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000004f9ce36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caafe8);
    FUN_02132f7c(PTR_DAT_04caab48);
    bRam0000000004f9ce36 = 1;
  }
  puVar2 = PTR_DAT_04caab48;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04caafe8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02562eb0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04caafe8,0);
LAB_02562eb0:
    lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  lVar1 = *(long *)puVar2;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  return lVar1;
}

