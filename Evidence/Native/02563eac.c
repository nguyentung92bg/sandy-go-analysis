/* IL2CPP: Dino.Tracking.TrackingDebugger$$ResetToDefault
void Dino_Tracking_TrackingDebugger__ResetToDefault (Dino_Tracking_TrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingDebugger$$ResetToDefault
   void Dino_Tracking_TrackingDebugger__ResetToDefault (Dino_Tracking_TrackingDebugger_o* __this,
   const MethodInfo* method); */

void Dino_Tracking_TrackingDebugger__ResetToDefault_2463eac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04ca9af8;
  if ((bRam0000000004f9ce43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cc0b10);
    bRam0000000004f9ce43 = 1;
  }
  puVar2 = PTR_DAT_04cc0b10;
  Dino_Tracking_ServerTrackingAutoRouter__set_UseServerPreference_2460560(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9af8;
  uVar3 = *(undefined8 *)puVar2;
  uVar6 = 0;
  if ((bRam0000000004fa6262 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,0);
    FUN_02132f7c(PTR_DAT_04ce7050);
    bRam0000000004fa6262 = 1;
    uVar6 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = extraout_x1_00;
  }
  if (cRam0000000004f9d848 == '\0') {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar6);
    cRam0000000004f9d848 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04ce7050) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_044610b0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04ce7050,3);
LAB_044610b0:
                    /* WARNING: Could not recover jumptable at 0x044610c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar9,3,uVar3,puVar5[1]);
  return;
}

