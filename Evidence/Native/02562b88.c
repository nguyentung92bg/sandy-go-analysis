/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$FireSampleEvents
void Dino_Tracking_ServerTrackingDebugger__FireSampleEvents (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$FireSampleEvents
   void Dino_Tracking_ServerTrackingDebugger__FireSampleEvents
   (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingDebugger__FireSampleEvents_2462b88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9ce33 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cc0a90);
    bRam0000000004f9ce33 = 1;
  }
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  puVar2 = PTR_DAT_04cc0a98;
  puVar3 = PTR_DAT_04cc0a30;
  puVar1 = PTR_DAT_04cab960;
  lVar4 = **(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8);
  if (lVar4 != 0) {
    if ((bRam0000000004f9ce3a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cc0a30);
      FUN_02132f7c(PTR_DAT_04cc0aa0);
      FUN_02132f7c(PTR_DAT_04cc0a98);
      FUN_02132f7c(PTR_DAT_04cc0aa8);
      FUN_02132f7c(PTR_DAT_04cab960);
      FUN_02132f7c(PTR_DAT_04caccf0);
      bRam0000000004f9ce3a = 1;
    }
    lVar6 = FUN_02133068(*(undefined8 *)puVar3,1);
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    Dino_Common_DinoTrackingParameter___ctor_2447518
              (&uStack_60,*(undefined8 *)puVar1,*(undefined8 *)puVar2,0);
    puVar3 = PTR_DAT_04cc0aa8;
    puVar1 = PTR_DAT_04cc0aa0;
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uStack_58;
        *(undefined8 *)(lVar6 + 0x20) = uStack_60;
        puVar2 = PTR_DAT_04caccf0;
        *(undefined8 *)(lVar6 + 0x38) = uStack_48;
        *(undefined8 *)(lVar6 + 0x30) = uStack_50;
        *(undefined8 *)(lVar6 + 0x48) = uStack_38;
        *(undefined8 *)(lVar6 + 0x40) = uStack_40;
        thunk_FUN_02134474(lVar6 + 0x20,0);
        Dino_Tracking_ServerTrackingProvider__TrackEvent_2462f54(lVar4,*(undefined8 *)puVar1,lVar6);
        Dino_Tracking_ServerTrackingProvider__SetUserProperty_2462fa8
                  (lVar4,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
        Dino_Tracking_ServerTrackingProvider__FlushNow_2462ae0(lVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9af8;
  uVar8 = 0;
  uVar5 = *(undefined8 *)PTR_DAT_04cc0a90;
  if ((bRam0000000004fa626c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,0);
    FUN_02132f7c(PTR_DAT_04ce7050);
    bRam0000000004fa626c = 1;
    uVar8 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar8 = extraout_x1_00;
  }
  if (cRam0000000004f9d848 == '\0') {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar8);
    cRam0000000004f9d848 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  plVar11 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar4 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ce7050) {
        puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_04457b18;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar11,2,uVar5,puVar7[1]);
  return;
}

