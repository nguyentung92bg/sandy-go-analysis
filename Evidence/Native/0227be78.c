/* IL2CPP: Dino.BusSand.App.Iap$$BuyStoreItem
void Dino_BusSand_App_Iap__BuyStoreItem (int32_t storeItemId, System_Action_bool__o* done, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Iap$$BuyStoreItem
   void Dino_BusSand_App_Iap__BuyStoreItem (int32_t storeItemId, System_Action_bool__o* done, const
   MethodInfo* method); */

void Dino_BusSand_App_Iap__BuyStoreItem_217be78(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_04cad2f0;
  if ((bRam0000000004f9b907 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad2f8);
    FUN_02132f7c(PTR_DAT_04cad1f0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cad300);
    FUN_02132f7c(PTR_DAT_04cad2f0);
    FUN_02132f7c(PTR_DAT_04cad0e0);
                    /* try { // try from 0227bf2c to 0237bf3b has its CatchHandler @ 0227bf78 */
    FUN_02132f7c(PTR_DAT_04cad268);
                    /* try { // try from 0227bf3c to 0237bfaf has its CatchHandler @ 0227bcd4 */
    FUN_02132f7c(PTR_DAT_04cad308);
    FUN_02132f7c(PTR_DAT_04cad270);
    FUN_02132f7c(PTR_DAT_04cad310);
    FUN_02132f7c(PTR_DAT_04cad318);
    FUN_02132f7c(PTR_DAT_04cad2a8);
                    /* catch() { ... } // from try @ 0227bd64 with catch @ 0227bf74 */
                    /* catch() { ... } // from try @ 0227bf2c with catch @ 0227bf78 */
    FUN_02132f7c(PTR_DAT_04cad320);
                    /* catch() { ... } // from try @ 0227bd14 with catch @ 0227bf7c
                       catch() { ... } // from try @ 0227bd9c with catch @ 0227bf7c */
                    /* catch() { ... } // from try @ 0227bdcc with catch @ 0227bf80 */
    FUN_02132f7c(PTR_DAT_04cad328);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cad200);
    bRam0000000004f9b907 = 1;
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0227bfb0 to 0237bfef has its CatchHandler @ 0227bfb0
                       catch() { ... } // from try @ 0227bfb0 with catch @ 0227bfb0
                       catch() { ... } // from try @ 0227c050 with catch @ 0227bfb0
                       catch() { ... } // from try @ 0227c0d0 with catch @ 0227bfb0 */
  System_Object___ctor_4870e5c(lVar9,0);
  puVar3 = PTR_DAT_04cad200;
  puVar2 = PTR_DAT_04cac018;
  if (lVar9 != 0) {
    plVar17 = (long *)(lVar9 + 0x28);
    *plVar17 = param_2;
    *(undefined4 *)(lVar9 + 0x10) = param_1;
    thunk_FUN_02134474(plVar17,param_2);
    uVar1 = *(undefined4 *)(lVar9 + 0x10);
                    /* try { // try from 0227bff0 to 0237c01f has its CatchHandler @ 0227c110 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar10 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)puVar3,uVar1,0);
    plVar20 = (long *)(lVar9 + 0x18);
    *plVar20 = lVar10;
    thunk_FUN_02134474(plVar20,lVar10);
    puVar3 = PTR_DAT_04ca9c30;
    puVar2 = PTR_DAT_04ca9c20;
    if (*plVar20 == 0) {
      lVar9 = *plVar17;
      if (lVar9 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0227c364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),0,*(undefined8 *)(lVar9 + 0x28));
      return;
    }
                    /* try { // try from 0227c028 to 0237c04f has its CatchHandler @ 0227c10c */
    uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(*plVar20,*(undefined8 *)PTR_DAT_04cad2a8,0);
                    /* try { // try from 0227c050 to 0237c0a7 has its CatchHandler @ 0227bfb0 */
    lVar10 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar11,*(undefined8 *)puVar3,0);
    plVar18 = (long *)(lVar9 + 0x20);
    *plVar18 = lVar10;
    thunk_FUN_02134474(plVar18,lVar10);
    plVar12 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
    puVar3 = PTR_DAT_04cad268;
    if (plVar12 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cad268 != 0) &&
         (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad268,*(undefined8 *)(*plVar12 + 0x40)),
         lVar10 == 0)) {
LAB_0227c514:
        uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,0);
      }
      if ((int)plVar12[3] != 0) {
                    /* try { // try from 0227c0a8 to 0237c0cf has its CatchHandler @ 0227c108 */
        plVar12[4] = *(long *)puVar3;
        thunk_FUN_02134474();
        lVar10 = *plVar18;
                    /* try { // try from 0227c0d0 to 0237c13f has its CatchHandler @ 0227bfb0 */
        if ((lVar10 != 0) &&
           (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
        goto LAB_0227c514;
        puVar4 = PTR_DAT_04cad328;
        if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
          plVar12[5] = lVar10;
          thunk_FUN_02134474(plVar12 + 5,lVar10);
          lVar10 = *(long *)puVar4;
                    /* catch() { ... } // from try @ 0227c0a8 with catch @ 0227c108 */
                    /* catch() { ... } // from try @ 0227c028 with catch @ 0227c10c */
          if ((lVar10 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0))
          goto LAB_0227c514;
                    /* catch() { ... } // from try @ 0227bff0 with catch @ 0227c110 */
          if (2 < *(uint *)(plVar12 + 3)) {
            plVar12[6] = *(long *)puVar4;
            thunk_FUN_02134474();
            uStack_64 = *(undefined4 *)(lVar9 + 0x10);
                    /* try { // try from 0227c140 to 0237c173 has its CatchHandler @ 0227c140
                       catch() { ... } // from try @ 0227c140 with catch @ 0227c140
                       catch() { ... } // from try @ 0227c248 with catch @ 0227c140 */
            lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
            if ((lVar10 != 0) &&
               (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_0227c514;
            puVar7 = PTR_DAT_04cad308;
            puVar5 = PTR_DAT_04cac5c0;
            puVar4 = PTR_DAT_04cac498;
            if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                    /* try { // try from 0227c174 to 0237c1b7 has its CatchHandler @ 0227c28c */
              plVar12[7] = lVar10;
              thunk_FUN_02134474(plVar12 + 7,lVar10);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              puVar6 = PTR_DAT_04cad1f0;
              Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar7,plVar12);
                    /* try { // try from 0227c1bc to 0237c1d3 has its CatchHandler @ 0227c288 */
              uVar1 = *(undefined4 *)(lVar9 + 0x10);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_Meta_GameTracking__IapClick_221875c(uVar1,0);
              uVar1 = *(undefined4 *)(lVar9 + 0x10);
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
                    /* try { // try from 0227c1f0 to 0237c1f7 has its CatchHandler @ 0227c270 */
              uVar14 = Dino_BusSand_App_Iap__CanPurchase_217a6e8(uVar1);
              if ((uVar14 & 1) == 0) {
                plVar20 = (long *)FUN_02133068(*(undefined8 *)puVar2,4);
                if (plVar20 != (long *)0x0) {
                  if ((*(long *)puVar3 != 0) &&
                     (lVar10 = thunk_FUN_0216e7a0(*(long *)puVar3,*(undefined8 *)(*plVar20 + 0x40)),
                     lVar10 == 0)) goto LAB_0227c514;
                  if ((int)plVar20[3] != 0) {
                    plVar20[4] = *(long *)puVar3;
                    thunk_FUN_02134474();
                    lVar10 = *plVar18;
                    if ((lVar10 != 0) &&
                       (lVar13 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar20 + 0x40)),
                       lVar13 == 0)) goto LAB_0227c514;
                    if ((*(uint *)(plVar20 + 3) & 0xfffffffe) != 0) {
                      plVar20[5] = lVar10;
                      thunk_FUN_02134474(plVar20 + 5,lVar10);
                      puVar2 = PTR_DAT_04cad0e0;
                      if ((*(long *)PTR_DAT_04cad0e0 != 0) &&
                         (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad0e0,
                                                      *(undefined8 *)(*plVar20 + 0x40)), lVar10 == 0
                         )) goto LAB_0227c514;
                      if (2 < *(uint *)(plVar20 + 3)) {
                        plVar20[6] = *(long *)puVar2;
                        thunk_FUN_02134474();
                        puVar2 = PTR_DAT_04cad320;
                        if ((*(long *)PTR_DAT_04cad320 != 0) &&
                           (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cad320,
                                                        *(undefined8 *)(*plVar20 + 0x40)),
                           lVar10 == 0)) goto LAB_0227c514;
                        if ((*(uint *)(plVar20 + 3) & 0xfffffffc) != 0) {
                          plVar20[7] = *(long *)puVar2;
                          thunk_FUN_02134474();
                          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          Dino_BusSand_App_Analytics__Log_216d0c8
                                    (*(undefined8 *)PTR_DAT_04cad310,plVar20);
                          uVar1 = *(undefined4 *)(lVar9 + 0x10);
                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                            thunk_FUN_0218fdac();
                          }
                          Dino_BusSand_App_Meta_GameTracking__IapFailed_22189dc
                                    (uVar1,*(undefined8 *)PTR_DAT_04cad318,0,0);
                          lVar9 = *plVar17;
                          if (lVar9 == 0) {
                            return;
                          }
                          (**(code **)(lVar9 + 0x18))
                                    (*(undefined8 *)(lVar9 + 0x40),0,*(undefined8 *)(lVar9 + 0x28));
                          return;
                        }
                      }
                    }
                  }
                  goto LAB_0227c510;
                }
              }
              else {
                lVar10 = *(long *)puVar6;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 0227c208 to 0237c247 has its CatchHandler @ 0227c28c */
                  thunk_FUN_0218fdac();
                  lVar10 = *(long *)puVar6;
                }
                puVar15 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x28);
                *puVar15 = 0;
                thunk_FUN_02134474(puVar15,0);
                puVar15 = (undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                *puVar15 = 0;
                thunk_FUN_02134474(puVar15,0);
                    /* try { // try from 0227c248 to 0237c2a7 has its CatchHandler @ 0227c140 */
                uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8
                                   (*plVar20,*(undefined8 *)PTR_DAT_04cad270,0);
                iVar8 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
                if (iVar8 == 9) {
                  lVar10 = *plVar18;
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227c1f0 with catch @ 0227c270 */
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_Iap__MarkStarted_217bbbc(lVar10);
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0227c1bc with catch @ 0227c288 */
                  thunk_FUN_0218fdac();
                }
                    /* catch() { ... } // from try @ 0227c174 with catch @ 0227c28c
                       catch() { ... } // from try @ 0227c208 with catch @ 0227c28c */
                Dino_BusSand_App_Meta_GameTracking__ExternalUi_221486c(1,0);
                lVar10 = *(long *)puVar6;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar10 = *(long *)puVar6;
                }
                uVar19 = *(undefined8 *)(lVar9 + 0x20);
                plVar17 = (long *)**(undefined8 **)(lVar10 + 0xb8);
                uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
                System_Action_bool____ctor_35ee0e8(uVar11,lVar9,*(undefined8 *)PTR_DAT_04cad300,0);
                if (plVar17 != (long *)0x0) {
                  lVar9 = *plVar17;
                  uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_04cad2f8) {
                        puVar15 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_0227c4dc;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)PTR_DAT_04cad2f8,0);
LAB_0227c4dc:
                  (*(code *)*puVar15)(plVar17,uVar19,uVar11,puVar15[1]);
                  return;
                }
              }
              goto LAB_0227c520;
            }
          }
        }
      }
LAB_0227c510:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_0227c520:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

