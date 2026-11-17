/* IL2CPP: Dino.Tracking.TrackingService$$SnapshotExtraSinks
Dino_Common_Tracking_ITrackingProvider_array* Dino_Tracking_TrackingService__SnapshotExtraSinks (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$SnapshotExtraSinks
   Dino_Common_Tracking_ITrackingProvider_array* Dino_Tracking_TrackingService__SnapshotExtraSinks
   (const MethodInfo* method); */

long * Dino_Tracking_TrackingService__SnapshotExtraSinks_247fea0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  puVar1 = PTR_DAT_04cbf3d8;
  if ((bRam0000000004f9cf96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc21f8);
    FUN_02132f7c(PTR_DAT_04cc2238);
    FUN_02132f7c(PTR_DAT_04cc2240);
    FUN_02132f7c(PTR_DAT_04cc2248);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    bRam0000000004f9cf96 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cfbd == '\0') {
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    cRam0000000004f9cfbd = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cc2238;
  plVar12 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04cc2238) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0257ffac;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04cc2238,0);
LAB_0257ffac:
    iVar2 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (iVar2 != 0) {
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0258006c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar1,0);
LAB_0258006c:
      uVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cc2248,uVar3);
      puVar1 = PTR_DAT_04cc2240;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((int)plVar6[3] < 1) {
        return plVar6;
      }
      uVar9 = 0;
      do {
        lVar4 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02580100;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)puVar1,0);
LAB_02580100:
        lVar4 = (*(code *)*puVar5)(plVar12,uVar9 & 0xffffffff,puVar5[1]);
        if ((lVar4 != 0) &&
           (lVar7 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar8,0);
        }
        if (*(uint *)(plVar6 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6[uVar9 + 4] = lVar4;
        thunk_FUN_02134474(plVar6 + uVar9 + 4,lVar4);
        uVar9 = uVar9 + 1;
        if ((long)(int)plVar6[3] <= (long)uVar9) {
          return plVar6;
        }
      } while( true );
    }
  }
  lVar7 = *(long *)PTR_DAT_04cc21f8;
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    FUN_0216b4cc(lVar7);
    lVar4 = *(long *)(lVar7 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  return (long *)**(undefined8 **)(lVar4 + 0xb8);
}

