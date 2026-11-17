/* IL2CPP: Dino.Tracking.TrackingService.<InitAsync>d__15$$MoveNext
void Dino_Tracking_TrackingService__InitAsync_d__15__MoveNext (Dino_Tracking_TrackingService__InitAsync_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService.<InitAsync>d__15$$MoveNext
   void Dino_Tracking_TrackingService__InitAsync_d__15__MoveNext
   (Dino_Tracking_TrackingService__InitAsync_d__15_o __this, const MethodInfo* method); */

void Dino_Tracking_TrackingService__InitAsync_d__15__MoveNext_2480420(int *param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f9cf9c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc2258);
    FUN_02132f7c(PTR_DAT_04cab0c0);
    FUN_02132f7c(PTR_DAT_04cab0c8);
    FUN_02132f7c(PTR_DAT_04caaba0);
    FUN_02132f7c(PTR_DAT_04cb4998);
    FUN_02132f7c(PTR_DAT_04cbf428);
    FUN_02132f7c(PTR_DAT_04cc2260);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    FUN_02132f7c(PTR_DAT_04cab0d8);
    FUN_02132f7c(PTR_DAT_04cc2268);
    FUN_02132f7c(PTR_DAT_04cc0168);
    FUN_02132f7c(PTR_DAT_04cc2270);
    bRam0000000004f9cf9c = 1;
  }
  puVar1 = PTR_DAT_04cbf3d8;
  lVar10 = *(long *)(param_1 + 4);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    auVar12 = ZEXT816(0);
    if (*(char *)(lVar10 + 0x24) != '\0') goto LAB_025807a0;
    *(undefined1 *)(lVar10 + 0x24) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9cca3 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbf3d8);
      cRam0000000004f9cca3 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if ((lVar4 == 0) ||
       (lVar4 = (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28)), lVar4 == 0)
       ) {
      lVar4 = *(long *)(lVar10 + 0x28);
    }
    plVar11 = (long *)(lVar10 + 0x28);
    *plVar11 = lVar4;
    thunk_FUN_02134474(plVar11);
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_Debugger__LogWarning_2481e30
                (*(undefined8 *)PTR_DAT_04cc2268,*(undefined8 *)PTR_DAT_04cc0168,0);
      if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Queue_TrackingService_PendingEvent___Clear_2ce6e24
                (*(long *)(lVar10 + 0x38),*(undefined8 *)PTR_DAT_04cc2260);
      if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_Dictionary_object__object___Clear_34b452c
                (*(long *)(lVar10 + 0x40),*(undefined8 *)PTR_DAT_04cb4998);
      auVar12._8_8_ = auStack_50._8_8_;
      auVar12._0_8_ = auStack_50._0_8_;
      goto LAB_025807a0;
    }
    lVar4 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_04cbf428) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025807d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04cbf428,0);
LAB_025807d4:
    auVar12 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    auStack_40._0_8_ = 0;
    auStack_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    auStack_40 = auVar12;
    thunk_FUN_02134474(auStack_40,0);
    auStack_50 = auStack_40;
    uVar8 = FUN_0224ca0c(auStack_50,*(undefined8 *)PTR_DAT_04cab0c8);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_50;
      thunk_FUN_02134474(param_1 + 6,0);
      FUN_02581a5c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cc2258);
      return;
    }
  }
  uVar6 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ == (long *)0x0) {
    bVar3 = auStack_50[8] != '\0';
  }
  else {
    uVar2 = auStack_50._10_2_;
    lVar4 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0216b470();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0216b470(lVar4);
    }
    lVar7 = *(long *)uVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0258068c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(uVar6,lVar4,0);
LAB_0258068c:
    bVar3 = (*(code *)*puVar5)(uVar6,uVar2,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(byte *)(lVar10 + 0x25) = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_Debugger__LogWarning_2481e30
              (*(undefined8 *)PTR_DAT_04cc2270,*(undefined8 *)PTR_DAT_04cc0168,0);
    if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Queue_TrackingService_PendingEvent___Clear_2ce6e24
              (*(long *)(lVar10 + 0x38),*(undefined8 *)PTR_DAT_04cc2260);
    if (*(long *)(lVar10 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___Clear_34b452c
              (*(long *)(lVar10 + 0x40),*(undefined8 *)PTR_DAT_04cb4998);
    auVar12 = auStack_50;
  }
  else {
    uVar6 = Dino_Tracking_TrackingService__SnapshotExtraSinks_247fea0();
    *(undefined8 *)(lVar10 + 0x30) = uVar6;
    thunk_FUN_02134474();
    Dino_Tracking_TrackingService__FlushBuffer_24801b8(lVar10);
    auVar12 = auStack_50;
  }
LAB_025807a0:
  *param_1 = -2;
  auStack_50 = auVar12;
  FUN_02247558(param_1 + 2,0);
  return;
}

