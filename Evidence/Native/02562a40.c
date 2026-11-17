/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$FlushNow
void Dino_Tracking_ServerTrackingDebugger__FlushNow (Dino_Tracking_ServerTrackingDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingDebugger$$FlushNow
   void Dino_Tracking_ServerTrackingDebugger__FlushNow (Dino_Tracking_ServerTrackingDebugger_o*
   __this, const MethodInfo* method); */

void Dino_Tracking_ServerTrackingDebugger__FlushNow_2462a40(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if ((bRam0000000004f9ce32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cc0a90);
    bRam0000000004f9ce32 = 1;
  }
  if (cRam0000000004f9ce44 == '\0') {
    FUN_02132f7c(PTR_DAT_04cc09d0);
    cRam0000000004f9ce44 = '\x01';
  }
  lVar2 = **(long **)(*(long *)PTR_DAT_04cc09d0 + 0xb8);
  if (lVar2 != 0) {
    if ((bRam0000000004f9ce39 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cab2a8);
      bRam0000000004f9ce39 = 1;
    }
    if (*(long *)(lVar2 + 0x20) != 0) {
      if (*(char *)(lVar2 + 0x28) == '\0') {
        lVar4 = Dino_Tracking_ServerTrackingCore__BuildBatchJson_24611c4();
        if (lVar4 == 0) {
          puVar8 = (undefined8 *)(lVar2 + 0x38);
          *puVar8 = *(undefined8 *)PTR_DAT_04cab2a8;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                         ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
        *(undefined1 *)(lVar2 + 0x28) = 1;
        Dino_Tracking_ServerTrackingProvider__SendBatchAsync_2463038
                  (lVar2,*(undefined8 *)(lVar2 + 0x18),lVar4);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget_4078d30(&stack0xffffffffffffffec,0);
      }
      else {
        *(undefined1 *)(lVar2 + 0x29) = 1;
      }
    }
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04ca9af8;
  uVar5 = 0;
  uVar3 = *(undefined8 *)PTR_DAT_04cc0a90;
  if ((bRam0000000004fa626c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,0);
    FUN_02132f7c(PTR_DAT_04ce7050);
    bRam0000000004fa626c = 1;
    uVar5 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar5 = extraout_x1_00;
  }
  if (cRam0000000004f9d848 == '\0') {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar5);
    cRam0000000004f9d848 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ce7050) {
        puVar8 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_04457b18;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar9,2,uVar3,puVar8[1]);
  return;
}

