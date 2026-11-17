/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<WaitForReady>d__10$$MoveNext
void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10__MoveNext (Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<WaitForReady>d__10$$MoveNext
   void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10__MoveNext
   (Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10_o __this, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForReady_d__10__MoveNext_243aee4(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f9cc71 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf480);
    FUN_02132f7c(PTR_DAT_04cbf468);
                    /* try { // try from 0253af20 to 0263af27 has its CatchHandler @ 0253b11c */
    FUN_02132f7c(PTR_DAT_04cab0c0);
                    /* try { // try from 0253af30 to 0263af3b has its CatchHandler @ 0253b118 */
    FUN_02132f7c(PTR_DAT_04cab0c8);
                    /* try { // try from 0253af3c to 0263b137 has its CatchHandler @ 0253ac7c */
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbf428);
    FUN_02132f7c(PTR_DAT_04cab0d8);
    FUN_02132f7c(PTR_DAT_04cbf488);
    bRam0000000004f9cc71 = 1;
  }
  lVar9 = *(long *)(param_1 + 8);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0253b07c:
    uVar1 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ == (long *)0x0) {
      if (auStack_50[8] == '\0') goto LAB_0253b16c;
    }
    else {
      uVar2 = auStack_50._10_2_;
      lVar6 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470(lVar6);
      }
      lVar5 = *(long *)uVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0253b158;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0216b7a4(uVar1,lVar6,0);
LAB_0253b158:
                    /* catch() { ... } // from try @ 0253b138 with catch @ 0253b15c */
                    /* try { // try from 0253b160 to 0263b167 has its CatchHandler @ 0253b170 */
      uVar7 = (*(code *)*puVar4)(uVar1,uVar2,puVar4[1]);
                    /* try { // try from 0253b168 to 0263b173 has its CatchHandler @ 0253ac7c */
      if ((uVar7 & 1) == 0) {
LAB_0253b16c:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0253b160 with catch @ 0253b170
                        */
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cbf488,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined8 *)(lVar9 + 0x10) = 0;
        thunk_FUN_02134474((undefined8 *)(lVar9 + 0x10),0);
        if (cRam0000000004f9cca5 == '\0') {
          FUN_02132f7c(PTR_DAT_04cbf3d0);
          cRam0000000004f9cca5 = '\x01';
        }
        **(undefined1 **)(*(long *)PTR_DAT_04cbf3d0 + 0xb8) = 0;
        auVar11 = auStack_50;
        goto LAB_0253b1e0;
      }
    }
    bVar3 = 1;
  }
  else {
    if (*param_1 == 1) {
      auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
    }
    else {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      plVar10 = *(long **)(lVar9 + 0x10);
      auVar11 = ZEXT816(0);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cbf428) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0253b018;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cbf428,0);
LAB_0253b018:
        auVar11 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        auStack_40._0_8_ = 0;
        auStack_40._8_8_ = 0;
        if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
          FUN_0216b470();
        }
        auStack_40 = auVar11;
        thunk_FUN_02134474(auStack_40,0);
        auStack_50 = auStack_40;
        uVar7 = FUN_0224ca0c(auStack_50,*(undefined8 *)PTR_DAT_04cab0c8);
        if ((uVar7 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0253af30 with catch @ 0253b118
                        */
          *param_1 = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0253af20 with catch @ 0253b11c
                        */
          *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
          thunk_FUN_02134474(param_1 + 10,0);
                    /* try { // try from 0253b138 to 0263b13b has its CatchHandler @ 0253b15c */
                    /* try { // try from 0253b13c to 0263b15f has its CatchHandler @ 0253ac7c */
          FUN_025414b4(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cbf480);
          return;
        }
        goto LAB_0253b07c;
      }
LAB_0253b1e0:
      auStack_50 = auVar11;
      auVar11 = Dino_BusSand_Sdk_SandBusTrackingProvider__WaitForDatabuckets_24395ac();
      auStack_40._0_8_ = 0;
      auStack_40._8_8_ = 0;
      if ((*(byte *)(*(long *)(*(long *)PTR_DAT_04cab0d8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0216b470();
      }
      auStack_40 = auVar11;
      thunk_FUN_02134474(auStack_40,0);
      auStack_50 = auStack_40;
      uVar7 = FUN_0224ca0c(auStack_50,*(undefined8 *)PTR_DAT_04cab0c8);
      if ((uVar7 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
        thunk_FUN_02134474(param_1 + 10,0);
        FUN_025414b4(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_04cbf480);
        return;
      }
    }
    uVar1 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ == (long *)0x0) {
      bVar3 = auStack_50[8] != '\0';
    }
    else {
      uVar2 = auStack_50._10_2_;
      lVar9 = *(long *)(*(long *)PTR_DAT_04cab0c0 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0216b470(lVar9);
      }
      lVar6 = *(long *)uVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0253b31c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0216b7a4(uVar1,lVar9,0);
LAB_0253b31c:
      bVar3 = (*(code *)*puVar4)(uVar1,uVar2,puVar4[1]);
    }
  }
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(byte *)(param_1 + 6) = bVar3 & 1;
  }
  else {
    lVar9 = *(long *)(*(long *)PTR_DAT_04cbf468 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470(lVar9);
    }
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0253b3d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plVar10,lVar9,2);
LAB_0253b3d8:
    (*(code *)*puVar4)(plVar10,bVar3 & 1,puVar4[1]);
  }
  return;
}

