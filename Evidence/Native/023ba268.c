/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass36_0$$<Tile>b__1
void Dino_BusSand_App_UI_StorePanel___c__DisplayClass36_0___Tile_b__1 (Dino_BusSand_App_UI_StorePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StorePanel.<>c__DisplayClass36_0$$<Tile>b__1
   void Dino_BusSand_App_UI_StorePanel___c__DisplayClass36_0___Tile_b__1
   (Dino_BusSand_App_UI_StorePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_StorePanel___c__DisplayClass36_0___Tile_b__1_22ba268(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_04cb6400;
  lVar11 = *(long *)(param_1 + 0x10);
                    /* try { // try from 023ba26c to 024ba2d3 has its CatchHandler @ 023ba614 */
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if ((bRam0000000004f9c2f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caedf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb6408);
    FUN_02132f7c(PTR_DAT_04cb6410);
    FUN_02132f7c(PTR_DAT_04cb6400);
    FUN_02132f7c(PTR_DAT_04cad268);
    FUN_02132f7c(PTR_DAT_04cad1f8);
    FUN_02132f7c(PTR_DAT_04cb6418);
    FUN_02132f7c(PTR_DAT_04cad2a8);
    FUN_02132f7c(PTR_DAT_04cad328);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9c2f8 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 == 0) goto LAB_023b9be8;
  *(long *)(lVar4 + 0x10) = lVar11;
  thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar11);
  cVar2 = *(char *)(lVar11 + 0x50);
  *(undefined4 *)(lVar4 + 0x18) = uVar1;
  if (cVar2 == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cad200,uVar1,0);
    if ((lVar5 != 0) &&
       ((lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04caedf8 + 0xb8) + 0x10), lVar10 == 0 ||
        (uVar6 = (**(code **)(lVar10 + 0x18))
                           (*(undefined8 *)(lVar10 + 0x40),*(undefined4 *)(lVar4 + 0x18),
                            *(undefined8 *)(lVar10 + 0x28)), (uVar6 & 1) == 0)))) {
      plVar7 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,6);
      puVar3 = PTR_DAT_04cad328;
      if (plVar7 == (long *)0x0) goto LAB_023b9be8;
      if ((*(long *)PTR_DAT_04cad328 != 0) &&
         (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad328,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) {
LAB_023b9bf0:
        uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = *(long *)puVar3;
        thunk_FUN_02134474();
        uStack_34 = *(undefined4 *)(lVar4 + 0x18);
        lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_023b9bf0;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar10;
          thunk_FUN_02134474(plVar7 + 5,lVar10);
          puVar3 = PTR_DAT_04cad268;
          if ((*(long *)PTR_DAT_04cad268 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar7 + 0x40))
             , lVar10 == 0)) goto LAB_023b9bf0;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = *(long *)puVar3;
            thunk_FUN_02134474();
            uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar5,*(undefined8 *)PTR_DAT_04cad2a8,0);
            lVar5 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar9,*(undefined8 *)PTR_DAT_04ca9c30,0);
            if ((lVar5 != 0) &&
               (lVar10 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
            goto LAB_023b9bf0;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
              plVar7[7] = lVar5;
              thunk_FUN_02134474(plVar7 + 7,lVar5);
              puVar3 = PTR_DAT_04cad1f8;
              if ((*(long *)PTR_DAT_04cad1f8 != 0) &&
                 (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad1f8,
                                             *(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
              goto LAB_023b9bf0;
              if (4 < *(uint *)(plVar7 + 3)) {
                plVar7[8] = *(long *)puVar3;
                thunk_FUN_02134474();
                lVar5 = Dino_BusSand_App_UI_StorePanel__DisplayPrice_22b4748
                                  (*(undefined4 *)(lVar4 + 0x18));
                if ((lVar5 != 0) &&
                   (lVar10 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)
                   ) goto LAB_023b9bf0;
                if (5 < *(uint *)(plVar7 + 3)) {
                  plVar7[9] = lVar5;
                  thunk_FUN_02134474(plVar7 + 9,lVar5);
                  if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)PTR_DAT_04cb6418,plVar7,0);
                  uVar6 = Dino_BusSand_App_UI_StorePanel__IsSoldOut_22b851c
                                    (*(undefined4 *)(lVar4 + 0x18));
                  puVar3 = PTR_DAT_04cac7b8;
                  if ((uVar6 & 1) != 0) {
                    return;
                  }
                  lVar5 = *(long *)PTR_DAT_04cac7b8;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar5 = *(long *)puVar3;
                  }
                  lVar5 = **(long **)(lVar5 + 0xb8);
                  if (lVar5 != 0) {
                    uVar6 = (**(code **)(lVar5 + 0x18))
                                      (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                    if ((uVar6 & 1) == 0) {
                      Dino_BusSand_App_UI_StoreTipsPanel__ShowNetworkError_22b5524(0);
                      return;
                    }
                    *(undefined1 *)(lVar11 + 0x50) = 1;
                    lVar11 = Dino_BusSand_App_UI_StoreWaitingPanel__Open_22bb848(0);
                    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                    }
                    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
                    if ((uVar6 & 1) != 0) {
                      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                      System_Action___ctor_47b5ed0(uVar9,lVar4,*(undefined8 *)PTR_DAT_04cb6408,0);
                      if (lVar11 == 0) goto LAB_023b9be8;
                      *(undefined8 *)(lVar11 + 0x38) = uVar9;
                      thunk_FUN_02134474((undefined8 *)(lVar11 + 0x38),uVar9);
                    }
                    uVar1 = *(undefined4 *)(lVar4 + 0x18);
                    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                    System_Action_bool____ctor_35ee0e8
                              (uVar9,lVar4,*(undefined8 *)PTR_DAT_04cb6410,0);
                    if (*(int *)(*(long *)PTR_DAT_04cad1f0 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_App_Iap__BuyStoreItem_217be78(uVar1,uVar9,0);
                    return;
                  }
LAB_023b9be8:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
  return;
}

