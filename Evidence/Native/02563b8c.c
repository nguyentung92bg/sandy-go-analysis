/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_UserId
System_String_o* Dino_Tracking_TrackingDebugger__get_UserId (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingDebugger$$get_UserId
   System_String_o* Dino_Tracking_TrackingDebugger__get_UserId (Dino_Tracking_TrackingDebugger_o*
   __this, const MethodInfo* method); */

undefined8 Dino_Tracking_TrackingDebugger__get_UserId_2463b8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plStack_18;
  
  puVar2 = PTR_DAT_04cc0928;
  if ((bRam0000000004f9ce40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caafe8);
    FUN_02132f7c(PTR_DAT_04cc0928);
    FUN_02132f7c(PTR_DAT_04caab48);
    bRam0000000004f9ce40 = 1;
  }
  puVar1 = PTR_DAT_04caab48;
  plStack_18 = (long *)0x0;
  uVar4 = Sisus_Init_Service__TryGet_object__28b2b2c(&plStack_18,*(undefined8 *)puVar2);
  plVar3 = plStack_18;
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)puVar1;
  }
  else {
    if (plStack_18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *plStack_18;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04caafe8) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02563c54;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plStack_18,*(long *)PTR_DAT_04caafe8,0);
LAB_02563c54:
    uVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    uVar4 = System_String__IsNullOrEmpty_46d2084(uVar6,0);
    uVar7 = *(undefined8 *)puVar1;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar6;
    }
  }
  return uVar7;
}

